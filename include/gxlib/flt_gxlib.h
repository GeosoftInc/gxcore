//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file flt_gxlib.h
* @date 2017-11-06
* @brief File containing FLT GX C API constant and function declarations
*/

/**
* @defgroup FLT_Module FLT
* The FLT class allows the application of user-defined convolution filters to data in an OASIS database
* @{
*/

#pragma once
#ifndef HFLT_H_DEFINED
#define HFLT_H_DEFINED

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
* Create a filter from a comma/space delimited string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input TODO
* @return FLT Object
**
* @par Note 
*      Terminates process if filter not found.
*      Sample Fraser Filter string:
*      
*            "-1,-1,1,1"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_FLT(void* p_geo, const char* input);

/**
* This method destroys a filter handle
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  flt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_FLT(void* p_geo, const int32_t* flt);

/**
* Load and return handle to a convolution filter.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return FLT Object
**
* @par Note 
*      Terminates process if filter not found.
*      A filter file is an ASCII file that contains filter
*      coefficients, which are simply mumbers.  There can be
*      one coefficient to a line.  Blank lines and comment lines
*      are skipped.  Comment lines beginn with a forward slash
*      character in column 1.  Following is an example Fraser
*      Filter file:
*      
*         /----------------------
*         / Fraser Filter
*         /----------------------
*         -1
*         -1
*         1
*         1
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Load_FLT(void* p_geo, const char* file);

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
