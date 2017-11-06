//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file datamine_gxlib.h
* @date 2017-11-06
* @brief File containing DATAMINE GX C API constant and function declarations
*/

/**
* @defgroup DATAMINE_Module DATAMINE
* DATAMINE functions provide an interface to Datamine Software Limited files.
* See also GIS for various other Datamine-specific functions.
*
* Notes:
*
* None.
*
* @{
*/

#pragma once
#ifndef HDATAMINE_H_DEFINED
#define HDATAMINE_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name GIS_DMTYPE Definitions
* 
* Datamine file types
*/
///@{
/** 
* GIS_DMTYPE_STRING
*/
#define GIS_DMTYPE_STRING 2
/** 
* GIS_DMTYPE_WIREFRAME_TR
*/
#define GIS_DMTYPE_WIREFRAME_TR 8
/** 
* GIS_DMTYPE_DTM
*/
#define GIS_DMTYPE_DTM 16
/** 
* GIS_DMTYPE_BLOCKMODEL
*/
#define GIS_DMTYPE_BLOCKMODEL 32
/** 
* GIS_DMTYPE_WIREFRAME_PT
*/
#define GIS_DMTYPE_WIREFRAME_PT 64
/** 
* GIS_DMTYPE_POINTDATA
*/
#define GIS_DMTYPE_POINTDATA 1024
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a Geosoft Voxel file from a Datamine block model file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  field TODO
* @param[in]  ipj TODO
* @param[in]  meta TODO
* @param[in]  voxel TODO
**
* @par Note 
*      Create a Geosoft Voxel file from a Datamine block model file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void CreateVoxel_DATAMINE(void* p_geo, const char* file, const char* field, const int32_t* ipj, const int32_t* meta, const char* voxel);

/**
* Return a LST containing the non-standard numeric fields in a Datamine file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  lst TODO
**
* @par Note 
*      At this time, only GIS_DMTYPE_BLOCKMODEL files are supported.
*      The field names go in the name part, and field indices (1 to N)
*      in the value part.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void NumericFieldLST_DATAMINE(void* p_geo, const char* file, const int32_t* lst);

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
