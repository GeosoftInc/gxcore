//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file vvexp_gxlib.h
* @date 2017-11-06
* @brief File containing VVEXP GX C API constant and function declarations
*/

/**
* @defgroup VVEXP_Module VVEXP
* The VVEXP class is similar to the IEXP class, but is used
* to apply math expressions to VV objects.
* @{
*/

#pragma once
#ifndef HVVEXP_H_DEFINED
#define HVVEXP_H_DEFINED

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
* This method adds a VV to the VVEXP object with a
* variable name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vvexp TODO
* @param[in]  vv TODO
* @param[in]  var TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void AddVV_VVEXP(void* p_geo, const int32_t* vvexp, const int32_t* vv, const char* var);

/**
* This method creates an VVEXP object.
*
* @param[in]  p_geo GX Context Pointer
* @return VVEXP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT int32_t Create_VVEXP(void* p_geo);

/**
* This method destroys a VVEXP object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vvexp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void Destroy_VVEXP(void* p_geo, const int32_t* vvexp);

/**
* This method runs a formula on the grids.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vvexp TODO
* @param[in]  formula TODO
* @param[in]  max_len TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void DoFormula_VVEXP(void* p_geo, const int32_t* vvexp, const char* formula, const int32_t* max_len);

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
