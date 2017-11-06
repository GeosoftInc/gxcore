//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file 3dv_gxlib.h
* @date 2017-11-06
* @brief File containing 3DV GX C API constant and function declarations
*/

/**
* @defgroup 3DV_Module 3DV
* TODO...
* @{
*/

#pragma once
#ifndef H3DV_H_DEFINED
#define H3DV_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name GEO3DV_OPEN Definitions
* 
* Open Modes
*/
///@{
/** 
* GEO3DV_MVIEW_READ
*/
#define GEO3DV_MVIEW_READ 0
/** 
* GEO3DV_MVIEW_WRITEOLD
*/
#define GEO3DV_MVIEW_WRITEOLD 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Open 3DV's 3D MVIEW
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dv TODO
* @param[in]  mode TODO
* @return MVIEW, aborts on failure
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t OpenMVIEW_3DV(void* p_geo, const int32_t* o3dv, const int32_t* mode);

/**
* Copy the 3DV's 3D MVIEW into a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dv TODO
* @param[in]  map TODO
* @param[in]  mview TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  force_overwrite TODO
* @param[out] new_view TODO
* @param[in]  new_view_size TODO
* @param[out] problem_files TODO
* @param[in]  problem_files_size TODO
**
* @par Note 
*      A 3DV packs all source files. This functions creates an unpacked map and
*      unpacks the packed files in the same way that UnPackFilesEx in the MAP class does.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void ICopyToMAP_3DV(void* p_geo, const int32_t* o3dv, const int32_t* map, const char* mview, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* force_overwrite, char* new_view, const int32_t* new_view_size, char* problem_files, const int32_t* problem_files_size);

/**
* Create a new 3DV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file_name TODO
* @param[in]  mview TODO
* @return 3DV Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t CreateNew_3DV(void* p_geo, const char* file_name, const int32_t* mview);

/**
* Open an existing 3DV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file_name TODO
* @return 3DV Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t Open_3DV(void* p_geo, const char* file_name);

/**
* Get an 3DV from MAP handle (e.g. from Lock_EMAP on open geosoft_3dv document in project)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return 3DV Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT int32_t FromMap_3DV(void* p_geo, const int32_t* map);

/**
* Generate an XML CRC of a 3DV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dv TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void CRC3DV_3DV(void* p_geo, const int32_t* o3dv, int32_t* crc, const char* file);

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
