//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file lpt_gxlib.h
* @date 2017-11-06
* @brief File containing LPT GX C API constant and function declarations
*/

/**
* @defgroup LPT_Module LPT
* This class allows access to the current default line patterns.
* It does not allow the definition of individual patterns. It is
* is used primarily with MAP class functions.
* @{
*/

#pragma once
#ifndef HLPT_H_DEFINED
#define HLPT_H_DEFINED

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
* Creates a line pattern object with current default patterns.
*
* @param[in]  p_geo GX Context Pointer
* @return LPT Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_LPT(void* p_geo);

/**
* Destroys a line pattern object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lpt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_LPT(void* p_geo, const int32_t* lpt);

/**
* Copies all pattern names into a LST object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lpt TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetLST_LPT(void* p_geo, const int32_t* lpt, const int32_t* lst);

/**
* Copies the six standard line types into a LST object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lpt TODO
* @param[in]  lst TODO
**
* @par Note 
*      The six standard line types are "solid", "long dash", "dotted", "short dash", "long, short dash" and "dash dot".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void GetStandardLST_LPT(void* p_geo, const int32_t* lpt, const int32_t* lst);

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
