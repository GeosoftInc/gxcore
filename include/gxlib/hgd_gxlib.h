//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file hgd_gxlib.h
* @date 2017-11-06
* @brief File containing HGD GX C API constant and function declarations
*/

/**
* @defgroup HGD_Module HGD
* High Performance Grid. Designed to place grid data
* on a DAP server. It produces a multi-resolution
* compressed object that supports multi-threading and
* allows for high-speed extraction of data at any
* resolution.
* @{
*/

#pragma once
#ifndef HHGD_H_DEFINED
#define HHGD_H_DEFINED

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
* Create a handle to an HGD object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return HGD handle, terminates if creation fails
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT int32_t Create_HGD(void* p_geo, const char* name);

/**
* Destroy a HGD.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hgd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void Destroy_HGD(void* p_geo, const int32_t* hgd);

/**
* Export all layers of this HGD into grid files.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hgd TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT void ExportIMG_HGD(void* p_geo, const int32_t* hgd, const char* name);

/**
* Get the metadata of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hgd TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void GetMETA_HGD(void* p_geo, const int32_t* hgd, const int32_t* meta);

/**
* Make an HGD from an IMG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  name TODO
* @return HGD Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT int32_t hCreateIMG_HGD(void* p_geo, const int32_t* img, const char* name);

/**
* Set the metadata of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hgd TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void SetMETA_HGD(void* p_geo, const int32_t* hgd, const int32_t* meta);

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
