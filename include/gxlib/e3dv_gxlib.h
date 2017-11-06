//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file e3dv_gxlib.h
* @date 2017-11-06
* @brief File containing E3DV GX C API constant and function declarations
*/

/**
* @defgroup E3DV_Module E3DV
* Methods to manipulate an active 3D View
* @{
*/

#pragma once
#ifndef HE3DV_H_DEFINED
#define HE3DV_H_DEFINED

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
* Get the current data (3D) MVIEW
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  e_3dv TODO
* @return MVIEW object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t GetDataView_E3DV(void* p_geo, const int32_t* e_3dv);

/**
* Get the current Base MVIEW (used to draw 2D legends for groups)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  e_3dv TODO
* @return MVIEW object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t GetBaseView_E3DV(void* p_geo, const int32_t* e_3dv);

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
