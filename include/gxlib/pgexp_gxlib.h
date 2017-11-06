//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file pgexp_gxlib.h
* @date 2017-11-06
* @brief File containing PGEXP GX C API constant and function declarations
*/

/**
* @defgroup PGEXP_Module PGEXP
* The PGEXP class is similar to the EXP class, but is used
* to apply math expressions to pagers (PG objects).
* 
* It works only on PGs of the same dimensions.
* @{
*/

#pragma once
#ifndef HPGEXP_H_DEFINED
#define HPGEXP_H_DEFINED

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
* This method adds an pager to the PGEXP object with a
* variable name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pgexp TODO
* @param[in]  pg TODO
* @param[in]  var TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void AddPager_PGEXP(void* p_geo, const int32_t* pgexp, const int32_t* pg, const char* var);

/**
* This method creates an PGEXP object.
*
* @param[in]  p_geo GX Context Pointer
* @return PGEXP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT int32_t Create_PGEXP(void* p_geo);

/**
* This method destroys a PGEXP object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pgexp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void Destroy_PGEXP(void* p_geo, const int32_t* pgexp);

/**
* This method runs a formula on the pagers.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pgexp TODO
* @param[in]  formula TODO
* @param[in]  max_len TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void DoFormula_PGEXP(void* p_geo, const int32_t* pgexp, const char* formula, const int32_t* max_len);

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
