//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file tpat_gxlib.h
* @date 2017-11-06
* @brief File containing TPAT GX C API constant and function declarations
*/

/**
* @defgroup TPAT_Module TPAT
* The full name of the pattern.
* ex: "felsic volcanics"
* Code:          Short-form of the pattern description. This is the value
* which typically appears (for instance) in the "Rock code"
* channel in a Wholeplot From-To data group.
* ex: "FVOL"
* The code is CASE-SENSITIVE.
* 
* Label:         Text to use as a short-form in labels, graphs etc.
* By default, this is the same as the code.
* ex: "FVol."
* Pattern Attributes:  (See DEFAULT.PAT in \src\etc for more inforation)
* Pattern:       The Pattern Index; defined in DEFAULT.PAT, or in the user's
* USER.PAT file. If not specified, defaults to 0 (solid fill).
* Size:          The pattern tile size. If not specified, defaults to 2.0mm.
* Density:       The tiling density. If not specified, defaults to 1.0.
* Thickness:     The line thickness in the tile, expressed as a integer
* percentage (0-100) of the tile size.
* Color:        The pattern line work color. If not specified, defaults to black.
* 
* Background color: The pattern background color. If not specified, defaults to
* transparent (C_ANY_NONE)
* 
* 
* Symbols:
* 
* Symbol Font     The name of the symbol font to use for a given symbol index
* 
* Symbol Number   Index into the font.
* 
* Symbol Rotation: Rotation in degrees CCW.
* 
* Symbol Scaling  Additional scale factor to apply to symbol size (Default 1.0)
* @{
*/

#pragma once
#ifndef HTPAT_H_DEFINED
#define HTPAT_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name TPAT_STRING_SIZE Definitions
* 
* Default string sizes.
*/
///@{
/** 
* TPAT_CODE_SIZE
*/
#define TPAT_CODE_SIZE 21
/** 
* TPAT_LABEL_SIZE
*/
#define TPAT_LABEL_SIZE 32
/** 
* TPAT_DESC_SIZE
*/
#define TPAT_DESC_SIZE 128
/** 
* TPAT_SYMBFONT_SIZE
*/
#define TPAT_SYMBFONT_SIZE 32
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Add a new color to the list
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tpat TODO
* @param[in]  code TODO
* @param[in]  label TODO
* @param[in]  descr TODO
* @param[in]  color TODO
**
* @par Note 
*      The new code must be unique; not in the existing list.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void AddColor_TPAT(void* p_geo, const int32_t* tpat, const char* code, const char* label, const char* descr, const int32_t* color);

/**
* Creates an empty thematic pattern object.
*
* @param[in]  p_geo GX Context Pointer
* @return TPAT object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t Create_TPAT(void* p_geo);

/**
* Destroys a pattern object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tpat TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void Destroy_TPAT(void* p_geo, const int32_t* tpat);

/**
* Find the index of a given thematic pattern
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tpat TODO
* @param[in]  code TODO
* @return The code index, -1 if not found
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iCode_TPAT(void* p_geo, const int32_t* tpat, const char* code);

/**
* Get solid pattern info from the TPAT.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tpat TODO
* @param[in]  index TODO
* @param[out] code TODO
* @param[in]  code_size TODO
* @param[out] label TODO
* @param[in]  label_size TODO
* @param[out] descr TODO
* @param[in]  descr_size TODO
* @param[out] color TODO
**
* @par Note 
*      Returns the solid color, pattern foreground color, or symbol
*      color, along with the code, label and description.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetSolidPattern_TPAT(void* p_geo, const int32_t* tpat, const int32_t* index, char* code, const int32_t* code_size, char* label, const int32_t* label_size, char* descr, const int32_t* descr_size, int32_t* color);

/**
* Returns the number of rows (items) in the TPAT object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tpat TODO
* @return Number of TPAT items.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iSize_TPAT(void* p_geo, const int32_t* tpat);

/**
* Load thematic patterns from a CSV file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tpat TODO
* @param[in]  file TODO
**
* @par Note 
*      The type of thematic patterns file is recognized from the types
*      of fields found inside it.
*      
*      The following fields are identified. Only the "CODE" field is
*      required, as the "default" thematic pattern is a solid black color.
*      
*      CODE   The pattern code (required by all types - CASE SENSITIVE)
*      LABEL  Longer text identifier to use in legends etc. (up to 31 characters)
*      DESCRIPTION Much longer text string (up to 127 characters).
*      
*      COLOR  Line color used in patterns, and for solid colors, the color.
*      If only this field is found (and none below), the pattern file
*      is assumed to be type TPAT_TYPE_COLOR.
*      
*      PATTERN         Geosoft pattern ID.
*      PAT_SIZE        Pattern tile size, or symbol size (default 2mm)
*      PAT_DENSITY     Pattern tile density (default 1.0)
*      PAT_THICKNESS   Pattern line thickness as % of size (default 5)
*      BACK_COLOR      Background color for the pattern. Also used for symbols
*      (Default background is transparent).
*      
*      SYMBFONT        Symbol font (e.g. "symbols.gfn")
*      SYMBNUM         Symbol number of the current font
*      SYMBROT         Symbol rotation
*      SYMBSCL         Additional scaling factor applied to the current size
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void LoadCSV_TPAT(void* p_geo, const int32_t* tpat, const char* file);

/**
* Initializes a VV used to map TPAT indices to output values
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tpat TODO
* @param[in]  ltb TODO
* @param[in]  field TODO
* @param[in]  vv_values TODO
**
* @par Note 
*      The input LTB object should have key values matching the TPAT codes.
*      Whether the matches are case sensitive or not is dependent on how the
*      LTB oject was created (see ltb.h).
*      The LTB field values are converted to the output VV type.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void SetupTranslationVV_TPAT(void* p_geo, const int32_t* tpat, const int32_t* ltb, const int32_t* field, const int32_t* vv_values);

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
