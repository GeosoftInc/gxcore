//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file chimera_gxlib.h
* @date 2017-11-06
* @brief File containing CHIMERA GX C API constant and function declarations
*/

/**
* @defgroup CHIMERA_Module CHIMERA
* CHIMERA GX function library.
* @{
*/

#pragma once
#ifndef HCHIMERA_H_DEFINED
#define HCHIMERA_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name CHIMERA_MAX_CHAN Definitions
* 
* Maximum channels in Chimera database
*/
///@{
/** 
* CHIMERA_MAX_CHAN
*/
#define CHIMERA_MAX_CHAN 128
///@}

/**
* @name CHIMERA_PLOT Definitions
* 
* Chimera plot type
*/
///@{
/** 
* CHIMERA_PLOT_ROSE
*/
#define CHIMERA_PLOT_ROSE 0
/** 
* CHIMERA_PLOT_PIE
*/
#define CHIMERA_PLOT_PIE 1
/** 
* CHIMERA_PLOT_BAR
*/
#define CHIMERA_PLOT_BAR 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Plot a Bar plot of up to 8 channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  data_group TODO
* @param[in]  offset_group TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  dvv TODO
* @param[in]  cvv TODO
* @param[in]  col TODO
* @param[in]  offset TODO
* @param[in]  offset_size TODO
* @param[in]  width TODO
**
* @par Note 
*      The number of channels is taken from the Data handles VV.
*      Plots a bar plot with the center of the "X" axis at the symbol location.
*      See the note on offset symbols in RosePlot_CHIMERA
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void BarPlot_CHIMERA(void* p_geo, const int32_t* mview, const char* data_group, const char* offset_group, const int32_t* xvv, const int32_t* yvv, const int32_t* dvv, const int32_t* cvv, const int32_t* col, const int32_t* offset, const double* offset_size, const double* width);

/**
* Transform values to the index of input data ranges.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_r TODO
* @param[in]  vv_i TODO
* @param[in]  vv_o TODO
**
* @par Note 
*      A list of minima (e.g.  M1, M2, M3, M4, M5) is input.
*      A list of values V is input and transformed to outputs N in the following manner:
*      
*      if(V) >= M5) N = 5
*      else if(V) >= M4) N = 4
*      ...
*      ...
*      else if(V) >= M1) N = 1
*      else N = 0
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void CategorizeByValue_CHIMERA(void* p_geo, const int32_t* vv_r, const int32_t* vv_i, const int32_t* vv_o);

/**
* Transform values to the index of input data ranges, with detection limit.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_r TODO
* @param[in]  vv_i TODO
* @param[in]  det_limit TODO
* @param[in]  vv_o TODO
**
* @par Note 
*      Same as CategorizeByValue_CHIMERA, but if the
*      input value is less than the detection limit,
*      the output value is set to zero.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void CategorizeByValueDetLimit_CHIMERA(void* p_geo, const int32_t* vv_r, const int32_t* vv_i, const double* det_limit, const int32_t* vv_o);

/**
* Apply detection limit clipping of data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  det_limit TODO
* @param[in]  conv TODO
**
* @par Note 
*      Flow:
*      
*      1. If auto-converting negatives, then all negative values
*          are replaced by -0.5*value, and detection limit is ignored.
*      
*      2. If not auto-converting negatives, and the detection limit is not
*         rDUMMY, then values less than the detection limit are converted to
*         one-half the detection limit.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void ClipToDetectLimit_CHIMERA(void* p_geo, const int32_t* vv, const double* det_limit, const int32_t* conv);

/**
* Plots location marker and joining line for circle offset symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_xi TODO
* @param[in]  vv_yi TODO
* @param[in]  vv_xo TODO
* @param[in]  vv_yo TODO
* @param[in]  off_size TODO
**
* @par Note 
*      Draws black filled circle (symbols.gfn #7) and a joining line.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void DrawCircleOffsetMarkers_CHIMERA(void* p_geo, const int32_t* mview, const int32_t* vv_xi, const int32_t* vv_yi, const int32_t* vv_xo, const int32_t* vv_yo, const double* off_size);

/**
* Plots location marker and joining line for rectangle offset symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_xi TODO
* @param[in]  vv_yi TODO
* @param[in]  vv_xo TODO
* @param[in]  vv_yo TODO
* @param[in]  off_size TODO
* @param[in]  x_size TODO
* @param[in]  y_size TODO
**
* @par Note 
*      Draws black filled circle (symbols.gfn #7) and a joining line.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void DrawRectangleOffsetMarkers_CHIMERA(void* p_geo, const int32_t* mview, const int32_t* vv_xi, const int32_t* vv_yi, const int32_t* vv_xo, const int32_t* vv_yo, const double* off_size, const double* x_size, const double* y_size);

/**
* Plot an ASSAY Duplicate result in a graph window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv TODO
* @param[in]  log TODO
* @param[in]  det_lim TODO
* @param[in]  old TODO
* @param[in]  vv_tol TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  x0 TODO
* @param[in]  y0 TODO
* @param[in]  xs TODO
* @param[in]  ys TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void DuplicateChem_CHIMERA(void* p_geo, const int32_t* mview, const int32_t* vv, const int32_t* log, const double* det_lim, const int32_t* old, const int32_t* vv_tol, const char* title, const char* unit, const double* x0, const double* y0, const double* xs, const double* ys);

/**
* Plot an ASSAY Duplicate result in a new view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @param[in]  group TODO
* @param[in]  ipj TODO
* @param[in]  vv TODO
* @param[in]  log TODO
* @param[in]  det_lim TODO
* @param[in]  old TODO
* @param[in]  vv_tol TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  vvx TODO
* @param[in]  vv_line TODO
* @param[in]  vv_fid TODO
* @param[in]  db TODO
* @param[out] min_y TODO
* @param[out] max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.3
*/
GX_EXPORT void DuplicateChemView_CHIMERA(void* p_geo, const int32_t* map, const char* view, const char* group, const int32_t* ipj, const int32_t* vv, const int32_t* log, const double* det_lim, const int32_t* old, const int32_t* vv_tol, const char* title, const char* unit, const int32_t* vvx, const int32_t* vv_line, const int32_t* vv_fid, const int32_t* db, double* min_y, double* max_y);

/**
* Get data from a line using a channel expression.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  stage TODO
* @param[in]  exp TODO
* @param[in]  ini TODO
* @param[in]  gvv TODO
**
* @par Note 
*      Input a channel expression. Units for individual channels
*      are stored in the input INI. Returns a VV for the given line
*      with the calculated expression values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void GetExpressionDataVV_CHIMERA(void* p_geo, const int32_t* db, const int32_t* line, const char* stage, const char* exp, const char* ini, const int32_t* gvv);

/**
* Get all rows of non-dummy data in a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  m_ch TODO
* @param[in]  vv_trans TODO
* @param[in]  remove_dummy_rows TODO
* @param[in]  vv_dummy TODO
* @param[in]  warn TODO
* @param[in]  vv_d TODO
* @param[in]  vv_line TODO
* @param[in]  vv_n TODO
* @param[in]  vv_used TODO
* @param[in]  vv_index TODO
* @param[in]  vv_fids TODO
* @param[in]  vv_fidi TODO
**
* @par Note 
*      This function is a quick way to get all rows
*      of data, guaranteeing no dummy items.
*      Book-keeping VVs returned let you easily
*      write back results to new channels in the
*      correct locations.
*      Set the "Dummy Row" VV to 1 if you wish to
*      remove any row where a value for the corresponding
*      channel is a dummy.
*      
*      Transforms to apply:
*      
*      -1 - Channel default (will be either raw or log)
*      0 - Raw Transform
*      1 - Log transform: base e with log min = CHIMERA_LOG_MIN
*      2 - Lambda transform
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void GetLithogeochemData_CHIMERA(void* p_geo, const int32_t* db, const int32_t* lst, const int32_t* m_ch, const int32_t* vv_trans, const int32_t* remove_dummy_rows, const int32_t* vv_dummy, const int32_t* warn, const int32_t* vv_d, const int32_t* vv_line, const int32_t* vv_n, const int32_t* vv_used, const int32_t* vv_index, const int32_t* vv_fids, const int32_t* vv_fidi);

/**
* Get channel transform options and lambda values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  trans_opt TODO
* @param[out] trans TODO
* @param[out] lda TODO
**
* @par Note 
*      If the lambda transform is requested, the channel
*      must have the lambda value defined.
*      
*      Input Transform options
*      
*      -1 - Channel default (will be either raw or log)
*      0 - Raw Transform
*      1 - Log transform: base e with log min = CHIMERA_LOG_MIN
*      2 - Lambda transform
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void GetTransform_CHIMERA(void* p_geo, const int32_t* db, const char* chan, const int32_t* trans_opt, int32_t* trans, double* lda);

/**
* Is this channel in acQuire format (e.g. "Ag_ppm_4AWR")
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input_chan TODO
* @param[out] chan TODO
* @param[in]  buff1 TODO
* @param[out] units TODO
* @param[in]  buff2 TODO
* @param[out] factor TODO
* @param[out] oxide TODO
**
* @par Note 
*      Expressions can take acQuire-type named channels
*      if the exact element/oxide is not found. This function
*      extracts the channel name, and units from an acQuire-formatted
*      channel name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT int32_t iIsAcquireChan_CHIMERA(void* p_geo, const char* input_chan, char* chan, const int32_t* buff1, char* units, const int32_t* buff2, double* factor, int32_t* oxide);

/**
* Tests a string to see if it is an element symbol
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  chan TODO
* @param[in]  case TODO
**
* @par Note 
*      Suggested use - testing to see if a channel name is an
*      element so that the "ASSAY" class can be set.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT int32_t iIsElement_CHIMERA(void* p_geo, const char* chan, const int32_t* case);

/**
* Launch histogram tool on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
**
* @par Note 
*      The database should be a currently open database.
*      This function supercedes LaunchHistogram_EDB, (which now
*      just gets the name of the EDB and calls this function).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.6
*/
GX_EXPORT void LaunchHistogram_CHIMERA(void* p_geo, const char* db, const char* chan);

/**
* Launch probability tool on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
**
* @par Note 
*      The database should be a currently open database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void LaunchProbability_CHIMERA(void* p_geo, const char* db, const char* chan);

/**
* Launch scatter tool on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
**
* @par Note 
*      The scatter tool uses the following INI parameters
*      
*      ================  ===============================================
*      SCATTER.STM       name of the scatter template, "none" for none
*      ----------------  -----------------------------------------------
*      SCATTER.STM_NAME  name of last template section, "" for none.
*      ----------------  -----------------------------------------------
*      SCATTER.X         name of channel to display in X
*      ----------------  -----------------------------------------------
*      SCATTER.Y         name of channel to display in Y
*      ----------------  -----------------------------------------------
*      SCATTER.MASK      name of channel to use for mask
*      ================  ===============================================
*      
*      The database should be a currently open database.
*      This function supercedes LaunchScatter_EDB, (which now
*      just gets the name of the EDB and calls this function).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.6
*/
GX_EXPORT void LaunchScatter_CHIMERA(void* p_geo, const char* db);

/**
* Launch Triplot tool on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
**
* @par Note 
*      The Triplot tool uses the following INI parameters
*      
*      ================  ===============================================
*      TRIPLOT.TTM       name of the triplot template, "none" for none
*      ----------------  -----------------------------------------------
*      TRIPLOT.TTM_NAME  name of last template section, "" for none.
*      ----------------  -----------------------------------------------
*      TRIPLOT.X         name of channel to display in X
*      ----------------  -----------------------------------------------
*      TRIPLOT.Y         name of channel to display in Y
*      ----------------  -----------------------------------------------
*      TRIPLOT.Z         name of channel to display in Z
*      ----------------  -----------------------------------------------
*      TRIPLOT.MASK      name of channel to use for mask
*      ================  ===============================================
*      
*      The database should be a currently open database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void LaunchTriplot_CHIMERA(void* p_geo, const char* db);

/**
* Load a LST with mask channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Loads a LST with all channels with CLASS "MASK", as well
*      as all channels containing the string "MASK", as long
*      as the CLASS for these channels is not set to something
*      other than "" or "MASK".
*      
*      This function has been duplicated by MaskChanLST_DB, which
*      is safe to use in applications which do not have CHIMERA loaded.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void MaskChanLST_CHIMERA(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Fill a list with the channels in the preferred order.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Loads a LST with all channels in the preferred order:
*      
*      First:  Sample, E, N, assay channels,
*      Middle: Data from survey (other channels),
*      Last:   Duplicate, Standard, Chemmask (and other masks), weight, lab, batch
*      
*      If the input LST object has values, it is used as the channel LST,
*      otherwise, get all the database channels. (This allows you to pass in
*      the currently displayed channels and only reload those).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void OrderedChannelLST_CHIMERA(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Plot a Pie plot of up to 8 channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  data_group TODO
* @param[in]  offset_group TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  dvv TODO
* @param[in]  cvv TODO
* @param[in]  col TODO
* @param[in]  offset TODO
* @param[in]  offset_size TODO
* @param[in]  radius TODO
**
* @par Note 
*      The number of channels is taken from the Data handles VV.
*      The values in each data VV are summed and the pie arc is
*      is given by the percent contribution of each constituent.
*      See the note on offset symbols in RosePlot_CHIMERA
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void PiePlot_CHIMERA(void* p_geo, const int32_t* mview, const char* data_group, const char* offset_group, const int32_t* xvv, const int32_t* yvv, const int32_t* dvv, const int32_t* cvv, const int32_t* col, const int32_t* offset, const double* offset_size, const double* radius);

/**
* Same as PiePlot_CHIMERA, with a starting angle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  data_group TODO
* @param[in]  offset_group TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  dvv TODO
* @param[in]  cvv TODO
* @param[in]  col TODO
* @param[in]  offset TODO
* @param[in]  offset_size TODO
* @param[in]  radius TODO
* @param[in]  start_angle TODO
**
* @par Note 
*      The starting angle is the location of the edge of the first pie
*      slice, counted in degrees counter-clockwise from horizontal
*      (3 o'clock). Zero degrees gives the same plot as PiePlot_CHIMERA.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.5
*/
GX_EXPORT void PiePlot2_CHIMERA(void* p_geo, const int32_t* mview, const char* data_group, const char* offset_group, const int32_t* xvv, const int32_t* yvv, const int32_t* dvv, const int32_t* cvv, const int32_t* col, const int32_t* offset, const double* offset_size, const double* radius, const double* start_angle);

/**
* Plot legend for the string classified symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x TODO
* @param[in]  y_min TODO
* @param[in]  y_max TODO
* @param[in]  class_file TODO
* @param[in]  index_vv TODO
**
* @par Note 
*      Plot in a legend the classes in the class file found in the input class indices.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void PlotStringClassifiedSymbolsLegendFromClassFile_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x, const double* y_min, const double* y_max, const char* class_file, const int32_t* index_vv);

/**
* Return the atomic weight of a particular element.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  element TODO
* @return The atomic weight of the given element.
**
* @par Note 
*      If the input string is not an element symbol (elements in the range
*      1-92, "H" to "U"), then returns a dummy (GS_R8DM).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4.2
*/
GX_EXPORT double rAtomicWeight_CHIMERA(void* p_geo, const char* element);

/**
* Plot a Rose plot of up to 8 channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  data_group TODO
* @param[in]  offset_group TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  dvv TODO
* @param[in]  cvv TODO
* @param[in]  col TODO
* @param[in]  offset TODO
* @param[in]  offset_size TODO
**
* @par Note 
*      The number of channels is taken from the Data handles VV.
*      The values in each data VV give the radius, in view units,
*      of the sector arc to plots. Values <=0 or dummies are not
*      plotted.
*      
*      Offset symbols: When selected, the symbols plot without
*      overlap, away from the original locations. The original
*      location is marked with a small symbol and a line joins the
*      original position and the relocated symbol.
*      Care should be taken when choosing the symbol size, because
*      if the point density is too high, all the points will get
*      pushed to the outside edge and your plot will look like a
*      hedgehog (it also takes a lot longer!).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void RosePlot_CHIMERA(void* p_geo, const int32_t* mview, const char* data_group, const char* offset_group, const int32_t* xvv, const int32_t* yvv, const int32_t* dvv, const int32_t* cvv, const int32_t* col, const int32_t* offset, const double* offset_size);

/**
* Same as RosePlot_CHIMERA, with a starting angle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  data_group TODO
* @param[in]  offset_group TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  dvv TODO
* @param[in]  cvv TODO
* @param[in]  col TODO
* @param[in]  offset TODO
* @param[in]  offset_size TODO
* @param[in]  start_angle TODO
**
* @par Note 
*      The starting angle is the location of the edge of the first pie
*      slice, counted in degrees counter-clockwise from horizontal
*      (3 o'clock). Zero degrees gives the same plot as RosePlot_CHIMERA.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.5
*/
GX_EXPORT void RosePlot2_CHIMERA(void* p_geo, const int32_t* mview, const char* data_group, const char* offset_group, const int32_t* xvv, const int32_t* yvv, const int32_t* dvv, const int32_t* cvv, const int32_t* col, const int32_t* offset, const double* offset_size, const double* start_angle);

/**
* Plot the scatter plot on a map using symbol number, size and color VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @param[in]  horz_vv TODO
* @param[in]  vert_vv TODO
* @param[in]  sym_font TODO
* @param[in]  sym_num_vv TODO
* @param[in]  sym_siz_vv TODO
* @param[in]  sym_col_vv TODO
* @param[in]  annot_style TODO
* @param[in]  h_chan TODO
* @param[in]  v_chan TODO
* @param[in]  h_units TODO
* @param[in]  v_units TODO
* @param[in]  h_min TODO
* @param[in]  h_max TODO
* @param[in]  v_min TODO
* @param[in]  v_max TODO
* @param[in]  hr_min TODO
* @param[in]  hr_max TODO
* @param[in]  vr_min TODO
* @param[in]  vr_max TODO
* @param[in]  use_hr_min TODO
* @param[in]  use_hr_max TODO
* @param[in]  use_vr_min TODO
* @param[in]  use_vr_max TODO
* @param[in]  h_scaling TODO
* @param[in]  v_scaling TODO
**
* @par Note 
*      The view scaling is not altered with any projection. The base view
*      is best as the input.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void Scatter2_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x1, const double* y1, const double* width, const double* height, const int32_t* horz_vv, const int32_t* vert_vv, const char* sym_font, const int32_t* sym_num_vv, const int32_t* sym_siz_vv, const int32_t* sym_col_vv, const int32_t* annot_style, const char* h_chan, const char* v_chan, const char* h_units, const char* v_units, const double* h_min, const double* h_max, const double* v_min, const double* v_max, const double* hr_min, const double* hr_max, const double* vr_min, const double* vr_max, const int32_t* use_hr_min, const int32_t* use_hr_max, const int32_t* use_vr_min, const int32_t* use_vr_max, const int32_t* h_scaling, const int32_t* v_scaling);

/**
* Plot a scatter plot using a single fixed symbol.
* Optional data masking with masking Color.
* Optional database linking.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @param[in]  x_vv TODO
* @param[in]  y_vv TODO
* @param[in]  m_vv TODO
* @param[in]  mask_col TODO
* @param[in]  symbol_font TODO
* @param[in]  symbol_number TODO
* @param[in]  symbol_size TODO
* @param[in]  symbol_angle TODO
* @param[in]  symbol_color TODO
* @param[in]  symbol_fill TODO
* @param[in]  db TODO
* @param[in]  line_vv TODO
* @param[in]  fid_vv TODO
* @param[in]  annotn TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  x_units TODO
* @param[in]  y_units TODO
* @param[in]  x_min TODO
* @param[in]  x_max TODO
* @param[in]  y_min TODO
* @param[in]  y_max TODO
* @param[in]  x_lin TODO
* @param[in]  y_lin TODO
* @param[in]  overlay TODO
**
* @par Note 
*      Plot a scatter plot using a single fixed symbol.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void FixedSymbolScatterPlot_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x1, const double* y1, const double* width, const double* height, const int32_t* x_vv, const int32_t* y_vv, const int32_t* m_vv, const int32_t* mask_col, const char* symbol_font, const int32_t* symbol_number, const double* symbol_size, const double* symbol_angle, const int32_t* symbol_color, const int32_t* symbol_fill, const int32_t* db, const int32_t* line_vv, const int32_t* fid_vv, const int32_t* annotn, const char* x_chan, const char* y_chan, const char* x_units, const char* y_units, const double* x_min, const double* x_max, const double* y_min, const double* y_max, const int32_t* x_lin, const int32_t* y_lin, const char* overlay);

/**
* Plot a scatter plot using colors based on a zone file.
* Optional data masking with masking color.
* Optional database linking.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @param[in]  x_vv TODO
* @param[in]  y_vv TODO
* @param[in]  m_vv TODO
* @param[in]  mask_col TODO
* @param[in]  zone_data_vv TODO
* @param[in]  zone_file TODO
* @param[in]  symbol_font TODO
* @param[in]  symbol_number TODO
* @param[in]  symbol_size TODO
* @param[in]  symbol_angle TODO
* @param[in]  symbol_color TODO
* @param[in]  symbol_fill TODO
* @param[in]  fix_edge_color TODO
* @param[in]  db TODO
* @param[in]  line_vv TODO
* @param[in]  fid_vv TODO
* @param[in]  annotn TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  x_units TODO
* @param[in]  y_units TODO
* @param[in]  x_min TODO
* @param[in]  x_max TODO
* @param[in]  y_min TODO
* @param[in]  y_max TODO
* @param[in]  x_lin TODO
* @param[in]  y_lin TODO
* @param[in]  overlay TODO
**
* @par Note 
*      Plot a scatter plot using colors based on a zone file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void ZoneColouredScatterPlot_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x1, const double* y1, const double* width, const double* height, const int32_t* x_vv, const int32_t* y_vv, const int32_t* m_vv, const int32_t* mask_col, const int32_t* zone_data_vv, const char* zone_file, const char* symbol_font, const int32_t* symbol_number, const double* symbol_size, const double* symbol_angle, const int32_t* symbol_color, const int32_t* symbol_fill, const int32_t* fix_edge_color, const int32_t* db, const int32_t* line_vv, const int32_t* fid_vv, const int32_t* annotn, const char* x_chan, const char* y_chan, const char* x_units, const char* y_units, const double* x_min, const double* x_max, const double* y_min, const double* y_max, const int32_t* x_lin, const int32_t* y_lin, const char* overlay);

/**
* Plot a scatter plot using symbols based on a symbol class file.
* Optional data masking with masking color.
* Optional database linking.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @param[in]  x_vv TODO
* @param[in]  y_vv TODO
* @param[in]  m_vv TODO
* @param[in]  mask_col TODO
* @param[in]  class_vv TODO
* @param[in]  class_file TODO
* @param[in]  symbol_size_override TODO
* @param[in]  db TODO
* @param[in]  line_vv TODO
* @param[in]  fid_vv TODO
* @param[in]  annotn TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  x_units TODO
* @param[in]  y_units TODO
* @param[in]  x_min TODO
* @param[in]  x_max TODO
* @param[in]  y_min TODO
* @param[in]  y_max TODO
* @param[in]  x_lin TODO
* @param[in]  y_lin TODO
* @param[in]  overlay TODO
**
* @par Note 
*      Plot a scatter plot using symbols based on a symbol class file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void StringClassifiedScatterPlot_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x1, const double* y1, const double* width, const double* height, const int32_t* x_vv, const int32_t* y_vv, const int32_t* m_vv, const int32_t* mask_col, const int32_t* class_vv, const char* class_file, const double* symbol_size_override, const int32_t* db, const int32_t* line_vv, const int32_t* fid_vv, const int32_t* annotn, const char* x_chan, const char* y_chan, const char* x_units, const char* y_units, const double* x_min, const double* x_max, const double* y_min, const double* y_max, const int32_t* x_lin, const int32_t* y_lin, const char* overlay);

/**
* Set data back into a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  vv_d TODO
* @param[in]  vv_line TODO
* @param[in]  vv_n TODO
* @param[in]  vv_used TODO
* @param[in]  vv_index TODO
* @param[in]  vv_fids TODO
* @param[in]  vv_fidi TODO
* @param[in]  vv_dummy TODO
**
* @par Note 
*      This function would normally be called after
*      AAGetLithogeochemData_CHIMERA to write processed values
*      back into a database, in the correct lines,
*      and in the correct fiducial locations wrt the
*      other data. The book-keeping VVs would all be
*      set up in AAGetLithogeochemData_CHIMERA.
*      
*      Values NOT in the data (missing indices) will
*      be initialized to dummy if the channel is new,
*      or if the value in the last VV below is set to 1.
*      
*      New channel types will be set using the data VV type.
*      Any metadata (CLASS, display formats) should be set separately.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void SetLithogeochemData_CHIMERA(void* p_geo, const int32_t* db, const int32_t* lst, const int32_t* vv_d, const int32_t* vv_line, const int32_t* vv_n, const int32_t* vv_used, const int32_t* vv_index, const int32_t* vv_fids, const int32_t* vv_fidi, const int32_t* vv_dummy);

/**
* Plot a Bar plot of up to 8 channels, bars stacked on each other.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  data_group TODO
* @param[in]  offset_group TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  dvv TODO
* @param[in]  cvv TODO
* @param[in]  col TODO
* @param[in]  offset TODO
* @param[in]  offset_size TODO
* @param[in]  width TODO
**
* @par Note 
*      The number of channels is taken from the Data handles VV.
*      Plots a bar plot with the center of the "X" axis at the symbol location.
*      See the note on offset symbols in RosePlot_CHIMERA
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void StackedBarPlot_CHIMERA(void* p_geo, const int32_t* mview, const char* data_group, const char* offset_group, const int32_t* xvv, const int32_t* yvv, const int32_t* dvv, const int32_t* cvv, const int32_t* col, const int32_t* offset, const double* offset_size, const double* width);

/**
* Plot ASSAY Standard result in a graph window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv TODO
* @param[in]  old TODO
* @param[in]  tol TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  x0 TODO
* @param[in]  y0 TODO
* @param[in]  xs TODO
* @param[in]  ys TODO
**
* @par Note 
*      If the tolerance is rDUMMY, then the minimum and maximum
*      values are used, and must be specified.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void Standard_CHIMERA(void* p_geo, const int32_t* mview, const int32_t* vv, const int32_t* old, const double* tol, const double* min, const double* max, const char* title, const char* unit, const double* x0, const double* y0, const double* xs, const double* ys);

/**
* Plot ASSAY Standard result in a graph window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @param[in]  group TODO
* @param[in]  ipj TODO
* @param[in]  vvy TODO
* @param[in]  old TODO
* @param[in]  tol TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  title TODO
* @param[in]  unit TODO
* @param[in]  xs TODO
* @param[in]  vvx TODO
* @param[in]  vv_line TODO
* @param[in]  vv_fid TODO
* @param[in]  db TODO
* @param[out] min_y TODO
* @param[out] max_y TODO
**
* @par Note 
*      Same as Standard_CHIMERA but plot in a new view.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.3
*/
GX_EXPORT void StandardView_CHIMERA(void* p_geo, const int32_t* map, const char* view, const char* group, const int32_t* ipj, const int32_t* vvy, const int32_t* old, const double* tol, const double* min, const double* max, const char* title, const char* unit, const double* xs, const int32_t* vvx, const int32_t* vv_line, const int32_t* vv_fid, const int32_t* db, double* min_y, double* max_y);

/**
* Plot the TriPlot on a map using symbol number, size and color VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @param[in]  x_vv TODO
* @param[in]  y_vv TODO
* @param[in]  z_vv TODO
* @param[in]  m_vv TODO
* @param[in]  sym_font TODO
* @param[in]  sym_num_vv TODO
* @param[in]  sym_siz_vv TODO
* @param[in]  sym_col_vv TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  z_chan TODO
* @param[in]  xr_min TODO
* @param[in]  xr_max TODO
* @param[in]  yr_min TODO
* @param[in]  yr_max TODO
* @param[in]  zr_min TODO
* @param[in]  zr_max TODO
* @param[in]  use_xr_min TODO
* @param[in]  use_xr_max TODO
* @param[in]  use_yr_min TODO
* @param[in]  use_yr_max TODO
* @param[in]  use_zr_min TODO
* @param[in]  use_zr_max TODO
* @param[in]  grid TODO
* @param[in]  tic TODO
* @param[in]  grid_inc TODO
**
* @par Note 
*      The mask channel VV is used for plotting precedence; those points with
*      mask = dummy are plotted first, then overwritten with the non-masked
*      values, so you don't get "good" points being covered up by masked values.
*      The view scaling is not altered with any projection. The base view
*      is best as the input.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.6
*/
GX_EXPORT void TriPlot2_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x1, const double* y1, const double* width, const double* height, const int32_t* x_vv, const int32_t* y_vv, const int32_t* z_vv, const int32_t* m_vv, const char* sym_font, const int32_t* sym_num_vv, const int32_t* sym_siz_vv, const int32_t* sym_col_vv, const char* x_chan, const char* y_chan, const char* z_chan, const double* xr_min, const double* xr_max, const double* yr_min, const double* yr_max, const double* zr_min, const double* zr_max, const int32_t* use_xr_min, const int32_t* use_xr_max, const int32_t* use_yr_min, const int32_t* use_yr_max, const int32_t* use_zr_min, const int32_t* use_zr_max, const int32_t* grid, const double* tic, const double* grid_inc);

/**
* Plot a tri-plot using a single fixed symbol.
* Optional data masking with masking color.
* Optional database linking.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  side TODO
* @param[in]  x_vv TODO
* @param[in]  y_vv TODO
* @param[in]  z_vv TODO
* @param[in]  m_vv TODO
* @param[in]  mask_col TODO
* @param[in]  symbol_font TODO
* @param[in]  symbol_number TODO
* @param[in]  symbol_size TODO
* @param[in]  symbol_angle TODO
* @param[in]  symbol_color TODO
* @param[in]  symbol_fill TODO
* @param[in]  db TODO
* @param[in]  line_vv TODO
* @param[in]  fid_vv TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  z_chan TODO
* @param[in]  grid TODO
* @param[in]  tic TODO
* @param[in]  grid_inc TODO
* @param[in]  overlay TODO
**
* @par Note 
*      Plot a tri plot using a single fixed symbol.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void FixedSymbolTriPlot_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x1, const double* y1, const double* side, const int32_t* x_vv, const int32_t* y_vv, const int32_t* z_vv, const int32_t* m_vv, const int32_t* mask_col, const char* symbol_font, const int32_t* symbol_number, const double* symbol_size, const double* symbol_angle, const int32_t* symbol_color, const int32_t* symbol_fill, const int32_t* db, const int32_t* line_vv, const int32_t* fid_vv, const char* x_chan, const char* y_chan, const char* z_chan, const int32_t* grid, const double* tic, const double* grid_inc, const char* overlay);

/**
* Plot a tri-plot using colors based on a zone file.
* Optional data masking with masking color.
* Optional database linking.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  side TODO
* @param[in]  x_vv TODO
* @param[in]  y_vv TODO
* @param[in]  z_vv TODO
* @param[in]  m_vv TODO
* @param[in]  mask_col TODO
* @param[in]  zone_data_vv TODO
* @param[in]  zone_file TODO
* @param[in]  symbol_font TODO
* @param[in]  symbol_number TODO
* @param[in]  symbol_size TODO
* @param[in]  symbol_angle TODO
* @param[in]  symbol_color TODO
* @param[in]  symbol_fill TODO
* @param[in]  fix_edge_color TODO
* @param[in]  db TODO
* @param[in]  line_vv TODO
* @param[in]  fid_vv TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  z_chan TODO
* @param[in]  grid TODO
* @param[in]  tic TODO
* @param[in]  grid_inc TODO
* @param[in]  overlay TODO
**
* @par Note 
*      Plot a tri plot using colors based on a zone file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void ZoneColouredTriPlot_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x1, const double* y1, const double* side, const int32_t* x_vv, const int32_t* y_vv, const int32_t* z_vv, const int32_t* m_vv, const int32_t* mask_col, const int32_t* zone_data_vv, const char* zone_file, const char* symbol_font, const int32_t* symbol_number, const double* symbol_size, const double* symbol_angle, const int32_t* symbol_color, const int32_t* symbol_fill, const int32_t* fix_edge_color, const int32_t* db, const int32_t* line_vv, const int32_t* fid_vv, const char* x_chan, const char* y_chan, const char* z_chan, const int32_t* grid, const double* tic, const double* grid_inc, const char* overlay);

/**
* Plot a tri-plot using symbols based on a symbol class file.
* Optional data masking with masking color.
* Optional database linking.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  title TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  side TODO
* @param[in]  x_vv TODO
* @param[in]  y_vv TODO
* @param[in]  z_vv TODO
* @param[in]  m_vv TODO
* @param[in]  mask_col TODO
* @param[in]  class_vv TODO
* @param[in]  class_file TODO
* @param[in]  symbol_size_override TODO
* @param[in]  db TODO
* @param[in]  line_vv TODO
* @param[in]  fid_vv TODO
* @param[in]  x_chan TODO
* @param[in]  y_chan TODO
* @param[in]  z_chan TODO
* @param[in]  grid TODO
* @param[in]  tic TODO
* @param[in]  grid_inc TODO
* @param[in]  overlay TODO
**
* @par Note 
*      Plot a tri-plot using symbols based on a symbol class file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void StringClassifiedTriPlot_CHIMERA(void* p_geo, const int32_t* mview, const char* title, const double* x1, const double* y1, const double* side, const int32_t* x_vv, const int32_t* y_vv, const int32_t* z_vv, const int32_t* m_vv, const int32_t* mask_col, const int32_t* class_vv, const char* class_file, const double* symbol_size_override, const int32_t* db, const int32_t* line_vv, const int32_t* fid_vv, const char* x_chan, const char* y_chan, const char* z_chan, const int32_t* grid, const double* tic, const double* grid_inc, const char* overlay);

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
