//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file praga3_gxlib.h
* @date 2017-11-06
* @brief File containing PRAGA3 GX C API constant and function declarations
*/

/**
* @defgroup PRAGA3_Module PRAGA3
* PRAGA3 application methods
*
* Notes:
*
* No notes
*
* @{
*/

#pragma once
#ifndef HPRAGA3_H_DEFINED
#define HPRAGA3_H_DEFINED

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
* This method launches the application.
*
* @param[in]  p_geo GX Context Pointer
* @return 1 - OK, 2 - Cancel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT int32_t iLaunch_PRAGA3(void* p_geo);

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
