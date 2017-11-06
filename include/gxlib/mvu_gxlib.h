//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file mvu_gxlib.h
* @date 2017-11-06
* @brief File containing MVU GX C API constant and function declarations
*/

/**
* @defgroup MVU_Module MVU
* A catchall library for methods using the MAP and MVIEW classes.
* These include drawing flight paths, legends, postings, and
* special objects such as histograms and bar charts.
* @{
*/

#pragma once
#ifndef HMVU_H_DEFINED
#define HMVU_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name EMLAY_GEOMETRY Definitions
* 
* Type of Geometry
*/
///@{
/** 
* EMLAY_V_COPLANAR
* 
* 0
*/
#define EMLAY_V_COPLANAR 0
/** 
* EMLAY_H_COPLANAR
* 
* 1
*/
#define EMLAY_H_COPLANAR 1
/** 
* EMLAY_V_COAXIAL
* 
* 2
*/
#define EMLAY_V_COAXIAL 2
///@}

/**
* @name ARROW_ALIGNMENT Definitions
* 
* Direction of alignment
*/
///@{
/** 
* ARROW_ALIGNMENT_HORIZONTAL
*/
#define ARROW_ALIGNMENT_HORIZONTAL 0
/** 
* ARROW_ALIGNMENT_VERTICAL
*/
#define ARROW_ALIGNMENT_VERTICAL 1
///@}

/**
* @name BARCHART_LABEL Definitions
* 
* Place to draw bar labels
*/
///@{
/** 
* BARCHART_LABEL_NO
* 
* No label
*/
#define BARCHART_LABEL_NO 0
/** 
* BARCHART_LABEL_BELOWX
* 
* Label below X axis
*/
#define BARCHART_LABEL_BELOWX 1
/** 
* BARCHART_LABEL_ABOVEX
* 
* Label above X axis
*/
#define BARCHART_LABEL_ABOVEX 2
/** 
* BARCHART_LABEL_PEND
* 
* Label at positive end of bar
*/
#define BARCHART_LABEL_PEND 3
/** 
* BARCHART_LABEL_NEND
* 
* Label at negative end of bar
*/
#define BARCHART_LABEL_NEND 4
/** 
* BARCHART_LABEL_ALTERNAT1
* 
* Label at alternative ends,1st label at positive end
*/
#define BARCHART_LABEL_ALTERNAT1 5
/** 
* BARCHART_LABEL_ALTERNAT2
* 
* Label at alternative ends,1st label at negative end
*/
#define BARCHART_LABEL_ALTERNAT2 6
///@}

/**
* @name COLORBAR_LABEL Definitions
* 
* Label text orientation
*/
///@{
/** 
* COLORBAR_LABEL_HORIZONTAL
* 
* (default)
*/
#define COLORBAR_LABEL_HORIZONTAL 0
/** 
* COLORBAR_LABEL_VERTICAL
* 
* Gives text an orientation of -90 degrees
*/
#define COLORBAR_LABEL_VERTICAL 1
///@}

/**
* @name COLORBAR_STYLE Definitions
* 
* Label text orientation
*/
///@{
/** 
* COLORBAR_STYLE_NONE
* 
* Don't draw
*/
#define COLORBAR_STYLE_NONE 0
/** 
* COLORBAR_STYLE_MAXMIN
* 
* Post max/min values
*/
#define COLORBAR_STYLE_MAXMIN 1
///@}

/**
* @name MVU_ORIENTATION Definitions
* 
* Orientation (of whatever)
*/
///@{
/** 
* MVU_ORIENTATION_VERTICAL
* 
* Vertical
*/
#define MVU_ORIENTATION_VERTICAL 0
/** 
* MVU_ORIENTATION_HORIZONTAL
* 
* Horizontal
*/
#define MVU_ORIENTATION_HORIZONTAL 1
///@}

/**
* @name MVU_DIVISION_STYLE Definitions
* 
* Orientation (of whatever)
*/
///@{
/** 
* MVU_DIVISION_STYLE_NONE
* 
* No division marks
*/
#define MVU_DIVISION_STYLE_NONE 0
/** 
* MVU_DIVISION_STYLE_LINES
* 
* Division line
*/
#define MVU_DIVISION_STYLE_LINES 1
/** 
* MVU_DIVISION_STYLE_TICS
* 
* Inside tics, both sides
*/
#define MVU_DIVISION_STYLE_TICS 2
///@}

/**
* @name MVU_ARROW Definitions
* 
* Type Arrow. These definitions are used as binary flags, and can be
* used together by passing sums.
*/
///@{
/** 
* MVU_ARROW_SOLID
* 
* Plot the head as a solid triangle, otherwise plot a "stick arrow"
* with three lines for the tail and two barbs.
*/
#define MVU_ARROW_SOLID 1
/** 
* MVU_ARROW_FIXED
* 
* If used, input the actual length of the barbs on the arrow, in
* view X-axis units, as measured along the tail. If not used, enter the ratio
* between the length of the barbs and full length of the arrow (e.g. 0.4).
* In the latter case, the longer the arrow, the bigger the arrow head.
*/
#define MVU_ARROW_FIXED 2
///@}

/**
* @name MVU_FLIGHT_COMPASS Definitions
* 
* Compass direction
*/
///@{
/** 
* MVU_FLIGHT_COMPASS_NONE
*/
#define MVU_FLIGHT_COMPASS_NONE -1
/** 
* MVU_FLIGHT_COMPASS_EAST
*/
#define MVU_FLIGHT_COMPASS_EAST 0
/** 
* MVU_FLIGHT_COMPASS_NORTH
*/
#define MVU_FLIGHT_COMPASS_NORTH 1
/** 
* MVU_FLIGHT_COMPASS_WEST
*/
#define MVU_FLIGHT_COMPASS_WEST 2
/** 
* MVU_FLIGHT_COMPASS_SOUTH
*/
#define MVU_FLIGHT_COMPASS_SOUTH 3
///@}

/**
* @name MVU_FLIGHT_DUMMIES Definitions
* 
* Show Dummies
*/
///@{
/** 
* MVU_FLIGHT_DUMMIES_NOTINCLUDED
*/
#define MVU_FLIGHT_DUMMIES_NOTINCLUDED 0
/** 
* MVU_FLIGHT_DUMMIES_INCLUDED
*/
#define MVU_FLIGHT_DUMMIES_INCLUDED 1
///@}

/**
* @name MVU_FLIGHT_LOCATE Definitions
* 
* Line label locations
*/
///@{
/** 
* MVU_FLIGHT_LOCATE_NONE
* 
* No label
*/
#define MVU_FLIGHT_LOCATE_NONE 0
/** 
* MVU_FLIGHT_LOCATE_END
* 
* ::
* 
*     L100.2 -------------------------- L100.2
* 
* dOffA controls distance from label to line.
* dOffB controls vertical offset from center.
*/
#define MVU_FLIGHT_LOCATE_END 1
/** 
* MVU_FLIGHT_LOCATE_ABOVE
* 
* ::
* 
*     L100.2                            L100.2
*     ----------------------------------------
* 
* dOffA controls label distance above the line.
* dOffB controls offset in from line end.
*/
#define MVU_FLIGHT_LOCATE_ABOVE 2
/** 
* MVU_FLIGHT_LOCATE_BELOW
* 
* ::
* 
*     ----------------------------------------
*     L100.2                            L100.2
* 
* dOffA controls label distance below the line.
* dOffB controls offset in from line end.
*/
#define MVU_FLIGHT_LOCATE_BELOW 3
/** 
* MVU_FLIGHT_DIRECTION
* 
* To add '>' to label to indicate direction, for example:
* MVU_FLIGHT_LOCATE_END+MVU_FLIGHT_DIRECTION
*/
#define MVU_FLIGHT_DIRECTION 8
///@}

/**
* @name MVU_VOX_SURFACE_METHOD Definitions
* 
* TODO
*/
///@{
/** 
* MVU_VOX_SURFACE_METHOD_MARCHING_CUBES
*/
#define MVU_VOX_SURFACE_METHOD_MARCHING_CUBES 0
///@}

/**
* @name MVU_VOX_SURFACE_OPTION Definitions
* 
* TODO
*/
///@{
/** 
* MVU_VOX_SURFACE_OPTION_OPEN
*/
#define MVU_VOX_SURFACE_OPTION_OPEN 0
/** 
* MVU_VOX_SURFACE_OPTION_CLOSED
*/
#define MVU_VOX_SURFACE_OPTION_CLOSED 1
///@}

/**
* @name MVU_TEXTBOX Definitions
* 
* Type of Box
*/
///@{
/** 
* MVU_TEXTBOX_LEFT
*/
#define MVU_TEXTBOX_LEFT 0
/** 
* MVU_TEXTBOX_CENTER
*/
#define MVU_TEXTBOX_CENTER 1
/** 
* MVU_TEXTBOX_RIGHT
*/
#define MVU_TEXTBOX_RIGHT 2
///@}

/**
* @name MVU_VPOINT Definitions
* 
* Head Acuteness
*/
///@{
/** 
* MVU_VPOINT_SHARP
*/
#define MVU_VPOINT_SHARP 0
/** 
* MVU_VPOINT_MEDIUM
*/
#define MVU_VPOINT_MEDIUM 1
/** 
* MVU_VPOINT_BLUNT
*/
#define MVU_VPOINT_BLUNT 2
///@}

/**
* @name MVU_VPOS Definitions
* 
* Head Position
*/
///@{
/** 
* MVU_VPOS_HEAD
*/
#define MVU_VPOS_HEAD 0
/** 
* MVU_VPOS_MIDDLE
*/
#define MVU_VPOS_MIDDLE 1
/** 
* MVU_VPOS_TAIL
*/
#define MVU_VPOS_TAIL 2
///@}

/**
* @name MVU_VSIZE Definitions
* 
* Head Size
*/
///@{
/** 
* MVU_VSIZE_NOHEAD
*/
#define MVU_VSIZE_NOHEAD 0
/** 
* MVU_VSIZE_SMALLHEAD
*/
#define MVU_VSIZE_SMALLHEAD 1
/** 
* MVU_VSIZE_MEDIUMHEAD
*/
#define MVU_VSIZE_MEDIUMHEAD 2
/** 
* MVU_VSIZE_LARGEHEAD
*/
#define MVU_VSIZE_LARGEHEAD 3
/** 
* MVU_VSIZE_NOTAIL
*/
#define MVU_VSIZE_NOTAIL 4
///@}

/**
* @name MVU_VSTYLE Definitions
* 
* Head Style
*/
///@{
/** 
* MVU_VSTYLE_LINES
*/
#define MVU_VSTYLE_LINES 0
/** 
* MVU_VSTYLE_BARB
*/
#define MVU_VSTYLE_BARB 1
/** 
* MVU_VSTYLE_TRIANGLE
*/
#define MVU_VSTYLE_TRIANGLE 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Draw an arrow.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  hx TODO
* @param[in]  hy TODO
* @param[in]  tx TODO
* @param[in]  ty TODO
* @param[in]  ratio TODO
* @param[in]  angle TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Arrow_MVU(void* p_geo, const int32_t* mview, const double* hx, const double* hy, const double* tx, const double* ty, const double* ratio, const double* angle, const int32_t* type);

/**
* Draw arrow vectors based on input VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_dx TODO
* @param[in]  vv_dy TODO
* @param[in]  scale TODO
* @param[in]  pos TODO
* @param[in]  size TODO
* @param[in]  style TODO
* @param[in]  point TODO
* @param[in]  thickness TODO
**
* @par Note 
*      The locations are given in two VVs, and the directions
*      in the two others. A wide range of sizes are available.
*      If the scaling is set to rDUMMY, then arrows are automatically
*      scaled so the largest is 1cm in length.
*      If the line thickness is set to rDUMMY, the line thickness scales
*      with the arrow size, and is 1/20 of the vector length.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ArrowVectorVV_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_dx, const int32_t* vv_dy, const double* scale, const int32_t* pos, const int32_t* size, const int32_t* style, const int32_t* point, const double* thickness);

/**
* Plot bar chart on a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_name TODO
* @param[in]  data TODO
* @param[in]  line TODO
* @param[in]  x_chan TODO
* @param[in]  list TODO
* @param[in]  x_title TODO
* @param[in]  x_txt_size TODO
* @param[in]  y_title TODO
* @param[in]  y_txt_size TODO
* @param[in]  bar_title TODO
* @param[in]  bar_txt_size TODO
* @param[in]  bar_width TODO
* @param[in]  dist_fid TODO
* @param[in]  label TODO
* @param[in]  tick TODO
* @param[in]  right_axis TODO
* @param[in]  top_axis TODO
* @param[in]  bottom_axis TODO
* @param[in]  surround TODO
* @param[in]  left TODO
* @param[in]  bottom TODO
* @param[in]  right TODO
* @param[in]  top TODO
* @param[in]  xm TODO
* @param[in]  ym TODO
* @param[in]  widthm TODO
* @param[in]  heightm TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void BarChart_MVU(void* p_geo, const int32_t* mview, const char* group_name, const int32_t* data, const int32_t* line, const char* x_chan, const char* list, const char* x_title, const double* x_txt_size, const char* y_title, const double* y_txt_size, const char* bar_title, const double* bar_txt_size, const double* bar_width, const int32_t* dist_fid, const int32_t* label, const int32_t* tick, const int32_t* right_axis, const int32_t* top_axis, const int32_t* bottom_axis, const int32_t* surround, const double* left, const double* bottom, const double* right, const double* top, const double* xm, const double* ym, const double* widthm, const double* heightm);

/**
* Create a color pixel-style plot of CDI data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  data_va TODO
* @param[in]  elev_va TODO
* @param[in]  xvv TODO
* @param[in]  itr TODO
**
* @par Note 
*      Draws a single colored rectangle for each data point in
*      Conductivity-Depth data (for example). It is similar to the
*      result you get if you plot a grid with Pixel=1, but in this
*      data the row and column widths are not necessarily constant,
*      and the data can move up and down with topography. The pixels
*      are sized so that the boundaries are half-way between adjacent
*      data, both vertically and horizontally.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT void CDIPixelPlot_MVU(void* p_geo, const int32_t* mview, const char* group, const int32_t* data_va, const int32_t* elev_va, const int32_t* xvv, const int32_t* itr);

/**
* Create a color pixel-style plot of CDI data in a 3D view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  data_va TODO
* @param[in]  elev_va TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  itr TODO
**
* @par Note 
*      Similar to CDIPixelPlot_MVU, but plotted onto a series of
*      plotting planes which hang from the XY path in 3D. Each vertical plane azimuth
*      is defined by two adjacent points on the path. The color "pixel" for each
*      data point is plotted in two halves, with each half on adjacent plotting planes,
*      with the bend at the data point.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT void CDIPixelPlot3D_MVU(void* p_geo, const int32_t* mview, const char* group, const int32_t* data_va, const int32_t* elev_va, const int32_t* xvv, const int32_t* yvv, const int32_t* itr);

/**
* Create a Color Bar in view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  decimal TODO
* @param[in]  ann TODO
* @param[in]  height TODO
* @param[in]  width TODO
* @param[in]  x TODO
* @param[in]  y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ColorBar_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* decimal, const double* ann, const double* height, const double* width, const double* x, const double* y);

/**
* Create a Color Bar from two ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  itr2 TODO
* @param[in]  decimal TODO
* @param[in]  ann TODO
* @param[in]  height TODO
* @param[in]  width TODO
* @param[in]  x TODO
* @param[in]  y TODO
**
* @par Note 
*      The secondary ITR is used to blend horizontally with the
*      primary ITR in each box.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ColorBar2_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* itr2, const int32_t* decimal, const double* ann, const double* height, const double* width, const double* x, const double* y);

/**
* Create a Color Bar from two ITRs with style options
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  itr2 TODO
* @param[in]  decimal TODO
* @param[in]  ann TODO
* @param[in]  height TODO
* @param[in]  width TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  style TODO
**
* @par Note 
*      The secondary ITR is used to blend horizontally with the
*      primary ITR in each box.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ColorBar2Style_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* itr2, const int32_t* decimal, const double* ann, const double* height, const double* width, const double* x, const double* y, const int32_t* style);

/**
* Create a horizontal color bar in view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  decimal TODO
* @param[in]  ann TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  label_orient TODO
**
* @par Note 
*      The sign of the annotation offset determines whether labels are
*      plotted above or below the colorbar. Labels above are text-justified
*      to the bottom of the text, and labels below are text-justified to
*      the top of the text.
*
* @par See also 
*      ColorBar_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ColorBarHor_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* decimal, const double* ann, const double* width, const double* height, const double* x, const double* y, const int32_t* label_orient);

/**
* Create a Horizontal Color Bar from two ITRs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  itr2 TODO
* @param[in]  decimal TODO
* @param[in]  ann TODO
* @param[in]  height TODO
* @param[in]  width TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  label_orient TODO
**
* @par Note 
*      The secondary ITR is used to blend horizontally with the
*      primary ITR in each box.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1
*/
GX_EXPORT void ColorBarHor2_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* itr2, const int32_t* decimal, const double* ann, const double* height, const double* width, const double* x, const double* y, const int32_t* label_orient);

/**
* Create a Horizontal Color Bar from two ITRs with style options
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  itr2 TODO
* @param[in]  decimal TODO
* @param[in]  ann TODO
* @param[in]  height TODO
* @param[in]  width TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  style TODO
* @param[in]  label_orient TODO
**
* @par Note 
*      The secondary ITR is used to blend horizontally with the
*      primary ITR in each box.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1
*/
GX_EXPORT void ColorBarHor2Style_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* itr2, const int32_t* decimal, const double* ann, const double* height, const double* width, const double* x, const double* y, const int32_t* style, const int32_t* label_orient);

/**
* Create a Horizontal Color Bar in view with style options
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  decimal TODO
* @param[in]  ann TODO
* @param[in]  height TODO
* @param[in]  width TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  style TODO
* @param[in]  label_orient TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1
*/
GX_EXPORT void ColorBarHorStyle_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* decimal, const double* ann, const double* height, const double* width, const double* x, const double* y, const int32_t* style, const int32_t* label_orient);

/**
* Create a Color Bar in view with style options
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  decimal TODO
* @param[in]  ann TODO
* @param[in]  height TODO
* @param[in]  width TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  style TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ColorBarStyle_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* decimal, const double* ann, const double* height, const double* width, const double* x, const double* y, const int32_t* style);

/**
* Create a Color Bar in view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  itr2 TODO
* @param[in]  reg TODO
**
* @par Note 
*      To allow for expansion, all parameters are passed inside the REG object.
*      
*      BAR_ORIENTATION        one of MVU_ORIENTATION_XXX (DEFAULT = MVU_ORIENTATION_VERTICAL)
*      DECIMALS					decimals in plotted values (see sFormatStr_GS for rules) (DEFAULT = 1)
*      ANNOFF						annotation offset from bar (+/- determines side of the bar left/right and below/above)
*      BOX_SIZE               box height (mm) (width for horizontal color bar) (DEFAULT = 4)
*      BAR_WIDTH              width (mm) (short dimension) of the color bar (DEFAULT = 8)
*      MINIMUM_GAP            Minimum space between annotations, otherwise drop annotations (DEFAULT = 0 mm)
*      The actual height is over-estimated, so even with zero gap there will normally always be some space between labels.
*      FIXED_INTERVAL         Preset interval for annotations scale (DEFAULT = DUMMY, use color zones)
*      FIXED_MINOR_INTERVAL   Preset minor interval for annotations scale (DEFAULT = DUMMY, if defined must be 1/10, 1/5, 1/4 or 1/2 of FIXED_INTERVAL)
*      X								X location	(REQUIRED)
*      Y								Y location	(REQUIRED)
*      POST_MAXMIN            Post limit values at ends of the bar (0 or 1)? (DEFAULT = 0)
*      DIVISION_STYLE         One of MVU_DIVISION_STYLE_XXX (DEFAULT = MVU_DIVISION_STYLE_LINES)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.2
*/
GX_EXPORT void ColorBarREG_MVU(void* p_geo, const int32_t* mview, const int32_t* itr, const int32_t* itr2, const int32_t* reg);

/**
* Creates a contour map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  con TODO
* @param[in]  grid TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Contour_MVU(void* p_geo, const int32_t* mview, const char* con, const char* grid);

/**
* Creates a contour map with clipped areas.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ply TODO
* @param[in]  con TODO
* @param[in]  grid TODO
**
* @par Note 
*      The clipping PLY can include a surrounding inclusive polygon
*      and zero, one or more interior exclusive polygons. Construct
*      a PLY object using the AddPolygonEx_PLY function, to add both
*      inclusive (as the first PLY) and exclusive interior regions.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.6
*/
GX_EXPORT void ContourPLY_MVU(void* p_geo, const int32_t* mview, const int32_t* ply, const char* con, const char* grid);

/**
* Plot a legend for the classified color symbols.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  font_size TODO
* @param[in]  symb_scale TODO
* @param[in]  file TODO
* @param[in]  title TODO
* @param[in]  sub_title TODO
**
* @par Note 
*      If the symbol size, color, font etc are specified in
*      the ITR's REG, then the Symbol scale factor is used
*      allow the user to adjust the symbol sizes. They will be
*      plotted at a size equal to the size in the REG times
*      the scale factor.
*      If no symbol size info can be found in the REG, then
*      the symbol size is set equal to the Label Font Size.
*      If no symbol font or number info is included in the
*      REG, it is the programmer's responsibility to select
*      the correct font and symbol before CSymbLegend is
*      called. The same is true of the edge color.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void CSymbLegend_MVU(void* p_geo, const int32_t* mview, const double* x1, const double* y1, const double* font_size, const double* symb_scale, const char* file, const char* title, const char* sub_title);

/**
* Plot decay curves at survey locations
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  v_ay TODO
* @param[in]  v_ax TODO
* @param[in]  log TODO
* @param[in]  log_min TODO
* @param[in]  angle TODO
* @param[in]  x_bar TODO
* @param[in]  y_bar TODO
* @param[in]  x_off_set TODO
* @param[in]  y_off_set TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @param[in]  x_min TODO
* @param[in]  y_min TODO
* @param[in]  x_scale TODO
* @param[in]  y_scale TODO
* @param[in]  line_pitch TODO
* @param[in]  line_style TODO
* @param[in]  line_color TODO
**
* @par Note 
*      Box width and height are used to draw horizontal and vertical
*      bars. Curves outside the box are not clipped.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DecayCurve_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* v_ay, const int32_t* v_ax, const int32_t* log, const double* log_min, const double* angle, const int32_t* x_bar, const int32_t* y_bar, const double* x_off_set, const double* y_off_set, const double* width, const double* height, const double* x_min, const double* y_min, const double* x_scale, const double* y_scale, const double* line_pitch, const int32_t* line_style, const char* line_color);

/**
* Plot an arrow to indicate the direction of a flight line
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  size TODO
* @param[in]  loc TODO
* @param[in]  align TODO
**
* @par Note 
*      An arrow will be drawn in the direction from the first valid
*      to the last points in the X and Y VVs.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DirectionPlot_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const double* size, const double* loc, const int32_t* align);

/**
* Plot an EM forward model against inverted data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  coil_sep TODO
* @param[in]  coil_frequency TODO
* @param[in]  coil_configuration TODO
* @param[in]  r TODO
* @param[in]  h TODO
* @param[in]  i TODO
* @param[in]  q TODO
* @param[in]  rvv TODO
* @param[in]  hvv TODO
* @param[in]  ivv TODO
* @param[in]  qvv TODO
* @param[in]  lin_log TODO
* @param[in]  var TODO
**
* @par Note 
*      This function is designed to display an inverted result beside
*      the forward model curves. This is useful for trouble-shooting
*      or understanding why a certain inversion result was obtained.
*      The earth model is a simple halfspace.
*      
*      The forward model is plotted either as a function of
*      resistivity at a single height, or as a function of height at
*      a single resistivity. In either case, the relevant VVs must be
*      completely filled (even if one is all the same value).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void EMForward_MVU(void* p_geo, const int32_t* mview, const double* xo, const double* yo, const double* size_x, const double* size_y, const double* coil_sep, const double* coil_frequency, const int32_t* coil_configuration, const double* r, const double* h, const double* i, const double* q, const int32_t* rvv, const int32_t* hvv, const int32_t* ivv, const int32_t* qvv, const int32_t* lin_log, const int32_t* var);

/**
* Export selected map groups in a map view to a Datamine coordinate string file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lst TODO
* @param[in]  file TODO
**
* @par Note 
*      The lines, rectangles and polygons in the specified groups
*      will be exported to a Datamine coordinate string (*.dm) file.
*      The function attempts to duplicate the colors, etc. used.
*      Complex polygon objects will be exported as independent
*      single polygons.
*
* @par See also 
*      LST class
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void ExportDatamineString_MVU(void* p_geo, const int32_t* mview, const int32_t* lst, const char* file);

/**
* Export selected map groups in a map view to an AutoCAD 3D DXF file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lst TODO
* @param[in]  wa TODO
**
* @par Note 
*      Supported objects exported include lines, polygons, text.
*
* @par See also 
*      LST class
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void ExportDXF3D_MVU(void* p_geo, const int32_t* mview, const int32_t* lst, const int32_t* wa);

/**
* Export selected map groups in a map view to a Surpac STR file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lst TODO
* @param[in]  str_wa TODO
* @param[in]  styles_wa TODO
**
* @par Note 
*      The lines, rectangles and polygons in the specified groups
*      will be exported to a Surpac STR file. An accompanying styles
*      file will be created which will attempt to duplicate the
*      colors, etc. used.
*      Complex polygon objects will be exported as independent
*      single polygons.
*
* @par See also 
*      LST class
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void ExportSurpacSTR_MVU(void* p_geo, const int32_t* mview, const int32_t* lst, const int32_t* str_wa, const int32_t* styles_wa);

/**
* Draw a flight line
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  line TODO
* @param[in]  locate TODO
* @param[in]  vangle TODO
* @param[in]  up TODO
* @param[in]  loff TODO
* @param[in]  voff TODO
**
* @par Note 
*      Current line color, thickness and style are used to
*      draw the line.
*      
*      Current font, font color and font style are used to
*      annotate the line labels.
*      
*      If current clipping is ON in the VIEW, lines will be
*      clipped to the window before plotting.  In this case,
*      labels should be located ABOVE or BELOW the line
*      traces to prevent labels being clipped.
*      
*      The offsets dOffA and dOffB control the vertical and
*      horizontal label offsets with respect to the ends of
*      the line trace and depending on the label location.
*      
*      The vertical line reference angle dVerAng is used
*      to determine if lines are considered vertical or
*      horizontal.  Vertical lines use the sUp parameter
*      to determine the label up direction.  Normally, use an
*      angle of 60 degrees unless there are lines that run in
*      this direction.
*
* @par See also 
*      PathPlot_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void FlightPlot_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const char* line, const int32_t* locate, const double* vangle, const int32_t* up, const double* loff, const double* voff);

/**
* Generate areas from an line group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lines TODO
* @param[in]  col_vv TODO
* @param[in]  pat_vv TODO
* @param[in]  pitch TODO
**
* @par Note 
*      The specified line group will be used to create a new group that
*      is composed of all the resolved polygonal areas in the line group.
*      Each polygonal area is assigned a color/pattern as specified in the
*      color and pattern VV's.  Color/patterns are assigned in rotating
*      sequence.
*
* @par See also 
*      ReGenAreas_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GenAreas_MVU(void* p_geo, const int32_t* mview, const char* lines, const int32_t* col_vv, const int32_t* pat_vv, const double* pitch);

/**
* Get the XYZ range of a GOCAD surface.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
**
* @par Note 
*      Required to set up a map view before doing the actual
*      surface import.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.4
*/
GX_EXPORT void GetRangeGOCADSurface_MVU(void* p_geo, const char* file, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z);

/**
* Plot the histogram on a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  st_data TODO
* @param[in]  st_hist TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  xm TODO
* @param[in]  ym TODO
* @param[in]  widthm TODO
* @param[in]  heightm TODO
* @param[in]  xd TODO
* @param[in]  yd TODO
* @param[in]  widthd TODO
* @param[in]  heightd TODO
* @param[in]  sum_width TODO
* @param[in]  log TODO
* @param[in]  summ TODO
* @param[in]  fill_color TODO
* @param[in]  st_box TODO
**
* @par Note 
*      This function just calls Histogram2_MVU with decimals set
*      to -7 (7 significant figures).
*
* @par See also 
*      Histogram2_MVU, Histogram3_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Histogram_MVU(void* p_geo, const int32_t* mview, const int32_t* st_data, const int32_t* st_hist, const char* title, const char* unit, const double* xm, const double* ym, const double* widthm, const double* heightm, const double* xd, const double* yd, const double* widthd, const double* heightd, const double* sum_width, const int32_t* log, const int32_t* summ, const int32_t* fill_color, const int32_t* st_box);

/**
* Plot the histogram on a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  st_data TODO
* @param[in]  st_hist TODO
* @param[in]  x_title TODO
* @param[in]  y_title TODO
* @param[in]  xy_txt_size TODO
* @param[in]  title TODO
* @param[in]  plot_txt_size TODO
* @param[in]  unit TODO
* @param[in]  xm TODO
* @param[in]  ym TODO
* @param[in]  widthm TODO
* @param[in]  heightm TODO
* @param[in]  xd TODO
* @param[in]  yd TODO
* @param[in]  widthd TODO
* @param[in]  heightd TODO
* @param[in]  sum_width TODO
* @param[in]  log TODO
* @param[in]  summ TODO
* @param[in]  fill_color TODO
* @param[in]  st_box TODO
* @param[in]  x_marker TODO
**
* @par Note 
*      A vertical line through from bottom to top horizontal axis is drawn
*      Also a label 'Threshold value' is plotted against this line. However,
*      None of them will be plotted if threshold value is dummy or outside
*      the X data range.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Histogram2_MVU(void* p_geo, const int32_t* mview, const int32_t* st_data, const int32_t* st_hist, const char* x_title, const char* y_title, const double* xy_txt_size, const char* title, const double* plot_txt_size, const char* unit, const double* xm, const double* ym, const double* widthm, const double* heightm, const double* xd, const double* yd, const double* widthd, const double* heightd, const double* sum_width, const int32_t* log, const int32_t* summ, const int32_t* fill_color, const int32_t* st_box, const double* x_marker);

/**
* Plot the histogram on a map, specify decimals.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  st_data TODO
* @param[in]  st_hist TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  xm TODO
* @param[in]  ym TODO
* @param[in]  widthm TODO
* @param[in]  heightm TODO
* @param[in]  xd TODO
* @param[in]  yd TODO
* @param[in]  widthd TODO
* @param[in]  heightd TODO
* @param[in]  sum_width TODO
* @param[in]  log TODO
* @param[in]  summ TODO
* @param[in]  fill_color TODO
* @param[in]  data_decimal TODO
* @param[in]  stat_decimal TODO
* @param[in]  st_box TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Histogram3_MVU(void* p_geo, const int32_t* mview, const int32_t* st_data, const int32_t* st_hist, const char* title, const char* unit, const double* xm, const double* ym, const double* widthm, const double* heightm, const double* xd, const double* yd, const double* widthd, const double* heightd, const double* sum_width, const int32_t* log, const int32_t* summ, const int32_t* fill_color, const int32_t* data_decimal, const int32_t* stat_decimal, const int32_t* st_box);

/**
* As Histogram3_MVU, but allow probability scaling of percents.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  st_data TODO
* @param[in]  st_hist TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  xm TODO
* @param[in]  ym TODO
* @param[in]  widthm TODO
* @param[in]  heightm TODO
* @param[in]  xd TODO
* @param[in]  yd TODO
* @param[in]  widthd TODO
* @param[in]  heightd TODO
* @param[in]  sum_width TODO
* @param[in]  log TODO
* @param[in]  summ TODO
* @param[in]  prob TODO
* @param[in]  fill_color TODO
* @param[in]  data_decimal TODO
* @param[in]  stat_decimal TODO
* @param[in]  st_box TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Histogram4_MVU(void* p_geo, const int32_t* mview, const int32_t* st_data, const int32_t* st_hist, const char* title, const char* unit, const double* xm, const double* ym, const double* widthm, const double* heightm, const double* xd, const double* yd, const double* widthd, const double* heightd, const double* sum_width, const int32_t* log, const int32_t* summ, const int32_t* prob, const int32_t* fill_color, const int32_t* data_decimal, const int32_t* stat_decimal, const int32_t* st_box);

/**
* As Histogram4_MVU, but allow ITR to color bars.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  st_data TODO
* @param[in]  st_hist TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  lmd TODO
* @param[in]  xm TODO
* @param[in]  ym TODO
* @param[in]  widthm TODO
* @param[in]  heightm TODO
* @param[in]  xd TODO
* @param[in]  yd TODO
* @param[in]  widthd TODO
* @param[in]  heightd TODO
* @param[in]  sum_width TODO
* @param[in]  log TODO
* @param[in]  summ TODO
* @param[in]  prob TODO
* @param[in]  fill_color TODO
* @param[in]  data_decimal TODO
* @param[in]  stat_decimal TODO
* @param[in]  st_box TODO
* @param[in]  itr TODO
**
* @par Note 
*      The ITR can be empty (but must still be a valid ITR object).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Histogram5_MVU(void* p_geo, const int32_t* mview, const int32_t* st_data, const int32_t* st_hist, const char* title, const char* unit, const double* lmd, const double* xm, const double* ym, const double* widthm, const double* heightm, const double* xd, const double* yd, const double* widthd, const double* heightd, const double* sum_width, const int32_t* log, const int32_t* summ, const int32_t* prob, const int32_t* fill_color, const int32_t* data_decimal, const int32_t* stat_decimal, const int32_t* st_box, const int32_t* itr);

/**
* Return a LST of groups you can export using sExportDXF3D_MVU.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lst TODO
* @return The number of groups in the LST.
**
* @par Note 
*      Returns a list of visible groups that the DXF 3D export can
*      export. Removes things like VOXD, AGG, and target
*      groups starting with "Dh", which are typically plotted in 3D
*      views on a reference plan oriented toward the user, and thus
*      not exportable.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT int32_t iExportableDXF3DGroupsLST_MVU(void* p_geo, const int32_t* mview, const int32_t* lst);

/**
* Test function to ensure parameters to Mapset_MVU is sane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  min_y TODO
* @param[in]  max_y TODO
* @param[in]  size TODO
* @param[in]  port TODO
* @param[in]  exact TODO
* @param[out] scale TODO
* @param[in]  conv TODO
* @param[in]  marg_xmin TODO
* @param[in]  marg_xmax TODO
* @param[in]  marg_ymin TODO
* @param[in]  marg_ymax TODO
* @param[in]  inside TODO
* @return True if the parameters are good.
**
* @par Note 
*      Use ShowError_SYS to display errors that may have been encountered. This function can also be used
*      to calculate the default scale without creating a map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT int32_t iMapsetTest_MVU(void* p_geo, const double* min_x, const double* max_x, const double* min_y, const double* max_y, const char* size, const int32_t* port, const int32_t* exact, double* scale, const double* conv, const double* marg_xmin, const double* marg_xmax, const double* marg_ymin, const double* marg_ymax, const double* inside);

/**
* Test function to ensure parameters to Mapset_MVU is sane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  min_y TODO
* @param[in]  max_y TODO
* @param[in]  size TODO
* @param[in]  port TODO
* @param[in]  exact TODO
* @param[out] scale TODO
* @param[in]  vert_exag TODO
* @param[in]  conv TODO
* @param[in]  marg_xmin TODO
* @param[in]  marg_xmax TODO
* @param[in]  marg_ymin TODO
* @param[in]  marg_ymax TODO
* @param[in]  inside TODO
* @return True if the parameters are good.
**
* @par Note 
*      Same as iMapsetTest_MVU, with vertical exaggeration.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.3
*/
GX_EXPORT int32_t iMapset2Test_MVU(void* p_geo, const double* min_x, const double* max_x, const double* min_y, const double* max_y, const char* size, const int32_t* port, const int32_t* exact, double* scale, const double* vert_exag, const double* conv, const double* marg_xmin, const double* marg_xmax, const double* marg_ymin, const double* marg_ymax, const double* inside);

/**
* Import and plot a GOCAD surface model.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  file TODO
* @param[in]  col TODO
**
* @par Note 
*      The vertex normals are not included in the
*      GOCAD import, but are calculated using
*      the normal of each defined triangle, and taking the
*      average when vertex is shared among more than one triangle.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.4
*/
GX_EXPORT void ImportGOCADSurface_MVU(void* p_geo, const int32_t* mview, const char* file, const int32_t* col);

/**
* Load a Geosoft PLT file into a MAP.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadPlot_MVU(void* p_geo, const int32_t* map, const char* name);

/**
* Creates a new map from a PLT file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  base TODO
* @param[in]  data TODO
* @param[in]  plt TODO
* @param[in]  mpx TODO
* @param[in]  mpy TODO
**
* @par Note 
*      This only creates a map, it does not read the PLT into
*      the map.  The base view and data view will be the same
*      size.
*
* @par See also 
*      LoadPlot_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MapFromPLT_MVU(void* p_geo, const int32_t* map, const char* base, const char* data, const char* plt, const double* mpx, const double* mpy);

/**
* Creates an MDF from a Map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  mdf TODO
* @param[in]  data TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MapMDF_MVU(void* p_geo, const int32_t* map, const char* mdf, const char* data);

/**
* Creates a new map directly from parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  base TODO
* @param[in]  data TODO
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  min_y TODO
* @param[in]  max_y TODO
* @param[in]  size TODO
* @param[in]  port TODO
* @param[in]  exact TODO
* @param[in]  scale TODO
* @param[in]  conv TODO
* @param[in]  marg_xmin TODO
* @param[in]  marg_xmax TODO
* @param[in]  marg_ymin TODO
* @param[in]  marg_ymax TODO
* @param[in]  inside TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Mapset_MVU(void* p_geo, const int32_t* map, const char* base, const char* data, const double* min_x, const double* max_x, const double* min_y, const double* max_y, const char* size, const int32_t* port, const int32_t* exact, const double* scale, const double* conv, const double* marg_xmin, const double* marg_xmax, const double* marg_ymin, const double* marg_ymax, const double* inside);

/**
* Same as Mapset_MVU, with vertical exaggeration.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  base TODO
* @param[in]  data TODO
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  min_y TODO
* @param[in]  max_y TODO
* @param[in]  size TODO
* @param[in]  port TODO
* @param[in]  exact TODO
* @param[in]  scale TODO
* @param[in]  vert_exag TODO
* @param[in]  conv TODO
* @param[in]  marg_xmin TODO
* @param[in]  marg_xmax TODO
* @param[in]  marg_ymin TODO
* @param[in]  marg_ymax TODO
* @param[in]  inside TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.3
*/
GX_EXPORT void Mapset2_MVU(void* p_geo, const int32_t* map, const char* base, const char* data, const double* min_x, const double* max_x, const double* min_y, const double* max_y, const char* size, const int32_t* port, const int32_t* exact, const double* scale, const double* vert_exag, const double* conv, const double* marg_xmin, const double* marg_xmax, const double* marg_ymin, const double* marg_ymax, const double* inside);

/**
* Creates a new map from an MDF file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  mdf TODO
* @param[in]  base TODO
* @param[in]  data TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MDF_MVU(void* p_geo, const int32_t* map, const char* mdf, const char* base, const char* data);

/**
* Draw a flight line
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  line TODO
* @param[in]  locate TODO
* @param[in]  vangle TODO
* @param[in]  up TODO
* @param[in]  loff TODO
* @param[in]  voff TODO
* @param[in]  gap TODO
**
* @par Note 
*      See FlightPlot_MVU.  This is the same except for the
*      additional line gap parameter.
*
* @par See also 
*      FlighPlot_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PathPlot_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const char* line, const int32_t* locate, const double* vangle, const int32_t* up, const double* loff, const double* voff, const double* gap);

/**
* Draw a flight line
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  line TODO
* @param[in]  locate TODO
* @param[in]  compass TODO
* @param[in]  vangle TODO
* @param[in]  up TODO
* @param[in]  loff TODO
* @param[in]  voff TODO
* @param[in]  gap TODO
**
* @par Note 
*      This is the same except for the additional line compass parameter.
*
* @par See also 
*      PathPlot_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PathPlotEx_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const char* line, const int32_t* locate, const int32_t* compass, const double* vangle, const int32_t* up, const double* loff, const double* voff, const double* gap);

/**
* Draw a flight line
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  line TODO
* @param[in]  locate TODO
* @param[in]  compass TODO
* @param[in]  vangle TODO
* @param[in]  up TODO
* @param[in]  loff TODO
* @param[in]  voff TODO
* @param[in]  gap TODO
* @param[in]  dummies TODO
**
* @par Note 
*      This is the same except for the additional line dummies parameter.
*
* @par See also 
*      PathPlotEx_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void PathPlotEx2_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const char* line, const int32_t* locate, const int32_t* compass, const double* vangle, const int32_t* up, const double* loff, const double* voff, const double* gap, const int32_t* dummies);

/**
* Extract an iso-surface from a voxel and plot it to a 2D or 3D view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vox TODO
* @param[in]  value TODO
* @param[in]  col TODO
* @param[in]  line_thick TODO
**
* @par Note 
*      The Marching Cubes method of Lorensen and Cline, Computer Graphics, V21,
*      Number 4, July 1987, is used to calculate a given iso-surface in a voxel
*      model. The resulting surface is plotted to a 2D or 3D view. If the view
*      is 2-D, then only the intersection of the surface with the 2D surface is
*      plotted, using lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.4
*/
GX_EXPORT void PlotVoxelSurface_MVU(void* p_geo, const int32_t* mview, const int32_t* vox, const double* value, const int32_t* col, const double* line_thick);

/**
* Extract an iso-surface from a voxel and plot it to a 2D or 3D view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vox TODO
* @param[in]  value TODO
* @param[in]  col TODO
* @param[in]  line_thick TODO
* @param[in]  transparency TODO
* @param[in]  surface_name TODO
**
* @par Note 
*      The Marching Cubes method of Lorensen and Cline, Computer Graphics, V21,
*      Number 4, July 1987, is used to calculate a given iso-surface in a voxel
*      model. The resulting surface is plotted to a 2D or 3D view. If the view
*      is 2-D, then only the intersection of the surface with the 2D surface is
*      plotted, using lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void PlotVoxelSurface2_MVU(void* p_geo, const int32_t* mview, const int32_t* vox, const double* value, const int32_t* col, const double* line_thick, const double* transparency, const char* surface_name);

/**
* TODO...
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vox TODO
* @param[in]  method TODO
* @param[in]  option TODO
* @param[in]  min_value TODO
* @param[in]  max_value TODO
* @param[in]  col TODO
* @param[in]  line_thick TODO
* @param[in]  transparency TODO
* @param[in]  surface_name TODO
**
* @par Note 
*      TODO... Move to VOX method for surface generation only and use GeosurfaceD to display.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.5
*/
GX_EXPORT void GenerateSurfaceFromVoxel_MVU(void* p_geo, const int32_t* mview, const int32_t* vox, const int32_t* method, const int32_t* option, const double* min_value, const double* max_value, const int32_t* col, const double* line_thick, const double* transparency, const char* surface_name);

/**
* Post values on a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  dummy TODO
* @param[in]  size TODO
* @param[in]  format TODO
* @param[in]  decimals TODO
* @param[in]  ref TODO
* @param[in]  angle TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Post_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* dummy, const int32_t* size, const int32_t* format, const int32_t* decimals, const int32_t* ref, const double* angle);

/**
* Post values on a map with more paramters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_s TODO
* @param[in]  dummy TODO
* @param[in]  base TODO
* @param[in]  min_detect TODO
* @param[in]  size TODO
* @param[in]  format TODO
* @param[in]  decimals TODO
* @param[in]  offset_l TODO
* @param[in]  offset_p TODO
* @param[in]  alternate TODO
* @param[in]  mod TODO
* @param[in]  ref TODO
* @param[in]  angle TODO
* @param[in]  fixed TODO
* @param[in]  ref_ang TODO
* @param[in]  up TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PostEx_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_s, const int32_t* dummy, const double* base, const double* min_detect, const int32_t* size, const int32_t* format, const int32_t* decimals, const double* offset_l, const double* offset_p, const int32_t* alternate, const double* mod, const int32_t* ref, const double* angle, const int32_t* fixed, const double* ref_ang, const int32_t* up);

/**
* Plot a probability plot on a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  st_data TODO
* @param[in]  st_hist TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  transform TODO
* @param[in]  lmd TODO
* @param[in]  xm TODO
* @param[in]  ym TODO
* @param[in]  widthm TODO
* @param[in]  heightm TODO
* @param[in]  symb_size TODO
* @param[in]  sigma TODO
* @param[in]  sum_width TODO
* @param[in]  summ TODO
* @param[in]  data_decimal TODO
* @param[in]  stat_decimal TODO
* @param[in]  itr TODO
**
* @par Note 
*      The ITR can be empty (but must still be a valid ITR object).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void Probability_MVU(void* p_geo, const int32_t* mview, const int32_t* st_data, const int32_t* st_hist, const char* title, const char* unit, const int32_t* transform, const double* lmd, const double* xm, const double* ym, const double* widthm, const double* heightm, const double* symb_size, const double* sigma, const double* sum_width, const int32_t* summ, const int32_t* data_decimal, const int32_t* stat_decimal, const int32_t* itr);

/**
* Draw a profile along line trace
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vangle TODO
* @param[in]  up TODO
* @param[in]  gap TODO
* @param[in]  base TODO
* @param[in]  scale TODO
* @param[in]  join TODO
**
* @par Note 
*      Profiles will be drawn in the current line style.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ProfilePlot_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const double* vangle, const int32_t* up, const double* gap, const double* base, const double* scale, const int32_t* join);

/**
* Draw a profile along line trace with more parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vangle TODO
* @param[in]  up TODO
* @param[in]  gap TODO
* @param[in]  base TODO
* @param[in]  scale TODO
* @param[in]  join TODO
* @param[in]  log TODO
* @param[in]  log_base TODO
* @param[in]  smooth TODO
* @param[in]  pos_f_color TODO
* @param[in]  neg_f_color TODO
**
* @par Note 
*      Profiles will be drawn in the current line style.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ProfilePlotEx_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const double* vangle, const int32_t* up, const double* gap, const double* base, const double* scale, const int32_t* join, const int32_t* log, const double* log_base, const int32_t* smooth, const char* pos_f_color, const char* neg_f_color);

/**
* Draw a legend for proportional symbols.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  font_size TODO
* @param[in]  symb_scale TODO
* @param[in]  base TODO
* @param[in]  n_symb TODO
* @param[in]  start TODO
* @param[in]  increment TODO
* @param[in]  title TODO
* @param[in]  sub_title TODO
**
* @par Note 
*      All symbol attributes, except for the size, are assumed
*      to be defined (or defaults are used).
*      Spacing is based on the maximum of the largest plotted symbol
*      and the font size.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void PropSymbLegend_MVU(void* p_geo, const int32_t* mview, const double* x1, const double* y1, const double* font_size, const double* symb_scale, const double* base, const int32_t* n_symb, const double* start, const double* increment, const char* title, const char* sub_title);

/**
* Re-Generate from a line group and existing area group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lines TODO
**
* @par Note 
*      The area group must exist and will be modified to match the current
*      line group.
*      
*      All non-polygon entities in the current area group will remain in the
*      new area group.  All existing polygon groups will be used to determine
*      the most likely attributes for the new polygon groups.
*      
*      There must be existing polygon groups in the area group.
*
* @par See also 
*      GenAreas_MVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ReGenAreas_MVU(void* p_geo, const int32_t* mview, const char* lines);

/**
* Draws symbols with an offset and against a flag channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_f TODO
* @param[in]  x_off TODO
* @param[in]  y_off TODO
**
* @par Note 
*      Symbols are not plotted for positions where the flag VV
*      value is 0 or iDUMMY.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SymbOff_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_f, const double* x_off, const double* y_off);

/**
* Draw a wrapped text box
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  xmin TODO
* @param[in]  ymin TODO
* @param[in]  xmax TODO
* @param[in]  ymax TODO
* @param[in]  text TODO
* @param[in]  space TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void TextBox_MVU(void* p_geo, const int32_t* mview, const double* xmin, const double* ymin, const double* xmax, const double* ymax, const char* text, const double* space, const int32_t* type);

/**
* Draw line ticks on a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_s TODO
* @param[in]  size TODO
* @param[in]  mod TODO
* @param[in]  mt_size TODO
* @param[in]  mt_mod TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Tick_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_s, const double* size, const double* mod, const double* mt_size, const double* mt_mod);

/**
* Same as Tick_MVU, with gap allowance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_s TODO
* @param[in]  size TODO
* @param[in]  mod TODO
* @param[in]  mt_size TODO
* @param[in]  mt_mod TODO
* @param[in]  gap TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void TickEx_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_s, const double* size, const double* mod, const double* mt_size, const double* mt_mod, const double* gap);

/**
* Plot min and max trend lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  min_sect TODO
* @param[in]  min_dist TODO
**
* @par Note 
*      Trend lines positions consist of X and Y VVs
*      interspersed with dummies, which separate the
*      individual trend sections.
*      Set the minimum number of sections to > 0 to
*      plot only the longer trend lines.
*      (The number of sections in one trend section is
*      equal to the number of points between dummies minus one.)
*      Set the minimum distance to > 0 to
*      plot only the longer trend lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void TrndPath_MVU(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* min_sect, const double* min_dist);

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
