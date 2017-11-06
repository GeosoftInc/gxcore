//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file unc_gxlib.h
* @date 2017-11-06
* @brief File containing UNC GX C API constant and function declarations
*/

/**
* @defgroup UNC_Module UNC
* This library is not a class. Use the UNC library functions
* to work with Unicode characters and strings. Since version 6.2
* all strings are represented internally in the the GX engine
* as UTF-8. The character set concept was discarded as a way to
* work with characters that does not fall within the normal
* ASCII range 0x01-0x7F. The utilities here aids with any new
* functionality that is now possible (e.g. an expanded symbol range
* with TrueType fonts).
* @{
*/

#pragma once
#ifndef HUNC_H_DEFINED
#define HUNC_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name UTF8 Definitions
* 
* UTF-8 Defines
*/
///@{
/** 
* UTF8_MAX_CHAR
* 
* Maximum width of a single Unicode code point as a UTF8 string, including terminator (5)
*/
#define UTF8_MAX_CHAR 5
///@}


/**
* @name UTF Functions 
*/
///@{

/**
* Check if the UTF-16 value is a valid Unicode character code point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t iIsValidUTF16Char_UNC(void* p_geo, const int32_t* ch);

/**
* See if a Symbol number is valid in a particular font.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  face TODO
* @param[in]  geofont TODO
* @param[in]  number TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t iValidSymbol_UNC(void* p_geo, const char* face, const int32_t* geofont, const int32_t* number);

/**
* Convert a UTF-16 value to a UTF-8 encoded string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ch TODO
* @param[out] str_val TODO
* @param[in]  size TODO
**
* @par Note 
*      An empty string will be returned for invalid symbols
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void UTF16ValToSTR_UNC(void* p_geo, const int32_t* ch, char* str_val, const int32_t* size);

/**
* High performance method to see if a set of symbols
* are valid in a particular font.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  face TODO
* @param[in]  geofont TODO
**
* @par Note 
*      Invalid symbols in the VV will be set to -1 by this call. VV has to be of type GS_LONG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void ValidateSymbols_UNC(void* p_geo, const int32_t* vv, const char* face, const int32_t* geofont);

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
