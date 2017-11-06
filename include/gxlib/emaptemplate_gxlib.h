//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file emaptemplate_gxlib.h
* @date 2017-11-06
* @brief File containing EMAPTEMPLATE GX C API constant and function declarations
*/

/**
* @defgroup EMAPTEMPLATE_Module EMAPTEMPLATE
* The EMAPTEMPLATE class provides access to a map template as displayed within
* Oasis montaj, but does not change data within the template itself.
* It performs functions such as setting the currently displayed area,
* or drawing "tracking" lines or boxes on the template (which are not
* part of the template itself).
*
* Notes:
*
* To obtain access to the map template itself, it is recommended practice
* to begin with an EMAPTEMPLATE object, and use the Lock function to
* lock the underlying template to prevent external changes. The returned
* MAPTEMPLATE object may then be safely used to make changes to the template itself.
* 
* VIRTUAL EMAPTEMPLATE SUPPORT
* 
* These methods are only available when running in an external application.
* They allow the GX to open a map template and then create a Virtual EMAPTEMPLATE from that
* map template. The GX can then call MakeCurrent and set the current EMAPTEMPLATE so
* that code that follows sees this map template as the current MAPTEMPLATE.
* 
* Supported methods on Virtual EMAPTEMPLATEs are:
* 
*   Current_EMAPTEMPLATE
*   CurrentNoActivate_EMAPTEMPLATE
*   MakeCurrent_EMAPTEMPLATE
*   iHaveCurrent_EMAPTEMPLATE
*   CurrentIfExists_EMAPTEMPLATE
* 
*   Lock_EMAPTEMPLATE
*   UnLock_EMAPTEMPLATE
* 
*   IGetName_EMAPTEMPLATE
* 
*   iLoaded_EMAPTEMPLATE
*   Load_EMAPTEMPLATE
*   LoadNoActivate_EMAPTEMPLATE
*   UnLoadVerify_EMAPTEMPLATE
*   UnLoad_EMAPTEMPLATE
* 
*   CreateVirtual_EMAPTEMPLATE
*
* @{
*/

#pragma once
#ifndef HEMAPTEMPLATE_H_DEFINED
#define HEMAPTEMPLATE_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name EMAPTEMPLATE_PATH Definitions
* 
* Four forms
*/
///@{
/** 
* EMAPTEMPLATE_PATH_FULL
* 
* d:\directory\file.gdb
*/
#define EMAPTEMPLATE_PATH_FULL 0
/** 
* EMAPTEMPLATE_PATH_DIR
* 
* \directory\file.gdb
*/
#define EMAPTEMPLATE_PATH_DIR 1
/** 
* EMAPTEMPLATE_PATH_NAME_EXT
* 
* file.gdb
*/
#define EMAPTEMPLATE_PATH_NAME_EXT 2
/** 
* EMAPTEMPLATE_PATH_NAME
* 
* file
*/
#define EMAPTEMPLATE_PATH_NAME 3
///@}

/**
* @name EMAPTEMPLATE_TRACK Definitions
* 
* Tracking Options
*/
///@{
/** 
* EMAPTEMPLATE_TRACK_ERASE
* 
* Erase Object after you return?
*/
#define EMAPTEMPLATE_TRACK_ERASE 1
/** 
* EMAPTEMPLATE_TRACK_RMENU
* 
* Allow use of right-menu
*/
#define EMAPTEMPLATE_TRACK_RMENU 2
/** 
* EMAPTEMPLATE_TRACK_CYCLE
* 
* If user holds down left-mouse, will return many times
*/
#define EMAPTEMPLATE_TRACK_CYCLE 4
///@}

/**
* @name EMAPTEMPLATE_WINDOW_POSITION Definitions
* 
* Window Positioning Options
*/
///@{
/** 
* EMAPTEMPLATE_WINDOW_POSITION_DOCKED
*/
#define EMAPTEMPLATE_WINDOW_POSITION_DOCKED 0
/** 
* EMAPTEMPLATE_WINDOW_POSITION_FLOATING
*/
#define EMAPTEMPLATE_WINDOW_POSITION_FLOATING 1
///@}

/**
* @name EMAPTEMPLATE_WINDOW_STATE Definitions
* 
* Window State Options
*/
///@{
/** 
* EMAPTEMPLATE_WINDOW_RESTORE
*/
#define EMAPTEMPLATE_WINDOW_RESTORE 0
/** 
* EMAPTEMPLATE_WINDOW_MINIMIZE
*/
#define EMAPTEMPLATE_WINDOW_MINIMIZE 1
/** 
* EMAPTEMPLATE_WINDOW_MAXIMIZE
*/
#define EMAPTEMPLATE_WINDOW_MAXIMIZE 2
///@}


/**
* @name Drag-and-drop methods Functions 
*/
///@{

/**
* Checks if drag-and-drop is enabled for the map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDragDropEnabled_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate);

/**
* Set whether drag-and-drop is enabled for the map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  enable TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetDragDropEnabled_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const int32_t* enable);

///@}

/**
* @name General Functions 
*/
///@{

/**
* This method returns the Current Edited map template.
*
* @param[in]  p_geo GX Context Pointer
* @return EMAPTEMPLATE Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Current_EMAPTEMPLATE(void* p_geo);

/**
* This method returns the Current Edited map template.
*
* @param[in]  p_geo GX Context Pointer
* @return EMAPTEMPLATE Object
**
* @par Note 
*      This function acts just like Current_EMAPTEMPLATE except that the document is not activated (brought to foreground) and no
*      guarantee is given about which document is currently active.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT int32_t App_CurrentNoActivate_EMAPTEMPLATE(void* p_geo);

/**
* This method returns the Current Edited map.
*
* @param[in]  p_geo GX Context Pointer
* @return EMAPTEMPLATE Object to current edited map. If there is no current map,
* the user is not prompted for a map, and 0 is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_CurrentIfExists_EMAPTEMPLATE(void* p_geo);

/**
* Destroy EMAPTEMPLATE handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
**
* @par Note 
*      This does not unload the map, it simply deletes the gx resource handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Destroy_EMAPTEMPLATE(void* p_geo, const int32_t* val);

/**
* Load the file names of open maps into a LST.
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
GX_EXPORT int32_t App_iGetMapTemplatesLST_EMAPTEMPLATE(void* p_geo, const int32_t* lst, const int32_t* path);

/**
* Get the name of the map object of this EMAPTEMPLATE.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetName_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, char* name, const int32_t* size);

/**
* This method returns whether a current map is loaded
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - no current map.
* 1 - current map
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iHaveCurrent_EMAPTEMPLATE(void* p_geo);

/**
* Find a loaded map that has a setting in its reg.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  field TODO
* @param[in]  value TODO
* @param[out] name TODO
* @param[in]  size TODO
* @return 0 - Ok
* 1 - No Map Found
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iIGetSpecifiedMapName_EMAPTEMPLATE(void* p_geo, const char* field, const char* value, char* name, const int32_t* size);

/**
* Is this MapTemplate locked
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iIsLocked_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate);

/**
* Returns 1 if a map is loaded .
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return 1 if map is loaded, 0 otherwise.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iLoaded_EMAPTEMPLATE(void* p_geo, const char* name);

/**
* Get the map window's position and dock state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
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
GX_EXPORT void App_GetWindowPosition_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, int32_t* left, int32_t* top, int32_t* right, int32_t* bottom, int32_t* state, int32_t* is_floating);

/**
* Get the map window's position and dock state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
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
GX_EXPORT void App_SetWindowPosition_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const int32_t* left, const int32_t* top, const int32_t* right, const int32_t* bottom, const int32_t* state, const int32_t* is_floating);

/**
* Checks if a map is currently opened in a read-only mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iReadOnly_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate);

/**
* Loads maps into the editor.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return EMAPTEMPLATE Object to edited map.
**
* @par Note 
*      The last map in the list will be the current map.
*      
*      Maps may already be loaded.
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
GX_EXPORT int32_t App_Load_EMAPTEMPLATE(void* p_geo, const char* name);

/**
* Loads documents into the workspace
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return Handle to current edited document, which will be the last
* database in the list if multiple files were provided.
**
* @par Note 
*      This function acts just like Load_EMAPTEMPLATE except that the document(s) is not activated (brought to foreground) and no
*      guarantee is given about which document is currently active.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_LoadNoActivate_EMAPTEMPLATE(void* p_geo, const char* name);

/**
* This method locks the Edited map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @return MAPTEMPLATE Object to map associated with edited map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Lock_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate);

/**
* Makes this EMAPTEMPLATE object the current active object to the user.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_MakeCurrent_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate);

/**
* Unloads a map template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
**
* @par Note 
*      If the map template is not loaded, nothing happens.
*      Same as UnLoadVerify_EMAPTEMPLATE with FALSE to prompt save.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoad_EMAPTEMPLATE(void* p_geo, const char* name);

/**
* Unloads all opened maps
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadAll_EMAPTEMPLATE(void* p_geo);

/**
* Unloads an edited map, optional prompt to save.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  prompt TODO
**
* @par Note 
*      If the map is not loaded, nothing happens.
*      If "FALSE", map is saved without a prompt.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadVerify_EMAPTEMPLATE(void* p_geo, const char* name, const int32_t* prompt);

/**
* This method unlocks the Edited map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLock_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate);

///@}

/**
* @name Input Functions 
*/
///@{

/**
* Returns the coordinates of a user selected box.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  state TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @return 0 if point returned.
* 1 if user cancelled.
**
* @par Note 
*      The coordinates are returned in the current template units
*      (See GetUnits and SetUnits in MAPTEMPLATE)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetBox_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const char* state, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Returns the end points of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  str_val TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @return 0 if line returned.
* 1 if user cancelled.
**
* @par Note 
*      The coordinates are returned in the current template units
*      (See GetUnits and SetUnits in MAPTEMPLATE)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetLine_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const char* str_val, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Returns the coordinates of a user selected point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  str_val TODO
* @param[out] x TODO
* @param[out] y TODO
* @return 0 if point returned.
* 1 if user cancelled.
**
* @par Note 
*      The coordinates are returned in the current template units
*      (See GetUnits and SetUnits in MAPTEMPLATE)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetPoint_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const char* str_val, double* x, double* y);

/**
* Returns the coordinates of a user selected box starting at a corner.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  str_val TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @return 0 if point returned.
* 1 if user cancelled.
**
* @par Note 
*      The coordinates are returned in the current template units
*      (See GetUnits and SetUnits in MAPTEMPLATE)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetRect_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const char* str_val, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Get point without prompt or cursor change with tracking
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  flags TODO
* @param[out] x TODO
* @param[out] y TODO
* @return 0 if point returned.
* 1 if user cancelled.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iTrackPoint_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const int32_t* flags, double* x, double* y);

///@}

/**
* @name Selection Methods Functions 
*/
///@{

/**
* Gets info about the current selected item
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[out] item TODO
* @param[in]  item_len TODO
* @return Returns True if the item is a view
**
* @par Note 
*      If nothing is selected the string will be empty and the function will return False
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetItemSelection_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, char* item, const int32_t* item_len);

/**
* Sets the current selected item
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  item TODO
**
* @par Note 
*      An empty string will unselect everything.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetItemSelection_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const char* item);

///@}

/**
* @name View Window Functions 
*/
///@{

/**
* Get the area you are currently looking at.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      The coordinates are based on the current template units
*      (See GetUnits and SetUnits in MAPTEMPLATE)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetDisplayArea_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Get the base layout view properties.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[out] snap_to_grid TODO
* @param[out] snap_dist TODO
* @param[out] view_grid TODO
* @param[out] view_rulers TODO
* @param[out] view_units TODO
* @param[out] grid_red TODO
* @param[out] grid_green TODO
* @param[out] grid_blue TODO
**
* @par Note 
*      This affects the display units and other related properties for the base
*      view of a map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetTemplateLayoutProps_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, int32_t* snap_to_grid, double* snap_dist, int32_t* view_grid, int32_t* view_rulers, int32_t* view_units, int32_t* grid_red, int32_t* grid_green, int32_t* grid_blue);

/**
* Retrieve the current state of the map window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @return EMAPTEMPLATE_WINDOW_STATE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetWindowState_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate);

/**
* Set the area you wish to see.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
**
* @par Note 
*      The coordinates are based on the current template units
*      (See GetUnits and SetUnits in MAPTEMPLATE)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetDisplayArea_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Set the base layout view properties.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  snap_to_grid TODO
* @param[in]  snap_dist TODO
* @param[in]  view_grid TODO
* @param[in]  view_rulers TODO
* @param[in]  view_units TODO
* @param[in]  grid_red TODO
* @param[in]  grid_green TODO
* @param[in]  grid_blue TODO
**
* @par Note 
*      This affects the display units and other related properties for the base
*      view of a map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetTemplateLayoutProps_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const int32_t* snap_to_grid, const double* snap_dist, const int32_t* view_grid, const int32_t* view_rulers, const int32_t* view_units, const int32_t* grid_red, const int32_t* grid_green, const int32_t* grid_blue);

/**
* Changes the state of the map window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emaptemplate TODO
* @param[in]  state TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetWindowState_EMAPTEMPLATE(void* p_geo, const int32_t* emaptemplate, const int32_t* state);

///@}

/**
* @name Virtual Functions 
*/
///@{

/**
* Makes this EMAPTEMPLATE object the current active object to the user.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return EMAPTEMPLATE Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_CreateVirtual_EMAPTEMPLATE(void* p_geo, const char* name);

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
