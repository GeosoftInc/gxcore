//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file pat_gxlib.h
* @date 2017-11-06
* @brief File containing PAT GX C API constant and function declarations
*/

/**
* @defgroup PAT_Module PAT
* A PAT object is created from a Geosoft format pattern file.
* It contains all the individual patterns listed in the file.
* 
* Notes: You may create your own fill patterns. They can be added to the "user.pat"
* file in the <geosoft>\user\etc directory. User pattern numbers should be in the 
* range between 20000 and 29999.
* @{
*/

#pragma once
#ifndef HPAT_H_DEFINED
#define HPAT_H_DEFINED

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
* Creates a pattern object with current default patterns.
*
* @param[in]  p_geo GX Context Pointer
* @return PAT object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_PAT(void* p_geo);

/**
* Destroys a pattern object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pat TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_PAT(void* p_geo, const int32_t* pat);

/**
* Copies all pattern names into a LST object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pat TODO
* @param[in]  cl TODO
* @param[in]  lst TODO
**
* @par Note 
*      Returns a list of the available patterns.
*      There will always be at least two items,
*      "None" and "Solid Fill"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetLST_PAT(void* p_geo, const int32_t* pat, const char* cl, const int32_t* lst);

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
