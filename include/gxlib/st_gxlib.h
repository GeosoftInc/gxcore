//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file st_gxlib.h
* @date 2017-11-06
* @brief File containing ST GX C API constant and function declarations
*/

/**
* @defgroup ST_Module ST
* Mono-variate statistics. The ST class is used to accumulate statistical
* information about a set of data. This class is usually used in conjunction
* with others. For instance, Stat_DU (see DU) will add a channel's
* data to the ST object, and sComputeST_IMG (see IMG) will compute
* statistics for a grid.
*
* Notes:
*
* .. _histogram_ranges:
* 
* *** Histogram ranges and color zone ranges ***
* 
* Histogram bins are defined with inclusive minima and exclusive maxima;
* for instance if Min = 0 and Inc = 1, then the second bin would include
* all values z such that  0 >= z > 1 (the first bin has all values < 0).
* 
* Color zones used in displaying grids (ITR, ZON etc...) are the
* opposite, with exclusive minima and inclusive maxima.
* For instance, if a zone is defined from 0 to 1, then it would
* contain all values of z such that 0 > z >= 1.
* 
* These definitions mean that it is impossible to perfectly assign
* ITR colors to individual bars of a histogram. The best work-around
* when the data values are integers is to define the color zones using
* 0.5 values between the integers. A general work-around is to make the
* number of histogram bins much larger than the number of color zones.
* 
* See also  ST2 (bi-variate statistics)
*
* @{
*/

#pragma once
#ifndef HST_H_DEFINED
#define HST_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name ST_INFO Definitions
* 
* Information to retrieve
*/
///@{
/** 
* ST_ITEMS
* 
* Number of non-dummy items
*/
#define ST_ITEMS 0
/** 
* ST_NPOS
* 
* Number of items greater than zero
*/
#define ST_NPOS 1
/** 
* ST_NZERO
* 
* Number of items equal to zero
*/
#define ST_NZERO 22
/** 
* ST_DUMMIES
*/
#define ST_DUMMIES 2
/** 
* ST_MIN
*/
#define ST_MIN 3
/** 
* ST_MAX
*/
#define ST_MAX 4
/** 
* ST_RANGE
*/
#define ST_RANGE 5
/** 
* ST_MEAN
*/
#define ST_MEAN 6
/** 
* ST_MEDIAN
*/
#define ST_MEDIAN 7
/** 
* ST_MODE
*/
#define ST_MODE 8
/** 
* ST_GEOMEAN
*/
#define ST_GEOMEAN 9
/** 
* ST_VARIANCE
*/
#define ST_VARIANCE 10
/** 
* ST_STDDEV
*/
#define ST_STDDEV 11
/** 
* ST_STDERR
*/
#define ST_STDERR 12
/** 
* ST_SKEW
*/
#define ST_SKEW 13
/** 
* ST_KURTOSIS
*/
#define ST_KURTOSIS 14
/** 
* ST_BASE
*/
#define ST_BASE 15
/** 
* ST_SUM
* 
* Sums and sums of powers
*/
#define ST_SUM 16
/** 
* ST_SUM2
*/
#define ST_SUM2 17
/** 
* ST_SUM3
*/
#define ST_SUM3 18
/** 
* ST_SUM4
*/
#define ST_SUM4 19
/** 
* ST_MINPOS
* 
* Smallest value greater than zero.
*/
#define ST_MINPOS 21
/** 
* ST_HIST_MAXCOUNT
*/
#define ST_HIST_MAXCOUNT 100
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* This method creates a statistics object which is used to
* accumulate statistics.
*
* @param[in]  p_geo GX Context Pointer
* @return ST Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_ST(void* p_geo);

/**
* This method creates a statistics object which stores
* all values.
*
* @param[in]  p_geo GX Context Pointer
* @return ST Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t CreateExact_ST(void* p_geo);

/**
* Add this value to the statistics object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Data_ST(void* p_geo, const int32_t* st, const double* val);

/**
* Add all the values in this VV to the statistics object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DataVV_ST(void* p_geo, const int32_t* st, const int32_t* vv);

/**
* Destroys the statistics object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_ST(void* p_geo, const int32_t* st);

/**
* Retrieve number of items in each hostogram bin
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  vv TODO
**
* @par Note 
*      The length of the returned VV is set to the total
*      number of bins. If a histogram is not defined in
*      the ST, then the returned length is zero.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.1
*/
GX_EXPORT void GetHistogramBins_ST(void* p_geo, const int32_t* st, const int32_t* vv);

/**
* Retrieve number of bins, min and max value in histogram
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[out] div TODO
* @param[out] min TODO
* @param[out] max TODO
**
* @par Note 
*      The items correspond to those in Histogram2_ST.
*      If a histogram is not defined in
*      the ST, then the returned number of bins is zero, and
*      the min and max values will be dummies.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.1
*/
GX_EXPORT void GetHistogramInfo_ST(void* p_geo, const int32_t* st, int32_t* div, double* min, double* max);

/**
* This method prepares ST for recording histogram.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  bins TODO
**
* @par Note 
*      The Number of bins includes the one before the minimum
*      and the one after the maximum, so it must be a value >2.
*      
*      IMPORTANT: This function gets the histogram minimum and
*      maximum from the current min and max values stored in the ST,
*      so this is equivalent to calling Histogram2_ST with
*      
*      #bins, Min, (Max-Min)/(# bins -2))
*      
*      You should already have the data loaded in order to call this
*      function.
*      
*      See histogram_ranges_
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Histogram_ST(void* p_geo, const int32_t* st, const int32_t* bins);

/**
* This method prepares ST for recording histogram.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  bins TODO
* @param[in]  min TODO
* @param[in]  max TODO
**
* @par Note 
*      The Number of bins includes the one before the minimum
*      and the one after the maximum, so it must be a value >2.
*      The width of the individual bins will be (Min-Max)/(# - 2)
*      
*      See histogram_ranges_
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Histogram2_ST(void* p_geo, const int32_t* st, const int32_t* bins, const double* min, const double* max);

/**
* Return corresponding Percentile for a Value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  value TODO
* @return The percentile at the given value (0 - 100)
**
* @par Note 
*      Statistics and histogram must have been calculated prior to
*      calling this method
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT double rEquivalentPercentile_ST(void* p_geo, const int32_t* st, const double* value);

/**
* Return corresponding Value for a Percentile
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  percent TODO
* @return The value at the given percentile.
**
* @par Note 
*      Statistics and histogram must have been calculated prior to
*      calling this method
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.8
*/
GX_EXPORT double rEquivalentValue_ST(void* p_geo, const int32_t* st, const double* percent);

/**
* Resets the Statistics.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Reset_ST(void* p_geo, const int32_t* st);

/**
* This method allows you to retrieve (and compute) the
* information from the ST object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  id TODO
* @return Data you asked for
* GS_R8DM for none
**
* @par Note 
*      The following can only be determined if the ST has recorded
*      a histogram: ST_MEDIAN, ST_MODE
*      
*      ST_MINPOS can be used to retrieve the smallest value greater
*      than zero, but not from ST objects recovered from serialized object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT double rGetInfo_ST(void* p_geo, const int32_t* st, const int32_t* id);

/**
* Return percent value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x TODO
* @return real
* 
* 
* Notes			this function is based on Normal Cumulative distribution function
* mit to about 5 standard deviations
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT double rGetNormProb_ST(void* p_geo, const double* x);

/**
* Return number of sigmas from 50% a given percent is
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  percent TODO
* @return real
* 
* 
* Notes			this function is based on Normal Cumulative distribution function
* mit to about 5 standard deviations
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.1
*/
GX_EXPORT double rGetNormProbX_ST(void* p_geo, const double* percent);

/**
* Test the "normality" of the histogram distribution
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @return The normality statistic.
* Terminates if no histogram in the ST object.
**
* @par Note 
*      This function compares the histogram to a normal curve with the
*      same mean and standard deviation. The individual counts are normalized
*      by the total counts, the bin width and the standard deviation.
*      For each bin, the rms difference between the expected probability and
*      the normalized count is summed, and the final result is normalized by
*      the total number of bins. In this way histograms with different means,
*      standard deviations, number of bins and counts can be compared.
*      If the histogram were perfectly normal, then a value of 0 would be returned.
*      The more "non-normal", the higher the statistic.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT double rNormalTest_ST(void* p_geo, const int32_t* st);

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
