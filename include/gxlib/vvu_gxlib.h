//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file vvu_gxlib.h
* @date 2017-11-06
* @brief File containing VVU GX C API constant and function declarations
*/

/**
* @defgroup VVU_Module VVU
* These methods are not a class. Utility methods perform
* various operations on VV objects, including pruning,
* splining, clipping and filtering.
* @{
*/

#pragma once
#ifndef HVVU_H_DEFINED
#define HVVU_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name QC_CRITERION Definitions
* 
* Criterion
*/
///@{
/** 
* QC_CRITERION_1
*/
#define QC_CRITERION_1 0
/** 
* QC_CRITERION_2
*/
#define QC_CRITERION_2 1
/** 
* QC_CRITERION_12
*/
#define QC_CRITERION_12 2
///@}

/**
* @name TEM_ARRAY Definitions
* 
* Array Type
*/
///@{
/** 
* TEM_ARRAY_VERTICALSOUNDING
*/
#define TEM_ARRAY_VERTICALSOUNDING 0
/** 
* TEM_ARRAY_PROFILING
*/
#define TEM_ARRAY_PROFILING 1
/** 
* TEM_ARRAY_BOREHOLE
*/
#define TEM_ARRAY_BOREHOLE 2
///@}

/**
* @name VV_DUP Definitions
* 
* Duplicate handling mode
*/
///@{
/** 
* VV_DUP_AVERAGE
* 
* Average numeric values (for strings, same as VV_DUP_1)
*/
#define VV_DUP_AVERAGE 0
/** 
* VV_DUP_1
* 
* Use first value of the pair
*/
#define VV_DUP_1 1
/** 
* VV_DUP_2
* 
* Use second value of the pair
*/
#define VV_DUP_2 2
/** 
* VV_DUP_DUMMY
* 
* Set to dummy
*/
#define VV_DUP_DUMMY 3
/** 
* VV_DUP_SAMPLE
* 
* Set to "3" (cannot use with string data VV)
*/
#define VV_DUP_SAMPLE 4
///@}

/**
* @name VV_XYDUP Definitions
* 
* Sample handling
*/
///@{
/** 
* VV_XYDUP_AVERAGE
*/
#define VV_XYDUP_AVERAGE 0
/** 
* VV_XYDUP_SUM
*/
#define VV_XYDUP_SUM 1
///@}

/**
* @name VVU_CASE Definitions
* 
* String case handling
*/
///@{
/** 
* VVU_CASE_TOLERANT
*/
#define VVU_CASE_TOLERANT 0
/** 
* VVU_CASE_SENSITIVE
*/
#define VVU_CASE_SENSITIVE 1
///@}

/**
* @name VVU_CLIP Definitions
* 
* Type of clipping
*/
///@{
/** 
* VVU_CLIP_DUMMY
* 
* Clip replaces clipped values with a dummy.
*/
#define VVU_CLIP_DUMMY 0
/** 
* VVU_CLIP_LIMIT
* 
* Clip replaces clipped values with the limit.
*/
#define VVU_CLIP_LIMIT 1
///@}

/**
* @name VVU_DUMMYREPEAT Definitions
* 
* How to deal with repeats
*/
///@{
/** 
* VVU_DUMMYREPEAT_FIRST
* 
* Dummies all but first point.
*/
#define VVU_DUMMYREPEAT_FIRST 0
/** 
* VVU_DUMMYREPEAT_LAST
* 
* Dummies all but last point.
*/
#define VVU_DUMMYREPEAT_LAST 1
/** 
* VVU_DUMMYREPEAT_MIDDLE
* 
* Dummies all but middle point.
*/
#define VVU_DUMMYREPEAT_MIDDLE 2
///@}

/**
* @name VVU_INTERP Definitions
* 
* Interpolation method to use
*/
///@{
/** 
* VVU_INTERP_NEAREST
*/
#define VVU_INTERP_NEAREST 1
/** 
* VVU_INTERP_LINEAR
*/
#define VVU_INTERP_LINEAR 2
/** 
* VVU_INTERP_CUBIC
*/
#define VVU_INTERP_CUBIC 3
/** 
* VVU_INTERP_AKIMA
*/
#define VVU_INTERP_AKIMA 4
/** 
* VVU_INTERP_PREDICT
*/
#define VVU_INTERP_PREDICT 5
///@}

/**
* @name VVU_INTERP_EDGE Definitions
* 
* Interpolation method to use on edges
*/
///@{
/** 
* VVU_INTERP_EDGE_NONE
*/
#define VVU_INTERP_EDGE_NONE 0
/** 
* VVU_INTERP_EDGE_SAME
*/
#define VVU_INTERP_EDGE_SAME 1
/** 
* VVU_INTERP_EDGE_NEAREST
*/
#define VVU_INTERP_EDGE_NEAREST 2
/** 
* VVU_INTERP_EDGE_LINEAR
*/
#define VVU_INTERP_EDGE_LINEAR 3
///@}

/**
* @name VVU_LINE Definitions
* 
* Line Types
*/
///@{
/** 
* LINE_2_POINTS
*/
#define LINE_2_POINTS 0
/** 
* LINE_POINT_AZIMUTH
*/
#define LINE_POINT_AZIMUTH 1
///@}

/**
* @name VVU_MASK Definitions
* 
* Type of clipping
*/
///@{
/** 
* VVU_MASK_INSIDE
* 
* Mask VV is set to dummy at locations inside the PLY.
*/
#define VVU_MASK_INSIDE 0
/** 
* VVU_MASK_OUTSIDE
* 
* Mask VV is set to dummy at locations outside the PLY.
*/
#define VVU_MASK_OUTSIDE 1
///@}

/**
* @name VVU_MATCH Definitions
* 
* Matching style
*/
///@{
/** 
* VVU_MATCH_FULL_STRINGS
* 
* Entire string
*/
#define VVU_MATCH_FULL_STRINGS 0
/** 
* VVU_MATCH_INPUT_LENGTH
* 
* Match the first part of a string.
*/
#define VVU_MATCH_INPUT_LENGTH 1
///@}

/**
* @name VVU_MODE Definitions
* 
* Statistic to select
*/
///@{
/** 
* VVU_MODE_MEAN
*/
#define VVU_MODE_MEAN 0
/** 
* VVU_MODE_MEDIAN
*/
#define VVU_MODE_MEDIAN 1
/** 
* VVU_MODE_MAXIMUM
*/
#define VVU_MODE_MAXIMUM 2
/** 
* VVU_MODE_MINIMUM
*/
#define VVU_MODE_MINIMUM 3
///@}

/**
* @name VVU_OFFSET Definitions
* 
* Heading
*/
///@{
/** 
* VVU_OFFSET_FORWARD
*/
#define VVU_OFFSET_FORWARD 0
/** 
* VVU_OFFSET_BACKWARD
*/
#define VVU_OFFSET_BACKWARD 1
/** 
* VVU_OFFSET_RIGHT
*/
#define VVU_OFFSET_RIGHT 2
/** 
* VVU_OFFSET_LEFT
*/
#define VVU_OFFSET_LEFT 3
///@}

/**
* @name VVU_PRUNE Definitions
* 
* Prune options
*/
///@{
/** 
* VVU_PRUNE_DUMMY
* 
* 0
*/
#define VVU_PRUNE_DUMMY 0
/** 
* VVU_PRUNE_VALID
* 
* 1
*/
#define VVU_PRUNE_VALID 1
///@}

/**
* @name VVU_SPL Definitions
* 
* Spline types
*/
///@{
/** 
* VVU_SPL_LINEAR
*/
#define VVU_SPL_LINEAR 0
/** 
* VVU_SPL_CUBIC
*/
#define VVU_SPL_CUBIC 1
/** 
* VVU_SPL_AKIMA
*/
#define VVU_SPL_AKIMA 2
/** 
* VVU_SPL_NEAREST
*/
#define VVU_SPL_NEAREST 3
///@}

/**
* @name VVU_SRCHREPL_CASE Definitions
* 
* Search and Replace handling of string case
*/
///@{
/** 
* VVU_SRCHREPL_CASE_TOLERANT
*/
#define VVU_SRCHREPL_CASE_TOLERANT 0
/** 
* VVU_SRCHREPL_CASE_SENSITIVE
*/
#define VVU_SRCHREPL_CASE_SENSITIVE 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Average repeat values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ref_vv TODO
* @param[in]  dat_vv TODO
**
* @par Note 
*      Repeated values in the reference VV will be averaged
*      in the data VV.  The first value in the data VV will be set to the
*      average and subsequent data VV values will be dummied out.
*      Data is processed only to the minimum length of the
*      input VV lengths.
*
* @par See also 
*      RemoveDummy_VVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void AverageRepeat_VVU(void* p_geo, const int32_t* ref_vv, const int32_t* dat_vv);

/**
* Average repeat values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ref_vv TODO
* @param[in]  dat_vv TODO
* @param[in]  mode TODO
**
* @par Note 
*      Repeated values in the reference VV will be set to the mean, median, minimum or maximum value
*      in the data VV.  For minimum and maximum, the index in the data VV containing the minimum or maximum value
*      is retained, and the other repeated values are dummied out. For mean and median, the first value in the 
*      data VV will be reset and subsequent data VV values will be dummied out.
*      Data is processed only to the minimum length of the
*      input VV lengths.
*
* @par See also 
*      RemoveDummy_VVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void AverageRepeatEx_VVU(void* p_geo, const int32_t* ref_vv, const int32_t* dat_vv, const int32_t* mode);

/**
* Average repeat values based on 2 reference channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ref_vv1 TODO
* @param[in]  ref_vv2 TODO
* @param[in]  dat_vv TODO
**
* @par Note 
*      Repeated values in the reference VV will be averaged
*      in the data VV.  The first value in the data VV will be set to the
*      average and subsequent data VV values will be dummied out.
*      Data is processed only to the minimum length of the
*      input VV lengths.
*      Both the reference VV values must repeat for the averaging
*      to occur. This version is useful for averaging on repeated
*      (X,Y) locations.
*
* @par See also 
*      RemoveDummy_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void AverageRepeat2_VVU(void* p_geo, const int32_t* ref_vv1, const int32_t* ref_vv2, const int32_t* dat_vv);

/**
* Average repeat values based on 2 reference channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ref_vv1 TODO
* @param[in]  ref_vv2 TODO
* @param[in]  dat_vv TODO
* @param[in]  mode TODO
**
* @par Note 
*      Repeated values in the reference VV will be set to the mean, median, minimum or maximum value
*      in the data VV.  The first value in the data VV will be reset and subsequent data VV values will be dummied out.
*      Data is processed only to the minimum length of the
*      input VV lengths.
*      Both the reference VV values must repeat for the averaging
*      to occur. This version is useful for averaging on repeated
*      (X,Y) locations.
*
* @par See also 
*      RemoveDummy_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void AverageRepeat2Ex_VVU(void* p_geo, const int32_t* ref_vv1, const int32_t* ref_vv2, const int32_t* dat_vv, const int32_t* mode);

/**
* Search  numeric value in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  val TODO
* @param[out] l_min TODO
* @param[out] l_max TODO
**
* @par Note 
*      The VV should be sorted.Search comparison is made on double
*      comparison of the data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT void BinarySearch_VVU(void* p_geo, const int32_t* vv, const double* val, int32_t* l_min, int32_t* l_max);

/**
* Run Box-Cox (lambda) Transformation on VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  lm TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void BoxCox_VVU(void* p_geo, const int32_t* vv, const double* lm);

/**
* Band-pass filter to the specified.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_o TODO
* @param[in]  pr_sw TODO
* @param[in]  pr_lw TODO
* @param[in]  flen TODO
**
* @par Note 
*      If the short and long wavelengths are <= 0, the input channel
*      is simply copied to the output channel without filtering.
*      
*      The wavelengths are in fiducials.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void BPFilt_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_o, const double* pr_sw, const double* pr_lw, const int32_t* flen);

/**
* Clip a VV to a range.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  clip TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Clip_VVU(void* p_geo, const int32_t* vv, const double* min, const double* max, const int32_t* clip);

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
*      This function is identical to ClipToDetectLimit_CHIMERA.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.6
*/
GX_EXPORT void ClipToDetectLimit_VVU(void* p_geo, const int32_t* vv, const double* det_limit, const int32_t* conv);

/**
* Decimate a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  decimate TODO
**
* @par Note 
*      For a decimation factor N, will remove all values except
*      those with indices equal to MN, where M is an integer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.1
*/
GX_EXPORT void Decimate_VVU(void* p_geo, const int32_t* vv, const int32_t* decimate);

/**
* Calculate distance of point locations to a straight line
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_d TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
* @param[in]  x2 TODO
* @param[in]  y2 TODO
* @param[in]  line TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Deviation_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_d, const double* x1, const double* y1, const double* x2, const double* y2, const int32_t* line);

/**
* Create a cumulative distance VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_d TODO
* @param[in]  x_fid_start TODO
* @param[in]  x_fid_incr TODO
* @param[in]  y_fid_start TODO
* @param[in]  y_fid_incr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Distance_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_d, const double* x_fid_start, const double* x_fid_incr, const double* y_fid_start, const double* y_fid_incr);

/**
* Create a non cumulative distance VV i.e each
* distance element is the distance of the corresponding
* (X,Y) element and the previous element.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_d TODO
* @param[in]  x_fid_start TODO
* @param[in]  x_fid_incr TODO
* @param[in]  y_fid_start TODO
* @param[in]  y_fid_incr TODO
**
* @par Note 
*      The fist distace element is rDUMMY.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT void DistanceNonCumulative_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_d, const double* x_fid_start, const double* x_fid_incr, const double* y_fid_start, const double* y_fid_incr);

/**
* Create a cumulative distance VV from X, Y and Z VVs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  start_distance TODO
* @param[in]  vv_d TODO
**
* @par Note 
*      The output VV is the length of the shortest X,Y or Z input VV.
*      Any values with dummies are ignored - the distance at that
*      point is equal to the distance at the previous valid point.
*      The returned VV is the cumulative straight-line distance
*      between the points. No re-sampling is performed.
*      VVs of any type are supported.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void Distance3D_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const double* start_distance, const int32_t* vv_d);

/**
* Return indices of locations separated from previous locations by more than the input gap distance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  gap TODO
* @param[in]  vv_g TODO
**
* @par Note 
*      Locate the starting points of line segements determined by an input gap distance.
*      The returned indices indicate where to break the line, given an input gap.
*      The number of returned indices is one less than the number of line segments.
*      (So if there are no gaps the returned VV has zero length).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.1
*/
GX_EXPORT void FindGaps3D_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const double* gap, const int32_t* vv_g);

/**
* Dummy values inside or outside a range in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  inside TODO
* @param[in]  incl TODO
**
* @par Note 
*      If the Inside flag is TRUE, values within the specified
*      range are set to dummy. If the inside flag is FALSE,
*      values outside the range are set to dummy.  If the Inclusive
*      flag is TRUE, then dMin and dMax are considered part of the
*      range. If it is FALSE, then < or > are used, and dMin and
*      dMax lie outside the range.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DummyRange_VVU(void* p_geo, const int32_t* vv, const double* min, const double* max, const int32_t* inside, const int32_t* incl);

/**
* Like DummyRangeVVU, with inclusion options for both ends.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  inside TODO
* @param[in]  include_min TODO
* @param[in]  include_max TODO
**
* @par Note 
*      If the Inside flag is TRUE, values within the specified
*      range are set to dummy. If the inside flag is FALSE,
*      values outside the range are set to dummy.  If the Inclusive
*      flag is TRUE, then dMin and dMax are considered part of the
*      range. If it is FALSE, then < or > are used, and dMin and
*      dMax lie outside the range.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.7
*/
GX_EXPORT void DummyRangeEx_VVU(void* p_geo, const int32_t* vv, const double* min, const double* max, const int32_t* inside, const int32_t* include_min, const int32_t* include_max);

/**
* Dummy repeat values in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  mode TODO
**
* @par Note 
*      Either the first, middle or last point will be left.
*                        Use Interp_VVU to interpolate after if desired.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DummyRepeat_VVU(void* p_geo, const int32_t* vv, const int32_t* mode);

/**
* Calculate means and differences for duplicate sample pairs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data_vv TODO
* @param[in]  sample_vv TODO
* @param[in]  mean_vv TODO
* @param[in]  diff_vv TODO
**
* @par Note 
*      Created for duplicate sample handling in CHIMERA. On input,
*      a numeric VV containing data values, and a sample type VV.
*      Sample pairs have types "1" and "2". This routine searches for
*      types in order "1 2 1 2", and writes the mean values of pairs
*      to the mean value VV, and the differences with the mean (equal
*      values, negative and positive) to the difference VV. Results
*      for samples out of order, for unmatched values, or when the
*      sample type does not equal "1" or "2" are set to dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DupStats_VVU(void* p_geo, const int32_t* data_vv, const int32_t* sample_vv, const int32_t* mean_vv, const int32_t* diff_vv);

/**
* Fill with exponentially distributed values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  seed TODO
* @param[in]  mean TODO
* @param[in]  length TODO
**
* @par Note 
*      VV is set to input length (except for -1)
*      See RAND for a short discription of the
*      random number generator used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void ExpDist_VVU(void* p_geo, const int32_t* vv, const int32_t* seed, const double* mean, const int32_t* length);

/**
* Apply a convolution filter to a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_o TODO
* @param[in]  flt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Filter_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_o, const int32_t* flt);

/**
* Searches a VV for items in a second VV, returns indices of those found.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_source TODO
* @param[in]  vv_search TODO
* @param[in]  pis_source_sorted TODO
* @param[in]  pis_search_sorted TODO
* @param[in]  pis_case_tolerant TODO
* @param[in]  vv_i TODO
**
* @par Note 
*      This is a much more efficient way of determining if items in
*      one VV are found in a second, than by searching
*      repeatedly in a loop.
*      The returned GS_LONG VV contains the same number of items as
*      the "search items" VV, and contains -1 for items where the
*      value is not found, and the index of items that are found.
*      Comparisons are case-tolerant.
*      Non-string VVs are converted to string type VVs (element size 24) internally.
*      
*      The method requires that the VV items be sorted, and
*      will do so internally. Since the input VVs may already be sorted,
*      the method will run faster if this stage can be skipped.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void FindStringItems_VVU(void* p_geo, const int32_t* vv_source, const int32_t* vv_search, const int32_t* pis_source_sorted, const int32_t* pis_search_sorted, const int32_t* pis_case_tolerant, const int32_t* vv_i);

/**
* Fractal filter a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  order TODO
* @param[in]  number TODO
* @param[in]  vv_o TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void FractalFilter_VVU(void* p_geo, const int32_t* vv_i, const int32_t* order, const int32_t* number, const int32_t* vv_o);

/**
* Find the closest point to an input point (XY).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @return Index of closest point, -1 if no valid locations, or data is masked.
**
* @par Note 
*      Input X and Y location VVs, and a location.
*      Returns the index of the point in the VV closest to the
*      input point.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iCloseXY_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const double* x, const double* y);

/**
* Find the closest point to an input point, with mask (XY).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_m TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @return Index of closest point, -1 if no valid locations, or data is masked.
**
* @par Note 
*      Input X and Y location VVs, and a location.
*      Returns the index of the point in the VV closest to the
*      input point.
*      This skips points where the mask value is dummy.
*      If no valid points are in the VVs, or all the mask VV values
*      are dummy, the returned index is -1.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iCloseXYM_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_m, const double* x, const double* y);

/**
* Find the closest point to an input point (XYZ).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @return Index of closest point, -1 if no valid locations, or data is masked.
**
* @par Note 
*      Input X, Y and Z location VVs, and a location.
*      Returns the index of the point in the VV closest to the
*      input point.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iCloseXYZ_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const double* x, const double* y, const double* z);

/**
* Find the closest point to an input point, with mask (XYZ).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_m TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @return Index of closest point, -1 if no valid locations, or data is masked.
**
* @par Note 
*      Input X, Y and Z location VVs, and a location.
*      Returns the index of the point in the VV closest to the
*      input point.
*      This skips points where the mask value is dummy.
*      If no valid points are in the VVs, or all the mask VV values
*      are dummy, the returned index is -1.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iCloseXYZM_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_m, const double* x, const double* y, const double* z);

/**
* Dummy all points that keep a VV from being monotonically increasing.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @return The number of items dummied in order to render the VV montonically increasing.
**
* @par Note 
*      The VV length remains the same. Any point that is less than or equal to
*      the previous (valid) point in the VV is dummied.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iDummyBackTracks_VVU(void* p_geo, const int32_t* vv);

/**
* Find the first dummy|non-dummy value in VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  dir TODO
* @param[in]  type TODO
* @param[in]  start TODO
* @param[in]  end TODO
* @return The index of the first dummy|non-dummy value in VV
* -1 if not found or if length of VV is 0
**
* @par Note 
*      Start and end of range are always defined lowest
*      to largest even if decreasing search order.  To search
*      entire VV range, specify 0,-1.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFindDummy_VVU(void* p_geo, const int32_t* vv, const int32_t* dir, const int32_t* type, const int32_t* start, const int32_t* end);

/**
* Replace all dummies by interpolating from valid data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  input TODO
* @param[in]  output TODO
**
* @par Note 
*      Edge behaviour
*           Dummies at the ends are treated as follows
*           for various combinations of the inside and outside interpolation
*           choices:
*      
*      ::
*      
*        if ((iOutside==VV_INTERP_EDGE_NEAREST) ||
*            (iOutside==VV_INTERP_EDGE_SAME && iInside==VV_INTERP_NEAREST))
*      
*             // -- Set dummies to the same value as the last defined element
*      
*        else if ((iOutside==VV_INTERP_EDGE_LINEAR) ||
*                 (iOutside==VV_INTERP_EDGE_SAME &&  iInside==VV_INTERP_LINEAR))
*      
*             // --- Set dummies using the slope of the last two defined elements
*      
*        endif
*      
*      In all other cases and combinations of the two interpolation
*      choices, the dummies are left "as is".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Interp_VVU(void* p_geo, const int32_t* vv, const int32_t* input, const int32_t* output);

/**
* Calculate fill in line segments
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vvx TODO
* @param[in]  vvy TODO
* @param[in]  vvf TODO
* @param[in]  vvd TODO
* @param[in]  dist TODO
* @return 1 if error, 0 if successful
**
* @par Note 
*      The X & Y VVs are returned as the calculated fill in line segments.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT int32_t iQCFillGaps_VVU(void* p_geo, const int32_t* vvx, const int32_t* vvy, const int32_t* vvf, const int32_t* vvd, const double* dist);

/**
* Search for a text value in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  text TODO
* @param[in]  case TODO
* @param[in]  match TODO
* @param[in]  start TODO
* @param[in]  dir TODO
* @return Index of first matching text, -1 if not found.
**
* @par Note 
*      Search comparison is made on string comparison
*      of the data. Returns index of first item matching
*      the input string.
*      If start index is -1 or dummy, then full VV is searched.
*      Use VVU_MATCH_INPUT_LENGTH to match the first part of a string.
*      This is also recommended for matching numerical values, since
*      the displayed value in the database may not be the same as the
*      stored value.
*
* @par See also 
*      sSearchReplace_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT int32_t iSearchText_VVU(void* p_geo, const int32_t* vv, const char* text, const int32_t* case, const int32_t* match, const int32_t* start, const int32_t* dir);

/**
* Mask dummies in one VV onto another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_d TODO
* @param[in]  vv_m TODO
**
* @par Note 
*      VV to mask will be resampled to reference VV if required.
*      The returned length of the VV to mask will be the shorter
*      of the reference VV or the mask VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Mask_VVU(void* p_geo, const int32_t* vv_d, const int32_t* vv_m);

/**
* Create mask from logical AND of two VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_a TODO
* @param[in]  vv_b TODO
* @param[in]  vv_c TODO
**
* @par Note 
*      If both values are non-dummies, then result is 1, else dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void MaskAND_VVU(void* p_geo, const int32_t* vv_a, const int32_t* vv_b, const int32_t* vv_c);

/**
* Create mask from logical OR of two VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_a TODO
* @param[in]  vv_b TODO
* @param[in]  vv_c TODO
**
* @par Note 
*      If either values is non-dummy, then result is 1, else dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void MaskOR_VVU(void* p_geo, const int32_t* vv_a, const int32_t* vv_b, const int32_t* vv_c);

/**
* Applies a non-linear filter.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_o TODO
* @param[in]  fwid TODO
* @param[in]  pr_ftol TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void NLFilt_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_o, const int32_t* fwid, const double* pr_ftol);

/**
* Check on deviation of data from variable background in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_f TODO
* @param[in]  all_tol TODO
* @param[in]  num TODO
**
* @par Note 
*      This function checks vertical deviation of data in input VV
*      against a moving straight line. The straight line at any time is
*      defined by two extreme points of a data segment.  Output VV will
*      be 0 if data point in input VV falls within the deviation,
*      otherwise, it will be 1.
*      Output VV will be 0 if the straight line is vertical.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void NoiseCheck_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_f, const double* all_tol, const int32_t* num);

/**
* Like NoiseCheck_VVU, but returns maximum deviation at all points.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_f TODO
* @param[in]  vv_d TODO
* @param[in]  all_tol TODO
* @param[in]  num TODO
**
* @par Note 
*      This function checks vertical deviation of data in an input VV
*      against a moving straight line, where the X-axis value is
*      taken to be the data index, and the Y-axis value is the
*      input data VV value. The straight line is drawn between data points
*      at the ends of the line segment, whose length is an input.
*      
*      The output flag VV is set to 0 if data point in input VV falls within the
*      deviation for all the moving line segments of which it is a part, otherwise, it
*      will be set to 1.
*      
*      The output maximum deviation VV contains the maximum deviation at each point
*      for all the moving line segments that it is a part of.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void NoiseCheck2_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_f, const int32_t* vv_d, const double* all_tol, const int32_t* num);

/**
* Fill with normally (Gaussian) distributed values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  seed TODO
* @param[in]  mean TODO
* @param[in]  var TODO
* @param[in]  length TODO
**
* @par Note 
*      VV is set to input length (except for -1)
*      See RAND for a short discription of the
*      random number generator used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void NormalDist_VVU(void* p_geo, const int32_t* vv, const int32_t* seed, const double* mean, const double* var, const int32_t* length);

/**
* Get non-overlapping offset location for circular symbols.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_xi TODO
* @param[in]  vv_yi TODO
* @param[in]  offset TODO
* @param[in]  radius TODO
* @param[in]  vv_xo TODO
* @param[in]  vv_yo TODO
**
* @par Note 
*      Often on maps plotted symbols and text overlap each other.
*      This routine accepts of VV of locations and returns a new
*      set of locations offset from the originals, and guaranteed
*      not to overlap, given the size of the original symbols.
*      The returned offset X, Y
*      locations are offset from the original locations by
*      the minimum of a) the input offset, b) the input symbol
*      radius. This is to ensure that the original location is
*      never covered by the offset symbol.
*      
*      Care should be taken when choosing the symbol size, because
*      if the point density is too high, all the points will get
*      pushed to the outside edge and your plot will look like a
*      hedgehog (it also takes a lot longer!).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void OffsetCircles_VVU(void* p_geo, const int32_t* vv_xi, const int32_t* vv_yi, const double* offset, const double* radius, const int32_t* vv_xo, const int32_t* vv_yo);

/**
* Correct locations based on heading and fixed offset.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_xi TODO
* @param[in]  vv_yi TODO
* @param[in]  dist TODO
* @param[in]  heading TODO
* @param[in]  v_vxo TODO
* @param[in]  v_vyo TODO
**
* @par Note 
*      In many applications, measurements are taken with an instrument which
*      is towed behind, or pushed ahead of where the locations are recorded.
*      Use this function to estimate the actual location of the instrument.
*      The method determines the heading along the line, using a "thinned"
*      version of the line. The degree of thinning is based on the size of the
*      offset; the larger the offset, the greater the distance between sample
*      locations used to construct the thinned lined used for determining headings.
*      The thinned line is splined at a frequency greater than the sample
*      frequency, and the heading at any given point is determined from the
*      vector formed by the closest two points on the splined line. The
*      correction (behind, in front, left or right) is determined with respect
*      to the heading, and added to the original location.
*      
*      IF this method fails, no dummies, no duplicated locations, no reversals
*      are produced.
*      
*      The algorithm:
*      
*          1. Determine average distance between each point = D
*          2. Smoothing interval = MAX(2*D, Offset distance) = I
*          3. Thin input points to be at least the smoothing interval I apart from each other.
*          4. Smoothly re-interpolate the thinned points at five times the
*             original average distance D.
*          5. For each input point, calculate the bearing using the nearest points
*             on the smoothed curve
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void OffsetCorrect_VVU(void* p_geo, const int32_t* vv_xi, const int32_t* vv_yi, const double* dist, const int32_t* heading, const int32_t* v_vxo, const int32_t* v_vyo);

/**
* Same as OffsetCorrect_VVU, but for an arbitrary offset angle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_xi TODO
* @param[in]  vv_yi TODO
* @param[in]  dist TODO
* @param[in]  azimuth TODO
* @param[in]  vv_xo TODO
* @param[in]  vv_yo TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void OffsetCorrect2_VVU(void* p_geo, const int32_t* vv_xi, const int32_t* vv_yi, const double* dist, const double* azimuth, const int32_t* vv_xo, const int32_t* vv_yo);

/**
* Same as OffsetCorrect2_VVU, but specify smoothing interval.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_xi TODO
* @param[in]  vv_yi TODO
* @param[in]  dist TODO
* @param[in]  azimuth TODO
* @param[in]  interval TODO
* @param[in]  vv_xo TODO
* @param[in]  vv_yo TODO
**
* @par Note 
*      See the algorithm note #2 above for the default smoothing interval.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.4
*/
GX_EXPORT void OffsetCorrect3_VVU(void* p_geo, const int32_t* vv_xi, const int32_t* vv_yi, const double* dist, const double* azimuth, const double* interval, const int32_t* vv_xo, const int32_t* vv_yo);

/**
* Correct locations based on heading and fixed offset.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_xi TODO
* @param[in]  vv_yi TODO
* @param[in]  vv_zi TODO
* @param[in]  x_off TODO
* @param[in]  y_off TODO
* @param[in]  z_off TODO
* @param[in]  interval TODO
* @param[in]  v_vxo TODO
* @param[in]  v_vyo TODO
* @param[in]  v_vzo TODO
**
* @par Note 
*      In many applications, measurements are taken with an instrument which
*      is towed behind, or pushed ahead of where the locations are recorded.
*      Use this function to estimate the actual location of the instrument.
*      The method determines the heading along the line, using a "thinned"
*      version of the line. The default degree of thinning is based on the size of the
*      offset; the larger the offset, the greater the distance between sample
*      locations used to construct the thinned lined used for determining headings.
*      The thinned line is splined at a frequency greater than the sample
*      frequency, and the heading at any given point is determined from the
*      vector formed by the closest two points on the splined line. The
*      correction (behind, in front, left or right) is determined with respect
*      to the heading, and added to the original location.
*      
*      IF this method fails, no dummies, no duplicated locations, no reversals
*      are produced.
*      
*      The algorithm:
*      
*          1. Determine average distance between each point = D
*          2. Default smoothing interval = MAX(2*D, Offset distance) = I
*          3. Thin input points to be at least the smoothing interval I apart from each other.
*          4. Smoothly re-interpolate the thinned points at five times the
*             original average distance D.
*          5. For each input point, calculate the bearing using the nearest points
*             on the smoothed curve
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.0
*/
GX_EXPORT void OffsetCorrectXYZ_VVU(void* p_geo, const int32_t* vv_xi, const int32_t* vv_yi, const int32_t* vv_zi, const double* x_off, const double* y_off, const double* z_off, const double* interval, const int32_t* v_vxo, const int32_t* v_vyo, const int32_t* v_vzo);

/**
* Get non-overlapping offset location for rectangular symbols.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_xi TODO
* @param[in]  vv_yi TODO
* @param[in]  offset TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  vv_xo TODO
* @param[in]  vv_yo TODO
**
* @par Note 
*      Often on maps plotted symbols and text overlap each other.
*      This routine accepts of VV of locations and returns a new
*      set of locations offset from the originals, and guaranteed
*      not to overlap, given the size of the original symbols.
*      The returned offset X, Y
*      locations are offset from the original locations by
*      the minimum of a) the input offset, b) the input symbol
*      X or Y size. This is to ensure that the original location is
*      never covered by the offset symbol. In addition, the offset
*      symbol is never place directly below the original location,
*      to make it easier to draw a connecting line.
*      
*      Care should be taken when choosing the symbol size, because
*      if the point density is too high, all the points will get
*      pushed to the outside edge and your plot will look like a
*      hedgehog (it also takes a lot longer!).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.7
*/
GX_EXPORT void OffsetRectangles_VVU(void* p_geo, const int32_t* vv_xi, const int32_t* vv_yi, const double* offset, const double* size_x, const double* size_y, const int32_t* vv_xo, const int32_t* vv_yo);

/**
* Find peaks in a VV - method one.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_o TODO
* @param[in]  pr_tol TODO
* @param[in]  width TODO
**
* @par Note 
*      Peaks are the maximum point within a sequence of
*      positive values in the input VV.  The width is the
*      number of points in the positive sequence.
*      
*      A VV may have to be pre-filtered before finding
*      the peak values:
*      
*      Use BPFilt_VVU to smooth the data as required.
*      Use Filter_VVU to apply a Laplace filter
*      "-0.5,1.0,-0.5" to make curvature data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PickPeak_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_o, const double* pr_tol, const int32_t* width);

/**
* Find peaks in a VV - method two.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_o TODO
* @param[in]  pr_base_lvl TODO
* @param[in]  pr_ampl TODO
**
* @par Note 
*      Peaks are the maximum point within a sequence of
*      values in the input VV. Maximum points must be above
*      the base level and have a local amplitude greater
*      than the minimum amplitude specified.
*      
*      A VV may have to be pre-filtered before finding
*      the peak values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void PickPeak2_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_o, const double* pr_base_lvl, const double* pr_ampl);

/**
* Find peaks in a VV - method two, returning width and half-amplitude widths.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  pr_base_lvl TODO
* @param[in]  pr_ampl TODO
* @param[in]  v_vind TODO
* @param[in]  v_vamp TODO
* @param[in]  v_vwid TODO
* @param[in]  v_vhawid TODO
**
* @par Note 
*      Uses Method 2 above, but also returns the anomaly width (defined
*      as the distance between the surrounding troughs), and the
*      width at the half-amplitude. The half-amplitude width is
*      calculated in two parts, individually for each side based on
*      the distance from the maximum to the location where the
*      amplitude is mid-way between the maximum and trough.
*      
*      The returned VVs are packed; no dummies. Instead the
*      indicies of the peak locations are returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void PickPeak3_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_x, const int32_t* vv_y, const double* pr_base_lvl, const double* pr_ampl, const int32_t* v_vind, const int32_t* v_vamp, const int32_t* v_vwid, const int32_t* v_vhawid);

/**
* Fill a VV with values from an n'th order polynomial, integral x.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_d TODO
* @param[in]  order TODO
* @param[in]  vv_c TODO
**
* @par Note 
*      The output VV length must be set as desired before calling.
*      
*      The X scale is unitless (1 per element), i.e. 0,1,2,3,...
*
* @par See also 
*      Trend_VVU, Trend2_VVU, PolyFill2_VVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.6
*/
GX_EXPORT void PolyFill_VVU(void* p_geo, const int32_t* vv_d, const int32_t* order, const int32_t* vv_c);

/**
* Fill a VV with values from an n'th order polynomial, specified X
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_d TODO
* @param[in]  order TODO
* @param[in]  vv_c TODO
**
* @par Note 
*      The output VV length must be set as desired before calling.
*      The X scale is defined by a X VV (see Trend_VV for unitless X).
*
* @par See also 
*      Trend_VVU, Trend2_VVU, PolyFill_VVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.6
*/
GX_EXPORT void PolyFill2_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_d, const int32_t* order, const int32_t* vv_c);

/**
* Mask a VV using XY data and a polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_m TODO
* @param[in]  pply TODO
* @param[in]  mask TODO
**
* @par Note 
*      The VVs have to be the same length
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void PolygonMask_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_m, const int32_t* pply, const int32_t* mask);

/**
* Prune values from a VV based on reference VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_p TODO
* @param[in]  vv_r TODO
* @param[in]  o TODO
**
* @par Note 
*      Pruning will shorten the VV by removing values
*      that are either dummy or non-dummy in the reference
*      VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Prune_VVU(void* p_geo, const int32_t* vv_p, const int32_t* vv_r, const int32_t* o);

/**
* Quality control on deviation of data from norm in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_d TODO
* @param[in]  v_vf TODO
* @param[in]  nominal TODO
* @param[in]  max_tol TODO
* @param[in]  all_tol TODO
* @param[in]  dist TODO
* @param[in]  qc TODO
**
* @par Note 
*      This function tests data in input VV against
*      two separate criteria. Each element of the output VV
*      will have one of the following indicators:
*      
*      =========  ==============================================================
*      Indicator  Meaning
*      =========  ==============================================================
*        0        Input data passed both tests
*      ---------  --------------------------------------------------------------
*        1        The input data and is greater than the nominal value
*                 plus maximum tolerance/deviation (Criterion #1)
*      ---------  --------------------------------------------------------------
*        2        The input data over a specified distance is greater than the
*                 nominal value plus allowed tolerance (Criterion #2)
*      ---------  --------------------------------------------------------------
*        3        The input data failed on above two tests
*      ---------  --------------------------------------------------------------
*       -1        The input data and is less than the nominal value
*                 minus maximum tolerance (Criterion #1)
*      ---------  --------------------------------------------------------------
*       -2        The input data over a specified distance is less than the
*                 nominal value minus allowed tolerance (Criterion #2)
*      ---------  --------------------------------------------------------------
*       -3        The input data failed on above two tests
*      =========  ==============================================================
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void QC_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_d, const int32_t* v_vf, const double* nominal, const double* max_tol, const double* all_tol, const double* dist, const int32_t* qc);

/**
* Find the range of hypotenuse values of two VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv1 TODO
* @param[in]  vv2 TODO
* @param[out] min TODO
* @param[out] max TODO
**
* @par Note 
*      For each value in the VVs, finds sqrt(dV1*dV1 + dV2*dV2)
*      and returns the min and max values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RangeVectorMag_VVU(void* p_geo, const int32_t* vv1, const int32_t* vv2, double* min, double* max);

/**
* Calculate linear regression through data
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[out] slp TODO
* @param[out] int TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Regress_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, double* slp, double* int);

/**
* Estimate relative variance of duplicate sample pairs from a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data_vv TODO
* @param[in]  sample_vv TODO
* @param[out] rel_var TODO
* @param[out] num_dup TODO
**
* @par Note 
*      Created for duplicate sample handling in CHIMERA. On input,
*      a numeric or text VV containing data values, and a sample type VV.
*      Sample pairs have types "1" and "2". This routine searches for
*      types in order "1 2 1 2", and calulates the unnormalized relative variance,
*      defined as the sum of the squared differences between duplicates
*      divided by the sum of the squared mean values of the duplicates.
*      (To get the true rel.var., divide by N-1, where N is the number of
*      duplicate pairs used.)
*      Samples out of order, unmatched pairs, or when the
*      sample type does not equal "1" or "2" are ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RelVarDup_VVU(void* p_geo, const int32_t* data_vv, const int32_t* sample_vv, double* rel_var, int32_t* num_dup);

/**
* Remove dummy values from a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void RemoveDummy_VVU(void* p_geo, const int32_t* vv);

/**
* Remove dummy values from 2 VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv1 TODO
* @param[in]  vv2 TODO
**
* @par Note 
*      Removes all indices where either VV has a dummy, or is
*      not defined (due to length differences).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void RemoveDummy2_VVU(void* p_geo, const int32_t* vv1, const int32_t* vv2);

/**
* Remove dummy values from 3 VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv1 TODO
* @param[in]  vv2 TODO
* @param[in]  vv3 TODO
**
* @par Note 
*      Removes all indices where any VV has a dummy, or is
*      not defined (due to length differences).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT void RemoveDummy3_VVU(void* p_geo, const int32_t* vv1, const int32_t* vv2, const int32_t* vv3);

/**
* Remove dummy values from 4 VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv1 TODO
* @param[in]  vv2 TODO
* @param[in]  vv3 TODO
* @param[in]  vv4 TODO
**
* @par Note 
*      Removes all indices where any VV has a dummy, or is
*      not defined (due to length differences).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void RemoveDummy4_VVU(void* p_geo, const int32_t* vv1, const int32_t* vv2, const int32_t* vv3, const int32_t* vv4);

/**
* Remove/average duplicate sample pairs from a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data_vv TODO
* @param[in]  sample_vv TODO
* @param[in]  output TODO
**
* @par Note 
*      Created for duplicate sample handling in CHIMERA. On input,
*      a numeric or text VV containing data values, and a sample type VV.
*      Sample pairs have types "1" and "2". This routine searches for
*      types in order "1 2 1 2", and replaces the pair of values in the
*      data VV according to the VV_DUP value.
*      Results for samples out of order, for unmatched pairs, or when the
*      sample type does not equal "1" or "2" remain unchanged.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RemoveDup_VVU(void* p_geo, const int32_t* data_vv, const int32_t* sample_vv, const int32_t* output);

/**
* Remove/average duplicate samples with the same (X, Y).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  zvv TODO
* @param[in]  xy_dup TODO
**
* @par Note 
*      Searches for duplicated (X, Y) locations and removes the
*      duplicates (can be more than just a pair). The "Z" values,
*      if defined, are treated according to the value of VV_XYDUP.
*      The returned VVs are shortened to the new length, without
*      duplicates.
*      The Z VV can be set to NULL on input, in which case it is ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RemoveXYDup_VVU(void* p_geo, const int32_t* xvv, const int32_t* yvv, const int32_t* zvv, const int32_t* xy_dup);

/**
* Remove duplicate samples with the same (X, Y) and update index.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  index_vv TODO
**
* @par Note 
*      Searches for duplicated (X, Y) locations and removes the
*      duplicates (can be more than just a pair). The Index VV is
*      updated accordingly .i.e if  (X,Y) location of Index[0] == Index[1]
*      Index[1] is removed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT void RemoveXYDupIndex_VVU(void* p_geo, const int32_t* xvv, const int32_t* yvv, const int32_t* index_vv);

/**
* Calculate a statistic in a rolling window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_o TODO
* @param[in]  stat TODO
* @param[in]  window TODO
* @param[in]  shrink TODO
**
* @par Note 
*      If the input VVs are not REAL, copies are made to
*      temporary REALs for processing.
*      
*      If the window size is even, it is increased by 1 so that the
*      output value is put at the exact center index of the window.
*      
*      Statistics are calculated on the values in a window
*      surrounding the individual data points.
*      
*      By shrinking the window at the ends, one-sided effects can be
*      eliminated. For instance, if the data is linear to begin with,
*      a rolling mean will not alter the original data.
*      However, if the window size is kept constant, then values
*      near the ends tend to be pulled up or down.
*      
*      With shrinking, the window is shrunk so that it always has the
*      same width on both sides of the data point under analysis;
*      at the end points the window width is 1, at the next point in
*      it is 3, and so on, until the full width is reached.
*      
*      The median value is calculated by sorting the valid data in
*      the window, then selecting the middle value. If the number
*      of valid data points is even, then the average of the two
*      central values is returned.
*      
*      The mode value is defined as the value which occurs most
*      frequently in the data. This value may not even exist, or
*      may not be unique. In this implementation, the following
*      algorithm is used: The valid data in the window is sorted
*      in ascending order. The number of occurrences of each data
*      value is tracked, and if it occurs more times than any
*      value, it becomes the modal value. If all
*      values are different, this procedure returns the smallest
*      value. If two or more values each have the same (maximum)
*      number of occurrences, then the smallest of these values is
*      returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1
*/
GX_EXPORT void RollingStats_VVU(void* p_geo, const int32_t* vv_i, const int32_t* vv_o, const int32_t* stat, const int32_t* window, const int32_t* shrink);

/**
* Search and replace numeric values in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  val TODO
* @param[in]  rpl TODO
**
* @par Note 
*      Search comparison is made on double comparison
*      of the data.
*
* @par See also 
*      SearchReplaceText_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SearchReplace_VVU(void* p_geo, const int32_t* vv, const double* val, const double* rpl);

/**
* Search and replace text values in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  format TODO
* @param[in]  decimal TODO
* @param[in]  val TODO
* @param[in]  rpl TODO
* @param[in]  mode TODO
**
* @par Note 
*      Search comparison is made on string comparison
*      of the data.
*
* @par See also 
*      SearchReplace_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SearchReplaceText_VVU(void* p_geo, const int32_t* vv, const int32_t* format, const int32_t* decimal, const char* val, const char* rpl, const int32_t* mode);

/**
* Search and replace text values in a VV, count items changed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  format TODO
* @param[in]  decimal TODO
* @param[in]  val TODO
* @param[in]  rpl TODO
* @param[in]  mode TODO
* @param[out] items TODO
**
* @par Note 
*      Search comparison is made on a string comparison
*      of the data.
*
* @par See also 
*      SearchReplaceText_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT void SearchReplaceTextEx_VVU(void* p_geo, const int32_t* vv, const int32_t* format, const int32_t* decimal, const char* val, const char* rpl, const int32_t* mode, int32_t* items);

/**
* Spline a Y VV onto an X VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_o TODO
* @param[in]  length TODO
* @param[in]  start TODO
* @param[in]  incr TODO
* @param[in]  gap TODO
* @param[in]  ext TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Spline_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_o, const int32_t* length, const double* start, const double* incr, const double* gap, const int32_t* ext, const int32_t* type);

/**
* Spline a Y VV onto an X VV. Uses specified values of X in X2
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_x2 TODO
* @param[in]  vv_o TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void Spline2_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_x2, const int32_t* vv_o, const int32_t* type);

/**
* Tokenize a string based on any characters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  str_val TODO
* @return Number of tokens (length of VV)
**
* @par Note 
*      Parses a series of space, tab or comma-delimited values to a VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t iTokenizeToValues_VVU(void* p_geo, const int32_t* vv, const char* str_val);

/**
* Translate values in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  base TODO
* @param[in]  mult TODO
**
* @par Note 
*      (new VV) = ((old VV) + base) * scale
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Translate_VVU(void* p_geo, const int32_t* vv, const double* base, const double* mult);

/**
* Calculate an n'th order best-fit polynomial, integral x.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_d TODO
* @param[in]  order TODO
* @param[in]  vv_c TODO
**
* @par Note 
*      Returns coefficients c[0] .. c[n]
*      
*         Y(x) = c[0] + c[1]x + c[2](x**2) + ... + c[n](x**n)
*      
*      The X scale is unitless (1 per element), i.e. 0,1,2,3,...
*      
*      The polynomial VV length is set to the number of coefficients
*      (order + 1)
*
* @par See also 
*      PolyFill_VVU, Trend2_VVU, PolyFill2_VVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.6
*/
GX_EXPORT void Trend_VVU(void* p_geo, const int32_t* vv_d, const int32_t* order, const int32_t* vv_c);

/**
* Calculate an n'th order best-fit polynomial, specified X
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_d TODO
* @param[in]  order TODO
* @param[in]  vv_c TODO
**
* @par Note 
*      Returns coefficients c[0] .. c[n]
*      
*         Y(x) = c[0] + c[1]x + c[2](x**2) + ... + c[n](x**n)
*      
*      The X scale is defined by a X VV (see Trend_VV for unitless X).
*      
*      The polynomial VV length is set to the number of coefficients
*      (order + 1)
*
* @par See also 
*      PolyFill_VVU, Trend2_VVU, PolyFill2_VVU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.6
*/
GX_EXPORT void Trend2_VVU(void* p_geo, const int32_t* vv_x, const int32_t* vv_d, const int32_t* order, const int32_t* vv_c);

/**
* Fill with uniformly distributed values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  seed TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  length TODO
**
* @par Note 
*      VV is set to input length (except for -1)
*      See rand.gxh for a short discription of the
*      random number generator used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void UniformDist_VVU(void* p_geo, const int32_t* vv, const int32_t* seed, const double* min, const double* max, const int32_t* length);

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
