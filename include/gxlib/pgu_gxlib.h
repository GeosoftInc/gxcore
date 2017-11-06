//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file pgu_gxlib.h
* @date 2017-11-06
* @brief File containing PGU GX C API constant and function declarations
*/

/**
* @defgroup PGU_Module PGU
* A collection of methods applied to PG objects, including
* fills, trending and 2-D FFT operations.
* @{
*/

#pragma once
#ifndef HPGU_H_DEFINED
#define HPGU_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name BLAKEY_TEST Definitions
* 
* Types of BLAKEY tests
*/
///@{
/** 
* BLAKEY_TEST_ONESIDE
*/
#define BLAKEY_TEST_ONESIDE 1
/** 
* BLAKEY_TEST_TWOSIDE
*/
#define BLAKEY_TEST_TWOSIDE 2
/** 
* BLAKEY_TEST_THREESIDE
*/
#define BLAKEY_TEST_THREESIDE 3
/** 
* BLAKEY_TEST_FOURSIDE
*/
#define BLAKEY_TEST_FOURSIDE 4
///@}

/**
* @name PGU_CORR Definitions
* 
* Correlation (must be synchronized with ST2_CORRELATION)
*/
///@{
/** 
* PGU_CORR_SIMPLE
* 
* Simple correlation
*/
#define PGU_CORR_SIMPLE 0
/** 
* PGU_CORR_PEARSON
* 
* Pearson's correlation (normalized to standard deviations)
*/
#define PGU_CORR_PEARSON 1
///@}

/**
* @name PGU_DIRECTGRID Definitions
* 
* Type of statistic to use on the data points in each cell.
*/
///@{
/** 
* PGU_DIRECTGRID_MINIMUM
* 
* Select the minimum value found in each cell
*/
#define PGU_DIRECTGRID_MINIMUM 0
/** 
* PGU_DIRECTGRID_MAXIMUM
* 
* Select the maximum value found in each cell
*/
#define PGU_DIRECTGRID_MAXIMUM 1
/** 
* PGU_DIRECTGRID_MEAN
* 
* Select the mean of all values found in each cell
*/
#define PGU_DIRECTGRID_MEAN 2
/** 
* PGU_DIRECTGRID_ITEMS
* 
* The number of valid (non-dummy) items found in each cell
*/
#define PGU_DIRECTGRID_ITEMS 3
///@}

/**
* @name PGU_DIRECTION Definitions
* 
* Direction
*/
///@{
/** 
* PGU_FORWARD
* 
* Forward direction: Removes mean and standard deviation,
* storing the values in the VVs.
*/
#define PGU_FORWARD 0
/** 
* PGU_BACKWARD
* 
* Backward direction: Applies mean and standard deviation
* values in the VVs to the data.
*/
#define PGU_BACKWARD 1
///@}

/**
* @name PGU_TRANS Definitions
* 
* Transform methods for the columns
*/
///@{
/** 
* PGU_TRANS_NONE
*/
#define PGU_TRANS_NONE 0
/** 
* PGU_TRANS_LOG
*/
#define PGU_TRANS_LOG 1
///@}

/**
* @name PGU_INTERP_ORDER Definitions
* 
* Interpolation direction order
*/
///@{
/** 
* PGU_INTERP_ORDER_XYZ
*/
#define PGU_INTERP_ORDER_XYZ 0
/** 
* PGU_INTERP_ORDER_XZY
*/
#define PGU_INTERP_ORDER_XZY 1
/** 
* PGU_INTERP_ORDER_YXZ
*/
#define PGU_INTERP_ORDER_YXZ 2
/** 
* PGU_INTERP_ORDER_YZX
*/
#define PGU_INTERP_ORDER_YZX 3
/** 
* PGU_INTERP_ORDER_ZXY
*/
#define PGU_INTERP_ORDER_ZXY 4
/** 
* PGU_INTERP_ORDER_ZYX
*/
#define PGU_INTERP_ORDER_ZYX 5
///@}


/**
* @name General Functions 
*/
///@{

/**
* Apply reference file boolean mask to pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  ref_fil TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Bool_PGU(void* p_geo, const int32_t* pg, const char* ref_fil);

/**
* Direct-gridding method, DAT version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  rot TODO
* @param[in]  dat TODO
* @param[in]  method TODO
**
* @par Note 
*      Grid cells take on the specified statistic of the values inside the
*      cell area. Grid cells containing no data values are set to dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void DirectGriddingDAT_PGU(void* p_geo, const int32_t* pg, const double* xo, const double* yo, const double* dx, const double* dy, const double* rot, const int32_t* dat, const int32_t* method);

/**
* Direct-gridding method, DAT version, 3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  zo TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  dz TODO
* @param[in]  rot TODO
* @param[in]  dat TODO
* @param[in]  method TODO
**
* @par Note 
*      3D grid cells take on the specified statistic of the values inside the
*      cell area. Grid cells containing no data values are set to dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT void DirectGriddingDAT3D_PGU(void* p_geo, const int32_t* pg, const double* xo, const double* yo, const double* zo, const double* dx, const double* dy, const double* dz, const double* rot, const int32_t* dat, const int32_t* method);

/**
* Direct-gridding method, DB version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  rot TODO
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  method TODO
**
* @par Note 
*      Grid cells take on the specified statistic of the values inside the
*      cell area. Grid cells containing no data values are set to dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void DirectGriddingDB_PGU(void* p_geo, const int32_t* pg, const double* xo, const double* yo, const double* dx, const double* dy, const double* rot, const int32_t* db, const int32_t* x, const int32_t* y, const int32_t* z, const int32_t* method);

/**
* Direct-gridding method, DB version, 3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  zo TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  dz TODO
* @param[in]  rot TODO
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  data TODO
* @param[in]  method TODO
**
* @par Note 
*      3D grid cells take on the specified statistic of the values inside the
*      cell area. Grid cells containing no data values are set to dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT void DirectGriddingDB3D_PGU(void* p_geo, const int32_t* pg, const double* xo, const double* yo, const double* zo, const double* dx, const double* dy, const double* dz, const double* rot, const int32_t* db, const int32_t* x, const int32_t* y, const int32_t* z, const int32_t* data, const int32_t* method);

/**
* Direct-gridding method, VV version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  rot TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @param[in]  v_vz TODO
* @param[in]  method TODO
**
* @par Note 
*      Grid cells take on the specified statistic of the values inside the
*      cell area. Grid cells containing no data values are set to dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void DirectGriddingVV_PGU(void* p_geo, const int32_t* pg, const double* xo, const double* yo, const double* dx, const double* dy, const double* rot, const int32_t* v_vx, const int32_t* v_vy, const int32_t* v_vz, const int32_t* method);

/**
* Expand a pager by filling the dummies for expanded edges
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  pg_o TODO
* @param[in]  ex_pcnt TODO
* @param[in]  ex_shp TODO
* @param[in]  ex_x TODO
* @param[in]  ex_y TODO
**
* @par Note 
*      3D pagers are expanded in X,Y direction the number of slices(Z) is unchanged .
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Expand_PGU(void* p_geo, const int32_t* pg_i, const int32_t* pg_o, const double* ex_pcnt, const int32_t* ex_shp, const int32_t* ex_x, const int32_t* ex_y);

/**
* Replace all dummies in a pager by predict values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  fl_roll_wt TODO
* @param[in]  fl_roll_base TODO
* @param[in]  fl_roll_dist TODO
* @param[in]  fl_mxf TODO
* @param[in]  fl_mxp TODO
* @param[in]  fl_amp_lmt TODO
* @param[in]  fl_edge_lmt TODO
* @param[in]  fl_edge_wid TODO
* @param[in]  fl_npass TODO
* @param[in]  ref_fil TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Fill_PGU(void* p_geo, const int32_t* pg, const int32_t* fl_roll_wt, const double* fl_roll_base, const int32_t* fl_roll_dist, const int32_t* fl_mxf, const int32_t* fl_mxp, const double* fl_amp_lmt, const double* fl_edge_lmt, const int32_t* fl_edge_wid, const int32_t* fl_npass, const char* ref_fil);

/**
* Set all values in a pager to a single value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void FillValue_PGU(void* p_geo, const int32_t* pg, const double* value);

/**
* Apply 5x5, 7x7 or 9X9 symmetric convolution filter to a PG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  npass TODO
* @param[in]  usefile TODO
* @param[in]  file TODO
* @param[in]  size TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.5
*/
GX_EXPORT void FiltSym_PGU(void* p_geo, const int32_t* pg, const int32_t* npass, const int32_t* usefile, const char* file, const int32_t* size, const int32_t* vv);

/**
* Apply 5x5 symmetric convolution filter to a PG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  npass TODO
* @param[in]  usefile TODO
* @param[in]  file TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void FiltSym5_PGU(void* p_geo, const int32_t* pg, const int32_t* npass, const int32_t* usefile, const char* file, const int32_t* vv);

/**
* Pick grid peaks.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  nlmt TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Blakey test limit defines how grid peaks are to be found.
*      For example, with the BLAKEY_TEST_ONESIDE, a grid
*      point will be picked if its grid value is greater than
*      the value of one or more of its four neighouring points.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridPeak_PGU(void* p_geo, const char* grid, const int32_t* nlmt, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* IDWGriddingDAT_PGU     Inverse-distance weighting gridding method, DAT version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  dat TODO
* @param[in]  reg TODO
**
* @par Note 
*      See the notes for IDWGriddingDB_PGU.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void IDWGriddingDAT_PGU(void* p_geo, const int32_t* pg, const int32_t* dat, const int32_t* reg);

/**
* IDWGriddingDAT3D_PGU     Inverse-distance weighting gridding method, DAT version, 3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  dat TODO
* @param[in]  reg TODO
**
* @par Note 
*      See the notes for IDWGriddingDB3D_PGU.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT void IDWGriddingDAT3D_PGU(void* p_geo, const int32_t* pg, const int32_t* dat, const int32_t* reg);

/**
* IDWGriddingDB_PGU     Inverse-distance weighting gridding method, DB version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  reg TODO
**
* @par Note 
*      Grid cells take on the averaged values within a search radius, weighted inversely by distance.
*      
*      Weighting can be controlled using the power and slope properties;
*      
*      weighting = 1 / (distance^wtpower + 1/slope) where distance is in
*      units of grid cells (X dimenstion). Default is 0.0,
*      
*      If the blanking distance is set, all cells whose center point is not within the blanking distance of
*      at least one data point are set to dummy.
*      
*      REG Parameters:
*      
*      X0, Y0, DX, DY: Grid origin, and cell sizes (required)
*      WT_POWER (default=2), WT_SLOPE (default=1) Weighting function parameters
*      SEARCH_RADIUS: Distance weighting limit (default = 4 * SQRT(DX*DY))
*      BLANKING_DISTANCE: Dummy values farther from data than this distance. (default = 4 * SQRT(DX*DY))
*      LOG: Apply log transform to input data before gridding (0:No (default), 1:Yes)?
*      LOG_BASE: One of VV_LOG_BASE_10 (default) or VV_LOG_BASE_E
*      LOG_NEGATIVE: One of VV_LOG_NEGATIVE_NO (default) or VV_LOG_NEGATIVE_YES
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void IDWGriddingDB_PGU(void* p_geo, const int32_t* pg, const int32_t* db, const int32_t* x, const int32_t* y, const int32_t* z, const int32_t* reg);

/**
* IDWGriddingDB3D_PGU     Inverse-distance weighting gridding method, DB version, 3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  data TODO
* @param[in]  reg TODO
**
* @par Note 
*      3D cells take on the averaged values within a search radius, weighted inversely by distance.
*      
*      Weighting can be controlled using the power and slope properties;
*      
*      weighting = 1 / (distance^wtpower + 1/slope) where distance is in
*      units of grid cells (X dimenstion). Default is 0.0,
*      
*      If the blanking distance is set, all cells whose center point is not within the blanking distance of
*      at least one data point are set to dummy.
*      
*      REG Parameters:
*      
*      X0, Y0, Z0, DX, DY, DZ: Grid origin, and cell sizes (required)
*      WT_POWER (default=2), WT_SLOPE (default=1) Weighting function parameters
*      SEARCH_RADIUS: Distance weighting limit (default = 4 * CUBE_ROOT(DX*DY*DZ))
*      BLANKING_DISTANCE: Dummy values farther from data than this distance. (default = 4 * CUBE_ROOT(DX*DY*DZ))
*      LOG: Apply log transform to input data before gridding (0:No (default), 1:Yes)?
*      LOG_BASE: One of VV_LOG_BASE_10 (default) or VV_LOG_BASE_E
*      LOG_NEGATIVE: One of VV_LOG_NEGATIVE_NO (default) or VV_LOG_NEGATIVE_YES
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT void IDWGriddingDB3D_PGU(void* p_geo, const int32_t* pg, const int32_t* db, const int32_t* x, const int32_t* y, const int32_t* z, const int32_t* data, const int32_t* reg);

/**
* IDWGriddingVV_PGU     Inverse-distance weighting gridding method, VV version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  reg TODO
**
* @par Note 
*      See the notes for IDWGriddingDB_PGU.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void IDWGriddingVV_PGU(void* p_geo, const int32_t* pg, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* reg);

/**
* NumericToThematic_PGU    Set index values in a pager based on a numeric pager with translation VV.
* 
* Returns			  Nothing
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  vv TODO
* @param[in]  pg_o TODO
**
* @par Note 
*      The values in the input data VV represent the center-of-range
*      values of unique properties with indices 0 to N-1, where N
*      is the number of items in the input VV.
*      
*      This VV is sorted from smallest to largest, and each value in
*      in the input numeric PG is tested to see into which range it goes.
*      The closest range value for each item is used, so the half-way point
*      is the dividing point. The top and bottom-most range widths are determined
*      by the "inside half-width" to the nearest range.
*      
*      The INDEX of the closest range is then inserted into the output PG, so
*      it can be used in a thematic voxel (for instance).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void NumericToThematic_PGU(void* p_geo, const int32_t* pg_i, const int32_t* vv, const int32_t* pg_o);

/**
* Find all peaks in peakedneess grid pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  pkness TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void Peakedness_PGU(void* p_geo, const char* grid, const int32_t* pkness, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Create peakedneess grid from input grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grdi TODO
* @param[in]  grdo TODO
* @param[in]  radius TODO
* @param[in]  percent_lesser TODO
**
* @par Note 
*      This function creates a peakedneess grid from input grid.
*      Radius, is the maximum radius at which the value of the parent pixel is compared to
*      the value of surrounding pixels.
*      percent_lesser, is used to indicate the percentage of pixels at each radii smaller than
*      or equal to Radius that must have value lower than the parent pixel in order to call
*      that radius true or equal to 1.
*      Description:  For each pixel in the grid a series of radii are evaluated from 1 to Radius.
*      If the percentage of pixels for a given radius is less than percent_lesser the parent pixel
*      receives an additional 1.
*      For examples if the Radius is set to 5 and the percent_lesser is set to 70%.
*      And radius 1 = 90%, radius 2 = 85%, radius 3 = 75%, radius 4 = 70% and radius 5 = 65%
*      then the parent pixel would receive 1+1+1+1+0 = 4.
*      Use:  This function is useful in isolating the anomaly peaks in data that has a large
*      value range for anomalies. For example the 1 mV anomaly could quite possibly have
*      the same representation as the 100 mV anomaly using this function.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void PeakednessGrid_PGU(void* p_geo, const char* grdi, const char* grdo, const int32_t* radius, const double* percent_lesser);

/**
* Create a reference file (boolean mask flag) from pager.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  ref_fil TODO
**
* @par Note 
*      A reference file is a binary file with the following format:
*      
*      The first 8 bytes are the pager dimensions NX and NY as longs.
*      The remaining bits, one bit per pager cell - (NX * NY)/8 bytes
*      are zero where the pager is dummy, and 1 where the pager is defined.
*      
*      The reference file is used in various operations where it is
*      necessary to mask some output to the original defined cells.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RefFile_PGU(void* p_geo, const int32_t* pg, const char* ref_fil);

/**
* Writes a PG to an image file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  rot TODO
* @param[in]  tr TODO
* @param[in]  ipj TODO
* @param[in]  file TODO
**
* @par Note 
*      The trend object and projection are optional.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SaveFile_PGU(void* p_geo, const int32_t* pg, const double* xo, const double* yo, const double* dx, const double* dy, const double* rot, const int32_t* tr, const int32_t* ipj, const char* file);

/**
* Set numeric values in a pager based on an index pager with translation VV.
* 
* Returns			  Nothing
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  vv TODO
* @param[in]  pg_o TODO
**
* @par Note 
*      The items in the input data VV are inserted into
*      the output PG using the indices in the index PG.
*      
*      This function is useful when converting a thematic voxel, which is
*      type GS_LONG and contains indices into its own internal TPAT
*      object, and you provide a numeric mapping VV, calculated using
*      SetupTranslateToNumericVV_TPAT.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void ThematicToNumeric_PGU(void* p_geo, const int32_t* pg_i, const int32_t* vv, const int32_t* pg_o);

/**
* Trend remove or replace back in pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  pg_o TODO
* @param[in]  tr TODO
* @param[in]  tr_opt TODO
* @param[in]  tr_pt_bs TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Trend_PGU(void* p_geo, const int32_t* pg_i, const int32_t* pg_o, const int32_t* tr, const int32_t* tr_opt, const int32_t* tr_pt_bs, const double* xo, const double* yo, const double* dx, const double* dy);

///@}

/**
* @name Math Operations Functions 
*/
///@{

/**
* Add a scalar value to a pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  scalar TODO
**
* @par Note 
*      Only available for FLOAT or DOUBLE pagers
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void AddScalar_PGU(void* p_geo, const int32_t* pg, const double* scalar);

/**
* Multiply a scalar value and a pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  scalar TODO
**
* @par Note 
*      Only available for FLOAT or DOUBLE pagers
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void MultiplyScalar_PGU(void* p_geo, const int32_t* pg, const double* scalar);

///@}

/**
* @name Matrix Operation Functions 
*/
///@{

/**
* Find the correlations between columns in a matrix
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_u TODO
* @param[in]  pg_o TODO
**
* @par Note 
*      The input matrix is M rows by N columns. The returned matrix
*      is a symmetric N by N matrix whose elements are the normalized
*      dot products of the columns of the input matrix with themselves.
*      The elements take on values from 0 (orthogonal) to 1 (parallel).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void CorrelationMatrix_PGU(void* p_geo, const int32_t* pg_u, const int32_t* pg_o);

/**
* Same as CorrelationMatrix_PGU, but select correlation type.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_u TODO
* @param[in]  corr TODO
* @param[in]  pg_o TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void CorrelationMatrix2_PGU(void* p_geo, const int32_t* pg_u, const int32_t* corr, const int32_t* pg_o);

/**
* Inverts a square matrix using LU decomp. and back-substitution
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  pg_o TODO
**
* @par Note 
*      This is an "in-place" operation, and set up so that the input and
*      output pagers may be the same handle. (If they are different, the
*      input pager remains unchanged).
*      Pagers and VVs must be type GS_DOUBLE.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void InvertMatrix_PGU(void* p_geo, const int32_t* pg_i, const int32_t* pg_o);

/**
* Find eigenvalues, eigenvectors of a real symmetric matrix.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  vv_d TODO
* @param[in]  pg_eigen TODO
**
* @par Note 
*      The number of rows must equal the number of columns.
*      Eienvalues, vectors are sorted in descending order.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Jacobi_PGU(void* p_geo, const int32_t* pg_i, const int32_t* vv_d, const int32_t* pg_eigen);

/**
* Solve a linear system using LU decomposition and back-substitution.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_a TODO
* @param[in]  vv_i TODO
* @param[in]  vv_b TODO
* @param[in]  vv_sol TODO
**
* @par Note 
*      Solves the system Ax = b for a given b, using the LU decomposition
*      of the matrix a
*      The LU decomposition and the permutation vector are obtained
*      from LUBackSub_PGU.
*      Pagers and VVs must be type GS_DOUBLE except for the permutation vector,
*      which should be INT
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void LUBackSub_PGU(void* p_geo, const int32_t* pg_a, const int32_t* vv_i, const int32_t* vv_b, const int32_t* vv_sol);

/**
* Perform an LU decomposition on a square pager.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  pg_o TODO
* @param[in]  vv_perm TODO
**
* @par Note 
*      The L and U matrix are both contained in the returned pager; The
*      "L" matrix is composed of the sub-diagonal elements of the output
*      pager, as well as "1" values on the diagonal. The "U" matrix is
*      composed of the diagonal elements (sub-diagonal elements set to 0).
*      This is an "in-place" operation, and set up so that the input and
*      output pagers may be the same handle. (If they are different, the
*      input pager remains unchanged).
*      The LU decomposition, and the permutation vector are used for
*      LUBackSub_PGU.
*      Pagers must be type GS_DOUBLE and the permutation vector type INT
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void LUDecomp_PGU(void* p_geo, const int32_t* pg_i, const int32_t* pg_o, const int32_t* vv_perm);

/**
* Multiply two pagers as if they were matrices.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_u TODO
* @param[in]  transpose_u TODO
* @param[in]  pg_v TODO
* @param[in]  transpose TODO
* @param[in]  pg_uv TODO
**
* @par Note 
*      The matrices must be correctly dimensioned, taking into
*      account whether transposition should occur before
*      multiplication. The input matrices are not altered on output (even
*      if transposition is requested).
*      Assertions if: Matrices are not expected sizes
*      Dummies are treated as 0 values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void MatrixMult_PGU(void* p_geo, const int32_t* pg_u, const int32_t* transpose_u, const int32_t* pg_v, const int32_t* transpose, const int32_t* pg_uv);

/**
* Multiply a VV by a pager like a matrix*vector multiply.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_u TODO
* @param[in]  vv_x TODO
* @param[in]  vv_o TODO
**
* @par Note 
*      The matrix is input as an M rows (data) by N columns (variables) PG.
*      The vector must be of length N. The output VV is set to length M.
*      The PG and VVs must be type GS_DOUBLE.
*      
*      Terminates if: 
*      
*           Matrices, VV are not expected sizes (taken from U)
*           PGs are not GS_DOUBLE.
*      
*      Dummies are treated as 0 values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void MatrixVectorMult_PGU(void* p_geo, const int32_t* pg_u, const int32_t* vv_x, const int32_t* vv_o);

/**
* Do a singular value decomposition on a matrix stored as a PG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_a TODO
* @param[in]  pg_u TODO
* @param[in]  vv_w TODO
* @param[in]  pg_v TODO
**
* @par Note 
*      The matrix is input as an N rows (data) by M columns (variables) PG.
*      On return, the matrix is decomposed to A = U * W * Vt. If M<N, then an error will 
*      be registered. In this case, augment the "A" PG with rows of zero values.
*      
*      The input matrices must be A[M,N], U[M.N] and V[N,N]. The length of the W VV
*      is set by sSVD_PGU to N.
*      
*      The Pagers must be type GS_DOUBLE.
*      
*      Terminates if: 
*      
*           U is not M by N. (Taken from size of A)
*           V is not N by N. (Taken from #columns in A).
*           PGs, VV are not GS_DOUBLE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SVDecompose_PGU(void* p_geo, const int32_t* pg_a, const int32_t* pg_u, const int32_t* vv_w, const int32_t* pg_v);

/**
* Reconstitute the original matrix from an SVD.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_u TODO
* @param[in]  vv_w TODO
* @param[in]  pg_v TODO
* @param[in]  min_w TODO
* @param[in]  pg_a TODO
**
* @par Note 
*      The matrix is input as an N rows (data) by M columns (variables) PG.
*      On return, the matrix is decomposed to A = U * W * Vt.
*      If M<N, then an error will be registered. In this case, augment the
*      "A" PG with rows of zero values.
*      The input matrices must be A[M,N], U[M.N] and V[N,N]. The length of the W VV
*      is set by sSVDecompose_PGU to N.
*      The Pagers must be type GS_DOUBLE.
*      
*      Terminates if: 
*      
*           U is not M by N. (Taken from size of A)
*           V is not N by N. (Taken from #columns in A).
*           PGs, VV are not GS_DOUBLE.
*      
*      Dummies are treated as 0 values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SVRecompose_PGU(void* p_geo, const int32_t* pg_u, const int32_t* vv_w, const int32_t* pg_v, const double* min_w, const int32_t* pg_a);

///@}

/**
* @name Principal Component Analysis Functions 
*/
///@{

/**
* Determines principal component communalities.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  vv_c TODO
**
* @par Note 
*      Calculate communalities (sums of the squares of the column
*      values in each row)
*      Pagers and VVs must be type GS_DOUBLE.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PCCommunality_PGU(void* p_geo, const int32_t* pg_i, const int32_t* vv_c);

/**
* Compute the principal component loadings from the standardized data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_x TODO
* @param[in]  pg_loadings TODO
**
* @par Note 
*      Works on columns of the PG.
*      Calculates the correlation matrix from the columns of the
*      standardized data, then computes the eigen values and eigenvectors
*      of the correlation matrix. The loadings are the eigenvectors, ordered
*      by descending eigenvalues, scaled by the square root of the
*      eigenvalues. The returned pager must be sized the same as the
*      input pager.
*      Correlations are performed using "PGU_CORR_SIMPLE", so if you want
*      Pearson correlations, or wish to use a modified correlation matrix,
*      use PCLoadings2_PGU and input the correlation matrix directly.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PCLoadings_PGU(void* p_geo, const int32_t* pg_x, const int32_t* pg_loadings);

/**
* Same as PCLoading_PGU, but input correlation matrix.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_c TODO
* @param[in]  pg_loadings TODO
**
* @par Note 
*      See PCLoadings_PGU.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void PCLoadings2_PGU(void* p_geo, const int32_t* pg_c, const int32_t* pg_loadings);

/**
* Compute the principal component scores from the standardized data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_x TODO
* @param[in]  pg_loadings TODO
* @param[in]  pg_scores TODO
**
* @par Note 
*      t  -1
*      Forms the product X Ap (Ap Ap),  where X is the
*      standardized data matrix, and Ap is the matrix of
*      principal component loadings (see PCLoadings_PGU).
*      The loadings must be input, and can be calculated by calling
*      PCLoadings_PGU.
*      Pagers and VVs must be type GS_DOUBLE.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PCScores_PGU(void* p_geo, const int32_t* pg_x, const int32_t* pg_loadings, const int32_t* pg_scores);

/**
* Remove/Replace mean and standard deviation
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  vv_m TODO
* @param[in]  vv_s TODO
* @param[in]  dir TODO
**
* @par Note 
*      Works on columns of the PG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PCStandardize_PGU(void* p_geo, const int32_t* pg, const int32_t* vv_m, const int32_t* vv_s, const int32_t* dir);

/**
* Remove/Replace mean and standard deviation, subset values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  vv_mask TODO
* @param[in]  vv_m TODO
* @param[in]  vv_s TODO
* @param[in]  dir TODO
**
* @par Note 
*      Like PCStandardize_PGU, except that not all the values are
*      included in the calculation of the means and standard
*      deviations. The inclusion is controlled by a mask VV,
*      The rows where the mask is dummy are not included
*      in the calculation, but ALL the values are standardized.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void PCStandardize2_PGU(void* p_geo, const int32_t* pg, const int32_t* vv_mask, const int32_t* vv_m, const int32_t* vv_s, const int32_t* dir);

/**
* Transform/De-transform data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  vv_d TODO
* @param[in]  vv_f TODO
* @param[in]  vv_t TODO
* @param[in]  dir TODO
**
* @par Note 
*      Works on columns of the PG.
*      Forward direction: Applies the selected transform to the data.
*      Backward direction: Applies the inverse transform to the data.
*      The detection limits are input with a VV. In the forward
*      transform, data values less than the detection limit are set
*      to the limit.
*      The factor limits are input with a VV. In the forward
*      transform, data values greater than the maximum values are set
*      to the maximum.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PCTransform_PGU(void* p_geo, const int32_t* pg, const int32_t* vv_d, const int32_t* vv_f, const int32_t* vv_t, const int32_t* dir);

/**
* Perform the Kaiser Varimax transformation on pr. comp. loadings
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg_i TODO
* @param[in]  pg_o TODO
**
* @par Note 
*      Rotates the principal components using the Kaiser's varimax
*      scheme to move move each factor axis to positions so that
*      projections from each variable on the factor axes are either
*      near the extremities or near the origin.
*      Pagers must be type GS_DOUBLE.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PCVarimax_PGU(void* p_geo, const int32_t* pg_i, const int32_t* pg_o);

///@}

/**
* @name Specialized Operations Functions 
*/
///@{

/**
* Compute the Maximum Steepness of a topography Pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  annular_size TODO
* @return Maximum Terrain Steepness Computation.
**
* @par Note 
*      Calculates forward-looking slopes SX and SY in the X and Y directions
*      using pager locations (ix, iy), (ix+size, iy), (ix, iy+isize)
*      and returns SX*SX + SY*SY.
*      The values in the last "size" rows and columns are not
*      processed.
*      The wrapper was created for testing and development purposes.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT double rMaximumTerrainSteepness_PGU(void* p_geo, const int32_t* pg, const int32_t* annular_size);

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
