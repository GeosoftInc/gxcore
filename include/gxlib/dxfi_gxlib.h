//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file dxfi_gxlib.h
* @date 2017-11-06
* @brief File containing DXFI GX C API constant and function declarations
*/

/**
* @defgroup DXFI_Module DXFI
* The DXFI class is used for importing AutoCAD® dxf files into Geosoft maps.
* @{
*/

#pragma once
#ifndef HDXFI_H_DEFINED
#define HDXFI_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code



/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create DXFI.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return DXFI Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_DXFI(void* p_geo, const char* name);

/**
* Destroy a DXFI handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dxfi TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_DXFI(void* p_geo, const int32_t* dxfi);

/**
* Convert a DXF file to a PLY object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ply TODO
* @param[in]  dxfi TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DXF2PLY_DXFI(void* p_geo, const int32_t* ply, const int32_t* dxfi);

/**
* Draw entities in a DXF file to a view in a map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dxfi TODO
* @param[in]  view TODO
* @param[in]  max_pen TODO
* @param[in]  pb_group TODO
* @param[in]  group TODO
* @param[in]  pb_one_color TODO
* @param[in]  color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void DXF2ViewEx_DXFI(void* p_geo, const int32_t* dxfi, const int32_t* view, const int32_t* max_pen, const int32_t* pb_group, const char* group, const int32_t* pb_one_color, const int32_t* color);

/**
* Get DXF data range
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dxfi TODO
* @param[out] min_x TODO
* @param[out] max_x TODO
* @param[out] min_y TODO
* @param[out] max_y TODO
* @param[out] min_z TODO
* @param[out] max_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetRange_DXFI(void* p_geo, const int32_t* dxfi, double* min_x, double* max_x, double* min_y, double* max_y, double* min_z, double* max_z);

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
