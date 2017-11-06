//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file proj_gxlib.h
* @date 2017-11-06
* @brief File containing PROJ GX C API constant and function declarations
*/

/**
* @defgroup PROJ_Module PROJ
* Project functions
* @{
*/

#pragma once
#ifndef HPROJ_H_DEFINED
#define HPROJ_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name COMMAND_ENV Definitions
* 
* Command environments
*/
///@{
/** 
* COMMAND_ENV_NORMAL
* 
* Normal
*/
#define COMMAND_ENV_NORMAL 0
/** 
* COMMAND_ENV_IN3DVIEWER
* 
* Executing from inside 3D Viewer
*/
#define COMMAND_ENV_IN3DVIEWER 1
///@}

/**
* @name TOOL_TYPE Definitions
* 
* Tool type defines
*/
///@{
/** 
* TOOL_TYPE_DEFAULT
* 
* Geosoft created default tools
*/
#define TOOL_TYPE_DEFAULT 0
/** 
* TOOL_TYPE_AUXILIARY
* 
* Auxiliary tools (including custom XTools)
*/
#define TOOL_TYPE_AUXILIARY 1
/** 
* TOOL_TYPE_ALL
* 
* All tools
*/
#define TOOL_TYPE_ALL 2
///@}

/**
* @name PROJ_DISPLAY Definitions
* 
* How to display an object
*/
///@{
/** 
* PROJ_DISPLAY_NO
* 
* Do not display the object
*/
#define PROJ_DISPLAY_NO 0
/** 
* PROJ_DISPLAY_YES
* 
* Display the object unless user set option not to
*/
#define PROJ_DISPLAY_YES 1
/** 
* PROJ_DISPLAY_ALWAYS
* 
* Always display the object
*/
#define PROJ_DISPLAY_ALWAYS 2
///@}


/**
* @name Drag-and-drop methods Functions 
*/
///@{

/**
* Drop Map clipboard data in the current project (workspace background)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hglobal TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DropMapClipData_PROJ(void* p_geo, const int32_t* hglobal);

///@}

/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Adds (and opens) a document file in the current project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
* @param[in]  display TODO
* @return 0 - Ok
* 1 - Error
**
* @par Note 
*      The passed file name must be a valid
*      file name complete with an extension and
*      qualifiers (if applicable).
*      
*      The type string can be one of the following:
*      
*          Database      
*          Grid          
*          Map           
*          3DView        
*          Voxel         
*          VoxelInversion
*          GMS3D         
*          GMS2D
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iAddDocument_PROJ(void* p_geo, const char* name, const char* type, const int32_t* display);

/**
* Adds (and opens) a document file in the current project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
* @return 0 - Ok
* 1 - Error
**
* @par Note 
*      The passed file name must be a valid
*      file name complete with an extension and
*      qualifiers (if applicable).
*      
*      The type string can be one of the following:
*      
*          Database      
*          Grid          
*          Map           
*          3DView        
*          Voxel         
*          VoxelInversion
*          GMS3D         
*          GMS2D
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 8.5
*/
GX_EXPORT int32_t App_iAddDocumentWithoutOpening_PROJ(void* p_geo, const char* name, const char* type);

/**
* The current command environment
*
* @param[in]  p_geo GX Context Pointer
* @return COMMAND_ENV
* 
* Notes									We are moving towards embedded tools and menus and this setting can be
* queried from the project to determine how specific commands should react.
* Only 3D viewer is currently making use of this.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetCommandEnvironment_PROJ(void* p_geo);

/**
* Fills a VV with documents of a certain type.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gvv TODO
* @param[in]  type TODO
* @return The number of documents listed in the VV.
**
* @par Note 
*      The type string can be one of the following:
*      Database         List Databases.
*      Grid             List Grids.
*      Map              List Maps.
*      3DView           List 3D Views.
*      Voxel            List Voxels.
*      VoxelInversion   List VOXI Documents.
*      MXD              List ArcGIS MXDs.
*      GMS3D            List GM-SYS 3D Models.
*      GMS2D            List GM-SYS 2D Models.
*      All              Lists all files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iListDocuments_PROJ(void* p_geo, const int32_t* gvv, const char* type);

/**
* Fills a VV with loaded documents of a certain type.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gvv TODO
* @param[in]  type TODO
* @return The number of loaded documents listed in the VV.
**
* @par Note 
*      The type string can be one of the following:
*      Database         List Databases.
*      Grid             List Grids.
*      Map              List Maps.
*      3DView           List 3D Views.
*      Voxel            List Voxels.
*      VoxelInversion   List VOXI Documents.
*      MXD              List ArcGIS MXDs.
*      GMS3D            List GM-SYS 3D Models.
*      GMS2D            List GM-SYS 2D Models.
*      All              Lists all files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.2
*/
GX_EXPORT int32_t App_iListLoadedDocuments_PROJ(void* p_geo, const int32_t* gvv, const char* type);

/**
* Get the name and type of the loaded document with focus.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] name TODO
* @param[in]  size_name TODO
* @param[out] type TODO
* @param[in]  size_type TODO
* @return Nothing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.2
*/
GX_EXPORT void App_ICurrentDocument_PROJ(void* p_geo, char* name, const int32_t* size_name, char* type, const int32_t* size_type);

/**
* Get the name of a loaded document of a specific type.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] name TODO
* @param[in]  size_name TODO
* @param[in]  type TODO
* @return Nothing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.2
*/
GX_EXPORT void App_ICurrentDocumentOfType_PROJ(void* p_geo, char* name, const int32_t* size_name, const char* type);

/**
* Fills an LST object with tools of a certain type and
* notes the current visibility setting.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @return The number of tools found.
**
* @par Note 
*      GX will terminate if there is an error.
*      
*      LST object will hold the tool name in the name column and
*      include whether the tool is currently visible in the value
*      column (1=visible, 0-hidden).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iListTools_PROJ(void* p_geo, const int32_t* lst, const int32_t* type);

/**
* Removes (and closes if visible) a document from the current project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return 0 - Ok
* 1 - Document not found in project
**
* @par Note 
*      The passed file name must be a valid
*      file name complete with an extension and
*      qualifiers (if applicable).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iRemoveDocument_PROJ(void* p_geo, const char* name);

/**
* Removes (and closes if visible) a auxiliary tool from the current project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return 0 - Ok
* 1 - Tool not found in project
**
* @par Note 
*      Nothing
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iRemoveTool_PROJ(void* p_geo, const char* name);

/**
* Saves and closes (if visible) documents contained in the current project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @return 0  - Ok
* -1 - User hit cancel in save dialog
* 1  - Error
**
* @par Note 
*      This wrapper brings up the save dialog tool to allow
*      the user to save the modified documents for this project.
*      Only documents that have actually changed will be listed.
*      
*      The type string can be one of the following:
*      
*          Database      
*          Grid          
*          Map           
*          3DView        
*          Voxel         
*          VoxelInversion
*          GMS3D         
*          GMS2D
*          All
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iSaveCloseDocuments_PROJ(void* p_geo, const char* type);

/**
* Return the name of the project file.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] name TODO
* @param[in]  size TODO
* @return Nothing.
**
* @par Note 
*      Return the name of the project file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 8.4
*/
GX_EXPORT void App_IGetName_PROJ(void* p_geo, char* name, const int32_t* size);

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
