//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file voxe_gxlib.h
* @date 2017-11-06
* @brief File containing VOXE GX C API constant and function declarations
*/

/**
* @defgroup VOXE_Module VOXE
* VOX evaluator class. Used to sample values from
* the voxel.
* @{
*/

#pragma once
#ifndef HVOXE_H_DEFINED
#define HVOXE_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name VOXE_EVAL Definitions
* 
* Voxel Evaluation modes
*/
///@{
/** 
* VOXE_EVAL_NEAR
* 
* Nearest value
*/
#define VOXE_EVAL_NEAR 0
/** 
* VOXE_EVAL_INTERP
* 
* Linear Interpolation
*/
#define VOXE_EVAL_INTERP 1
/** 
* VOXE_EVAL_BEST
* 
* Best Interpolation
*/
#define VOXE_EVAL_BEST 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a handle to an VOXE object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @return VOXE handle, terminates if creation fails
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t Create_VOXE(void* p_geo, const int32_t* vox);

/**
* Destroy a VOXE.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxe TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Destroy_VOXE(void* p_geo, const int32_t* voxe);

/**
* Extract a profile of data along points provided.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxe TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
* @param[in]  interp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Profile_VOXE(void* p_geo, const int32_t* voxe, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d, const int32_t* interp);

/**
* Get a value at a specific point
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxe TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  interp TODO
* @return Value at the point or DUMMY if not valid
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT double rValue_VOXE(void* p_geo, const int32_t* voxe, const double* x, const double* y, const double* z, const int32_t* interp);

/**
* Extract a profile of data along a vector
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxe TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  vx TODO
* @param[in]  vy TODO
* @param[in]  vz TODO
* @param[in]  vv TODO
* @param[in]  interp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Vector_VOXE(void* p_geo, const int32_t* voxe, const double* ox, const double* oy, const double* oz, const double* vx, const double* vy, const double* vz, const int32_t* vv, const int32_t* interp);

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
