//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file tc_gxlib.h
* @date 2017-11-06
* @brief File containing TC GX C API constant and function declarations
*/

/**
* @defgroup TC_Module TC
* The TC object is used in gravitational modelling to create
* a terrain correction grid from a topography grid. This is
* accomplished with a call first to Grregter_TC, which determines
* the terrain correction from an input topography grid, then
* to Grterain_TC, which calculates the actual corrections at
* the input positions.
* @{
*/

#pragma once
#ifndef HTC_H_DEFINED
#define HTC_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name TC_OPT Definitions
* 
* Optimization
*/
///@{
/** 
* TC_OPT_NONE
* 
* (slow)    no optimization
*/
#define TC_OPT_NONE 0
/** 
* TC_OPT_MAX
* 
* (faster)  desampling and using qspline (4x4 points) interpolation
* on coarser averaged grid
*/
#define TC_OPT_MAX 1
///@}

/**
* @name TC_SURVEYTYPE Definitions
* 
* Survey Type
*/
///@{
/** 
* TC_SURVEYTYPE_GROUND
* 
* Ground
*/
#define TC_SURVEYTYPE_GROUND 0
/** 
* TC_SURVEYTYPE_SHIPBORNE
* 
* Shipborne
*/
#define TC_SURVEYTYPE_SHIPBORNE 1
/** 
* TC_SURVEYTYPE_AIRBORNE
* 
* Airborne
*/
#define TC_SURVEYTYPE_AIRBORNE 2
///@}

/**
* @name GG_ELEMENT Definitions
* 
* GG element
*/
///@{
/** 
* GG_ELEMENT_XX
* 
* Gxx
*/
#define GG_ELEMENT_XX 0
/** 
* GG_ELEMENT_YY
* 
* Gyy
*/
#define GG_ELEMENT_YY 1
/** 
* GG_ELEMENT_XY
* 
* Gxy
*/
#define GG_ELEMENT_XY 2
/** 
* GG_ELEMENT_XZ
* 
* Gxz
*/
#define GG_ELEMENT_XZ 3
/** 
* GG_ELEMENT_YZ
* 
* Gyz
*/
#define GG_ELEMENT_YZ 4
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Creates a Terrain Correction object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  elev_unit TODO
* @param[in]  dinner TODO
* @param[in]  douter TODO
* @param[in]  dens_t TODO
* @param[in]  dens_w TODO
* @param[in]  elev_w TODO
* @param[in]  edge TODO
* @param[in]  edge_elev TODO
* @param[in]  opt TODO
* @return TC Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_TC(void* p_geo, const int32_t* img, const double* elev_unit, const double* dinner, const double* douter, const double* dens_t, const double* dens_w, const double* elev_w, const int32_t* edge, const double* edge_elev, const int32_t* opt);

/**
* Creates a Terrain Correction object	with surveytype
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  elev_unit TODO
* @param[in]  dinner TODO
* @param[in]  douter TODO
* @param[in]  dens_t TODO
* @param[in]  dens_w TODO
* @param[in]  elev_w TODO
* @param[in]  edge TODO
* @param[in]  edge_elev TODO
* @param[in]  opt TODO
* @param[in]  survey_type TODO
* @return TC Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT int32_t CreateEx_TC(void* p_geo, const int32_t* img, const double* elev_unit, const double* dinner, const double* douter, const double* dens_t, const double* dens_w, const double* elev_w, const int32_t* edge, const double* edge_elev, const int32_t* opt, const int32_t* survey_type);

/**
* This method destroys a table resource.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_TC(void* p_geo, const int32_t* tc);

/**
* Create a terrain correction grid for a topo grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tc TODO
* @param[in]  im_gi TODO
* @param[in]  im_go TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Grregter_TC(void* p_geo, const int32_t* tc, const int32_t* im_gi, const int32_t* im_go);

/**
* Calculate terrain corrections.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tc TODO
* @param[in]  gv_vx TODO
* @param[in]  gv_vy TODO
* @param[in]  gv_velev TODO
* @param[in]  gv_vslop TODO
* @param[in]  gv_vtcor TODO
* @param[in]  im_gcor TODO
* @param[in]  dens_t TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Grterain_TC(void* p_geo, const int32_t* tc, const int32_t* gv_vx, const int32_t* gv_vy, const int32_t* gv_velev, const int32_t* gv_vslop, const int32_t* gv_vtcor, const int32_t* im_gcor, const double* dens_t);

/**
* Calculate terrain corrections (work for marine gravity too).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tc TODO
* @param[in]  gv_vx TODO
* @param[in]  gv_vy TODO
* @param[in]  gv_velev TODO
* @param[in]  gv_vslop TODO
* @param[in]  gv_vwater TODO
* @param[in]  gv_vtcor TODO
* @param[in]  im_gcor TODO
* @param[in]  dens_t TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT void Grterain2_TC(void* p_geo, const int32_t* tc, const int32_t* gv_vx, const int32_t* gv_vy, const int32_t* gv_velev, const int32_t* gv_vslop, const int32_t* gv_vwater, const int32_t* gv_vtcor, const int32_t* im_gcor, const double* dens_t);

/**
* Calculate GG terrain corrections
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tc TODO
* @param[in]  gv_vx TODO
* @param[in]  p3 TODO
* @param[in]  p4 TODO
* @param[in]  p5 TODO
* @param[in]  p6 TODO
* @param[in]  p7 TODO
* @param[in]  p8 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT void GGterain_TC(void* p_geo, const int32_t* tc, const int32_t* gv_vx, const int32_t* p3, const int32_t* p4, const int32_t* p5, const double* p6, const double* p7, const int32_t* p8);

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
