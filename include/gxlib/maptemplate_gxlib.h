//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file maptemplate_gxlib.h
* @date 2017-11-06
* @brief File containing MAPTEMPLATE GX C API constant and function declarations
*/

/**
* @defgroup MAPTEMPLATE_Module MAPTEMPLATE
* A MAPTEMPLATE wraps and provides manipulation and usage for the XML content in map template files.
* See the annotated schema file maptemplate.xsd in the <GEOSOFT>\maptemplate folder and the accompanying
* documentation in that folder for documentation on the file format.
* @{
*/

#pragma once
#ifndef HMAPTEMPLATE_H_DEFINED
#define HMAPTEMPLATE_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name MAPTEMPLATE_OPEN Definitions
* 
* Open Modes
*/
///@{
/** 
* MAPTEMPLATE_WRITENEW
* 
* Create new empty map template (will overwrite existing files)
*/
#define MAPTEMPLATE_WRITENEW 0
/** 
* MAPTEMPLATE_EXIST
* 
* Create from existing template on disk
*/
#define MAPTEMPLATE_EXIST 1
///@}


/**
* @name Content Manipulation Methods Functions 
*/
///@{

/**
* Get a temporary XML file for manipulation of the map template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
* @param[out] tmp TODO
* @param[in]  length TODO
**
* @par Note 
*      After manipulating contents the object may be updated by a call to
*      the UpdateFromTmpCopy method.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void GetTmpCopy_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate, char* tmp, const int32_t* length);

/**
* Update the object contents from a temporary XML file that may have bee manipulated externally.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
* @param[in]  tmp TODO
**
* @par Note 
*      This method will not modify the original contents of the file until a call to the
*      the Commit method is made or the object is destroyed. A call to the Discard method
*      will restore the contents to that of the original file. The temporary file is not deleted
*      and should be to not leak file resources.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void UpdateFromTmpCopy_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate, const char* tmp);

///@}

/**
* @name File Methods Functions 
*/
///@{

/**
* Commit any changes to the map template to disk
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void Commit_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate);

/**
* Create a MAPTEMPLATE from an existing file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  base TODO
* @param[in]  mode TODO
* @return MAPTEMPLATE Object
**
* @par Note 
*      The base template name should be the file name part of a geosoft_maptemplate
*      file in the <geosoft>\maptemplate or <geosoftuser>\maptemplate folders. A base file
*      in the user folder will override any in the Geosoft install dir.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t Create_MAPTEMPLATE(void* p_geo, const char* name, const char* base, const int32_t* mode);

/**
* Destroy the MAPTEMPLATE handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
**
* @par Note 
*      All changes to the MAPTEMPLATE will be committed if it is not read-only.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Destroy_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate);

/**
* Discard all changes made to the map template and reload from disk.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void Discard_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate);

/**
* Get the file name of the map template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void GetFileName_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate, char* name, const int32_t* length);

///@}

/**
* @name Map Making Functions 
*/
///@{

/**
* Create a map from the map template
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
* @param[in]  map TODO
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void CreateMap_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate, const char* map, const char* group);

///@}

/**
* @name Render/Preview Functions 
*/
///@{

/**
* Refresh the map template with any newly saved items
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void Refresh_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate);

/**
* Create a preview of the map template onto a
* Windows DC handle
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
* @param[in]  hdc TODO
* @param[in]  left TODO
* @param[in]  bottom TODO
* @param[in]  right TODO
* @param[in]  top TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void RenderPreview_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate, HDC hdc, const int32_t* left, const int32_t* bottom, const int32_t* right, const int32_t* top);

/**
* Render a preview for map sheet production purposes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  maptemplate TODO
* @param[in]  hdc TODO
* @param[out] left TODO
* @param[out] bottom TODO
* @param[out] right TODO
* @param[out] top TODO
**
* @par Note 
*      This method can also be used to get the data view pixel location
*      by passing a null DC handle. This help to plot the view contents
*      preview from another location.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.4
*/
GX_EXPORT void RenderPreviewMapProduction_MAPTEMPLATE(void* p_geo, const int32_t* maptemplate, HDC hdc, int32_t* left, int32_t* bottom, int32_t* right, int32_t* top);

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
