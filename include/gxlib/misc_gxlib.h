//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file misc_gxlib.h
* @date 2017-11-06
* @brief File containing MISC GX C API constant and function declarations
*/

/**
* @defgroup MISC_Module MISC
* Not a class. A catch-all for miscellaneous geophysical
* methods, primarily file conversions.
* @{
*/

#pragma once
#ifndef HMISC_H_DEFINED
#define HMISC_H_DEFINED

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
* Convert a CG3 dump to RAW format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  cg3 TODO
* @param[in]  raw TODO
* @param[in]  tide_corr_opt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void ConvertCG3toRAW_MISC(void* p_geo, const char* cg3, const char* raw, const int32_t* tide_corr_opt);

/**
* Convert a CG5 dump to RAW format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  cg5 TODO
* @param[in]  raw TODO
* @param[in]  tide_corr_opt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void ConvertCG5toRAW_MISC(void* p_geo, const char* cg5, const char* raw, const int32_t* tide_corr_opt);

/**
* Convert a UKOA file to a location TBL file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ukoa TODO
* @param[in]  alias TODO
* @param[in]  tbl TODO
**
* @par Note 
*      The TBL file will contain the following fields:
*      
*      = Line:string16
*      = Station:long
*      = Latitude:double
*      = Longitude:double
*      = X:double
*      = Y:double
*      = Elevation:double
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Ukoa2Tbl_MISC(void* p_geo, const char* ukoa, const char* alias, const char* tbl);

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
