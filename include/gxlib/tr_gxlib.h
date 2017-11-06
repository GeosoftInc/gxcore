//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file tr_gxlib.h
* @date 2017-11-06
* @brief File containing TR GX C API constant and function declarations
*/

/**
* @defgroup TR_Module TR
* The TR object contains trend information about a grid or
* grid pager. Currently, it is used only in conjunction with
* the GetTR_IMG, SetTR_IMG, and Trend_PGU functions.
* @{
*/

#pragma once
#ifndef HTR_H_DEFINED
#define HTR_H_DEFINED

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
* Creates a Trend object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  order TODO
* @return TR Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_TR(void* p_geo, const int32_t* order);

/**
* This method destroys a table resource.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_TR(void* p_geo, const int32_t* tr);

/**
* This method copies a table resource to another trend table resource.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  t_rd TODO
* @param[in]  t_rs TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.1
*/
GX_EXPORT void Copy_TR(void* p_geo, const int32_t* t_rd, const int32_t* t_rs);

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
