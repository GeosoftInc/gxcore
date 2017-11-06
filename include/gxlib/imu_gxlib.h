//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file imu_gxlib.h
* @date 2017-11-06
* @brief File containing IMU GX C API constant and function declarations
*/

/**
* @defgroup IMU_Module IMU
* Not a class. This is a catch-all group of functions working
* on IMG objects (see IMG). Grid operations include masking,
* trending, windowing, expanding and grid stitching.
* @{
*/

#pragma once
#ifndef HIMU_H_DEFINED
#define HIMU_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name IMU_BOOL_OLAP Definitions
* 
* Overlapping area option
*/
///@{
/** 
* IMU_BOOL_OLAP_AVE
* 
* Overlap values are averaged
*/
#define IMU_BOOL_OLAP_AVE 0
/** 
* IMU_BOOL_OLAP_1
* 
* Overlap values use grid 1 value
*/
#define IMU_BOOL_OLAP_1 1
/** 
* IMU_BOOL_OLAP_2
* 
* Overlap values use grid 2 value
*/
#define IMU_BOOL_OLAP_2 2
///@}

/**
* @name IMU_BOOL_OPT Definitions
* 
* Boolean logic option
*/
///@{
/** 
* IMU_BOOL_OPT_AND
* 
* Valid areas are only where grids overlap
*/
#define IMU_BOOL_OPT_AND 0
/** 
* IMU_BOOL_OPT_OR
* 
* Valid areas are where either grid is a valid value
*/
#define IMU_BOOL_OPT_OR 1
/** 
* IMU_BOOL_OPT_XOR
* 
* Overlap areas are dummied
*/
#define IMU_BOOL_OPT_XOR 2
///@}

/**
* @name IMU_BOOL_SIZING Definitions
* 
* Sizing option
*/
///@{
/** 
* IMU_BOOL_SIZING_MIN
* 
* Output grid is sized to overlapping region
*/
#define IMU_BOOL_SIZING_MIN 0
/** 
* IMU_BOOL_SIZING_0
* 
* Output grid is sized to grid 1
*/
#define IMU_BOOL_SIZING_0 1
/** 
* IMU_BOOL_SIZING_1
* 
* Output grid is sized to grid 2
*/
#define IMU_BOOL_SIZING_1 2
/** 
* IMU_BOOL_SIZING_MAX
* 
* Output grid is sized to maximum combined area of both grids
*/
#define IMU_BOOL_SIZING_MAX 3
///@}

/**
* @name IMU_DOUBLE_CRC_BITS Definitions
* 
* Bits to use in double CRC's
*/
///@{
/** 
* IMU_DOUBLE_CRC_BITS_EXACT
* 
* Exact CRC
*/
#define IMU_DOUBLE_CRC_BITS_EXACT 0
/** 
* IMU_DOUBLE_CRC_BITS_DEFAULT
* 
* Default inaccuracy in double (10 Bits)
*/
#define IMU_DOUBLE_CRC_BITS_DEFAULT 10
/** 
* IMU_DOUBLE_CRC_BITS_MAX
* 
* Maximum number of inaccuracy bits (51 Bits)
*/
#define IMU_DOUBLE_CRC_BITS_MAX 51
///@}

/**
* @name IMU_EXPAND_SHAPE Definitions
* 
* Shape of output grid
*/
///@{
/** 
* IMU_EXPAND_SHAPE_RECTANGLE
*/
#define IMU_EXPAND_SHAPE_RECTANGLE 0
/** 
* IMU_EXPAND_SHAPE_SQUARE
*/
#define IMU_EXPAND_SHAPE_SQUARE 1
///@}

/**
* @name IMU_FILL_ROLLOPT Definitions
* 
* Defines for Grid Filling Method Options
*/
///@{
/** 
* IMU_FILL_ROLLOPT_LINEAR
*/
#define IMU_FILL_ROLLOPT_LINEAR 1
/** 
* IMU_FILL_ROLLOPT_SQUARE
*/
#define IMU_FILL_ROLLOPT_SQUARE 2
///@}

/**
* @name IMU_FILT_DUMMY Definitions
* 
* Settings for placing dummy values in grid if any of filter
* values are dummy
*/
///@{
/** 
* IMU_FILT_DUMMY_NO
*/
#define IMU_FILT_DUMMY_NO 0
/** 
* IMU_FILT_DUMMY_YES
*/
#define IMU_FILT_DUMMY_YES 1
///@}

/**
* @name IMU_FILT_FILE Definitions
* 
* Flags which indicate if a file is to be used to read the
* filter values
*/
///@{
/** 
* IMU_FILT_FILE_NO
*/
#define IMU_FILT_FILE_NO 0
/** 
* IMU_FILT_FILE_YES
*/
#define IMU_FILT_FILE_YES 1
///@}

/**
* @name IMU_FILT_HZDRV Definitions
* 
* Flags which indicate which type of horizontal derivative
* is being applied (X direction, Y direction, none at all)
*/
///@{
/** 
* IMU_FILT_HZDRV_NO
*/
#define IMU_FILT_HZDRV_NO 0
/** 
* IMU_FILT_HZDRV_X
*/
#define IMU_FILT_HZDRV_X 1
/** 
* IMU_FILT_HZDRV_Y
*/
#define IMU_FILT_HZDRV_Y 2
///@}

/**
* @name IMU_FLOAT_CRC_BITS Definitions
* 
* Bits to use in float CRC's
*/
///@{
/** 
* IMU_FLOAT_CRC_BITS_EXACT
* 
* Exact CRC
*/
#define IMU_FLOAT_CRC_BITS_EXACT 0
/** 
* IMU_FLOAT_CRC_BITS_DEFAULT
* 
* Default inaccuracy in floats (7 Bits)
*/
#define IMU_FLOAT_CRC_BITS_DEFAULT 7
/** 
* IMU_FLOAT_CRC_BITS_MAX
* 
* Maximum number of inaccuracy bits (22 Bits)
*/
#define IMU_FLOAT_CRC_BITS_MAX 22
///@}

/**
* @name IMU_MASK Definitions
* 
* Defined options for masking grids
*/
///@{
/** 
* IMU_MASK_INSIDE
*/
#define IMU_MASK_INSIDE 0
/** 
* IMU_MASK_OUTSIDE
*/
#define IMU_MASK_OUTSIDE 1
///@}

/**
* @name IMU_STAT_FORCED Definitions
* 
* Defined options for forcing recalculating the grid values
*/
///@{
/** 
* IMU_STAT_FORCED_NO
*/
#define IMU_STAT_FORCED_NO 0
/** 
* IMU_STAT_FORCED_YES
*/
#define IMU_STAT_FORCED_YES 1
///@}

/**
* @name IMU_TRANS Definitions
* 
* Transpose Options available for GridTrns_IMU
* implies original grid lines:
*/
///@{
/** 
* IMU_TRANS_DEFAULT
* 
* Can be ANY orientation
*/
#define IMU_TRANS_DEFAULT 0
/** 
* IMU_TRANS_Y
* 
* MUST be parallel to Y-Axis
*/
#define IMU_TRANS_Y 1
/** 
* IMU_TRANS_X
* 
* MUST be parallel to X-Axis
*/
#define IMU_TRANS_X -1
///@}

/**
* @name IMU_TREND Definitions
* 
* Points in grid to use
*/
///@{
/** 
* IMU_TREND_ALL
*/
#define IMU_TREND_ALL 0
/** 
* IMU_TREND_EDGE
*/
#define IMU_TREND_EDGE 1
///@}

/**
* @name IMU_WIND_COORD Definitions
* 
* Output grid coordinate units
*/
///@{
/** 
* IMU_WIND_GRID
*/
#define IMU_WIND_GRID 0
/** 
* IMU_WIND_GROUND
*/
#define IMU_WIND_GROUND 1
///@}

/**
* @name IMU_WIND_DUMMIES Definitions
* 
* Option for handling out-of-range Z values
*/
///@{
/** 
* IMU_WIND_DUMMY
*/
#define IMU_WIND_DUMMY 0
/** 
* IMU_WIND_CLIP
*/
#define IMU_WIND_CLIP 1
///@}

/**
* @name IMU_XYZ_INDEX Definitions
* 
* Flags whether to use grid index numbers as
* station numbers.
*/
///@{
/** 
* IMU_XYZ_INDEX_NO
*/
#define IMU_XYZ_INDEX_NO 0
/** 
* IMU_XYZ_INDEX_YES
*/
#define IMU_XYZ_INDEX_YES 1
///@}

/**
* @name IMU_XYZ_LABEL Definitions
* 
* XYZ Label Flags
*/
///@{
/** 
* IMU_XYZ_LABEL_NO
*/
#define IMU_XYZ_LABEL_NO 1
/** 
* IMU_XYZ_LABEL_YES
*/
#define IMU_XYZ_LABEL_YES 0
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a Geosoft color grid from an aggregate.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  grid TODO
* @param[in]  ipj TODO
* @param[in]  res TODO
**
* @par Note 
*      This consumes a very small amount of memory
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.6
*/
GX_EXPORT void AggToGeoColor_IMU(void* p_geo, const int32_t* agg, const char* grid, const int32_t* ipj, const double* res);

/**
* Computes a CRC Checksum on an image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  pul_crc TODO
* @return CRC value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CRC_IMU(void* p_geo, const int32_t* img, const int32_t* pul_crc);

/**
* Computes a CRC Checksum on a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  pul_crc TODO
* @return CRC value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CRCGrid_IMU(void* p_geo, const char* grid, const int32_t* pul_crc);

/**
* Computes a CRC Checksum on a grid and allows you to specify
* number of bits of floats/doubles to drop so that the CRC
* will be same even of this are changed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  pul_crc TODO
* @param[in]  float_bits TODO
* @param[in]  double_bits TODO
* @return CRC value
**
* @par Note 
*      Very useful for testing where the last bits of accuracy
*      are not as important.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CRCGridInexact_IMU(void* p_geo, const char* grid, const int32_t* pul_crc, const int32_t* float_bits, const int32_t* double_bits);

/**
* Computes a CRC Checksum on an image and allows you to specify
* number of bits of floats/doubles to drop so that the CRC
* will be same even of this are changed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  pul_crc TODO
* @param[in]  float_bits TODO
* @param[in]  double_bits TODO
* @return CRC value
**
* @par Note 
*      Very useful for testing where the last bits of accuracy
*      are not as important.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CRCInexact_IMU(void* p_geo, const int32_t* img, const int32_t* pul_crc, const int32_t* float_bits, const int32_t* double_bits);

/**
* Export a Grid minus the data section as an XML file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT void ExportGridWithoutDataSectionXML_IMU(void* p_geo, const char* grid, int32_t* crc, const char* file);

/**
* Export a Grid as an XML file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void ExportGridXML_IMU(void* p_geo, const char* grid, int32_t* crc, const char* file);

/**
* Export a Grid as an XML file using a fast raw output.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void ExportRawXML_IMU(void* p_geo, const int32_t* img, int32_t* crc, const char* file);

/**
* Export a Grid as an XML file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void ExportXML_IMU(void* p_geo, const int32_t* img, int32_t* crc, const char* file);

/**
* Extract an interpolated image value for given XY VV locations
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void GetZVV_IMU(void* p_geo, const int32_t* img, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Same as GetZVV_IMU, but find the closest peak value to the input locations, and return
* 				             the peak value and peak value location.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      The returned locations will always be a grid point location; no interpolation is performed when locating the peaks. A simple search is
*      				done of all neighbouring points from the starting point, and once no neighbours can be located with a higher value, the search stops.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.0
*/
GX_EXPORT void GetZPeaksVV_IMU(void* p_geo, const int32_t* img, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Adds two Grid images together point-by-point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img1 TODO
* @param[in]  m1 TODO
* @param[in]  img2 TODO
* @param[in]  m2 TODO
* @param[in]  imgo TODO
**
* @par Note 
*      The IMG parameters MUST be of type GS_DOUBLE!
*      If not, the method will terminate.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridAdd_IMU(void* p_geo, const int32_t* img1, const double* m1, const int32_t* img2, const double* m2, const int32_t* imgo);

/**
* Automatic Gain Compensation of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  i_img TODO
* @param[in]  o_img TODO
* @param[in]  width TODO
* @param[in]  max_gain TODO
* @param[in]  remove_background TODO
**
* @par Note 
*      The IMG parameters MUST be of type GS_FLOAT!
*      If not, the method will terminate.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridAGC_IMU(void* p_geo, const int32_t* i_img, const int32_t* o_img, const int32_t* width, const double* max_gain, const int32_t* remove_background);

/**
* Mask one grid against another using boolean logic
* operations.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img1 TODO
* @param[in]  img2 TODO
* @param[in]  out TODO
* @param[in]  bool TODO
* @param[in]  sizing TODO
* @param[in]  olap TODO
**
* @par Note 
*      The IMG parameters must be of type GS_DOUBLE!
*      If not, the method will terminate.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridBool_IMU(void* p_geo, const int32_t* img1, const int32_t* img2, const char* out, const int32_t* bool, const int32_t* sizing, const int32_t* olap);

/**
* Get grid edge points
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridEdge_IMU(void* p_geo, const char* grid, const int32_t* vv_x, const int32_t* vv_y);

/**
* Get grid edge points
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ply TODO
* @param[in]  min_points TODO
**
* @par Note 
*      Unlike GridPLY_IMU and GridPlyEx_IMU, the image is not
*      altered. It just gives the PLY.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void GridEdgePLY_IMU(void* p_geo, const int32_t* img, const int32_t* ply, const int32_t* min_points);

/**
* Expand a grid and place dummies in the area
* beyond the original edges.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  out TODO
* @param[in]  per TODO
* @param[in]  shape TODO
* @param[in]  x TODO
* @param[in]  y TODO
**
* @par Note 
*      The IMG parameter MUST be of type GS_FLOAT!
*      If not, the method will terminate.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridExpand_IMU(void* p_geo, const int32_t* im_gi, const char* out, const double* per, const int32_t* shape, const int32_t* x, const int32_t* y);

/**
* Extends and fills a grid for FFT2.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  in_grd TODO
* @param[in]  out_grd TODO
* @param[in]  p_ex TODO
* @param[in]  t_ex TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void GridExpFill_IMU(void* p_geo, const char* in_grd, const char* out_grd, const double* p_ex, const int32_t* t_ex);

/**
* Interpolates to fill dummies, generates an output grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  im_go TODO
* @param[in]  rollopt TODO
* @param[in]  rolldist TODO
* @param[in]  mxf TODO
* @param[in]  mxp TODO
* @param[in]  rollbase TODO
* @param[in]  alimit TODO
* @param[in]  elimit TODO
* @param[in]  width TODO
* @param[in]  npass TODO
**
* @par Note 
*      The IMG parameters MUST be of type GS_FLOAT!
*      If not, the method will terminate.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridFill_IMU(void* p_geo, const int32_t* im_gi, const int32_t* im_go, const int32_t* rollopt, const int32_t* rolldist, const int32_t* mxf, const int32_t* mxp, const double* rollbase, const double* alimit, const double* elimit, const int32_t* width, const int32_t* npass);

/**
* Applies a filter to a grid any number
* of passes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  imgo TODO
* @param[in]  passes TODO
* @param[in]  mult TODO
* @param[in]  dum TODO
* @param[in]  hz TODO
* @param[in]  usefile TODO
* @param[in]  file TODO
* @param[in]  vv TODO
**
* @par Note 
*      The IMG parameters MUST be of type GS_FLOAT!
*      If not, the method will terminate.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridFilt_IMU(void* p_geo, const int32_t* img, const int32_t* imgo, const int32_t* passes, const double* mult, const int32_t* dum, const int32_t* hz, const int32_t* usefile, const char* file, const int32_t* vv);

/**
* Modifies Statistics contained in a grid header.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  esep TODO
* @param[in]  vsep TODO
* @param[in]  x_orig TODO
* @param[in]  y_orig TODO
* @param[in]  rot TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GridHead_IMU(void* p_geo, const char* grid, const double* esep, const double* vsep, const double* x_orig, const double* y_orig, const double* rot);

/**
* Fill in a ribbon along the edge and inside hollow areas of the grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  out_grd TODO
* @param[in]  extend TODO
* @param[in]  iter TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void GridInFill_IMU(void* p_geo, const int32_t* im_gi, const char* out_grd, const int32_t* extend, const int32_t* iter);

/**
* Create a mask grid using a set of polygon
* coordinates defined in a separate file, then
* masking the polygon over an input grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  in_grid TODO
* @param[in]  m_grid TODO
* @param[in]  pply TODO
* @param[in]  mode TODO
**
* @par Note 
*      The IMG parameters MUST be of type GS_DOUBLE!
*      If not, the method will terminate.
*      
*      The PLY will contain more than one polygon
*      if it was loaded from a file containing
*      coordinates of more than one polygon.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridMask_IMU(void* p_geo, const char* in_grid, const char* m_grid, const int32_t* pply, const int32_t* mode);

/**
* Pick grid peaks.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  nlmt TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @param[in]  v_vz TODO
**
* @par Note 
*      Peak test directions defines how grid peaks are to be found.
*      For example, with the 1, a grid point will be picked if its
*      value is greater than it's two neighbors in at least one
*      direction.  Up to 4 directions can be tested.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridPeak_IMU(void* p_geo, const char* grid, const int32_t* nlmt, const int32_t* v_vx, const int32_t* v_vy, const int32_t* v_vz);

/**
* Get the grid edge in a PLY
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ply TODO
* @param[in]  refresh TODO
**
* @par Note 
*      This will optionally refresh the grid boundary PLY and return
*      the PLY.
*      
*      If the boundary is not refreshed and has never been calculated,
*      the boundary will be the bounding rectangle of the grid.
*      
*      The grid PLY will be added to existing ploygons in the passed PLY.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1
*/
GX_EXPORT void GridPLY_IMU(void* p_geo, const int32_t* img, const int32_t* ply, const int32_t* refresh);

/**
* Get the grid edge in a PLY (with min points)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ply TODO
* @param[in]  refresh TODO
* @param[in]  min_points TODO
**
* @par Note 
*      This will optionally refresh the grid boundary PLY and return
*      the PLY.
*      
*      If the boundary is not refreshed and has never been calculated,
*      the boundary will be the bounding rectangle of the grid.
*      
*      The grid PLY will be added to existing ploygons in the passed PLY.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.6
*/
GX_EXPORT void GridPLYEx_IMU(void* p_geo, const int32_t* img, const int32_t* ply, const int32_t* refresh, const int32_t* min_points);

/**
* Create a new grid by reprojecting an existing grid and windowing its contents
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input_grid_filename TODO
* @param[in]  output_grid_filename TODO
* @param[in]  new_projection TODO
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  min_y TODO
* @param[in]  max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void GridReprojectAndWindow_IMU(void* p_geo, const char* input_grid_filename, const char* output_grid_filename, const int32_t* new_projection, const double* min_x, const double* max_x, const double* min_y, const double* max_y);

/**
* Create a new grid by resampling an existing grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input_grid_filename TODO
* @param[in]  output_grid_filename TODO
* @param[in]  o_x TODO
* @param[in]  o_y TODO
* @param[in]  d_x TODO
* @param[in]  d_y TODO
* @param[in]  n_x TODO
* @param[in]  n_y TODO
**
* @par Note 
*      Works only for un rotated grids.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void GridResample_IMU(void* p_geo, const char* input_grid_filename, const char* output_grid_filename, const double* o_x, const double* o_y, const double* d_x, const double* d_y, const int32_t* n_x, const int32_t* n_y);

/**
* Resize a grid to reduce the size not cover the outside dummies.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  in_grd TODO
* @param[in]  out_grd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridResize_IMU(void* p_geo, const char* in_grd, const char* out_grd);

/**
* Create a shadded relief image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  in_grid TODO
* @param[in]  sh_grid TODO
* @param[out] inc TODO
* @param[out] dec TODO
* @param[out] scl TODO
**
* @par Note 
*      Pass GS_R8DM as parameters to obtain default values.
*      The default values are returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridShad_IMU(void* p_geo, const char* in_grid, const char* sh_grid, double* inc, double* dec, double* scl);

/**
* Update an ST object using a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  st TODO
**
* @par Note 
*      The input ST object is not initialized by GridST_IMU,
*      so this function can be used to accumulate statistical
*      info on more than a single grid.
*      See ST.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void GridST_IMU(void* p_geo, const char* grid, const int32_t* st);

/**
* Reports statistics contained in a grid header.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[out] type TODO
* @param[out] xelem TODO
* @param[out] yelem TODO
* @param[out] xsep TODO
* @param[out] ysep TODO
* @param[out] kx TODO
* @param[out] x_orig TODO
* @param[out] y_orig TODO
* @param[out] rot TODO
* @param[out] base TODO
* @param[out] mult TODO
**
* @par Note 
*      Statistics are returned in the parameter set
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GridStat_IMU(void* p_geo, const char* grid, int32_t* type, int32_t* xelem, int32_t* yelem, double* xsep, double* ysep, int32_t* kx, double* x_orig, double* y_orig, double* rot, double* base, double* mult);

/**
* Reports statistics contained in a grid header.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[out] type TODO
* @param[out] xelem TODO
* @param[out] yelem TODO
* @param[out] xsep TODO
* @param[out] ysep TODO
* @param[out] kx TODO
* @param[out] x_orig TODO
* @param[out] y_orig TODO
* @param[out] rot TODO
* @param[out] base TODO
* @param[out] mult TODO
* @param[out] comp TODO
**
* @par Note 
*      Statistics are returned in the parameter set
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GridStatComp_IMU(void* p_geo, const char* grid, int32_t* type, int32_t* xelem, int32_t* yelem, double* xsep, double* ysep, int32_t* kx, double* x_orig, double* y_orig, double* rot, double* base, double* mult, double* comp);

/**
* Reports statistics of a grid's elements.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  force TODO
* @param[out] items TODO
* @param[out] dums TODO
* @param[out] min TODO
* @param[out] max TODO
* @param[out] mean TODO
* @param[out] stddev TODO
**
* @par Note 
*      If the IMU_STAT_FORCED value is set, the
*      statistics will be recalculated.
*      Statistics are returned in the parameter set.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GridStatExt_IMU(void* p_geo, const char* grid, const int32_t* force, int32_t* items, int32_t* dums, double* min, double* max, double* mean, double* stddev);

/**
* Reports Trend Info of a grid (for first order coefficients only).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[out] trend_valid TODO
* @param[out] co TODO
* @param[out] cx TODO
* @param[out] cy TODO
**
* @par Note 
*      Trend Info are returned in the parameter set
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridStatTrend_IMU(void* p_geo, const char* grid, int32_t* trend_valid, double* co, double* cx, double* cy);

/**
* Reports Extended Trend Info of a grid (for up to third order coefficients).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[out] order TODO
* @param[out] num_coef TODO
* @param[out] xo TODO
* @param[out] yo TODO
* @param[in]  vm TODO
**
* @par Note 
*      Trend Info are returned in the parameter set
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridStatTrendExt_IMU(void* p_geo, const char* grid, int32_t* order, int32_t* num_coef, double* xo, double* yo, const int32_t* vm);

/**
* Return the standard deviation of the slopes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @return Standard deviation of grid slopes
**
* @par Note 
*      This method calculates the standard deviation of the horizontal
*      differences in the X and Y directions for the supplied
*      image.  This is useful for shading routines.  A good
*      default scaling factor is 2.5 / standard deviation.
*      
*      The image will be sub-sampled to a statistically meaningful number.
*      
*      The cell sizes are used to determine the slopes.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT double rSlopeStandardDeviation_IMU(void* p_geo, const int32_t* img);

/**
* Stitches together too grids
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid1 TODO
* @param[in]  grid2 TODO
* @param[in]  grid3 TODO
* @param[in]  method TODO
* @param[in]  tr_order1 TODO
* @param[in]  tr_order2 TODO
* @param[in]  tr_calc TODO
* @param[in]  gap TODO
* @param[in]  spline TODO
* @param[in]  path TODO
* @param[in]  pply TODO
* @param[in]  weighting TODO
* @param[in]  width TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridStitch_IMU(void* p_geo, const char* grid1, const char* grid2, const char* grid3, const int32_t* method, const int32_t* tr_order1, const int32_t* tr_order2, const int32_t* tr_calc, const double* gap, const int32_t* spline, const int32_t* path, const int32_t* pply, const double* weighting, const int32_t* width);

/**
* Stitches together two grids - control file for options.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ctl TODO
**
* @par Note 
*      Data validation is done internally, not in the GX.
*      This is simply a way of avoiding writing a new GX wrapper
*      every time an option is added.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.4
*/
GX_EXPORT void GridStitchCtl_IMU(void* p_geo, const char* ctl);

/**
* Generate a Tiff (Tagged-Image file format) file with up to 16 grids.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grds TODO
* @param[in]  tiff TODO
* @param[in]  bcol TODO
* @param[in]  red TODO
* @param[in]  green TODO
* @param[in]  blue TODO
* @param[in]  csize TODO
* @param[in]  reg TODO
* @param[in]  scale TODO
**
* @par Note 
*      The background color can be either selected
*      from one of 8 settings, or can be specified
*      as a combination of Reg,Green, and Blue values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridTiff_IMU(void* p_geo, const char* grds, const char* tiff, const char* bcol, const int32_t* red, const int32_t* green, const int32_t* blue, const double* csize, const int32_t* reg, const double* scale);

/**
* Remove a trend surface from a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  imgi TODO
* @param[in]  imgo TODO
* @param[in]  tr_option TODO
* @param[in]  edge TODO
* @param[in]  order TODO
* @param[in]  vm TODO
* @param[in]  num_coefs TODO
**
* @par Note 
*      Both Images must be of type GS_DOUBLE.
*      The VM parameter must be of type REAL,
*      and be of size 10 at most.
*      
*      The number of coefficients must be
*      compatible with the order of the
*      trend removed. Following is the
*      number of coefficients which should
*      be present for a given order
*      
*      Order            Number of Coefficients
*      -----            ----------------------
*      0                 1
*      1                 3
*      2                 6
*      3                 10
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridTrnd_IMU(void* p_geo, const int32_t* imgi, const int32_t* imgo, const int32_t* tr_option, const int32_t* edge, const int32_t* order, const int32_t* vm, const int32_t* num_coefs);

/**
* Transpose a grid by swapping the grid rows with
* the grid columns.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  tcon TODO
**
* @par Note 
*      If the grid has a line orientation that does NOT
*      match the IMU_TRANS value, this method will
*      not succeed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GridTrns_IMU(void* p_geo, const char* grid, const int32_t* tcon);

/**
* Apply vertical derivative convolution filter to a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  im_go TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridVD_IMU(void* p_geo, const int32_t* im_gi, const int32_t* im_go);

/**
* Calculates the grid volumes above and below a
* reference base.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  rbase TODO
* @param[in]  mult TODO
* @param[out] vol_a TODO
* @param[out] vol_b TODO
* @param[out] diff TODO
**
* @par Note 
*      Volumes are calculated above and below a
*      reference base level, and reported as positive
*      integers. A multiplier is applied to the final
*      volume (to correct for units).
*      
*      The IMG parameters MUST be of type GS_FLOAT!
*      If not, the method will terminate.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridVol_IMU(void* p_geo, const int32_t* img, const double* rbase, const double* mult, double* vol_a, double* vol_b, double* diff);

/**
* Create a grid using a defined area window
* within a larger grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  out TODO
* @param[in]  coord TODO
* @param[in]  xmin TODO
* @param[in]  xmax TODO
* @param[in]  ymin TODO
* @param[in]  ymax TODO
* @param[in]  zmin TODO
* @param[in]  zmax TODO
* @param[in]  csize TODO
* @param[in]  clip TODO
* @param[in]  dec TODO
* @param[in]  mdf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GridWind_IMU(void* p_geo, const int32_t* img, const char* out, const int32_t* coord, const double* xmin, const double* xmax, const double* ymin, const double* ymax, const double* zmin, const double* zmax, const double* csize, const int32_t* clip, const int32_t* dec, const char* mdf);

/**
* Window a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  out TODO
* @param[in]  xmin TODO
* @param[in]  xmax TODO
* @param[in]  ymin TODO
* @param[in]  ymax TODO
* @param[in]  zmin TODO
* @param[in]  zmax TODO
* @param[in]  clip TODO
**
* @par Note 
*      To change the cell size or work in a different projection,
*      first inherit the IMG by calling
*      
*      The windowed grid will be adjusted/expanded to include the
*      defined area and line up on an even grid cell.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GridWind2_IMU(void* p_geo, const int32_t* img, const char* out, const double* xmin, const double* xmax, const double* ymin, const double* ymax, const double* zmin, const double* zmax, const int32_t* clip);

/**
* Export a Grid image to an XYZ file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  xyz TODO
* @param[in]  index TODO
* @param[in]  dec_x TODO
* @param[in]  dec_y TODO
* @param[in]  lab TODO
**
* @par Note 
*      The IMG (image) of the grid to export must
*      be of type GS_FLOAT. If not, this method will
*      terminate with an error.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GridXYZ_IMU(void* p_geo, const int32_t* img, const char* xyz, const int32_t* index, const int32_t* dec_x, const int32_t* dec_y, const int32_t* lab);

/**
* Reports the true data the of a grid (geosoft types)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @return GS_TYPES
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGridType_IMU(void* p_geo, const char* grid);

/**
* Make a MapInfo tab file for this grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.6
*/
GX_EXPORT void MakeMITabFile_IMU(void* p_geo, const char* file);

/**
* Make a MapInfo tab file for this grid as rendered in a map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.5
*/
GX_EXPORT void MakeMITabfromGrid_IMU(void* p_geo, const char* file);

/**
* Make a MapInfo tab file from this map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.5
*/
GX_EXPORT void MakeMITabfromMap_IMU(void* p_geo, const char* map);

/**
* Create a mosaic image of an image list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grids TODO
* @param[in]  name TODO
* @param[in]  ipj TODO
* @param[in]  cell TODO
* @return IMG Object
**
* @par Note 
*      The images are simply placed on the output image, starting with
*      the first image. Note that this function may require very large
*      amounts of virtual memory.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t Mosaic_IMU(void* p_geo, const char* grids, const char* name, const int32_t* ipj, const double* cell);

/**
* Define the sizes of all the peaks in an image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  max TODO
* @param[in]  prec TODO
* @param[in]  v_vz TODO
**
* @par Note 
*      Extending from the peak location of an anomaly to the inflection
*      points of the grid values along each of the 8 directions results in
*      8 radii. Anomaly size is defined as the 2*mediam of the 8 radii.
*      
*      Precision factor is used to control definition of an inflection point.
*      For points A,B, and C, B is an inflection point if (A+C)/2.0 > B. With
*      the precision factor, B is an inflection point only when
*      (A+C)/2.0 > B*(1.0+Precision factor).
*      This factor must be within (-1.0,1.0).
*      
*      Note: PeakSize2_IMU is probably a better routine...
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PeakSize_IMU(void* p_geo, const char* grid, const int32_t* vv_x, const int32_t* vv_y, const int32_t* max, const double* prec, const int32_t* v_vz);

/**
* Define the sizes of all the peaks in an image - new algorithm
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  max TODO
* @param[in]  v_vz TODO
**
* @par Note 
*      Extending from the peak location of an anomaly to the inflection
*      points of the grid values along each of the 8 directions results in
*      8 radii. Anomaly size is defined as the 2*mediam of the 8 radii.
*      
*      This algorithm uses 4 successive points d1, d2, d3 and d4 in any
*      direction. Given slopes m1 = d2-d1, m2 = d3-d2 and m3 = d4-d3,
*      an inflection point occurs between d2 and d3 if m1>m2 and m2<m3.
*      The location index is given as i3 - s2/(s2-s1), where i3 is the index
*      of d3, and s1=m2-m1 and s2=m3-m2.
*      
*      This algorithm tends to give much smaller (and more reasonable)
*      results than PeakSize_IMU.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.4
*/
GX_EXPORT void PeakSize2_IMU(void* p_geo, const char* grid, const int32_t* vv_x, const int32_t* vv_y, const int32_t* max, const int32_t* v_vz);

/**
* Pigeon-hole and count points by location into a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[out] put TODO
**
* @par Note 
*      X and Y location VVs are input. If a point (X, Y) is located within
*      one-half cell width from a location in the grid, then the value of
*      the grid at that location is incremented by 1.
*      The cells are inclusive at the minima, and exclusive at the maxima:
*      e.g. if dDx = dDy = 1, and dXo = dYo = 0, then the corner cell would
*      accept values  -0.5 <= X < 0.5 and -0.5 <= Y < 0.5.
*      The grid values should be set to 0 before calling this function.
*      
*      The number of points "pigeon-holed" is returned to the user.
*      This function is useful, for instance, in determining the density of
*      sample locations in a survey area.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void PigeonHole_IMU(void* p_geo, const int32_t* img, const int32_t* vv_x, const int32_t* vv_y, int32_t* put);

/**
* Extract a profile from a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  x2 TODO
* @param[in]  y2 TODO
* @param[in]  samsep TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Returned VV will start at X1,Y1 and will sample
*      up to X2,Y2 at the specified separation.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Profile_IMU(void* p_geo, const int32_t* img, const double* x1, const double* y1, const double* x2, const double* y2, const double* samsep, const int32_t* vv_z);

/**
* Extract a VV profile from a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par See also 
*      iGetPolyLine_DBE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ProfileVV_IMU(void* p_geo, const int32_t* img, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Determine bounding rectangle for a set of grids
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grids TODO
* @param[in]  ipj TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      If an IPJ is IPJ_CS_UNKNOWN, the
*      IPJ of the first grid in the list will be used and
*      the IPJ will be returned in this setting.
*      Otherwise, the range in the requested IPJ will be
*      determined.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void RangeGrids_IMU(void* p_geo, const char* grids, const int32_t* ipj, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Determine the range in lat. and long. of a projected grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[out] min_lat TODO
* @param[out] min_lon TODO
* @param[out] max_lat TODO
* @param[out] max_lon TODO
**
* @par Note 
*      This routine determines the latitude and longitudes along the
*      edge of a grid and returns the minimal and maximal values.
*      It scans each row and and column and finds the first non-dummy
*      position at the start and end, and then determines the coordinates
*      at those points.
*      If the grid has no data, no IPJ object, or if the Source Type of
*      the IPJ is not IPJ_TYPE_PCS (projected coordinate system), then the
*      returned values are dummies (GS_R8DM).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RangeLL_IMU(void* p_geo, const int32_t* img, double* min_lat, double* min_lon, double* max_lat, double* max_lon);

/**
* Calculate grid statistics in a window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  max TODO
* @param[in]  st TODO
**
* @par Note 
*      The maximum values needed will beused to
*      decimate the sampling of the grid in order to
*      improve performance.  100000 is often a good
*      number when absolute precision is not
*      required.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.5
*/
GX_EXPORT void StatWindow_IMU(void* p_geo, const int32_t* img, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* max, const int32_t* st);

/**
* Update the grid boundary in the grid metadata
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ply TODO
**
* @par Note 
*      You can call the GridEdgePLY function to get an edge,
*      perhaps alter the edge, such as thin it to a reasonable
*      resolution, then put set it as the grid boundary by
*      calling this funtion.  This is similar to the
*      GridPLYEx function except that you get to alter the
*      PLY before it is placed back in the IMG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void UpdatePLY_IMU(void* p_geo, const int32_t* img, const int32_t* ply);

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
