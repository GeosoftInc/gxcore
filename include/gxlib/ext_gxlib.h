//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ext_gxlib.h
* @date 2017-11-06
* @brief File containing EXT GX C API constant and function declarations
*/

/**
* @defgroup EXT_Module EXT
* External (plug-in) image methods.
* @{
*/

#pragma once
#ifndef HEXT_H_DEFINED
#define HEXT_H_DEFINED

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
* Retrieves information about an external image format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[out] xmin TODO
* @param[out] ymin TODO
* @param[out] xmax TODO
* @param[out] ymax TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetInfo_EXT(void* p_geo, const char* img, double* xmin, double* ymin, double* xmax, double* ymax, const int32_t* ipj);

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
