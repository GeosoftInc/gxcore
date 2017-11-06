//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file iexp_gxlib.h
* @date 2017-11-06
* @brief File containing IEXP GX C API constant and function declarations
*/

/**
* @defgroup IEXP_Module IEXP
* The IEXP class is similar to the EXP class, but is used
* to apply math expressions to grids (IMG objects).
* @{
*/

#pragma once
#ifndef HIEXP_H_DEFINED
#define HIEXP_H_DEFINED

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
* This method adds an image to the IEXP object with a
* variable name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  iexp TODO
* @param[in]  img TODO
* @param[in]  var TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void AddGrid_IEXP(void* p_geo, const int32_t* iexp, const int32_t* img, const char* var);

/**
* This method creates an IEXP object.
*
* @param[in]  p_geo GX Context Pointer
* @return IEXP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_IEXP(void* p_geo);

/**
* This method destroys a IEXP object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  iexp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_IEXP(void* p_geo, const int32_t* iexp);

/**
* This method runs a formula on the grids.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  iexp TODO
* @param[in]  formula TODO
* @param[in]  max_len TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DoFormula_IEXP(void* p_geo, const int32_t* iexp, const char* formula, const int32_t* max_len);

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
