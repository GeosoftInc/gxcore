#!python3.3
'''
Add a constant value to a channel on all selected lines.

This is a sample Python program that illustrates how to connect to the GX
developer environment from a stand-alone program.  In this case, there
the following basic steps:

   1. Get (create) a GX Object handle.

   2. Open existing database

   3. Save the list of database channels to a file

   4. Get the channel data

   5. Increase the data by a given amount

   6. Save the changed data back to the channel
'''
import os
import sys
import geosoft.gx as gx
import numpy as np
import argparse as argp

def process_database(database_name, channel_name, add_value):
    '''
    Process all selected lines in a database by adding a constant 
    value to a channel. Works with 'regular' or array channels.
    
    The data is processed in-place.
    '''
    # get (create) a GX context
    ctx = gx.GXContext.create('Channel Add', 'Geosoft Inc.')

    # open database
    # note that all databases created by normal Geosoft users will have
    # user name "SUPER" with password "". Third-party or custom applications
    # may create databases that require a user-name and password, in which
    # case you require these values to open the database.
    username = "SUPER"
    password = ""
    db = gx.GXDB.open(ctx, database_name, username, password)
    print("Database '" + database_name + "' opened successfully")

    # get list of channels
    channels_list = gx.GXLST.create(ctx, 4096)
    db.chan_lst(channels_list)

    # open file to export list of channels
    channels_list_file_name = database_name + ".channel_list.txt"
    channels_list_file = open(channels_list_file_name, 'w')
  
    # save the list of channels to a file
    for i in range(channels_list.size()):
        name = gx.str_ref()
        symb = gx.int_ref()
        channels_list.gt_symb_item(i, name, symb)
        line = "Channel[" + str(i) + "]: symbol = " + str(symb.value) + "   name = '" + name.value + "'"
        channels_list_file.write(line + "\n")
    print("List of channels exported to file '" + channels_list_file_name + "'")

    # print selected lines
    nlines = db.count_sel_lines()
    print("Number of selected lines to process: " + str(nlines))
    cur_line_symb = db.first_sel_line()
    while db.is_line_valid(cur_line_symb):
        name = gx.str_ref()
        db.get_symb_name(cur_line_symb, name)
        print("  Line '" + name.value + "' symbol = " + str(cur_line_symb))
        cur_line_symb = db.next_sel_line(cur_line_symb)

    # find the indicated channel
    channel_symbol = db.find_chan(channel_name)
    print( channel_symbol)
    if channel_symbol == gx.NULLSYMB:
        raise Exception("EXCEPTION: Channel '" + channel_name + "' not found in database")

    # lock the channel for modification
    db.lock_symb(channel_symbol, gx.DB_LOCK_READWRITE, gx.DB_WAIT_INFINITY)

    # modify the channel (just, as an example, add value to all its elements)
    nx = db.get_col_va(channel_symbol)
    if nx > 1:
        # VA channel
        print("VA channel '" + channel_name + "' found with " + str(nx) + " columns")
        modify_va_channel(ctx, db, channel_symbol, add_value)
    else:
        # VV channe
        print("VV channel '" + channel_name + "' found")
        modify_vv_channel(ctx, db, channel_symbol, add_value)


def modify_va_channel(ctx, db, channel_symbol, add_value):
    '''
    Iterate over selected lines, and add value. This is the
    version used for VA (array) channels.
    '''
    # create an object to hold the channel data
    va = gx.GXVA.create(ctx, gx.GS_REAL, 0, db.get_col_va(channel_symbol))

    # loop through all lines to process the channel data
    cur_line_symb = db.first_sel_line()
    while db.is_line_valid(cur_line_symb):

        # read all data from the channel in the current line
        db.get_chan_va(cur_line_symb, channel_symbol, va)

        # number of rows and columns for the channel
        nrows = va.len()
        ncols = va.col()

        # get the retrieved data as a 1d array, and reshape the array to 2D (va.get_array_np should have done this!)
        channel_array = va.get_array_np(0, 0, nrows, ncols, np.float64)
        channel_array.shape = (nrows, ncols)

        # add value
        channel_array += add_value

        # put the array back into va
        va.set_array_np(0, 0, channel_array)

        # write modified va back to the channel
        db.put_chan_va(cur_line_symb, channel_symbol, va)

        # get the next selected line
        cur_line_symb = db.next_sel_line(cur_line_symb)


def modify_vv_channel(ctx, db, channel_symbol, add_value):
    '''
    Iterate over selected lines, and add value. This is the
    version used for VV channels.
    '''
    #create an object to hold the channel data
    vv = gx.GXVV.create(ctx, gx.GS_REAL, 0)
    
    # loop through all lines to process the channel data
    cur_line_symb = db.first_sel_line()
    while db.is_line_valid(cur_line_symb):

        # read all data from the channel in the current line
        db.get_chan_vv(cur_line_symb, channel_symbol, vv)

        # number of rows for the channel
        nrows = vv.length()

        # get the retrieved data as an array
        channel_array = vv.get_data_np(0, nrows, np.float64)

        # modify data (add some value, as an example)
        channel_array += add_value

        # put the array back into vv
        vv.set_data_np(0, channel_array)

        # write modified va back to the channel
        db.put_chan_vv(cur_line_symb, channel_symbol, vv)

        # get the next selected line
        cur_line_symb = db.next_sel_line(cur_line_symb)

   
  
if __name__ == "__main__":

    # GEOSOFT Environment variable should contain a path with geodist.dll
    print("GX_GEOSOFT_BIN_PATH = {}".format(os.getenv("GX_GEOSOFT_BIN_PATH")))
    print('Working directory = ' + os.path.abspath(os.curdir))

    # get command line parameters
    parser = argp.ArgumentParser(description="Add a constant to a Geosoft database channel")
    parser.add_argument("sDB", help="Geosoft database")
    parser.add_argument("sCh", help="channel to process")
    parser.add_argument("-v","--value", type=float, default=1.0, help="value to add, default is 1.0")
    args = parser.parse_args()
    print("chanadd - no copyright\n")

    # echo parameters
    print("Database = "+args.sDB)
    print("Channel = "+args.sCh)
    print("Value = {}".format(args.value))

    process_database(args.sDB, args.sCh, args.value)
