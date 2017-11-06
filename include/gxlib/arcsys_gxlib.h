//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file arcsys_gxlib.h
* @date 2017-11-06
* @brief File containing ARCSYS GX C API constant and function declarations
*/

/**
* @defgroup ARCSYS_Module ARCSYS
* This library is not a class. It contains various general
* system utilities used by the Geosoft extensions for ArcGIS.
* @{
*/

#pragma once
#ifndef HARCSYS_H_DEFINED
#define HARCSYS_H_DEFINED

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
* Get the current catalog browser location in ArcGIS
*
* @param[in]  p_geo GX Context Pointer
* @param[out] path TODO
* @param[in]  size TODO
**
* @par Note 
*      Gets the "local" directory (current catalog browser location in ArcGIS if map has not been saved,
*      otherwise MxD path). We cannot mess with the CWD in ArcGIS because there MxD settings for
*      relative/absolute paths depends on it.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void IGetBrowseLoc_ARCSYS(void* p_geo, char* path, const int32_t* size);

/**
* Get the current Mx Document file name
*
* @param[in]  p_geo GX Context Pointer
* @param[out] path TODO
* @param[in]  size TODO
**
* @par Note 
*      If the current document is not yet saved, this will return an empty string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void IGetCurrentDoc_ARCSYS(void* p_geo, char* path, const int32_t* size);

/**
* Set the current catalog browser location in ArcGIS
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  path TODO
**
* @par Note 
*      Will also set the current working directory (CWD) if the MxD has not been saved.
*      We cannot mess with the CWD in ArcGIS because their MxD settings for relative/absolute paths depends on it.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void SetBrowseLoc_ARCSYS(void* p_geo, const char* path);

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
