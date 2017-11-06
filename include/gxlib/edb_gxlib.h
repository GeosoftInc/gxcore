//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file edb_gxlib.h
* @date 2017-11-06
* @brief File containing EDB GX C API constant and function declarations
*/

/**
* @defgroup EDB_Module EDB
* The EDB class provides access to a database as displayed within
* Oasis montaj, but does not change data within the database itself.
* It performs functions such as setting the current line.
*
* Notes:
*
* To obtain access to the database itself, it is recommended practice
* to begin with an EDB object, and use the Lock_EDB function to
* lock the underlying map to prevent external changes. The returned
* DB object (see DB) may then be safely used to make changes to the map itself.
*
* @{
*/

#pragma once
#ifndef HEDB_H_DEFINED
#define HEDB_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name MAX_PROF_WND Definitions
* 
* The following value should be kept synchronized with the value defined in src\geoguilib\stdafx.h
*/
///@{
/** 
* MAX_PROF_WND
*/
#define MAX_PROF_WND 5
///@}

/**
* @name EDB_PATH Definitions
* 
* Four forms
*/
///@{
/** 
* EDB_PATH_FULL
* 
* d:\directory\file.gdb
*/
#define EDB_PATH_FULL 0
/** 
* EDB_PATH_DIR
* 
* \directory\file.gdb
*/
#define EDB_PATH_DIR 1
/** 
* EDB_PATH_NAME_EXT
* 
* File.gdb
*/
#define EDB_PATH_NAME_EXT 2
/** 
* EDB_PATH_NAME
* 
* File
*/
#define EDB_PATH_NAME 3
///@}

/**
* @name EDB_PROF Definitions
* 
* Profile data
*/
///@{
/** 
* EDB_PROF_I_CHANNEL
* 
* DB_SYMB
*/
#define EDB_PROF_I_CHANNEL 0
/** 
* EDB_PROF_I_LINE_STYLE
* 
* 0 - no line
* 1 - solid
* 2 - long dash
* 3 - short dash
*/
#define EDB_PROF_I_LINE_STYLE 1
/** 
* EDB_PROF_I_LINE_WEIGHT
* 
* 0 - no line
* 1 - normal
* 2 - medium
* 3 - heavy
*/
#define EDB_PROF_I_LINE_WEIGHT 2
/** 
* EDB_PROF_I_SYMBOL
* 
* 0 - no symbol
* 1 - rectangle
* 2 - circle
* 3 - triangle
* 4 - diamond
* 5 - x
* 6 - +
*/
#define EDB_PROF_I_SYMBOL 3
/** 
* EDB_PROF_I_SYMBOL_WEIGHT
* 
* 0 - normal
* 1 - large
*/
#define EDB_PROF_I_SYMBOL_WEIGHT 4
/** 
* EDB_PROF_I_COLOR
* 
* MVIEW Color Value
*/
#define EDB_PROF_I_COLOR 5
/** 
* EDB_PROF_I_WRAP
* 
* 0-no, 1-yes
*/
#define EDB_PROF_I_WRAP 6
/** 
* EDB_PROF_I_BREAK_ON_DUMMY
* 
* 0-no, 1-yes
*/
#define EDB_PROF_I_BREAK_ON_DUMMY 7
/** 
* EDB_PROF_I_GRID_LINE
* 
* 0-no, 1-yes
*/
#define EDB_PROF_I_GRID_LINE 8
/** 
* EDB_PROF_R_GRID_LINE_INTERVAL
* 
* 0-no, 1-yes
*/
#define EDB_PROF_R_GRID_LINE_INTERVAL 9
/** 
* EDB_PROF_I_LOG
* 
* 0-Linear, 1-Log, 2-LogLinear
*/
#define EDB_PROF_I_LOG 10
/** 
* EDB_PROF_R_LOG_MINIMUM
* 
* Minimum Value
*/
#define EDB_PROF_R_LOG_MINIMUM 11
/** 
* EDB_PROF_I_SAMESCALE
* 
* 0-no, 1-yes
*/
#define EDB_PROF_I_SAMESCALE 12
/** 
* EDB_PROF_I_SOURCELINE
* 
* 0 - current line
* -1 - previous line
* -2 - next line
*/
#define EDB_PROF_I_SOURCELINE 13
/** 
* EDB_PROF_I_SCALEOPTION
* 
* 0 - scale to fit for each line
* 1 - fix the range
* 2 - fix the scale, center the range
*/
#define EDB_PROF_I_SCALEOPTION 14
/** 
* EDB_PROF_I_SAMERANGE
* 
* 0-no, 1-yes
*/
#define EDB_PROF_I_SAMERANGE 15
///@}

/**
* @name EDB_PROFILE_SCALE Definitions
* 
* Profile Scale Options
*/
///@{
/** 
* EDB_PROFILE_SCALE_LINEAR
*/
#define EDB_PROFILE_SCALE_LINEAR 0
/** 
* EDB_PROFILE_SCALE_LOG
*/
#define EDB_PROFILE_SCALE_LOG 1
/** 
* EDB_PROFILE_SCALE_LOGLINEAR
*/
#define EDB_PROFILE_SCALE_LOGLINEAR 2
///@}

/**
* @name EDB_REMOVE Definitions
* 
* How to handle pending changes in document
*/
///@{
/** 
* EDB_REMOVE_SAVE
*/
#define EDB_REMOVE_SAVE 0
/** 
* EDB_REMOVE_PROMPT
*/
#define EDB_REMOVE_PROMPT 1
/** 
* EDB_REMOVE_DISCARD
*/
#define EDB_REMOVE_DISCARD 2
///@}

/**
* @name EDB_UNLOAD Definitions
* 
* What type of prompt
*/
///@{
/** 
* EDB_UNLOAD_NO_PROMPT
*/
#define EDB_UNLOAD_NO_PROMPT 0
/** 
* EDB_UNLOAD_SINGLE_PROMPT
*/
#define EDB_UNLOAD_SINGLE_PROMPT 1
/** 
* EDB_UNLOAD_MULTI_PROMPT
* 
* Obsolete
*/
#define EDB_UNLOAD_MULTI_PROMPT 2
///@}

/**
* @name EDB_WINDOW_POSITION Definitions
* 
* Window Positioning Options
*/
///@{
/** 
* EDB_WINDOW_POSITION_DOCKED
*/
#define EDB_WINDOW_POSITION_DOCKED 0
/** 
* EDB_WINDOW_POSITION_FLOATING
*/
#define EDB_WINDOW_POSITION_FLOATING 1
///@}

/**
* @name EDB_WINDOW_STATE Definitions
* 
* Window State Options
*/
///@{
/** 
* EDB_WINDOW_RESTORE
*/
#define EDB_WINDOW_RESTORE 0
/** 
* EDB_WINDOW_MINIMIZE
*/
#define EDB_WINDOW_MINIMIZE 1
/** 
* EDB_WINDOW_MAXIMIZE
*/
#define EDB_WINDOW_MAXIMIZE 2
///@}

/**
* @name EDB_YAXIS_DIRECTION Definitions
* 
* Window State Options
*/
///@{
/** 
* EDB_YAXIS_NORMAL
*/
#define EDB_YAXIS_NORMAL 0
/** 
* EDB_YAXIS_INVERTED
*/
#define EDB_YAXIS_INVERTED 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Apply a formula to selected cells of the
* current line. (Do not use this wrapper if you
* want to apply a formula across multiple lines)
* 
* Notes:
* 
* The current selection must be on cell(s) of
* a channel or on the a channel header.
* 
* If the selection is on cell(s) of a channel,
* the formula is applied to only these cells.
* 
* If the selection is on a channel header, the
* formula is applied to every cell in the channel.
* 
* The given formula string must be of the form:
* "<NameOfCurrentChannel>=<SomeExpression>;"
* e.g. "x=y+1;"
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  formula TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ApplyFormulaInternal_EDB(void* p_geo, const int32_t* edb, const char* formula);

/**
* This method returns the Current Edited Database.
*
* @param[in]  p_geo GX Context Pointer
* @return EDB Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Current_EDB(void* p_geo);

/**
* This method returns the Current Edited Database.
*
* @param[in]  p_geo GX Context Pointer
* @return EDB Object
**
* @par Note 
*      This function acts just like Current_EDB except that the document is not activated (brought to foreground) and no
*      guarantee is given about which document is currently active.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT int32_t App_CurrentNoActivate_EDB(void* p_geo);

/**
* This method returns the Current Edited Database.
*
* @param[in]  p_geo GX Context Pointer
* @return EDB Object to current edited database. If there is no current database,
* the user is not prompted for a database, and 0 is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_CurrentIfExists_EDB(void* p_geo);

/**
* Delete Line 0.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
**
* @par Note 
*      Deletes an empty line 0 from the database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DelLine0_EDB(void* p_geo, const int32_t* edb);

/**
* Destroy EDB handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
**
* @par Note 
*      This does not unload the database; it simply deletes the gx resource handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Destroy_EDB(void* p_geo, const int32_t* val);

/**
* Removes the view from the workspace.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  unload_flag TODO
**
* @par Note 
*      Can only be run in interactive mode. After this call the
*      EDB object will become invalid. If this is the last view on
*      the document and the document has been modified the map will be
*      unloaded and optionally saved depending on the EDB_REMOVE
*      parameter.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DestroyView_EDB(void* p_geo, const int32_t* edb, const int32_t* unload_flag);

/**
* Returns the currently marked channel symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return Currently channel symbol.
* NULLSYMB if the mark is not in a channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_GetCurChanSymb_EDB(void* p_geo, const int32_t* edb);

/**
* Get current line symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return Currently displayed line symbol.
* NULLSYMB if no line displayed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_GetCurLineSymb_EDB(void* p_geo, const int32_t* edb);

/**
* Return the displayed fiducial start index & number of cells
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] start TODO
* @param[out] num TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetDisplFidRange_EDB(void* p_geo, const int32_t* edb, int32_t* start, int32_t* num);

/**
* Returns the coordinates of the currently selected point in the database (first value if range selected)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.2
*/
GX_EXPORT void App_GetCurPoint_EDB(void* p_geo, const int32_t* edb, double* x, double* y, double* z);

/**
* Returns currently displayed fid range
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] start TODO
* @param[out] incr TODO
* @param[out] num TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetFidRange_EDB(void* p_geo, const int32_t* edb, double* start, double* incr, int32_t* num);

/**
* Returns the next line symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return The next line symbol of currently displayed line.
* NULLSYMB if no line displayed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_GetNextLineSymb_EDB(void* p_geo, const int32_t* edb);

/**
* Returns the previous line symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return The previous line symbol of currently displayed line.
* NULLSYMB if no line displayed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_GetPrevLineSymb_EDB(void* p_geo, const int32_t* edb);

/**
* Get profile X range and X channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] min_x TODO
* @param[out] max_x TODO
* @param[out] ph_chan_x TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetProfileRangeX_EDB(void* p_geo, const int32_t* edb, double* min_x, double* max_x, int32_t* ph_chan_x);

/**
* Get profile Y range and display option
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @param[in]  prof TODO
* @param[out] min_y TODO
* @param[out] max_y TODO
* @param[out] scl TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetProfileRangeY_EDB(void* p_geo, const int32_t* edb, const int32_t* window, const int32_t* prof, double* min_y, double* max_y, int32_t* scl);

/**
* Get profile split for 3 windows.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] d1 TODO
* @param[out] d2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetProfileSplit_EDB(void* p_geo, const int32_t* edb, double* d1, double* d2);

/**
* Get profile split for 5 windows.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] d1 TODO
* @param[out] d2 TODO
* @param[out] d3 TODO
* @param[out] d4 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetProfileSplit5_EDB(void* p_geo, const int32_t* edb, double* d1, double* d2, double* d3, double* d4);

/**
* Get profile window splits.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  vv TODO
**
* @par Note 
*      The returned VV is sized to the maximum number of profiles
*      that can be displayed. If a profile is not currently displayed,
*      its height fraction is 0.  The sum of all the fractions returned
*      is equal to 1.
*      
*      The profile splits refers to the relative sizes of the individual
*      profile windows. To get/set the fraction of the total database window
*      devoted to the profiles, use the SetSplit_EDB and rGetSplit_EDB functions.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetProfileSplitVV_EDB(void* p_geo, const int32_t* edb, const int32_t* vv);

/**
* Get profile grid vertical line info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] grid TODO
* @param[out] interval TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetProfileVerticalGridLines_EDB(void* p_geo, const int32_t* edb, int32_t* grid, double* interval);

/**
* Get profile window size
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetProfileWindow_EDB(void* p_geo, const int32_t* edb, const int32_t* window, int32_t* x, int32_t* y);

/**
* Move the channel marker to a specific column.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  col TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GotoColumn_EDB(void* p_geo, const int32_t* edb, const int32_t* col);

/**
* Goto an element in the current line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  elem TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GotoElem_EDB(void* p_geo, const int32_t* edb, const int32_t* elem);

/**
* Goto to a line symbol in the editor.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  line_symb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GotoLine_EDB(void* p_geo, const int32_t* edb, const int32_t* line_symb);

/**
* Create histogram stats.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  st TODO
* @param[in]  min TODO
* @param[in]  incr TODO
* @param[in]  count TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Histogram_EDB(void* p_geo, const int32_t* edb, const int32_t* st, const double* min, const double* incr, const int32_t* count);

/**
* Get a list of the all channels but in the way they are displayed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  vv TODO
* @return Number of symbols in the list.
* Terminates GX if there was an error.
**
* @par Note 
*      The VV elements must be INT.
*      
*      Displayed channel lists are filled in the order the channels
*      appear on the display, left to right.
*
* @par See also 
*      iDispChanList_EDB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iAllChanList_EDB(void* p_geo, const int32_t* edb, const int32_t* vv);

/**
* Returns number of displayed channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return x - number of displayed channels
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iChannels_EDB(void* p_geo, const int32_t* edb);

/**
* Get a list of the displayed channel symbols.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  vv TODO
* @return Number of symbols in the list.
* Terminates GX if there was an error.
**
* @par Note 
*      The VV elements must be INT.
*      
*      Displayed channel lists are filled in the order the channels
*      appear on the display, left to right.
*
* @par See also 
*      iDispChanLST_EDB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDispChanList_EDB(void* p_geo, const int32_t* edb, const int32_t* vv);

/**
* Get a list of the displayed channel names.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  lst TODO
* @return Number of channels in the list.
* Terminates GX if there was an error.
**
* @par Note 
*      Displayed channel lists are filled in the order the channels
*      appear on the display, left to right.
*      
*      The channel names will be placed in the "Name" part of
*      the list and the values are set to the symbol handle.
*
* @par See also 
*      iDispChanList_EDB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDispChanLST_EDB(void* p_geo, const int32_t* edb, const int32_t* lst);

/**
* Get a list of the displayed channels in a given channel class.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  lst TODO
* @param[in]  class_name TODO
* @return Number of channels in the list.
* Terminates GX if there was an error.
**
* @par Note 
*      Displayed channel lists are filled in the order the channels
*      appear on the display, left to right.
*      
*      The channel names will be placed in the "Name" part of
*      the list and the values are set to the symbol handle.
*      
*      Examples of channel classes in current use are "MASK" and
*      "ASSAY". (Searches are case tolerant).
*
* @par See also 
*      iDispChanList_EDB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDispClassChanLST_EDB(void* p_geo, const int32_t* edb, const int32_t* lst, const char* class_name);

/**
* Find the column that contains a channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  chan TODO
* @return Column number that contains a specific channel
* iDUMMY of channel not loaded
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iFindChannelColumn_EDB(void* p_geo, const int32_t* edb, const char* chan);

/**
* Find the nearest point on the current line based
* on X,Y and Z and their projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[in]  ipj TODO
* @return x - Nearest point
* -1 - Not available
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iFindNearest_EDB(void* p_geo, const int32_t* edb, double* x, double* y, double* z, const int32_t* ipj);

/**
* Get current channel name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] str_val TODO
* @param[in]  size TODO
**
* @par Note 
*      Returns "" if mark not currently in a channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetCurChan_EDB(void* p_geo, const int32_t* edb, char* str_val, const int32_t* size);

/**
* This method returns the currently selected value
* at the current fid (if available).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] val TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetCurFidString_EDB(void* p_geo, const int32_t* edb, char* val, const int32_t* size);

/**
* Get current line name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] str_val TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetCurLine_EDB(void* p_geo, const int32_t* edb, char* str_val, const int32_t* size);

/**
* Returns the current data mark info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] start TODO
* @param[out] end TODO
* @param[out] inc TODO
* @return 0 - if data is marked.
* 1 - if data is not currently marked.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetCurMark_EDB(void* p_geo, const int32_t* edb, double* start, double* end, double* inc);

/**
* Get current selection information.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] db TODO
* @param[in]  db_size TODO
* @param[out] chan TODO
* @param[in]  chan_size TODO
* @param[out] line TODO
* @param[in]  line_size TODO
* @param[out] fid TODO
* @param[in]  fid_size TODO
**
* @par Note 
*      Channel Name    Empty if no channel
*      Line Name       "[All]" if all lines are selected
*      Fid Range       "[All]" if all values in all lines are selected
*      "[None]"  if no values are selected
*      "10 to 20"  giving the range of values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetCurrentSelection_EDB(void* p_geo, const int32_t* edb, char* db, const int32_t* db_size, char* chan, const int32_t* chan_size, char* line, const int32_t* line_size, char* fid, const int32_t* fid_size);

/**
* Load the file names of open databases into a LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  path TODO
* @return The number of documents loaded into the LST.
* The LST is cleared first.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetDatabasesLST_EDB(void* p_geo, const int32_t* lst, const int32_t* path);

/**
* Get channel data for the current mark.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  vv TODO
* @param[in]  chan TODO
* @return 0 if successful.
* 1 if failed, or if entire database is marked.
**
* @par Note 
*      The current "mark" in this case is the start and
*      end fiducials and not the selected channel. You
*      can use this method to retrieve the selected range
*      from any channel, loaded or not.
*      
*      The VV will be resized to the length of the data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetMarkChanVV_EDB(void* p_geo, const int32_t* edb, const int32_t* vv, const int32_t* chan);

/**
* Get channel data for the current mark.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  vv TODO
* @param[in]  chan TODO
* @return 0 if successful.
* 1 if failed, or if entire database is marked.
**
* @par Note 
*      The current "mark" in this case is the start and
*      end fiducials and not the selected channel. You
*      can use this method to retrieve the selected range
*      from any channel, loaded or not.
*      
*      The VA will be resized to the length of the data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 8.2
*/
GX_EXPORT int32_t App_iGetMarkChanVA_EDB(void* p_geo, const int32_t* edb, const int32_t* vv, const int32_t* chan);

/**
* Get the name of the database object of this EDB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetName_EDB(void* p_geo, const int32_t* edb, char* name, const int32_t* size);

/**
* Get integer profile parameter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @param[in]  prof TODO
* @param[in]  parm TODO
* @return Data Value (See notes)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetProfileParm_EDB(void* p_geo, const int32_t* edb, const int32_t* window, const int32_t* prof, const int32_t* parm);

/**
* Retrieve the current state of the database window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return EDB_WINDOW_STATE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetWindowState_EDB(void* p_geo, const int32_t* edb);

/**
* Checks if any database is currently loaded
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iHaveCurrent_EDB(void* p_geo);

/**
* Checks if the database locked
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iIsLocked_EDB(void* p_geo, const int32_t* edb);

/**
* Checks if a specific database is loaded.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iLoaded_EDB(void* p_geo, const char* name);

/**
* Return TRUE or FALSE if profile window is open
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @return TRUE if window is open
* FALSE if window is closed
**
* @par Note 
*      This functions will return FALSE if requested window
*      is not supported in current version of Oasis montaj.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iProfileOpen_EDB(void* p_geo, const int32_t* edb, const int32_t* window);

/**
* Checks if a database is currently opened in a read-only mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iReadOnly_EDB(void* p_geo, const int32_t* edb);

/**
* Get the map window's position and dock state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] left TODO
* @param[out] top TODO
* @param[out] right TODO
* @param[out] bottom TODO
* @param[out] state TODO
* @param[out] is_floating TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_GetWindowPosition_EDB(void* p_geo, const int32_t* edb, int32_t* left, int32_t* top, int32_t* right, int32_t* bottom, int32_t* state, int32_t* is_floating);

/**
* Get the map window's position and dock state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  left TODO
* @param[in]  top TODO
* @param[in]  right TODO
* @param[in]  bottom TODO
* @param[in]  state TODO
* @param[in]  is_floating TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_SetWindowPosition_EDB(void* p_geo, const int32_t* edb, const int32_t* left, const int32_t* top, const int32_t* right, const int32_t* bottom, const int32_t* state, const int32_t* is_floating);

/**
* Show a profile in the profile window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  state TODO
* @param[in]  chan TODO
* @return Profile ID if loaded, -1 for error
**
* @par Note 
*      If the symbol is not loaded, it will be loaded.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iShowProfileName_EDB(void* p_geo, const int32_t* edb, const int32_t* state, const char* chan);

/**
* Get the y-axis direction for a window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @return EDB_YAXIS_DIRECTION
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 8.3
*/
GX_EXPORT int32_t App_iGetWindowYAxisDirection_EDB(void* p_geo, const int32_t* edb, const int32_t* window);

/**
* Get number of profiles in a window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @return Number of profiles in a window
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iWindowProfiles_EDB(void* p_geo, const int32_t* edb, const int32_t* window);

/**
* Launch histogram tool on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  chan TODO
*
* @par See also 
*      LaunchHistogram_CHIMERA in chimera.gxh
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.6
*/
GX_EXPORT void LaunchHistogram_EDB(void* p_geo, const int32_t* edb, const char* chan);

/**
* Launch scatter tool on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
**
* @par Note 
*      The scatter tool uses the following INI parameters
*      
*      SCATTER.STM       name of the scatter template,"none" for none
*      SCATTER.STM_NAME  name of last template section, "" for none.
*      SCATTER.X         name of channel to display in X
*      SCATTER.Y         name of channel to display in Y
*      SCATTER.MASK      name of channel to use for mask
*
* @par See also 
*      LaunchScatter_CHIMERA in chimera.gxh
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.6
*/
GX_EXPORT void LaunchScatter_EDB(void* p_geo, const int32_t* edb);

/**
* Loads a list of databases into the workspace
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return Handle to current edited database, which will be the last
* database in the list.
**
* @par Note 
*      The last listed database will become the current database.
*      
*      Databases may already be loaded.
*      
*      Only the first file in the list may have a directory path.
*      All other files in the list are assumed to be in the same
*      directory as the first file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Load_EDB(void* p_geo, const char* name);

/**
* Loads documents into the workspace
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return Handle to current edited document, which will be the last
* database in the list if multiple files were provided.
**
* @par Note 
*      This function acts just like Load_EDB except that the document(s) is not activated (brought to foreground) and no
*      guarantee is given about which document is currently active.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_LoadNoActivate_EDB(void* p_geo, const char* name);

/**
* Load all channels into current database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LoadAllChans_EDB(void* p_geo, const int32_t* edb);

/**
* Load a channel into current database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  chan TODO
**
* @par Note 
*      If the channel does not exist, or if channel is already
*      loaded nothing happens.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LoadChan_EDB(void* p_geo, const int32_t* edb, const char* chan);

/**
* Loads a database into the workspace, flags as new.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return Handle to the current edited database.
**
* @par Note 
*      See Load_EDB. This is used for brand new databases, to set
*      an internal flag such that if on closing the user chooses
*      not to save changes, the database is deleted.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_LoadNew_EDB(void* p_geo, const char* name);

/**
* Loads a database into the editor with login and password.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  login TODO
* @param[in]  password TODO
* @return Handle to current edited database.
**
* @par Note 
*      The loaded database will become the current database.
*      
*      If the database is already loaded, it simply becomes
*      the current database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_LoadPass_EDB(void* p_geo, const char* name, const char* login, const char* password);

/**
* Load an EDB with the view from a current EDB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  p2 TODO
* @return New EDB handle.
**
* @par Note 
*      Can only be run in interactive mode. Is used by
*      dbsubset to create a new database with the same
*      view as previously.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_LoadWithView_EDB(void* p_geo, const char* name, const int32_t* p2);

/**
* This method locks the Edited Database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return Handle to database associated with edited database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Lock_EDB(void* p_geo, const int32_t* edb);

/**
* Makes this EDB object the current active object to the user.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_MakeCurrent_EDB(void* p_geo, const int32_t* edb);

/**
* Remove a profile from the profile window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @param[in]  prof TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_RemoveProfile_EDB(void* p_geo, const int32_t* edb, const int32_t* window, const int32_t* prof);

/**
* This method returns the currently selected fiducial if
* the user is selecting a fiducial. If not, it returns
* a dummy.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return x     - Fiducial
* DUMMY - No Selected Fiducial
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT double App_rGetCurFid_EDB(void* p_geo, const int32_t* edb);

/**
* Get real profile parameter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @param[in]  prof TODO
* @param[in]  parm TODO
* @return Real profile parameter
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT double App_rGetProfileParm_EDB(void* p_geo, const int32_t* edb, const int32_t* window, const int32_t* prof, const int32_t* parm);

/**
* Get split ratio between spreadsheet and profile sections.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @return d = (spreadsheet window height/
* (spreadsheet window height + entire profile window height))
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT double App_rGetSplit_EDB(void* p_geo, const int32_t* edb);

/**
* Run the maker for a single channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  chan TODO
**
* @par Note 
*      Skips channels without makers; will not return an
*      error if the channel does not exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_RunChannelMaker_EDB(void* p_geo, const int32_t* edb, const char* chan);

/**
* Recreate channels with makers.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
**
* @par Note 
*      Skips channels without makers.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_RunChannelMakers_EDB(void* p_geo, const int32_t* edb);

/**
* Set the current line name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  line TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetCurLine_EDB(void* p_geo, const int32_t* edb, const char* line);

/**
* Set Line but do not send a message.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  str_val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetCurLineNoMessage_EDB(void* p_geo, const int32_t* edb, const char* str_val);

/**
* Set the current mark.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  start TODO
* @param[in]  end TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetCurMark_EDB(void* p_geo, const int32_t* edb, const double* start, const double* end);

/**
* Set integer profile parameter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @param[in]  prof TODO
* @param[in]  parm TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetProfileParmI_EDB(void* p_geo, const int32_t* edb, const int32_t* window, const int32_t* prof, const int32_t* parm, const int32_t* value);

/**
* Set real profile parameter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @param[in]  prof TODO
* @param[in]  parm TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetProfileParmR_EDB(void* p_geo, const int32_t* edb, const int32_t* window, const int32_t* prof, const int32_t* parm, const double* value);

/**
* Set profile X range and X channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  x_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetProfileRangeX_EDB(void* p_geo, const int32_t* edb, const double* min_x, const double* max_x, const int32_t* x_ch);

/**
* Set profile Y range and display option
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  min_y TODO
* @param[in]  max_y TODO
* @param[in]  scl TODO
**
* @par Note 
*      If channel is not loaded or displayed, it will
*      loaded and/or displayed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetProfileRangeY_EDB(void* p_geo, const int32_t* edb, const int32_t* min_x, const int32_t* max_x, const double* min_y, const double* max_y, const int32_t* scl);

/**
* Set profile split for 3 windows.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  d1 TODO
* @param[in]  d2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetProfileSplit_EDB(void* p_geo, const int32_t* edb, const double* d1, const double* d2);

/**
* Set profile split for 5 windows.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  d1 TODO
* @param[in]  d2 TODO
* @param[in]  d3 TODO
* @param[in]  d4 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetProfileSplit5_EDB(void* p_geo, const int32_t* edb, const double* d1, const double* d2, const double* d3, const double* d4);

/**
* Set profile splits
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  vv TODO
**
* @par Note 
*      The input VV values are the fractional heights for each
*      profile window. Values are summed, and normalized (so you can
*      enter "1,1,1", with a VV of length 3, if you want 3 equal profile windows).
*      
*      VV values beyond the maximum number of displayable
*      profiles (MAX_PROF_WND) are ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetProfileSplitVV_EDB(void* p_geo, const int32_t* edb, const int32_t* vv);

/**
* Set split ratio between spreadsheet and profile sections.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  d TODO
**
* @par Note 
*      d = (spreadsheet window height/
*      (spreadsheet window height + entire profile window height))
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetSplit_EDB(void* p_geo, const int32_t* edb, const double* d);

/**
* Changes the state of the database window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  state TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetWindowState_EDB(void* p_geo, const int32_t* edb, const int32_t* state);

/**
* Show a profile in the profile window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  window TODO
* @param[in]  symb TODO
**
* @par Note 
*      If the symbol is not loaded, it will be loaded.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ShowProfile_EDB(void* p_geo, const int32_t* edb, const int32_t* window, const int32_t* symb);

/**
* Add all currently selected data to the ST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  st TODO
**
* @par Note 
*      Use Histogram_EDB to get median or histogram.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Statistics_EDB(void* p_geo, const int32_t* edb, const int32_t* st);

/**
* Unloads an edited database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
**
* @par Note 
*      If the database is not loaded, nothing happens.
*      Same as UnLoadVerify_EDB with FALSE to prompt save.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoad_EDB(void* p_geo, const char* name);

/**
* Unloads all opened databases
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadAll_EDB(void* p_geo);

/**
* Unload all channels into current database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadAllChans_EDB(void* p_geo, const int32_t* edb);

/**
* Unload a channel into current database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[in]  chan TODO
**
* @par Note 
*      If the channel does not exist, or if channel is already
*      loaded nothing happens.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadChan_EDB(void* p_geo, const int32_t* edb, const char* chan);

/**
* Unloads a database in the workspace, discards changes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
**
* @par Note 
*      If the database is not loaded, nothing happens.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadDiscard_EDB(void* p_geo, const char* name);

/**
* Unloads an edited database, optional prompt to save.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  prompt TODO
**
* @par Note 
*      If the database is not loaded, nothing happens.
*      The user can be prompted to save before unloading.
*      If EDB_UNLOAD_NO_PROMPT, data is always saved.
*      EDB_UNLOAD_MULTIPROMPT is now obsolete and
*      is equivalent to EDB_UNLOAD_SINGLE_PROMPT.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadVerify_EDB(void* p_geo, const char* name, const int32_t* prompt);

/**
* This method unlocks the Edited Database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLock_EDB(void* p_geo, const int32_t* edb);

///@}

/**
* @name External Window Functions 
*/
///@{

/**
* Version of Load_EDB that can be used to load a database via subclassing into a Windows control.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db_file TODO
* @param[in]  window TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LoadControl_EDB(void* p_geo, const char* db_file, HWND window);

/**
* Version of LoadNew_EDB that can be used to load a database via subclassing into a Windows control.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db_file TODO
* @param[in]  window TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LoadNewControl_EDB(void* p_geo, const char* db_file, HWND window);

/**
* Version of LoadPass_EDB that can be used to load a database via subclassing into a Windows control.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db_file TODO
* @param[in]  user TODO
* @param[in]  password TODO
* @param[in]  window TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LoadPassControl_EDB(void* p_geo, const char* db_file, const char* user, const char* password, HWND window);

/**
* Version of LoadWithView_EDB that can be used to load a database via subclassing into a Windows control.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db_file TODO
* @param[in]  edb TODO
* @param[in]  window TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LoadWithViewControl_EDB(void* p_geo, const char* db_file, const int32_t* edb, HWND window);

///@}


//*** endblock Generated

//*** block Editable
//** NOTICE: The code generator will not replace the code in this block
//*** endblock Editable


//*** block Footer
#ifdef __cplusplus
}
#endif

/** @} */

#endif
//*** endblock Footer
