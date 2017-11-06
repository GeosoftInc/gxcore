//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file emap_gxlib.h
* @date 2017-11-06
* @brief File containing EMAP GX C API constant and function declarations
*/

/**
* @defgroup EMAP_Module EMAP
* The EMAP class provides access to a map as displayed within
* Oasis montaj, but (usually) does not change data within the map itself.
* It performs functions such as setting the currently displayed area,
* or drawing "tracking" lines or boxes on the map (which are not
* part of the map itself).
*
* Notes:
*
* To obtain access to the map itself, it is recommended practice
* to begin with an EMAP object, and use the Lock_EMAP function to
* lock the underlying map to prevent external changes. The returned
* MAP object (see MAP) may then be safely used to make changes to the map itself.
* 
* MAP Redraw Rules:
* 
*     1. Redraws only occur at the end of the proccess (GX or SCRIPT) not during.
*        You can safely call other GX's and the map will not redraw. If you need the
*        map to redraw immediately use Redraw_EMAP instead.
*     2. If the final GX calls Cancel_SYS, the map redraw is not done. If you
*        need to force a redraw when the user hits cancel use the Redraw_EMAP function.
*     3. You can set the redraw flag to EMAP_REDRAW_YES or EMAP_REDRAW_NO at any
*         time using SetRedrawFlag_EMAP. This flag will only be looked at, when
*         the last call to UnLock_EMAP occurs and is ignored on a Cancel_SYS.
*     4. Redraw_EMAP only works if the current map is not locked. It will do nothing
*        if the map is locked.  Issue an UnLock_EMAP before using this function.
* 
* 
* VIRTUAL EMAP SUPPORT
* 
* These methods are only available when running in an external application.
* They allow the GX to open a MAP and then create a Virtual EMAP from that
* map. The GX can then call MakeCurrent_EMAP and set the current EMAP so
* that code that follows sees this map as the current MAP.
* 
* Supported methods on Virtual EMAPS are:
* 
*     | Current_EMAP
*     | CurrentNoActivate_EMAP
*     | MakeCurrent_EMAP
*     | iHaveCurrent_EMAP
*     | CurrentIfExists_EMAP
*     | Current_MAP
*     | Lock_EMAP
*     | UnLock_EMAP
*     | iIsLocked_EMAP
*     | IGetName_EMAP
*     | SetRedrawFlag_EMAP
*     | Redraw_EMAP
*     | iLoaded_EMAP
*     | Load_EMAP
*     | LoadNoActivate_EMAP
*     | UnLoadVerify_EMAP
*     | UnLoad_EMAP
*     | CreateVirtual_EMAP
*
* @{
*/

#pragma once
#ifndef HEMAP_H_DEFINED
#define HEMAP_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name EMAP_FONT Definitions
* 
* Font Types
*/
///@{
/** 
* EMAP_FONT_TT
*/
#define EMAP_FONT_TT 0
/** 
* EMAP_FONT_GFN
*/
#define EMAP_FONT_GFN 1
///@}

/**
* @name EMAP_PATH Definitions
* 
* Four forms
*/
///@{
/** 
* EMAP_PATH_FULL
* 
* d:\directory\file.gdb
*/
#define EMAP_PATH_FULL 0
/** 
* EMAP_PATH_DIR
* 
* \directory\file.gdb
*/
#define EMAP_PATH_DIR 1
/** 
* EMAP_PATH_NAME_EXT
* 
* File.gdb
*/
#define EMAP_PATH_NAME_EXT 2
/** 
* EMAP_PATH_NAME
* 
* File
*/
#define EMAP_PATH_NAME 3
///@}

/**
* @name EMAP_REDRAW Definitions
* 
* Redraw Options
*/
///@{
/** 
* EMAP_REDRAW_NO
*/
#define EMAP_REDRAW_NO 0
/** 
* EMAP_REDRAW_YES
*/
#define EMAP_REDRAW_YES 1
///@}

/**
* @name EMAP_REMOVE Definitions
* 
* How to handle pending changes in document
*/
///@{
/** 
* EMAP_REMOVE_SAVE
*/
#define EMAP_REMOVE_SAVE 0
/** 
* EMAP_REMOVE_PROMPT
*/
#define EMAP_REMOVE_PROMPT 1
/** 
* EMAP_REMOVE_DISCARD
*/
#define EMAP_REMOVE_DISCARD 2
///@}

/**
* @name EMAP_TRACK Definitions
* 
* Tracking Options
*/
///@{
/** 
* EMAP_TRACK_ERASE
* 
* Erase Object after you return?
*/
#define EMAP_TRACK_ERASE 1
/** 
* EMAP_TRACK_RMENU
* 
* Allow use of right-menu
*/
#define EMAP_TRACK_RMENU 2
/** 
* EMAP_TRACK_CYCLE
* 
* If user holds down left-mouse, will return many times
*/
#define EMAP_TRACK_CYCLE 4
///@}

/**
* @name EMAP_VIEWPORT Definitions
* 
* Tracking Options
*/
///@{
/** 
* EMAP_VIEWPORT_NORMAL
* 
* Normal map usage
*/
#define EMAP_VIEWPORT_NORMAL 0
/** 
* EMAP_VIEWPORT_BROWSEZOOM
* 
* Zoom Mode
*/
#define EMAP_VIEWPORT_BROWSEZOOM 1
/** 
* EMAP_VIEWPORT_BROWSEAOI
* 
* Change Area Of Interest Mode
*/
#define EMAP_VIEWPORT_BROWSEAOI 2
///@}

/**
* @name EMAP_WINDOW_POSITION Definitions
* 
* Window Positioning Options
*/
///@{
/** 
* EMAP_WINDOW_POSITION_DOCKED
*/
#define EMAP_WINDOW_POSITION_DOCKED 0
/** 
* EMAP_WINDOW_POSITION_FLOATING
*/
#define EMAP_WINDOW_POSITION_FLOATING 1
///@}

/**
* @name EMAP_WINDOW_STATE Definitions
* 
* Window State Options
*/
///@{
/** 
* EMAP_WINDOW_RESTORE
*/
#define EMAP_WINDOW_RESTORE 0
/** 
* EMAP_WINDOW_MINIMIZE
*/
#define EMAP_WINDOW_MINIMIZE 1
/** 
* EMAP_WINDOW_MAXIMIZE
*/
#define EMAP_WINDOW_MAXIMIZE 2
///@}

/**
* @name LAYOUT_VIEW_UNITS Definitions
* 
* Base dlayout display units
*/
///@{
/** 
* LAYOUT_VIEW_MM
* 
* Millimeters
*/
#define LAYOUT_VIEW_MM 0
/** 
* LAYOUT_VIEW_CM
* 
* Centimeters
*/
#define LAYOUT_VIEW_CM 1
/** 
* LAYOUT_VIEW_IN
* 
* Inches
*/
#define LAYOUT_VIEW_IN 2
///@}


/**
* @name Drag-and-drop methods Functions 
*/
///@{

/**
* Drop Map clipboard data on this EMAP
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  hglobal TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DropMapClipData_EMAP(void* p_geo, const int32_t* emap, const int32_t* hglobal);

/**
* Checks if drag-and-drop enabled for the map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDragDropEnabled_EMAP(void* p_geo, const int32_t* emap);

/**
* Set whether drag-and-drop is enabled for the map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  enable TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetDragDropEnabled_EMAP(void* p_geo, const int32_t* emap, const int32_t* enable);

///@}

/**
* @name Drawing Functions 
*/
///@{

/**
* Copy entire map to clipboard.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
**
* @par Note 
*      Four objects are placed on the clipboard:
*      
*          1. Georefernce Text
*          2. Bitmap of current window screen resolution
*          3. EMF of current window screen resolution
*          4. Entire map as a Geosoft View (go to view mode and hit paste). The coordinates are placed
*             in the current view coordinates.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_CopyToClip_EMAP(void* p_geo, const int32_t* emap);

/**
* Draws a line on the current map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
**
* @par Note 
*      Locations are in the current view user units.
*      
*      The line is temporary and will disappear on the next
*      screen refresh.  This function is for you to provide
*      interactive screen feedback to your user.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DrawLine_EMAP(void* p_geo, const int32_t* emap, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Draws a rect on the current map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
**
* @par Note 
*      Locations are in the current view user units.
*      
*      The line is temporary and will disappear on the next
*      screen refresh.  This function is for you to provide
*      interactive screen feedback to your user.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DrawRect_EMAP(void* p_geo, const int32_t* emap, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Plot a square symbol on a section view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  pix TODO
**
* @par Note 
*      Plot a square symbol on a section view, but input 3D user coordinates
*      
*      The line is temporary and will disappear on the next
*      screen refresh.  This function is for you to provide
*      interactive screen feedback to your user.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.1
*/
GX_EXPORT void App_DrawRect3D_EMAP(void* p_geo, const int32_t* emap, const double* x, const double* y, const double* z, const int32_t* pix);

/**
* Get the area you are currently looking at.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      Coordinates are based on the current view units.
*      For 3D views this will return the full map extents.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetDisplayArea_EMAP(void* p_geo, const int32_t* emap, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Get the area you are currently looking at in raw map units
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      Coordinates are in millimeters.
*      For 3D views this will return the full map extents.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetDisplayAreaRaw_EMAP(void* p_geo, const int32_t* emap, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Get the base layout view properties.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
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
GX_EXPORT void App_GetMapLayoutProps_EMAP(void* p_geo, const int32_t* emap, int32_t* snap_to_grid, double* snap_dist, int32_t* view_grid, int32_t* view_rulers, int32_t* view_units, int32_t* grid_red, int32_t* grid_green, int32_t* grid_blue);

/**
* Get current snapping distance in MM
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] snap TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetMapSnap_EMAP(void* p_geo, const int32_t* emap, double* snap);

/**
* Retrieve the current state of the map window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @return EMAP_WINDOW_STATE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetWindowState_EMAP(void* p_geo, const int32_t* emap);

/**
* Set the area you wish to see.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
**
* @par Note 
*      Coordinates are based on the current view user units.
*      The map is immediatly redrawn.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetDisplayArea_EMAP(void* p_geo, const int32_t* emap, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Set the base layout view properties.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
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
GX_EXPORT void App_SetMapLayoutProps_EMAP(void* p_geo, const int32_t* emap, const int32_t* snap_to_grid, const double* snap_dist, const int32_t* view_grid, const int32_t* view_rulers, const int32_t* view_units, const int32_t* grid_red, const int32_t* grid_green, const int32_t* grid_blue);

/**
* Set current snapping distance in MM
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  snap TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetMapSnap_EMAP(void* p_geo, const int32_t* emap, const double* snap);

/**
* Changes the state of the map window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  state TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetWindowState_EMAP(void* p_geo, const int32_t* emap, const int32_t* state);

///@}

/**
* @name General Functions 
*/
///@{

/**
* The number of packed files in the map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @return The number of packed files in map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.2
*/
GX_EXPORT int32_t App_iPackedFiles_EMAP(void* p_geo, const int32_t* emap);

/**
* Activates a group and associated tools.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  view_group TODO
**
* @par Note 
*      Activating a group basically enters the edit mode associated
*      with the type of group. E.g. a vector group will enable the
*      edit toolbar for that gorup and an AGG will bring up the
*      image color tool. Be sure to pass a combined name containing
*      both the view name and the group separated by a "/" or "\".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ActivateGroup_EMAP(void* p_geo, const int32_t* emap, const char* view_group);

/**
* Activates a view and associated tools.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  view TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ActivateView_EMAP(void* p_geo, const int32_t* emap, const char* view);

/**
* This method returns the Current Edited map.
*
* @param[in]  p_geo GX Context Pointer
* @return EMAP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Current_EMAP(void* p_geo);

/**
* This method returns the Current Edited map.
*
* @param[in]  p_geo GX Context Pointer
* @return EMAP Object
**
* @par Note 
*      This function acts just like Current_EMAP except that the document is not activated (brought to foreground) and no
*      guarantee is given about which document is currently active.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT int32_t App_CurrentNoActivate_EMAP(void* p_geo);

/**
* This method returns the Current Edited map.
*
* @param[in]  p_geo GX Context Pointer
* @return EMAP Object to current edited map. If there is no current map,
* the user is not prompted for a map, and 0 is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_CurrentIfExists_EMAP(void* p_geo);

/**
* Destroy EMAP handle.
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
GX_EXPORT void App_Destroy_EMAP(void* p_geo, const int32_t* val);

/**
* Removes the view from the workspace.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  unload_flag TODO
**
* @par Note 
*      Can only be run in interactive mode. After this call the
*      EMAP object will become invalid. If this is the last view on
*      the document and the document has been modified the map will be
*      unloaded and optionally saved depending on the EMAP_REMOVE
*      parameter.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DestroyView_EMAP(void* p_geo, const int32_t* emap, const int32_t* unload_flag);

/**
* List all Windows and geosoft fonts.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  lst TODO
* @param[in]  which TODO
**
* @par Note 
*      To get TT and GFN fonts, call twice with the same list
*      and EMAP_FONT_TT, then EMAP_FONT_GFN, or vice-versa to
*      change order of listing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_FontLST_EMAP(void* p_geo, const int32_t* emap, const int32_t* lst, const int32_t* which);

/**
* Change the current working view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  view TODO
* @return 0 if view set, 1 if view does not exist.
**
* @par Note 
*      This function operates on the current map.
*      Unlike iSetCurrentView_EMAP this function's action
*      survive the GX finishing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iChangeCurrentView_EMAP(void* p_geo, const int32_t* emap, const char* view);

/**
* Loads an LST with the current view/group names
* existing in a map. Typically used to track group
* changes that are about to occur.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  lst TODO
* @return 0 if LST filled properly
* 1 if not
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iCreateGroupSnapshot_EMAP(void* p_geo, const int32_t* emap, const int32_t* lst);

/**
* Get the name of a 3D view if the current view is 3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGet3DViewName_EMAP(void* p_geo, const int32_t* emap, char* name, const int32_t* size);

/**
* Get the current group name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] group TODO
* @param[in]  length TODO
**
* @par Note 
*      This function operates on the current map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetCurrentGroup_EMAP(void* p_geo, const int32_t* emap, char* group, const int32_t* length);

/**
* Get the current view name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] view TODO
* @param[in]  length TODO
**
* @par Note 
*      This function operates on the current map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetCurrentView_EMAP(void* p_geo, const int32_t* emap, char* view, const int32_t* length);

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
GX_EXPORT int32_t App_iGetMapsLST_EMAP(void* p_geo, const int32_t* lst, const int32_t* path);

/**
* Get the name of the map object of this EMAP.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetName_EMAP(void* p_geo, const int32_t* emap, char* name, const int32_t* size);

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
GX_EXPORT int32_t App_iHaveCurrent_EMAP(void* p_geo);

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
GX_EXPORT int32_t App_iIGetSpecifiedMapName_EMAP(void* p_geo, const char* field, const char* value, char* name, const int32_t* size);

/**
* Is the map a grid map?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @return 1 - Yes, 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iIsGrid_EMAP(void* p_geo, const int32_t* emap);

/**
* Reloads a grid document.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
**
* @par Note 
*      Use this method to reload (if loaded) a grid document if the file on disk changed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_ReloadGrid_EMAP(void* p_geo, const char* name);

/**
* Is the current view a 3D view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @return 1 - Yes, 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iIs3DView_EMAP(void* p_geo, const int32_t* emap);

/**
* Get an E3DV from the EMAP
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @return E3DV object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.3
*/
GX_EXPORT int32_t App_GetE3DV_EMAP(void* p_geo, const int32_t* emap);

/**
* Checks if map is locked
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iIsLocked_EMAP(void* p_geo, const int32_t* emap);

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
GX_EXPORT int32_t App_iLoaded_EMAP(void* p_geo, const char* name);

/**
* Checks if a map is currently opened in a read-only mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iReadOnly_EMAP(void* p_geo, const int32_t* emap);

/**
* Get the map window's position and dock state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
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
GX_EXPORT void App_GetWindowPosition_EMAP(void* p_geo, const int32_t* emap, int32_t* left, int32_t* top, int32_t* right, int32_t* bottom, int32_t* state, int32_t* is_floating);

/**
* Get the map window's position and dock state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
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
GX_EXPORT void App_SetWindowPosition_EMAP(void* p_geo, const int32_t* emap, const int32_t* left, const int32_t* top, const int32_t* right, const int32_t* bottom, const int32_t* state, const int32_t* is_floating);

/**
* The LST passed in must contain View\Group strings in
* the Name field only. The function will compare with
* a more current LST and zoom the map to the new entry.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  state TODO
* @return 0 if zoom proceeded ok
* 1 if error
**
* @par Note 
*      Typically this function is used in conjunction with
*      CreateSnapshot_EMAP.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iRealizeGroupSnapshot_EMAP(void* p_geo, const int32_t* emap, const int32_t* state);

/**
* Set the current working view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  view TODO
* @return 0 if view set, 1 if view does not exist.
**
* @par Note 
*      This function operates on the current map.
*      It changes the view only during the execution of the
*      GX. As soon as the GX terminates the view will revert
*      to the original one.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iSetCurrentView_EMAP(void* p_geo, const int32_t* emap, const char* view);

/**
* Get a view's IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  view TODO
* @param[in]  ipj TODO
**
* @par Note 
*      This function can be used to obtain a views coordinate system 
*      without having to call Lock_EMAP. This could be an expensive operation
*      that cause undesirable UX.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.1
*/
GX_EXPORT void App_GetViewIPJ_EMAP(void* p_geo, const int32_t* emap, const char* view, const int32_t* ipj);

/**
* Loads maps into the editor.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return EMAP Object to edited map.
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
GX_EXPORT int32_t App_Load_EMAP(void* p_geo, const char* name);

/**
* Loads documents into the workspace
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return Handle to current edited document, which will be the last
* database in the list if multiple files were provided.
**
* @par Note 
*      This function acts just like Load_EMAP except that the document(s) is not activated (brought to foreground) and no
*      guarantee is given about which document is currently active.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_LoadNoActivate_EMAP(void* p_geo, const char* name);

/**
* Load an EMAP with the view from a current EMAP.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  p2 TODO
* @return New EMAP handle.
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
GX_EXPORT int32_t App_LoadWithView_EMAP(void* p_geo, const char* name, const int32_t* p2);

/**
* This method locks the Edited map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @return EMAP Object to map associated with edited map.
**
* @par Note 
*      The Redraw flag is set to EMAP_REDRAW_YES when this functions is called.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Lock_EMAP(void* p_geo, const int32_t* emap);

/**
* Makes this EMAP object the current active object to the user.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_MakeCurrent_EMAP(void* p_geo, const int32_t* emap);

/**
* Print the current map to current printer.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  entire_map TODO
* @param[in]  scale_to_fit TODO
* @param[in]  print_to_file TODO
* @param[in]  all_pages TODO
* @param[in]  centre TODO
* @param[in]  copies TODO
* @param[in]  first_page TODO
* @param[in]  last_page TODO
* @param[in]  scale_factor TODO
* @param[in]  overlap_size TODO
* @param[in]  offset_x TODO
* @param[in]  offset_y TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Print_EMAP(void* p_geo, const int32_t* emap, const int32_t* entire_map, const int32_t* scale_to_fit, const int32_t* print_to_file, const int32_t* all_pages, const int32_t* centre, const int32_t* copies, const int32_t* first_page, const int32_t* last_page, const double* scale_factor, const int32_t* overlap_size, const int32_t* offset_x, const int32_t* offset_y, const char* file);

/**
* Redraw the map immediately.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
**
* @par Note 
*      Redraws the map immediately. Map must not be locked.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Redraw_EMAP(void* p_geo, const int32_t* emap);

/**
* Select a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  view_group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SelectGroup_EMAP(void* p_geo, const int32_t* emap, const char* view_group);

/**
* Set the redraw flag.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  redraw TODO
**
* @par Note 
*      This function is generally used to prevent redrawing of
*      the map, which normally occurs after the last UnLock_EMAP
*      call, in cases where it is known that no changes are being
*      made to the map.
*      
*      Typical usage would be to call Lock_EMAP followed by
*      SetRedrawFlag_EMAP (with def_val:`EMAP_REDRAW_NO`) prior
*      to querying information from the map. And then end with a call to
*      UnLock_EMAP.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetRedrawFlag_EMAP(void* p_geo, const int32_t* emap, const int32_t* redraw);

/**
* Unloads a MAP.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
**
* @par Note 
*      If the MAP is not loaded, nothing happens.
*      Same as UnLoadVerify_EMAP with FALSE to prompt save.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoad_EMAP(void* p_geo, const char* name);

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
GX_EXPORT void App_UnLoadAll_EMAP(void* p_geo);

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
GX_EXPORT void App_UnLoadVerify_EMAP(void* p_geo, const char* name, const int32_t* prompt);

/**
* This method unlocks the Edited map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLock_EMAP(void* p_geo, const int32_t* emap);

///@}

/**
* @name Input Functions 
*/
///@{

/**
* Returns the coordinates of the currently selected point in view coordinates
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetCurPoint_EMAP(void* p_geo, const int32_t* emap, double* x, double* y);

/**
* Returns the coordinates of the currently selected point in mm on map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetCurPointMM_EMAP(void* p_geo, const int32_t* emap, double* x, double* y);

/**
* Returns the coordinates of the last known cursor location
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetCursor_EMAP(void* p_geo, const int32_t* emap, double* x, double* y);

/**
* Returns the coordinates of the last known cursor location in mm on map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetCursorMM_EMAP(void* p_geo, const int32_t* emap, double* x, double* y);

/**
* Digitise points from the current map and place in a WA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  wa TODO
* @param[in]  img TODO
* @param[in]  digits TODO
* @param[in]  prompt TODO
* @param[in]  prefix TODO
* @param[in]  delim TODO
* @param[in]  newline TODO
* @return 0 if user digitized some points.
* 1 if user cancelled.
**
* @par Note 
*      The command line will start to recieve digitized points
*      from the mouse.  Whenever the left mouse button is
*      pressed, the current view X,Y are placed on the workspace
*      command line.  If a valid IMG is passed, the Z value is
*      also placed on the command line.  If auto-newline is
*      specified, the line is immediately placed into WA,
*      otherwise the user has the oportunity to enter data
*      before pressing Enter.
*      
*      Locations are in the current view user units
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDigitize_EMAP(void* p_geo, const int32_t* emap, const int32_t* wa, const int32_t* img, const int32_t* digits, const char* prompt, const char* prefix, const char* delim, const int32_t* newline);

/**
* Digitise points from the current map and place in VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  vvx TODO
* @param[in]  vvy TODO
* @param[in]  vvz TODO
* @param[in]  img TODO
* @param[in]  prompt TODO
* @param[in]  newline TODO
* @return 0 if user digitized some points.
* 1 if user cancelled.
**
* @par Note 
*      The command line will start to recieve digitized points
*      from the mouse.  Whenever the left mouse button is
*      pressed, the current view X,Y are placed on the workspace
*      command line.  If a valid IMG is passed, the Z value is
*      also placed on the command line.  If auto-newline is
*      specified, the line is immediately placed into the VVs,
*      otherwise the user has the oportunity to enter data
*      before pressing Enter.
*      
*      Locations are in the current view user units
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDigitize2_EMAP(void* p_geo, const int32_t* emap, const int32_t* vvx, const int32_t* vvy, const int32_t* vvz, const int32_t* img, const char* prompt, const int32_t* newline);

/**
* Digitise points from the current map and place in VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  vvx TODO
* @param[in]  vvy TODO
* @param[in]  vvz TODO
* @param[in]  img TODO
* @param[in]  prompt TODO
* @param[in]  newline TODO
* @return 0 if user digitized some points.
* 1 if user cancelled.
**
* @par Note 
*      Same as iDigitize2_EMAP, but the closest peaks to the selected locations are
*      returned instead of the selected location. The method chooses the highest value
*      of the 8 surrounding points, the repeats this process until no higher value can
*      be found in any of the 8 surrounding points. If there are two or more points with
*      a higher value, it will just take the first one and continue, and this method will
*      stall on flat areas as well (since no surrounding point is larger).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT int32_t App_iDigitizePeaks_EMAP(void* p_geo, const int32_t* emap, const int32_t* vvx, const int32_t* vvy, const int32_t* vvz, const int32_t* img, const char* prompt, const int32_t* newline);

/**
* Same as iDigitze2_EMAP, but automatically close polygons.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  vvx TODO
* @param[in]  vvy TODO
* @param[in]  vvz TODO
* @param[in]  img TODO
* @param[in]  prompt TODO
* @param[in]  newline TODO
* @param[in]  pixel_radius TODO
* @return 0 if user digitized some points.
* 1 if user cancelled.
**
* @par Note 
*      This is the same as iDigitize2_EMAP, except that it automatically
*      detects, (except for the 2nd and 3rd points) when a selected location
*      is within the entered number of pixels from the starting point. If yes,
*      the polygon is assumed to be closed, and the operation is the same as
*      the RMB "done" command, and the process returns 0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDigitizePolygon_EMAP(void* p_geo, const int32_t* emap, const int32_t* vvx, const int32_t* vvy, const int32_t* vvz, const int32_t* img, const char* prompt, const int32_t* newline, const int32_t* pixel_radius);

/**
* Returns the coordinates of a user selected box.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @return 0 if point returned.
* 1 if user cancelled.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetBox_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Returns the coordinates of a user selected box in a warped view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] x1 TODO
* @param[out] y1 TODO
* @param[out] x2 TODO
* @param[out] y2 TODO
* @param[out] x3 TODO
* @param[out] y3 TODO
* @param[out] x4 TODO
* @param[out] y4 TODO
* @return 0 if point returned.
* 1 if user cancelled.
**
* @par Note 
*      If the data view has a rotational (or other) warp, then the
*      iGetBox_EMAP function returns only opposite diagonal points in the
*      box, not enough info to determine the other two corners. This
*      function returns the exact coordinates of all four corners, calculated
*      from the pixel locations.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetBox2_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* x1, double* y1, double* x2, double* y2, double* x3, double* y3, double* x4, double* y4);

/**
* Position and size a grid on a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[in]  nx TODO
* @param[in]  ny TODO
* @param[out] angle TODO
* @param[out] x1 TODO
* @param[out] y1 TODO
* @param[out] x_len TODO
* @param[out] y_len TODO
* @return 0 if line returned.
* 1 if user cancelled.
**
* @par Note 
*      If the input angle is rDUMMY, an extra step is inserted
*      for the user to define the angle by drawing a line
*      with the mouse.
*      The output primary axis angle will always be in the
*      range -90 < angle <= 90. The grid origin is shifted to
*      whichever corner necessary to make this possible, while keeping
*      the secondary axis at 90 degrees greater than the primary (
*      going counter-clockwise).
*      The coordinates are returned in the current User projection
*      (See GetUserIPJ_MVIEW and SetUserIPJ_MVIEW.)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetGrid_EMAP(void* p_geo, const int32_t* emap, const char* str_val, const int32_t* nx, const int32_t* ny, double* angle, double* x1, double* y1, double* x_len, double* y_len);

/**
* Returns the end points of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @return 0 if line returned.
* 1 if user cancelled.
**
* @par Note 
*      The coordinates are returned in the current User projection
*      (See GetUserIPJ_MVIEW and SetUserIPJ_MVIEW.)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetLine_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Returns the end points of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @return 0 if line returned.
* 1 - Right Mouse
* 2 - Escape/Cancel
**
* @par Note 
*      The coordinates are returned in the current User projection
*      (See GetUserIPJ_MVIEW and SetUserIPJ_MVIEW.)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetLineEx_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Returns the end points of a line in X,Y and Z
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
* @return 0 if line returned.
* 1 - Right Mouse
* 2 - Escape/Cancel
**
* @par Note 
*      The coordinates are returned in the current User projection
*      (See GetUserIPJ_MVIEW and SetUserIPJ_MVIEW.)
*      This is useful for digitizing a line in an oriented view and getting
*      the true coordinates in (X, Y, Z) at the selected point on the view plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetLineXYZ_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z);

/**
* Returns the coordinates of a user selected point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] x TODO
* @param[out] y TODO
* @return 0 if point returned.
* 1 if user cancelled.
**
* @par Note 
*      This will wait for user to select a point.
*
* @par See also 
*      iTrackPoint, GetCurPoint, GetCursor
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetPoint_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* x, double* y);

/**
* Returns the coordinates of a user selected point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] x TODO
* @param[out] y TODO
* @return 0 if point returned.
* 1 if user used right mouse and then Done.
* 2 if user cancelled.
* 3 if capture is lost.
**
* @par Note 
*      This will wait for user to select a point.
*
* @par See also 
*      iTrackPoint, GetCurPoint, GetCursor
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetPointEx_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* x, double* y);

/**
* Returns the coordinates of a user selected point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @return 0 if point returned.
* 1 if user used right mouse and then Done.
* 2 if user cancelled.
* 3 if capture is lost.
**
* @par Note 
*      This will wait for user to select a point.
*
* @par See also 
*      iTrackPoint, GetCurPoint, GetCursor
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.1
*/
GX_EXPORT int32_t App_iGetPoint3D_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* x, double* y, double* z);

/**
* Returns a polyline.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @return 0 if line returned.
* 1 if user cancelled.
**
* @par Note 
*      The coordinates are returned in the current User projection
*      (See GetUserIPJ_MVIEW and SetUserIPJ_MVIEW.)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetPolyLine_EMAP(void* p_geo, const int32_t* emap, const char* str_val, const int32_t* vv_x, const int32_t* vv_y);

/**
* Returns a polyline.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @return 0 if line returned.
* 1 if user cancelled.
**
* @par Note 
*      The coordinates are returned in the current User projection
*      (See GetUserIPJ_MVIEW and SetUserIPJ_MVIEW.) In this version
*      of the method X, Y and Z (depth) are returned. Initially created
*      to deal with crooked sections.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetPolyLineXYZ_EMAP(void* p_geo, const int32_t* emap, const char* str_val, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Returns the coordinates of a user selected box starting at a corner.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  str_val TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @return 0 if point returned.
* 1 if user cancelled.
**
* @par Note 
*      The coordinates are returned in the current User projection
*      (See GetUserIPJ_MVIEW and SetUserIPJ_MVIEW.)
*      If the user IPJ distorts the coordinates from being rectilinear
*      (e.g. for a TriPlot graph), then care should be taken since the
*      (Xmin, Ymin) and (Xmax, Ymax) values returned do not necessarily
*      correspond to the lower-left and upper-right corners. In fact, the
*      returned values are calculated by taking the starting (fixed) corner
*      and the tracked (opposite) corner, and finding the min and max for
*      X and Y among these two points. With a warped User projection, those
*      two corner locations could easily be (Xmin, Ymax) and (Xmax, Ymin).
*      This becomes quite important if you want to use the rectangle for a
*      masking operation, because the "other" two corner's coordinates may
*      need to be constructed based on a knowledge of the User projection,
*      and may not be directly obtained from the returned X and Y min and
*      max values. What appears to be a rectangle as seen on the map is not
*      necessarily a rectangle in the User coordinates.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetRect_EMAP(void* p_geo, const int32_t* emap, const char* str_val, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Get point without prompt or cursor change with tracking
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
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
GX_EXPORT int32_t App_iTrackPoint_EMAP(void* p_geo, const int32_t* emap, const int32_t* flags, double* x, double* y);

///@}

/**
* @name Map Viewport Mode Methods Functions 
*/
///@{

/**
* Get the area of interest.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      Coordinates are based on the current view units.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetAOIArea_EMAP(void* p_geo, const int32_t* emap, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Set the area of interest.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
**
* @par Note 
*      Coordinates are based on the current view user units.
*      The map is immediatly redrawn.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetAOIArea_EMAP(void* p_geo, const int32_t* emap, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Set the viewport mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  mode TODO
**
* @par Note 
*      This is handy for using a map to define an area of interest. Use in conjunction
*      with Get/Set AOIArea. If this is used inside montaj it is important to set or provide
*      for a method to set the map mode back to normal as this is not exposed in the interface.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetViewportMode_EMAP(void* p_geo, const int32_t* emap, const int32_t* mode);

///@}

/**
* @name Tracking Methods Functions 
*/
///@{

/**
* Get the verticies of selected object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  emap TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      Works only in Vertex Edit Mode
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetSelectedVertices_EMAP(void* p_geo, const int32_t* emap, const int32_t* vv_x, const int32_t* vv_y);

///@}

/**
* @name Virtual Functions 
*/
///@{

/**
* Makes this EMAP object the current active object to the user.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return EMAP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_CreateVirtual_EMAP(void* p_geo, const char* name);

///@}

/**
* @name External Window Functions 
*/
///@{

/**
* Version of Load_EMAP that can be used to load a database via subclassing into a Windows control.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map_file TODO
* @param[in]  window TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LoadControl_EMAP(void* p_geo, const char* map_file, HWND window);

/**
* Version of LoadWithView_EDB that can be used to load a database via subclassing into a Windows control.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map_file TODO
* @param[in]  emap TODO
* @param[in]  window TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LoadWithViewControl_EMAP(void* p_geo, const char* map_file, const int32_t* emap, HWND window);

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
