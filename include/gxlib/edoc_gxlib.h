//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file edoc_gxlib.h
* @date 2017-11-06
* @brief File containing EDOC GX C API constant and function declarations
*/

/**
* @defgroup EDOC_Module EDOC
* The EDOC class provides access to a generic documents views as loaded within
* Oasis montaj.
* @{
*/

#pragma once
#ifndef HEDOC_H_DEFINED
#define HEDOC_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name EDOC_PATH Definitions
* 
* Four forms
*/
///@{
/** 
* EDOC_PATH_FULL
* 
* d:\directory\file.gdb
*/
#define EDOC_PATH_FULL 0
/** 
* EDOC_PATH_DIR
* 
* \directory\file.gdb
*/
#define EDOC_PATH_DIR 1
/** 
* EDOC_PATH_NAME_EXT
* 
* file.gdb
*/
#define EDOC_PATH_NAME_EXT 2
/** 
* EDOC_PATH_NAME
* 
* file
*/
#define EDOC_PATH_NAME 3
///@}

/**
* @name EDOC_TYPE Definitions
* 
* Avaialable generic document types
*/
///@{
/** 
* EDOC_TYPE_GMS3D
* 
* GMSYS 3D Model
*/
#define EDOC_TYPE_GMS3D 0
/** 
* EDOC_TYPE_VOXEL
* 
* Voxel
*/
#define EDOC_TYPE_VOXEL 1
/** 
* EDOC_TYPE_VOXEL_INVERSION
* 
* Voxel Inversion
*/
#define EDOC_TYPE_VOXEL_INVERSION 2
/** 
* EDOC_TYPE_GMS2D
* 
* GMSYS 2D Model
*/
#define EDOC_TYPE_GMS2D 3
///@}

/**
* @name EDOC_UNLOAD Definitions
* 
* What type of prompt
*/
///@{
/** 
* EDOC_UNLOAD_NO_PROMPT
*/
#define EDOC_UNLOAD_NO_PROMPT 0
/** 
* EDOC_UNLOAD_PROMPT
*/
#define EDOC_UNLOAD_PROMPT 1
///@}

/**
* @name EDOC_WINDOW_POSITION Definitions
* 
* Window Positioning Options
*/
///@{
/** 
* EDOC_WINDOW_POSITION_DOCKED
*/
#define EDOC_WINDOW_POSITION_DOCKED 0
/** 
* EDOC_WINDOW_POSITION_FLOATING
*/
#define EDOC_WINDOW_POSITION_FLOATING 1
///@}

/**
* @name EDOC_WINDOW_STATE Definitions
* 
* Window State Options
*/
///@{
/** 
* EDOC_WINDOW_RESTORE
*/
#define EDOC_WINDOW_RESTORE 0
/** 
* EDOC_WINDOW_MINIMIZE
*/
#define EDOC_WINDOW_MINIMIZE 1
/** 
* EDOC_WINDOW_MAXIMIZE
*/
#define EDOC_WINDOW_MAXIMIZE 2
///@}

/**
* @name GMS3D_MODELTYPE Definitions
* 
* Avaialable model types
*/
///@{
/** 
* GMS3D_MODELTYPE_DEPTH
* 
* Depth Model
*/
#define GMS3D_MODELTYPE_DEPTH 0
/** 
* GMS3D_MODELTYPE_TIME
* 
* Time Model
*/
#define GMS3D_MODELTYPE_TIME 1
///@}

/**
* @name GMS2D_MODELTYPE Definitions
* 
* Avaialable model types
*/
///@{
/** 
* GMS2D_MODELTYPE_DEPTH
* 
* Depth Model
*/
#define GMS2D_MODELTYPE_DEPTH 0
/** 
* GMS2D_MODELTYPE_TIME
* 
* Time Model
*/
#define GMS2D_MODELTYPE_TIME 1
///@}


/**
* @name GMSYS 3D Models Functions 
*/
///@{

/**
* Creates a new GMSYS 3D Model into the workspace, flags as new.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  nx TODO
* @param[in]  ny TODO
* @param[in]  type TODO
* @return Handle to the newly created edited model.
**
* @par Note 
*      See Load_EDOC. This is used for brand new documents, it also sets
*      an internal flag such that if on closing the user chooses
*      not to save changes, the document is deleted thus keeping the
*      project folders clean.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_CreateNewGMS3D_EDOC(void* p_geo, const char* name, const int32_t* nx, const int32_t* ny, const int32_t* type);

///@}

/**
* @name Miscellaneous Functions 
*/
///@{

/**
* This method returns the Current Edited Document.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @return EDOC Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Current_EDOC(void* p_geo, const int32_t* type);

/**
* This method returns the Current Edited Document.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @return EDOC Object
**
* @par Note 
*      This function acts just like Current_EDOC except that the document is not activated (brought to foreground) and no
*      				guarantee is given about which document is currently active.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT int32_t App_CurrentNoActivate_EDOC(void* p_geo, const int32_t* type);

/**
* This method returns the Current Edited Document.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @return EDOC Object to current edited document. If there is no current document,
* the user is not prompted for a document, and 0 is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_CurrentIfExists_EDOC(void* p_geo, const int32_t* type);

/**
* Destroy EDOC handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
**
* @par Note 
*      This does not unload the document; it simply deletes the gx resource handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Destroy_EDOC(void* p_geo, const int32_t* val);

/**
* Load the file names of open documents into a LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  path TODO
* @param[in]  type TODO
* @return The number of documents loaded into the LST.
* The LST is cleared first.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetDocumentsLST_EDOC(void* p_geo, const int32_t* lst, const int32_t* path, const int32_t* type);

/**
* Get the name of the document object of this EDOC.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edoc TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_IGetName_EDOC(void* p_geo, const int32_t* edoc, char* name, const int32_t* size);

/**
* Retrieve the current state of the document window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edoc TODO
* @return EDOC_WINDOW_STATE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetWindowState_EDOC(void* p_geo, const int32_t* edoc);

/**
* Returns true if a document is loaded
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iHaveCurrent_EDOC(void* p_geo, const int32_t* type);

/**
* Returns 1 if a document is loaded .
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
* @return 1 if document is loaded, 0 otherwise.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iLoaded_EDOC(void* p_geo, const char* name, const int32_t* type);

/**
* Get the map window's position and dock state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edoc TODO
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
GX_EXPORT void App_GetWindowPosition_EDOC(void* p_geo, const int32_t* edoc, int32_t* left, int32_t* top, int32_t* right, int32_t* bottom, int32_t* state, int32_t* is_floating);

/**
* Get the map window's position and dock state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edoc TODO
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
GX_EXPORT void App_SetWindowPosition_EDOC(void* p_geo, const int32_t* edoc, const int32_t* left, const int32_t* top, const int32_t* right, const int32_t* bottom, const int32_t* state, const int32_t* is_floating);

/**
* Checks if a document is currently opened in a read-only mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edoc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iReadOnly_EDOC(void* p_geo, const int32_t* edoc);

/**
* Loads a list of documents into the workspace
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
* @return Handle to current edited document, which will be the last
* document in the list.
**
* @par Note 
*      The last listed document will become the current document.
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
GX_EXPORT int32_t App_Load_EDOC(void* p_geo, const char* name, const int32_t* type);

/**
* Loads a list of documents into the workspace
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
* @return Handle to current edited document, which will be the last
* document in the list.
**
* @par Note 
*      This function acts just like Load_EDOC except that the document(s) is not activated (brought to foreground) and no
*      					guarantee is given about which document is currently active.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT int32_t App_LoadNoActivate_EDOC(void* p_geo, const char* name, const int32_t* type);

/**
* Makes this EDOC object the current active object to the user.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edoc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_MakeCurrent_EDOC(void* p_geo, const int32_t* edoc);

/**
* Changes the state of the document window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edoc TODO
* @param[in]  state TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetWindowState_EDOC(void* p_geo, const int32_t* edoc, const int32_t* state);

/**
* Syncronize the Metadata of a document that is not currently open
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Sync_EDOC(void* p_geo, const char* file, const int32_t* type);

/**
* Syncronize the Metadata of a document
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edoc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SyncOpen_EDOC(void* p_geo, const int32_t* edoc);

/**
* Unloads an edited document.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
**
* @par Note 
*      If the document is not loaded, nothing happens.
*      Same as UnLoadVerify_EDOC with FALSE to prompt save.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoad_EDOC(void* p_geo, const char* name, const int32_t* type);

/**
* Unloads all opened documents
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadAll_EDOC(void* p_geo, const int32_t* type);

/**
* Unloads a document in the workspace, discards changes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
**
* @par Note 
*      If the document is not loaded, nothing happens.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadDiscard_EDOC(void* p_geo, const char* name, const int32_t* type);

/**
* Unloads an edited document, optional prompt to save.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  verify TODO
* @param[in]  type TODO
**
* @par Note 
*      If the document is not loaded, nothing happens.
*      The user can be prompted to save before unloading.
*      If EDOC_UNLOAD_NO_PROMPT, data is always saved.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_UnLoadVerify_EDOC(void* p_geo, const char* name, const int32_t* verify, const int32_t* type);

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
