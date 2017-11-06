//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file stk_gxlib.h
* @date 2017-11-06
* @brief File containing STK GX C API constant and function declarations
*/

/**
* @defgroup STK_Module STK
* The STK class is used for plotting a single data profile in
* an MVIEW. The MSTK class (see MSTK) is used to plot
* multiple STK objects to a single map.
* 
* Use AddSTK_MSTK fuction to create a STK object before
* using functions in this file
* 
* SEE MSTK FILE FOR DETAILED DESCRIPTIONS OF ALL FUNCTION PARAMETERS.
* @{
*/

#pragma once
#ifndef HSTK_H_DEFINED
#define HSTK_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name STK_AXIS Definitions
* 
* STK Axis defines
*/
///@{
/** 
* STK_AXIS_X
* 
* X Axis
*/
#define STK_AXIS_X 0
/** 
* STK_AXIS_Y
* 
* Y Axis
*/
#define STK_AXIS_Y 1
///@}

/**
* @name STK_FLAG Definitions
* 
* Stack flags
*/
///@{
/** 
* STK_FLAG_PROFILE
*/
#define STK_FLAG_PROFILE 0
/** 
* STK_FLAG_FID
*/
#define STK_FLAG_FID 1
/** 
* STK_FLAG_SYMBOL
*/
#define STK_FLAG_SYMBOL 2
/** 
* STK_FLAG_XBAR
*/
#define STK_FLAG_XBAR 3
/** 
* STK_FLAG_XLABEL
*/
#define STK_FLAG_XLABEL 4
/** 
* STK_FLAG_XTITLE
*/
#define STK_FLAG_XTITLE 5
/** 
* STK_FLAG_YBAR
*/
#define STK_FLAG_YBAR 6
/** 
* STK_FLAG_YLABEL
*/
#define STK_FLAG_YLABEL 7
/** 
* STK_FLAG_YTITLE
*/
#define STK_FLAG_YTITLE 8
/** 
* STK_FLAG_GRID1
*/
#define STK_FLAG_GRID1 9
/** 
* STK_FLAG_GRID2
*/
#define STK_FLAG_GRID2 10
///@}

/**
* @name STK_GRID Definitions
* 
* Stack Grid define
*/
///@{
/** 
* STK_GRID_PRIMARY
* 
* Primary Grid
*/
#define STK_GRID_PRIMARY 0
/** 
* STK_GRID_SECONDARY
* 
* Secondary Grid
*/
#define STK_GRID_SECONDARY 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Get transformation parameters in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] x_trans_t TODO
* @param[out] x_log_min TODO
* @param[in]  xvv_lev TODO
* @param[in]  xvv_cmp TODO
* @param[out] y_trans_t TODO
* @param[out] y_log_min TODO
* @param[in]  yvv_lev TODO
* @param[in]  yvv_cmp TODO
**
* @par Note 
*      See above full description of each parameters
*      VV's for X channel transformation can be NULL if the
*      transformation is log or loglinear. The same for Y channel.
*      
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetTransParms_STK(void* p_geo, const int32_t* stk, int32_t* x_trans_t, double* x_log_min, const int32_t* xvv_lev, const int32_t* xvv_cmp, int32_t* y_trans_t, double* y_log_min, const int32_t* yvv_lev, const int32_t* yvv_cmp);

/**
* Get axis number display format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  xy TODO
* @return The current format - DB_CHAN_FORMAT
**
* @par Note 
*      By default, DB_CHAN_FORMAT_NORMAL
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.5
*/
GX_EXPORT int32_t iGetAxisFormat_STK(void* p_geo, const int32_t* stk, const int32_t* xy);

/**
* Get parameters in STK object relating drawing X/Y axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] bar_draw TODO
* @param[out] min_loc TODO
* @param[out] max_loc TODO
* @param[out] thick TODO
* @param[out] color TODO
* @param[in]  color_sz TODO
* @param[out] tick_interval TODO
* @param[out] tick_size1 TODO
* @param[out] tick_size2 TODO
* @param[out] min_tick TODO
* @param[in]  xy TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*      ? mark in the note represent either X and Y
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetAxisParms_STK(void* p_geo, const int32_t* stk, int32_t* bar_draw, double* min_loc, double* max_loc, double* thick, char* color, const int32_t* color_sz, double* tick_interval, double* tick_size1, double* tick_size2, int32_t* min_tick, const int32_t* xy);

/**
* Get parameters in STK object relating drawing fid ticks
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] fid_y_loc TODO
* @param[out] fid_tick_size TODO
* @param[out] fid_interval TODO
* @param[out] fid_text_font TODO
* @param[in]  font_sz TODO
* @param[out] fid_text_size TODO
* @param[out] fid_text_color TODO
* @param[in]  text_clr_sz TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetFidParms_STK(void* p_geo, const int32_t* stk, double* fid_y_loc, double* fid_tick_size, double* fid_interval, char* fid_text_font, const int32_t* font_sz, double* fid_text_size, char* fid_text_color, const int32_t* text_clr_sz);

/**
* Get flag indicating part of STK object is to be drawn or not
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  part TODO
* @return FALSE (0) if part of the object is not to be drawn
* TRUE  (1) if part of the object is drawn
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iGetFlag_STK(void* p_geo, const int32_t* stk, const int32_t* part);

/**
* Get general parameters in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] x_ch TODO
* @param[in]  xs TODO
* @param[out] y_ch TODO
* @param[in]  ys TODO
* @param[out] grp_name TODO
* @param[in]  grp_sz TODO
* @param[out] x_scale TODO
* @param[out] y_scale TODO
* @param[out] x_start TODO
* @param[out] x_end TODO
* @param[out] y_start TODO
* @param[out] left TODO
* @param[out] bottom TODO
* @param[out] height TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetGenParms_STK(void* p_geo, const int32_t* stk, char* x_ch, const int32_t* xs, char* y_ch, const int32_t* ys, char* grp_name, const int32_t* grp_sz, double* x_scale, double* y_scale, double* x_start, double* x_end, double* y_start, double* left, double* bottom, double* height);

/**
* Get background grid parameters in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] grid TODO
* @param[out] min_x TODO
* @param[out] max_x TODO
* @param[out] min_y TODO
* @param[out] max_y TODO
* @param[out] thick TODO
* @param[out] cross TODO
* @param[out] x_sep TODO
* @param[out] y_sep TODO
* @param[out] color TODO
* @param[in]  color_sz TODO
* @param[in]  grid12 TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*      ? mark in the note represent either X and Y
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetGridParms_STK(void* p_geo, const int32_t* stk, int32_t* grid, double* min_x, double* max_x, double* min_y, double* max_y, double* thick, double* cross, double* x_sep, double* y_sep, char* color, const int32_t* color_sz, const int32_t* grid12);

/**
* Get parameters in STK object relating X/Y axis labels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] axis TODO
* @param[out] min_loc TODO
* @param[out] min_orient TODO
* @param[out] max_loc TODO
* @param[out] max_orient TODO
* @param[out] interval TODO
* @param[out] font TODO
* @param[in]  font_sz TODO
* @param[out] text_size TODO
* @param[out] color TODO
* @param[in]  color_sz TODO
* @param[out] bound TODO
* @param[in]  xy TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*      ? mark in the note represent either X and Y
*      Sets the label format to GSF_NORMAL. To override this,
*      use the SetAxisFormat_STK function AFTER calling this.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetLabelParms_STK(void* p_geo, const int32_t* stk, int32_t* axis, double* min_loc, int32_t* min_orient, double* max_loc, int32_t* max_orient, double* interval, char* font, const int32_t* font_sz, double* text_size, char* color, const int32_t* color_sz, int32_t* bound, const int32_t* xy);

/**
* Get profile parameters in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] prof_type TODO
* @param[out] pitch TODO
* @param[out] thick TODO
* @param[out] ln_clr TODO
* @param[in]  ln_clr_sz TODO
* @param[out] wrap TODO
* @param[out] clip TODO
* @param[out] smooth TODO
* @param[in]  vv_ind TODO
* @param[out] label TODO
* @param[in]  label_sz TODO
* @param[out] ref TODO
* @param[out] font TODO
* @param[in]  font_sz TODO
* @param[out] text_size TODO
* @param[out] text_clr TODO
* @param[in]  text_clr_sz TODO
* @param[out] prof_va_num TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetProfile_STK(void* p_geo, const int32_t* stk, int32_t* prof_type, double* pitch, double* thick, char* ln_clr, const int32_t* ln_clr_sz, int32_t* wrap, int32_t* clip, int32_t* smooth, const int32_t* vv_ind, char* label, const int32_t* label_sz, int32_t* ref, char* font, const int32_t* font_sz, double* text_size, char* text_clr, const int32_t* text_clr_sz, int32_t* prof_va_num);

/**
* Get profile parameters in STK object (added Break on dummy option)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] prof_type TODO
* @param[out] pitch TODO
* @param[out] thick TODO
* @param[out] ln_clr TODO
* @param[in]  ln_clr_sz TODO
* @param[out] break_dum TODO
* @param[out] wrap TODO
* @param[out] clip TODO
* @param[out] smooth TODO
* @param[in]  vv_ind TODO
* @param[out] label TODO
* @param[in]  label_sz TODO
* @param[out] ref TODO
* @param[out] font TODO
* @param[in]  font_sz TODO
* @param[out] text_size TODO
* @param[out] text_clr TODO
* @param[in]  text_clr_sz TODO
* @param[out] prof_va_num TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.3
*/
GX_EXPORT void IGetProfileEx_STK(void* p_geo, const int32_t* stk, int32_t* prof_type, double* pitch, double* thick, char* ln_clr, const int32_t* ln_clr_sz, int32_t* break_dum, int32_t* wrap, int32_t* clip, int32_t* smooth, const int32_t* vv_ind, char* label, const int32_t* label_sz, int32_t* ref, char* font, const int32_t* font_sz, double* text_size, char* text_clr, const int32_t* text_clr_sz, int32_t* prof_va_num);

/**
* Get parameters in STK object relating drawing symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] symb_font TODO
* @param[in]  symb_font_sz TODO
* @param[out] symb_size TODO
* @param[out] line_clr TODO
* @param[in]  line_clr_sz TODO
* @param[out] fill_clr TODO
* @param[in]  fill_clr_sz TODO
* @param[out] wrap TODO
* @param[out] clip TODO
* @param[out] symb_y_loc TODO
* @param[out] no_levels TODO
* @param[in]  vv_level TODO
* @param[in]  vv_type TODO
* @param[out] label TODO
* @param[out] text_font TODO
* @param[in]  text_font_sz TODO
* @param[out] text_size TODO
* @param[out] text_clr TODO
* @param[in]  text_clr_sz TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetSymbParms_STK(void* p_geo, const int32_t* stk, char* symb_font, const int32_t* symb_font_sz, double* symb_size, char* line_clr, const int32_t* line_clr_sz, char* fill_clr, const int32_t* fill_clr_sz, int32_t* wrap, int32_t* clip, double* symb_y_loc, int32_t* no_levels, const int32_t* vv_level, const int32_t* vv_type, int32_t* label, char* text_font, const int32_t* text_font_sz, double* text_size, char* text_clr, const int32_t* text_clr_sz);

/**
* Get parameters in STK object relating X/Y axis titles
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[out] title1 TODO
* @param[in]  title1_sz TODO
* @param[out] title2 TODO
* @param[in]  title2_sz TODO
* @param[out] title1_orient TODO
* @param[out] title1_x TODO
* @param[out] title1_y TODO
* @param[out] title2_orient TODO
* @param[out] title2_x TODO
* @param[out] title2_y TODO
* @param[out] font TODO
* @param[in]  font_sz TODO
* @param[out] text_size TODO
* @param[out] color TODO
* @param[in]  color_sz TODO
* @param[in]  xy TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*      ? mark in the note represent either X and Y
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetTitleParms_STK(void* p_geo, const int32_t* stk, char* title1, const int32_t* title1_sz, char* title2, const int32_t* title2_sz, int32_t* title1_orient, double* title1_x, double* title1_y, int32_t* title2_orient, double* title2_x, double* title2_y, char* font, const int32_t* font_sz, double* text_size, char* color, const int32_t* color_sz, const int32_t* xy);

/**
* Set flag indicating part of STK object is to be drawn or not
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  flag TODO
* @param[in]  part TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ISetFlag_STK(void* p_geo, const int32_t* stk, const int32_t* flag, const int32_t* part);

/**
* Set colors for individual channels in a VA, via an ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  itr TODO
**
* @par Note 
*      The ITR is consulted by taking the channel index and dividing
*      by the number of channels; hence the ITR maximum values should
*      be in the range: 0 > values >= 1.0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.1
*/
GX_EXPORT void SetArrayColors_STK(void* p_geo, const int32_t* stk, const int32_t* itr);

/**
* Set axis number display format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  format TODO
* @param[in]  xy TODO
**
* @par Note 
*      By default, DB_CHAN_FORMAT_NORMAL is used to display the values,
*      or for values > 1.e7, DB_CHAN_FORMAT_EXP.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.5
*/
GX_EXPORT void SetAxisFormat_STK(void* p_geo, const int32_t* stk, const int32_t* format, const int32_t* xy);

/**
* Set parameters in STK object relating drawing X/Y axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  bar_draw TODO
* @param[in]  min_loc TODO
* @param[in]  max_loc TODO
* @param[in]  thick TODO
* @param[in]  color TODO
* @param[in]  tick_interval TODO
* @param[in]  tick_size1 TODO
* @param[in]  tick_size2 TODO
* @param[in]  min_tick TODO
* @param[in]  xy TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*      ? mark in the note represent either X and Y
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetAxisParms_STK(void* p_geo, const int32_t* stk, const int32_t* bar_draw, const double* min_loc, const double* max_loc, const double* thick, const char* color, const double* tick_interval, const double* tick_size1, const double* tick_size2, const int32_t* min_tick, const int32_t* xy);

/**
* Set parameters in STK object relating drawing fid ticks
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  fid_y_loc TODO
* @param[in]  fid_tick_size TODO
* @param[in]  fid_interval TODO
* @param[in]  fid_text_font TODO
* @param[in]  fid_text_size TODO
* @param[in]  fid_text_color TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetFidParms_STK(void* p_geo, const int32_t* stk, const double* fid_y_loc, const double* fid_tick_size, const double* fid_interval, const char* fid_text_font, const double* fid_text_size, const char* fid_text_color);

/**
* Set general parameters in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  grp_name TODO
* @param[in]  x_scale TODO
* @param[in]  y_scale TODO
* @param[in]  x_start TODO
* @param[in]  x_end TODO
* @param[in]  y_start TODO
* @param[in]  left TODO
* @param[in]  bottom TODO
* @param[in]  height TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetGenParms_STK(void* p_geo, const int32_t* stk, const char* x_ch, const char* y_ch, const char* grp_name, const double* x_scale, const double* y_scale, const double* x_start, const double* x_end, const double* y_start, const double* left, const double* bottom, const double* height);

/**
* Set background grid parameters in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  grid TODO
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  min_y TODO
* @param[in]  max_y TODO
* @param[in]  thick TODO
* @param[in]  cross TODO
* @param[in]  x_sep TODO
* @param[in]  y_sep TODO
* @param[in]  color TODO
* @param[in]  grid12 TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*      ? mark in the note represent either X and Y
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetGridParms_STK(void* p_geo, const int32_t* stk, const int32_t* grid, const double* min_x, const double* max_x, const double* min_y, const double* max_y, const double* thick, const double* cross, const double* x_sep, const double* y_sep, const char* color, const int32_t* grid12);

/**
* Set parameters in STK object relating X/Y axis labels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  axis TODO
* @param[in]  min_loc TODO
* @param[in]  min_orient TODO
* @param[in]  max_loc TODO
* @param[in]  max_orient TODO
* @param[in]  interval TODO
* @param[in]  font TODO
* @param[in]  text_size TODO
* @param[in]  color TODO
* @param[in]  bound TODO
* @param[in]  xy TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*      ? mark in the note represent either X and Y
*      Sets the label format to GSF_NORMAL. To override this,
*      use the SetAxisFormat_STK function AFTER calling this.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetLabelParms_STK(void* p_geo, const int32_t* stk, const int32_t* axis, const double* min_loc, const int32_t* min_orient, const double* max_loc, const int32_t* max_orient, const double* interval, const char* font, const double* text_size, const char* color, const int32_t* bound, const int32_t* xy);

/**
* Set line parameter (of Y Chan) in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  line TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetLineParm_STK(void* p_geo, const int32_t* stk, const int32_t* line);

/**
* Set profile parameters in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  prof_type TODO
* @param[in]  pitch TODO
* @param[in]  thick TODO
* @param[in]  ln_clr TODO
* @param[in]  wrap TODO
* @param[in]  clip TODO
* @param[in]  smooth TODO
* @param[in]  vv_ind TODO
* @param[in]  label TODO
* @param[in]  ref TODO
* @param[in]  font TODO
* @param[in]  text_size TODO
* @param[in]  text_clr TODO
* @param[in]  prof_va_num TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetProfile_STK(void* p_geo, const int32_t* stk, const int32_t* prof_type, const double* pitch, const double* thick, const char* ln_clr, const int32_t* wrap, const int32_t* clip, const int32_t* smooth, const int32_t* vv_ind, const char* label, const int32_t* ref, const char* font, const double* text_size, const char* text_clr, const int32_t* prof_va_num);

/**
* Set profile parameters in STK object (added Break on dummy option)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  prof_type TODO
* @param[in]  pitch TODO
* @param[in]  thick TODO
* @param[in]  ln_clr TODO
* @param[in]  break_dum TODO
* @param[in]  wrap TODO
* @param[in]  clip TODO
* @param[in]  smooth TODO
* @param[in]  vv_ind TODO
* @param[in]  label TODO
* @param[in]  ref TODO
* @param[in]  font TODO
* @param[in]  text_size TODO
* @param[in]  text_clr TODO
* @param[in]  prof_va_num TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.3
*/
GX_EXPORT void SetProfileEx_STK(void* p_geo, const int32_t* stk, const int32_t* prof_type, const double* pitch, const double* thick, const char* ln_clr, const int32_t* break_dum, const int32_t* wrap, const int32_t* clip, const int32_t* smooth, const int32_t* vv_ind, const char* label, const int32_t* ref, const char* font, const double* text_size, const char* text_clr, const int32_t* prof_va_num);

/**
* Set parameters in STK object relating drawing symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  symb_font TODO
* @param[in]  symb_size TODO
* @param[in]  line_clr TODO
* @param[in]  fill_clr TODO
* @param[in]  wrap TODO
* @param[in]  clip TODO
* @param[in]  symb_y_loc TODO
* @param[in]  no_levels TODO
* @param[in]  vv_level TODO
* @param[in]  vv_type TODO
* @param[in]  label TODO
* @param[in]  text_font TODO
* @param[in]  text_size TODO
* @param[in]  text_clr TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetSymbParms_STK(void* p_geo, const int32_t* stk, const char* symb_font, const double* symb_size, const char* line_clr, const char* fill_clr, const int32_t* wrap, const int32_t* clip, const double* symb_y_loc, const int32_t* no_levels, const int32_t* vv_level, const int32_t* vv_type, const int32_t* label, const char* text_font, const double* text_size, const char* text_clr);

/**
* Set parameters in STK object relating X/Y axis titles
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  title1 TODO
* @param[in]  title2 TODO
* @param[in]  title1_orient TODO
* @param[in]  title1_x TODO
* @param[in]  title1_y TODO
* @param[in]  title2_orient TODO
* @param[in]  title2_x TODO
* @param[in]  title2_y TODO
* @param[in]  font TODO
* @param[in]  text_size TODO
* @param[in]  color TODO
* @param[in]  xy TODO
**
* @par Note 
*      See MSTK for detailed description of all function parameters
*      ? mark in the note represent either X and Y
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetTitleParms_STK(void* p_geo, const int32_t* stk, const char* title1, const char* title2, const int32_t* title1_orient, const double* title1_x, const double* title1_y, const int32_t* title2_orient, const double* title2_x, const double* title2_y, const char* font, const double* text_size, const char* color, const int32_t* xy);

/**
* Set transformation parameters in STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  x_trans_t TODO
* @param[in]  x_log_min TODO
* @param[in]  xvv_lev TODO
* @param[in]  xvv_cmp TODO
* @param[in]  y_trans_t TODO
* @param[in]  y_log_min TODO
* @param[in]  yvv_lev TODO
* @param[in]  yvv_cmp TODO
**
* @par Note 
*      See above full description of each parameters
*      VV's for X channel transformation can be NULL if the
*      transformation is log or loglinear. The same for Y channel.
*      See MSTK for detailed description of all function parameters
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetTransParms_STK(void* p_geo, const int32_t* stk, const int32_t* x_trans_t, const double* x_log_min, const int32_t* xvv_lev, const int32_t* xvv_cmp, const int32_t* y_trans_t, const double* y_log_min, const int32_t* yvv_lev, const int32_t* yvv_cmp);

/**
* Start array profile index labels at 0 or 1.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  stk TODO
* @param[in]  index0 TODO
**
* @par Note 
*      By default, the index labels for array channel profiles
*      begin at 0. Use this function to start them at either 0
*      or 1.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT void SetVAIndexStart_STK(void* p_geo, const int32_t* stk, const int32_t* index0);

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
