//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file strings_gxlib.h
* @date 2017-11-06
* @brief File containing STRINGS GX C API constant and function declarations
*/

/**
* @defgroup STRINGS_Module STRINGS
* The STRINGS class is used for displaying digitization tools for interpretations
* @{
*/

#pragma once
#ifndef HSTRINGS_H_DEFINED
#define HSTRINGS_H_DEFINED

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
* Launch Digitization modeless window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stringfile TODO
* @param[in]  feature_guid TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.5
*/
GX_EXPORT void LaunchDigitizationUI_STRINGS(void* p_geo, const char* stringfile, const char* feature_guid);

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
