//=============================================================================
//
// chanadd.cpp
//
// Save the list of database channels to a file, get data from the indicated
// channel and increase it by a given amount.
//
// This is a sample C++ program that illustrates how to connect to the GX
// developer environment from a stand-alone program.  In this case, there
// the following basic steps:
//
//   1. Get (create) a GX Object handle.
//
//   2. Open existing database
//
//   3. Save the list of database channels to a file
//
//   4. Get the channel data
//
//   5. Increase the data by a given amount
//
//   6. Save the changed data back to the channel
//
//   7. No need to destroy any created GX objects (handles): their destructors are
//      automatically called on scope exit
//
// This example also shows how to get the actual data from a channel
//
//=============================================================================

#define PROGRAM L"CHANADD"
#define VERSION L"v1.0"
#define DEFINIT L"Save the list of database channels, increase channel data by a given amount"
#define UTF8SYM L"复制数据专复制数据专复制数据专复制数据专复制数据专复制数据"


#include "stdafx.h"


// standard file library
#include <fstream>


// sample function declaration
void ProcessData(gx_string_type& databaseName, gx_string_type& channelName, double addValue);
void ModifyVAChannel(GXDBPtr db, int32_t channelSymbol, double addValue);
void ModifyVVChannel(GXDBPtr db, int32_t channelSymbol, double addValue);


// unicode to utf8 conversion
void UNICODE_TO_UTF8(const wchar_t* pwUnicode, char* pcUTF8, long lUTF8Size)
{
   long lConv;
   lConv = WideCharToMultiByte(CP_UTF8, 0, pwUnicode, (int)wcslen(pwUnicode), pcUTF8, lUTF8Size, NULL, NULL);
   pcUTF8[max(0, min(lUTF8Size - 1, lConv))] = '\0';
}


// entry point
int wmain(int nargs, TCHAR** args)
{
   try
   {
      // greetings
      wchar_t* buffer = _wgetcwd(NULL, 0);
      wprintf(PROGRAM L" " VERSION L" - " DEFINIT L"\n\nWorking directory = %s\n\n", buffer);
      free(buffer);

      // check script parameters
      if (nargs < 4) throw "Script parameters ERROR - not all required parameters were provided\n";

      // print script parameters
      printf("Parameters:\n");
      for (int i = 0; i < nargs; i++)
         wprintf(L"  Argv[%d] = %s\n", i, args[i]);

      // run an example
      gx_string_type databaseName = args[1];
      gx_string_type channelName = args[2];
      double addValue = _wtof(args[3]);
      ProcessData(databaseName, channelName, addValue);

      wprintf(L"\nDatabase was processed successfully\n");
   }

   // GX API error
   catch (GXAPIError error)
   {
      wprintf(error.message().c_str());
   }

   // other exceptions
   catch (std::exception e)
   {
      printf(e.what());
   }

   catch (char* p)
   {
      printf(p);
   }

   catch (gx_string_type error)
   {
      wprintf(error.c_str());
   }

   catch (...)
   {
      printf("Fatal error");
   }

   // successfully completed
   return 0;
}


// sample function definition
void ProcessData(gx_string_type& databaseName, gx_string_type& channelName, double addValue)
{
   // get (create) a GX Object handle
   GXContextPtr ctx = GXContext::create(std::wstring(L"ChanAdd"), std::wstring(L"Geosoft Inc."));

   try
   {
      // open database
      // note that all databases created by normal Geosoft users will have
      // user name "SUPER" with password "". Third-party or custom applications
      // may create databases that require a user-name and password, in which
      // case you require these values to open the database.
      gx_string_type userName = gx_string_type(gx_string_literal("SUPER"));
      gx_string_type password = gx_string_type(gx_string_literal(""));
      GXDBPtr db = GXDB::open(databaseName, userName, password);
      wprintf(L"Database '%s' opened successfully", databaseName.c_str());

      // get list of channels
      GXLSTPtr channelsList = GXLST::create(4096);
      db->chan_lst(channelsList);

      // open file to export list of channels
      std::ofstream channelsListFile;
      gx_string_type channelsListFileName = databaseName + gx_string_literal(".channel_list.utf8.txt");
      channelsListFile.open(channelsListFileName, std::ios_base::trunc | std::ios_base::binary);

      // file with the list of channels is in UTF8
      char utf8_signature[] = "\xEF\xBB\xBF";
      channelsListFile << utf8_signature;

      // save the list of channels to a file
      for (int32_t i = 0; i < channelsList->size(); i++)
      {
         gx_string_type name;
         int32_t symb;
         channelsList->gt_symb_item(i, name, symb);

         gx_string_type text =
            gx_string_literal("Channel[") + std::to_wstring(i) + gx_string_literal("]: ") +
            gx_string_literal("symbol = ") + std::to_wstring(symb) +
            gx_string_literal("   name = '") + name + gx_string_literal("'\r\n");

         //convert to UTF8
         char utf8[1024];
         UNICODE_TO_UTF8(text.c_str(), utf8, sizeof(utf8));

         //save channel info
         channelsListFile << utf8;
      }
      wprintf(L"\nList of channels exported to file '%s'\n", channelsListFileName.c_str());

      // print selected lines
      int32_t nlines = db->count_sel_lines();
      wprintf(L"Number of selected lines to process: %d\n", nlines);
      for (int32_t curLineSymb = db->first_sel_line(); db->is_line_valid(curLineSymb); curLineSymb = db->next_sel_line(curLineSymb))
      {
         gx_string_type name;
         db->get_symb_name(curLineSymb, name);

         gx_string_type text =
            gx_string_literal("  Line '") + name + gx_string_literal("' ") +
            gx_string_literal(" symbol = ") + std::to_wstring(curLineSymb) + gx_string_literal("\n");
         wprintf(text.c_str());
      }

      // find the indicated channel
      int32_t channelSymbol = db->find_chan(channelName);
      if (channelSymbol == NULLSYMB)
         throw gx_string_type(gx_string_literal("EXCEPTION: Channel '")) + channelName + gx_string_type(gx_string_literal("' not found in database"));

      // lock the channel for modification
      db->lock_symb(channelSymbol, DB_LOCK_READWRITE, DB_WAIT_INFINITY);

      // modify the channel (just, as an example, add value to all its elements)
      int32_t nx = db->get_col_va(channelSymbol);
      if (nx > 1)
      {
         // VA channel
         wprintf(L"VA channel '%s' found with %d columns", channelName.c_str(), nx);
         ModifyVAChannel(db, channelSymbol, addValue);
      }
      else
      {
         // VV channel
         wprintf(L"VV channel '%s' found", channelName.c_str());
         ModifyVVChannel(db, channelSymbol, addValue);
      }
   } catch (GXExit)
   {
      printf("Exited");
   } catch (GXCancel)
   {
      printf("Cancelled");
   } catch (GXError& e)
   {
      wprintf(e.message().c_str());
   }
}


// modify VA channel (add some value, as an example)
void ModifyVAChannel(GXDBPtr db, int32_t channelSymbol, double addValue)
{
   // create VV to hold the channel data
   GXVAPtr va = GXVA::create(GEO_VAR::GS_REAL, 0, db->get_col_va(channelSymbol));

   // loop through all lines to process the channel data
   for (int32_t curLineSymb = db->first_sel_line(); db->is_line_valid(curLineSymb); curLineSymb = db->next_sel_line(curLineSymb))
   {
      //read all data from the channel in the current line
      db->get_chan_va(curLineSymb, channelSymbol, va);

      //number of rows and columns for the channel
      int32_t nrows = va->len();
      int32_t ncols = va->col();

      //get the retrieved data as an array
      std::vector<double> channelArray = va->get_array<double>(0, 0, nrows, ncols);

      //modify data (add some value, as an example)
      for (int i = 0; i < nrows; i++)
         for (int j = 0; j < ncols; j++)
            channelArray[i * ncols + j] += addValue;

      //put the array back into vv
      va->set_array(0, 0, nrows, ncols, channelArray);

      //write modified va back to the channel
      db->put_chan_va(curLineSymb, channelSymbol, va);
   }
}


// modify VV channel (add some value, as an example)
void ModifyVVChannel(GXDBPtr db, int32_t channelSymbol, double addValue)
{
   // create VV to hold the channel data
   GXVVPtr vv = GXVV::create(GEO_VAR::GS_REAL, 16386);

   // loop through all lines to process the channel data
   for (int32_t curLineSymb = db->first_sel_line(); db->is_line_valid(curLineSymb); curLineSymb = db->next_sel_line(curLineSymb))
   {
      //read all data from the channel in the current line
      db->get_chan_vv(curLineSymb, channelSymbol, vv);

      //number of rows for the channel
      int32_t nrows = vv->length();

      //get the retrieved data as an array
      std::vector<double> channelArray = vv->get_data<double>(0, nrows);

      //modify data (add some value, as an example)
      for (int i = 0; i < nrows; i++)
         channelArray[i] += addValue;

      //put the array back into vv
      vv->set_data(0, channelArray);

      //write modified va back to the channel
      db->put_chan_vv(curLineSymb, channelSymbol, vv);
   }
}
