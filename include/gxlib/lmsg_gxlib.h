//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file lmsg_gxlib.h
* @date 2017-11-06
* @brief File containing LMSG GX C API constant and function declarations
*/

/**
* @defgroup LMSG_Module LMSG
* Message class methods.
* @{
*/

#pragma once
#ifndef HLMSG_H_DEFINED
#define HLMSG_H_DEFINED

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
* Sends a move cursor message
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void GotoPoint_LMSG(void* p_geo, const double* x, const double* y, const double* z, const int32_t* ipj);

/**
* Sends a view area message
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x0 TODO
* @param[in]  y0 TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void ViewArea_LMSG(void* p_geo, const double* x0, const double* y0, const double* x1, const double* y1, const int32_t* ipj);

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
