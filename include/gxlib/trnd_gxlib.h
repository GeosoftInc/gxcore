//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file trnd_gxlib.h
* @date 2017-11-06
* @brief File containing TRND GX C API constant and function declarations
*/

/**
* @defgroup TRND_Module TRND
* The TRND methods are used to determine trend directions in database data by locating
* maxima and minima along lines and joining them in a specified direction.
* The resulting trend lines are appended to the database and used by gridding methods
* such as Bigrid and Rangrid to enforce features in the specified direction.
* @{
*/

#pragma once
#ifndef HTRND_H_DEFINED
#define HTRND_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name TRND_NODE Definitions
* 
* Node to find
*/
///@{
/** 
* TRND_MIN
*/
#define TRND_MIN 0
/** 
* TRND_MAX
*/
#define TRND_MAX 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Find the max/min nodes in a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_xm TODO
* @param[in]  v_vym TODO
* @param[in]  v_vzm TODO
* @param[in]  window TODO
* @param[in]  trnd TODO
**
* @par Note 
*      Trend lines positions consist of X and Y VVs
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetMaxMin_TRND(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_xm, const int32_t* v_vym, const int32_t* v_vzm, const double* window, const int32_t* trnd);

/**
* Get the lines in a trend mesh.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  window TODO
* @param[in]  max_length TODO
* @param[in]  mesh_vv TODO
* @param[in]  trnd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetMesh_TRND(void* p_geo, const int32_t* db, const char* chan, const double* window, const double* max_length, const int32_t* mesh_vv, const int32_t* trnd);

/**
* Uses a selected channel to find data trends in a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  window TODO
* @param[in]  angle TODO
* @param[in]  deviation TODO
* @param[in]  max_length TODO
* @param[in]  deflection TODO
* @param[in]  min_length TODO
* @param[in]  resample TODO
* @param[in]  br_angle TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void TrndDB_TRND(void* p_geo, const int32_t* db, const char* chan, const double* window, const double* angle, const double* deviation, const double* max_length, const double* deflection, const double* min_length, const double* resample, const double* br_angle);

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
