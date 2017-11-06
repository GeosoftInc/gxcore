//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file mvg_gxlib.h
* @date 2017-11-06
* @brief File containing MVG GX C API constant and function declarations
*/

/**
* @defgroup MVG_Module MVG
* The MVG class provides the ability to create view graphs.
* @{
*/

#pragma once
#ifndef HMVG_H_DEFINED
#define HMVG_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name MVG_DRAW Definitions
* 
* MVG draw define
*/
///@{
/** 
* MVG_DRAW_POLYLINE
*/
#define MVG_DRAW_POLYLINE 0
/** 
* MVG_DRAW_POLYGON
*/
#define MVG_DRAW_POLYGON 1
///@}

/**
* @name MVG_GRID Definitions
* 
* MVG grid define
*/
///@{
/** 
* MVG_GRID_DOT
*/
#define MVG_GRID_DOT 0
/** 
* MVG_GRID_LINE
*/
#define MVG_GRID_LINE 1
/** 
* MVG_GRID_CROSS
*/
#define MVG_GRID_CROSS 2
///@}

/**
* @name MVG_LABEL_BOUND Definitions
* 
* MVG label bound define
*/
///@{
/** 
* MVG_LABEL_BOUND_NO
*/
#define MVG_LABEL_BOUND_NO 0
/** 
* MVG_LABEL_BOUND_YES
*/
#define MVG_LABEL_BOUND_YES 1
///@}

/**
* @name MVG_LABEL_JUST Definitions
* 
* MVG label justification define
*/
///@{
/** 
* MVG_LABEL_JUST_TOP
*/
#define MVG_LABEL_JUST_TOP 0
/** 
* MVG_LABEL_JUST_BOTTOM
*/
#define MVG_LABEL_JUST_BOTTOM 1
/** 
* MVG_LABEL_JUST_LEFT
*/
#define MVG_LABEL_JUST_LEFT 2
/** 
* MVG_LABEL_JUST_RIGHT
*/
#define MVG_LABEL_JUST_RIGHT 3
///@}

/**
* @name MVG_LABEL_ORIENT Definitions
* 
* MVG label orientation
*/
///@{
/** 
* MVG_LABEL_ORIENT_HORIZONTAL
*/
#define MVG_LABEL_ORIENT_HORIZONTAL 0
/** 
* MVG_LABEL_ORIENT_TOP_RIGHT
*/
#define MVG_LABEL_ORIENT_TOP_RIGHT 1
/** 
* MVG_LABEL_ORIENT_TOP_LEFT
*/
#define MVG_LABEL_ORIENT_TOP_LEFT 2
///@}

/**
* @name MVG_SCALE Definitions
* 
* MVG scale define
*/
///@{
/** 
* MVG_SCALE_LINEAR
*/
#define MVG_SCALE_LINEAR 0
/** 
* MVG_SCALE_LOG
*/
#define MVG_SCALE_LOG 1
/** 
* MVG_SCALE_LOGLINEAR
*/
#define MVG_SCALE_LOGLINEAR 2
///@}

/**
* @name MVG_WRAP Definitions
* 
* MVG wrap define
*/
///@{
/** 
* MVG_WRAP_NO
*/
#define MVG_WRAP_NO 0
/** 
* MVG_WRAP_YES
*/
#define MVG_WRAP_YES 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Draw an X axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  d_y TODO
* @param[in]  d_lx TODO
* @param[in]  d_rx TODO
* @param[in]  d_maj_int TODO
* @param[in]  d_min_int TODO
* @param[in]  d_size TODO
**
* @par Note 
*      When Log annotation is applied, nice tick intervals will be
*      calculated
*      
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void AxisX_MVG(void* p_geo, const int32_t* mvg, const double* d_y, const double* d_lx, const double* d_rx, const double* d_maj_int, const double* d_min_int, const double* d_size);

/**
* Draw a  Y axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  d_x TODO
* @param[in]  d_by TODO
* @param[in]  d_ty TODO
* @param[in]  d_maj_int TODO
* @param[in]  d_min_int TODO
* @param[in]  d_size TODO
**
* @par Note 
*      When Log annotation is applied, nice tick intervals will be
*      calculated
*      
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void AxisY_MVG(void* p_geo, const int32_t* mvg, const double* d_x, const double* d_by, const double* d_ty, const double* d_maj_int, const double* d_min_int, const double* d_size);

/**
* Create a MVG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @param[in]  xmin_m TODO
* @param[in]  ymin_m TODO
* @param[in]  xmax_m TODO
* @param[in]  ymax_m TODO
* @param[in]  xmin_u TODO
* @param[in]  ymin_u TODO
* @param[in]  xmax_u TODO
* @param[in]  ymax_u TODO
* @return MVG handle (NULL if error)
**
* @par Note 
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_MVG(void* p_geo, const int32_t* map, const char* name, const double* xmin_m, const double* ymin_m, const double* xmax_m, const double* ymax_m, const double* xmin_u, const double* ymin_u, const double* xmax_u, const double* ymax_u);

/**
* Destroy the MVG handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
**
* @par Note 
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_MVG(void* p_geo, const int32_t* mvg);

/**
* Get the MVIEW Handle of the Object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @return MVIEW Handle
**
* @par Note 
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetMVIEW_MVG(void* p_geo, const int32_t* mvg);

/**
* Draw a grid in the current MVG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  d1st_x TODO
* @param[in]  d1st_y TODO
* @param[in]  d_x TODO
* @param[in]  d_y TODO
* @param[in]  d_dx TODO
* @param[in]  d_dy TODO
* @param[in]  l_type TODO
**
* @par Note 
*      The grid will be drawn in the current window.
*      
*      In the LOG and LOGLINEAR rescaling modes, grids will be
*      drawn in decades and the X/Y grid increments will be
*      ignored.  In addition, grid lines at 0 (zero) and LOGMIN will be drawn.
*      
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Grid_MVG(void* p_geo, const int32_t* mvg, const double* d1st_x, const double* d1st_y, const double* d_x, const double* d_y, const double* d_dx, const double* d_dy, const int32_t* l_type);

/**
* Label annotations on the X axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  y TODO
* @param[in]  lx TODO
* @param[in]  rx TODO
* @param[in]  maj_int TODO
* @param[in]  just TODO
* @param[in]  bound TODO
* @param[in]  orient TODO
**
* @par Note 
*      Label bounding will justify edge labels to be inside
*      the bar limits.
*      
*      When Log annotation is applied, labels will be drawn in decades.
*      
*      Obsolete
*
* @par See also 
*      sAxisX_MVG
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void LabelX_MVG(void* p_geo, const int32_t* mvg, const double* y, const double* lx, const double* rx, const double* maj_int, const int32_t* just, const int32_t* bound, const int32_t* orient);

/**
* Label annotations on the Y axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  x TODO
* @param[in]  by TODO
* @param[in]  ty TODO
* @param[in]  maj_int TODO
* @param[in]  just TODO
* @param[in]  bound TODO
* @param[in]  orient TODO
**
* @par Note 
*      Label bounding will justify edge labels to be inside
*      the bar limits.
*      
*      When Log annotation is applied, labels will be drawn in decades.
*      
*      Obsolete
*
* @par See also 
*      sAxisY_MVG
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void LabelY_MVG(void* p_geo, const int32_t* mvg, const double* x, const double* by, const double* ty, const double* maj_int, const int32_t* just, const int32_t* bound, const int32_t* orient);

/**
* Creates PolyLines/polygons from VV and VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  draw TODO
* @param[in]  wrap TODO
* @param[in]  vv_x TODO
* @param[in]  va TODO
* @param[in]  vv_array TODO
**
* @par Note 
*      If the VV contains dummies, the polylines
*      will break at the dummies; the polygons
*      will skip the dummies.
*      
*      If wrapping is applied, POLYGON parameter is ignored and
*      only POLYLINES are drawn.
*      
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PolyLineVA_MVG(void* p_geo, const int32_t* mvg, const int32_t* draw, const int32_t* wrap, const int32_t* vv_x, const int32_t* va, const int32_t* vv_array);

/**
* Creates PolyLines/polygons from VV and VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  draw TODO
* @param[in]  wrap TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      If the VV contains dummies, the polylines
*      will break at the dummies; the polygons
*      will skip the dummies.
*      
*      If wrapping is applied, POLYGON parameter is ignored and
*      only POLYLINES are drawn.
*      
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PolyLineVV_MVG(void* p_geo, const int32_t* mvg, const int32_t* draw, const int32_t* wrap, const int32_t* vv_x, const int32_t* vv_y);

/**
* Re-scale horizontal axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  scale TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  log_min TODO
**
* @par Note 
*      When RescaleX_MVG is used, only the scaling information
*      related to X axis will be considered
*      
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RescaleXRange_MVG(void* p_geo, const int32_t* mvg, const int32_t* scale, const double* min, const double* max, const double* log_min);

/**
* Re-scale vertical axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvg TODO
* @param[in]  scale TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  log_min TODO
**
* @par Note 
*      When RescaleY_MVG is used, only the scaling information
*      related to Y axis will be considered
*      
*      Obsolete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RescaleYRange_MVG(void* p_geo, const int32_t* mvg, const int32_t* scale, const double* min, const double* max, const double* log_min);

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
