//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file vector3d_gxlib.h
* @date 2017-11-06
* @brief File containing VECTOR3D GX C API constant and function declarations
*/

/**
* @defgroup VECTOR3D_Module VECTOR3D
* VECTOR3D Display object.
* @{
*/

#pragma once
#ifndef HVECTOR3D_H_DEFINED
#define HVECTOR3D_H_DEFINED

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
* Destroy a VECTOR3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vector_3d TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void Destroy_VECTOR3D(void* p_geo, const int32_t* vector_3d);

/**
* Get the ITR of the VECTOR3D
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vector_3d TODO
* @param[in]  itr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void GetITR_VECTOR3D(void* p_geo, const int32_t* vector_3d, const int32_t* itr);

/**
* Set the ITR of the VECTOR3D
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vector_3d TODO
* @param[in]  itr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void SetITR_VECTOR3D(void* p_geo, const int32_t* vector_3d, const int32_t* itr);

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
