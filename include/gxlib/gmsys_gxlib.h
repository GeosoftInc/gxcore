//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file gmsys_gxlib.h
* @date 2017-11-06
* @brief File containing GMSYS GX C API constant and function declarations
*/

/**
* @defgroup GMSYS_Module GMSYS
* The GMSYS Methods
* @{
*/

#pragma once
#ifndef HGMSYS_H_DEFINED
#define HGMSYS_H_DEFINED

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
* Launch GMSYS with extension
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  model TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.1
*/
GX_EXPORT void Launch_GMSYS(void* p_geo, const char* model);

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
