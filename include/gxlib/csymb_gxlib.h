//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file csymb_gxlib.h
* @date 2017-11-06
* @brief File containing CSYMB GX C API constant and function declarations
*/

/**
* @defgroup CSYMB_Module CSYMB
* This class is used for generating and modifying colored symbol objects.
* Symbol fills are assigned colors based on their Z values and a zone, Aggregate
* or ITR file which defines what colors are associated with different ranges
* of Z values. The position of a symbol is defined by its X,Y coordinates.
* @{
*/

#pragma once
#ifndef HCSYMB_H_DEFINED
#define HCSYMB_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name CSYMB_COLOR Definitions
* 
* Color Symbol filling defines
*/
///@{
/** 
* CSYMB_COLOR_EDGE
* 
* Draw Edges only
*/
#define CSYMB_COLOR_EDGE 0
/** 
* CSYMB_COLOR_FILL
* 
* Fill Symbols
*/
#define CSYMB_COLOR_FILL 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Set the symbol angle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  angle TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetAngle_CSYMB(void* p_geo, const int32_t* csymb, const double* angle);

/**
* Set base value to subtract from Z values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  base TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetBase_CSYMB(void* p_geo, const int32_t* csymb, const double* base);

/**
* Associate symbol edge or fill colors with Z data
* and color transform.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  att TODO
**
* @par Note 
*      Use this method after a call to SetStaticCol_CSYMB. This method
*      reestablishes the symbol color association with their Z data
*      values and color transform.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetDynamicCol_CSYMB(void* p_geo, const int32_t* csymb, const int32_t* att);

/**
* Set symbol sizing to fixed (or proportionate)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  fixed TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetFixed_CSYMB(void* p_geo, const int32_t* csymb, const int32_t* fixed);

/**
* Set the symbol number.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  number TODO
**
* @par Note 
*      The lower 16 bits of the number is interpreted as UTF-16 with a valid Unicode character
*      code point. GFN fonts wil produce valid symbols depending on the font for 0x01-0x7f and the degree,
*      plus-minus and diameter symbol (latin small letter o with stroke) for 0xB0, 0xB1 and 0xF8 respectively.
*      
*      It is possible to check if a character is valid using iIsValidUTF16Char_UNC. The high 16-bits are reserved
*      for future use. Also see: iValidSymbol_UNC and ValidateSymbols_UNC
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetNumber_CSYMB(void* p_geo, const int32_t* csymb, const int32_t* number);

/**
* Set the symbol scale.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  scale TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetScale_CSYMB(void* p_geo, const int32_t* csymb, const double* scale);

/**
* Add x,y,z data to a color symbol object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddData_CSYMB(void* p_geo, const int32_t* csymb, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Create a CSYMB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @return CSYMB handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_CSYMB(void* p_geo, const char* itr);

/**
* Destroy a CSYMB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_CSYMB(void* p_geo, const int32_t* csymb);

/**
* Get the ITR of the CSYMB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  itr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void GetITR_CSYMB(void* p_geo, const int32_t* csymb, const int32_t* itr);

/**
* Set the symbol font name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  font TODO
* @param[in]  geo_font TODO
* @param[in]  weight TODO
* @param[in]  italic TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetFont_CSYMB(void* p_geo, const int32_t* csymb, const char* font, const int32_t* geo_font, const int32_t* weight, const int32_t* italic);

/**
* Set a static color for the symbol edge or fill.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  csymb TODO
* @param[in]  col TODO
* @param[in]  att TODO
**
* @par Note 
*      Use this method to set a STATIC color for symbol edge or fill.
*      By default, both edge and fill colors vary according to their
*      Z data values and a color transform.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetStaticCol_CSYMB(void* p_geo, const int32_t* csymb, const int32_t* col, const int32_t* att);

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
