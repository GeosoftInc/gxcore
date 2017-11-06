//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file datalinkd_gxlib.h
* @date 2017-11-06
* @brief File containing DATALINKD GX C API constant and function declarations
*/

/**
* @defgroup DATALINKD_Module DATALINKD
* DATALINK Display object.
* @{
*/

#pragma once
#ifndef HDATALINKD_H_DEFINED
#define HDATALINKD_H_DEFINED

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
* Create an DATALINKD object from a ArcGIS LYR file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arc_lyr_file TODO
* @return DATALINKD handle, terminates if creation fails
**
* @par Note 
*      Needs ArcEngine licence.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.4
*/
GX_EXPORT int32_t CreateArcLYR_DATALINKD(void* p_geo, const char* arc_lyr_file);

/**
* Create an DATALINKD object from a ArcGIS LYR file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arc_lyr_file TODO
* @param[in]  o3d_group TODO
* @return DATALINKD handle, terminates if creation fails
**
* @par Note 
*      Needs ArcEngine licence.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.0
*/
GX_EXPORT int32_t CreateArcLYREx_DATALINKD(void* p_geo, const char* arc_lyr_file, const int32_t* o3d_group);

/**
* Create an DATALINKD object from a temporary ArcGIS LYR file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arc_lyr_file TODO
* @return DATALINKD handle, terminates if creation fails
**
* @par Note 
*      Needs ArcEngine licence.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t CreateArcLYRFromTMP_DATALINKD(void* p_geo, const char* arc_lyr_file);

/**
* Create an DATALINKD object from a temporary ArcGIS LYR file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arc_lyr_file TODO
* @param[in]  o3d_group TODO
* @return DATALINKD handle, terminates if creation fails
**
* @par Note 
*      Needs ArcEngine licence.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t CreateArcLYRFromTMPEx_DATALINKD(void* p_geo, const char* arc_lyr_file, const int32_t* o3d_group);

/**
* Create an DATALINKD object for a BING dataset
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layer TODO
* @return DATALINKD handle, terminates if creation fails
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT int32_t CreateBING_DATALINKD(void* p_geo, const int32_t* layer);

/**
* Destroy a DATALINKD.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  datalinkd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void Destroy_DATALINKD(void* p_geo, const int32_t* datalinkd);

/**
* Get the data extents of the DATALINK Display object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  datalinkd TODO
* @param[out] min_x TODO
* @param[out] max_x TODO
* @param[out] min_y TODO
* @param[out] max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void GetExtents_DATALINKD(void* p_geo, const int32_t* datalinkd, double* min_x, double* max_x, double* min_y, double* max_y);

/**
* Get the projection of the DATALINK Display object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  datalinkd TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void GetIPJ_DATALINKD(void* p_geo, const int32_t* datalinkd, const int32_t* ipj);

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
