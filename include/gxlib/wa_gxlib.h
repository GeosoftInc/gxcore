//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file wa_gxlib.h
* @date 2017-11-06
* @brief File containing WA GX C API constant and function declarations
*/

/**
* @defgroup WA_Module WA
* The WA class enables you to access and write data to ASCII files.
* @{
*/

#pragma once
#ifndef HWA_H_DEFINED
#define HWA_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name WA_ENCODE Definitions
* 
* WA Encode defines
*/
///@{
/** 
* WA_ENCODE_ANSI
* 
* Current Ansi Code Page (Conversion from UTF-8 data, if an exisiting BOM header found with WA_APPEND,
* encoding will switch to WA_ENCODE_UTF8)
*/
#define WA_ENCODE_ANSI 0
/** 
* WA_ENCODE_RAW
* 
* Write all data without any conversion check
*/
#define WA_ENCODE_RAW 1
/** 
* WA_ENCODE_UTF8
* 
* UTF8 (If no exisiting BOM header found with WA_APPEND, encoding will switch to WA_ENCODE_ANSI)
*/
#define WA_ENCODE_UTF8 2
/** 
* WA_ENCODE_UTF8_NOHEADER
* 
* UTF8 w.o. header (will assume UTF8 encoding if WA_APPEND is used)
*/
#define WA_ENCODE_UTF8_NOHEADER 3
/** 
* WA_ENCODE_UTF16_NOHEADER
* 
* UTF16 w.o. header (will assume UTF16 encoding if WA_APPEND is used)
*/
#define WA_ENCODE_UTF16_NOHEADER 4
///@}

/**
* @name WA_OPEN Definitions
* 
* WA Open defines
*/
///@{
/** 
* WA_NEW
* 
* Create new file
*/
#define WA_NEW 0
/** 
* WA_APPEND
* 
* Append to existing file
*/
#define WA_APPEND 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Writes a string to the file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  wa TODO
* @param[in]  str_val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Puts_WA(void* p_geo, const int32_t* wa, const char* str_val);

/**
* Creates an ASCII file to write to.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  append TODO
* @return WA Handle
**
* @par Note 
*      ANSI Encoding is assumed, See CreateEx_WA to override this.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_WA(void* p_geo, const char* file, const int32_t* append);

/**
* Creates an ASCII file to write to.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  append TODO
* @param[in]  encode TODO
* @return WA Handle
**
* @par Note 
*      Before version 6.2. text in on the GX API level were handled as characters in the current ANSI code page
*      defining how characters above ASCII 127 would be displayed. 6.2. introduced Unicode in the core
*      montaj engine that greatly increased the number of symbols that can be used. The WA_ENCODE constants
*      were introduce that controls how text are written to files on disk with the WA class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t CreateEx_WA(void* p_geo, const char* file, const int32_t* append, const int32_t* encode);

/**
* Creates an ASCII file to write to in an SBF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  file TODO
* @param[in]  append TODO
* @return WA Handle
**
* @par Note 
*      See sbf.gxh. ANSI Encoding is assumed, See CreateSBFEx_WA to override this.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateSBF_WA(void* p_geo, const int32_t* sbf, const char* file, const int32_t* append);

/**
* Creates an ASCII file to write to in an SBF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  file TODO
* @param[in]  append TODO
* @param[in]  encode TODO
* @return WA Handle
**
* @par Note 
*      Also see sbf.gxh
*      Before version 6.2. text in on the GX API level were handled as characters in the current ANSI code page
*      defining how characters above ASCII 127 would be displayed. 6.2. introduced Unicode in the core
*      montaj engine that greatly increased the number of symbols that can be used. The WA_ENCODE constants
*      were introduce that controls how text are written to files on disk with the WA class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t CreateSBFEx_WA(void* p_geo, const int32_t* sbf, const char* file, const int32_t* append, const int32_t* encode);

/**
* Destroys a WA Object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_WA(void* p_geo, const int32_t* wa);

/**
* Forces a new line in the WA object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void NewLine_WA(void* p_geo, const int32_t* wa);

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
