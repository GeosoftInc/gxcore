//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file mxd_gxlib.h
* @date 2017-11-06
* @brief File containing MXD GX C API constant and function declarations
*/

/**
* @defgroup MXD_Module MXD
* A MXD wraps and provides manipulation and usage for
* the content of an ArcGIS MXD file.
* @{
*/

#pragma once
#ifndef HMXD_H_DEFINED
#define HMXD_H_DEFINED

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
* Create metadata for this brand new MXD (we are the creator)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mxd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void CreateMetadata_MXD(void* p_geo, const char* mxd);

/**
* Create Geosoft map from ArcGIS MXD
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mxd TODO
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.0
*/
GX_EXPORT void ConvertToMap_MXD(void* p_geo, const char* mxd, const char* map);

/**
* Syncronize any Metadata for this MXD
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mxd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void Sync_MXD(void* p_geo, const char* mxd);

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
