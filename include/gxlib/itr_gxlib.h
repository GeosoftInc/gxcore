//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file itr_gxlib.h
* @date 2017-11-06
* @brief File containing ITR GX C API constant and function declarations
*/

/**
* @defgroup ITR_Module ITR
* The ITR class provides access to ITR files. An ITR file maps
* ranges of values to specific colors. The ITR object is typically
* used in conjunction with MVIEW objects (see MVIEW and MVU).
*
* Notes:
*
* Histogram ranges and color zone ranges
* 
* Histogram bins are defined with inclusive minima and exclusive maxima;
* for instance if Min = 0 and Inc = 1, then the second bin would include
* all values z such that  0 <= z < 1 (the first bin has all values < 0).
* 
* Color zones used in displaying grids (ITR, ZON etc...) are the
* opposite, with exclusive minima and inclusive maxima.
* For instance, if a zone is defined from 0 to 1, then it would
* contain all values of z such that 0 < z <= 1.
* 
* These definitions mean that it is impossible to perfectly assign
* ITR colors to individual bars of a histogram. The best work-around
* when the data values are integers is to define the color zones using
* 0.5 values between the integers. A general work-around is to make the
* number of histogram bins much larger than the number of color zones.
* 
* The ITR_NULL is used to hold a NULL handle to an ITR class.
*
* @{
*/

#pragma once
#ifndef HITR_H_DEFINED
#define HITR_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name ITR_COLOR_MODEL Definitions
* 
* ITR Color Model defines
*/
///@{
/** 
* ITR_COLOR_MODEL_HSV
*/
#define ITR_COLOR_MODEL_HSV 1
/** 
* ITR_COLOR_MODEL_RGB
*/
#define ITR_COLOR_MODEL_RGB 2
/** 
* ITR_COLOR_MODEL_CMY
*/
#define ITR_COLOR_MODEL_CMY 3
///@}

/**
* ITR_NULL
*
* Null ITR object
*/
#define ITR_NULL 0

/**
* @name ITR_POWER Definitions
* 
* Power Zoning defines
*/
///@{
/** 
* ITR_POWER_10
* 
* Power of 10
*/
#define ITR_POWER_10 0
/** 
* ITR_POWER_EXP
* 
* Exponential
*/
#define ITR_POWER_EXP 1
///@}

/**
* @name ITR_ZONE Definitions
* 
* Zoning Methods
*/
///@{
/** 
* ITR_ZONE_DEFAULT
*/
#define ITR_ZONE_DEFAULT 0
/** 
* ITR_ZONE_LINEAR
*/
#define ITR_ZONE_LINEAR 1
/** 
* ITR_ZONE_NORMAL
*/
#define ITR_ZONE_NORMAL 2
/** 
* ITR_ZONE_EQUALAREA
*/
#define ITR_ZONE_EQUALAREA 3
/** 
* ITR_ZONE_SHADE
*/
#define ITR_ZONE_SHADE 4
/** 
* ITR_ZONE_LOGLINEAR
*/
#define ITR_ZONE_LOGLINEAR 5
///@}

/**
* @name ITR_ZONE_MODEL Definitions
* 
* ITR Zone Model defines
*/
///@{
/** 
* ITR_ZONE_MODEL_NOZONE
* 
* The ITR has no numeric zones defined (e.g. from a TBL file)
*/
#define ITR_ZONE_MODEL_NOZONE -1
/** 
* ITR_ZONE_MODEL_NONE
* 
* There is no specific zone model defined.
*/
#define ITR_ZONE_MODEL_NONE 0
/** 
* ITR_ZONE_MODEL_LINEAR
* 
* The ITR is set up with a linear transform.
*/
#define ITR_ZONE_MODEL_LINEAR 1
/** 
* ITR_ZONE_MODEL_NORMAL
* 
* The ITR is set up with a normal distribution transform.
*/
#define ITR_ZONE_MODEL_NORMAL 2
/** 
* ITR_ZONE_MODEL_EQUAL
* 
* The ITR is set up with an equal area transform.
*/
#define ITR_ZONE_MODEL_EQUAL 3
/** 
* ITR_MODEL_LOGLIN
* 
* The ITR is set up with a log-linear transform.
*/
#define ITR_MODEL_LOGLIN 4
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Change the brightness.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  brt TODO
**
* @par Note 
*      0.0 brightness does nothing.
*      -1.0 to 0.0 makes colors darker, -1.0 is black
*      0.0 to 1.0 makes colors lighter, 1.0 is white
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ChangeBrightness_ITR(void* p_geo, const int32_t* itr, const double* brt);

/**
* Get color transform of a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  vv_d TODO
* @param[in]  vv_c TODO
**
* @par Note 
*      If the input value is a dummy, then the output color
*      is 0 (no color).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void ColorVV_ITR(void* p_geo, const int32_t* itr, const int32_t* vv_d, const int32_t* vv_c);

/**
* Copies ITRs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  it_rd TODO
* @param[in]  it_rs TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_ITR(void* p_geo, const int32_t* it_rd, const int32_t* it_rs);

/**
* Create an ITR object
*
* @param[in]  p_geo GX Context Pointer
* @return ITR object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_ITR(void* p_geo);

/**
* Create an ITR object from an itr, tbl, zon, lut file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return ITR object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateFile_ITR(void* p_geo, const char* file);

/**
* Create an ITR for an image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  tbl TODO
* @param[in]  zone TODO
* @param[in]  contour TODO
* @return ITR object
**
* @par Note 
*      The ITR_ZONE_DEFAULT model will ask the IMG to provide
*      a model if it can.
*      
*      If a shaded relief model is selected, a shaded image
*      will be created and a shaded image file will be created with
*      the same name as the original grid but with the suffux "_s"
*      added to the name part of the grid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT int32_t CreateIMG_ITR(void* p_geo, const int32_t* img, const char* tbl, const int32_t* zone, const double* contour);

/**
* Create ITR from Map with AGG Group name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @return ITR object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateMap_ITR(void* p_geo, const int32_t* map, const char* name);

/**
* Create an ITR object from a BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return ITR object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateS_ITR(void* p_geo, const int32_t* bf);

/**
* Destroy the ITR handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_ITR(void* p_geo, const int32_t* itr);

/**
* Calculate an equal area transform.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  st TODO
* @param[in]  contour TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void EqualArea_ITR(void* p_geo, const int32_t* itr, const int32_t* st, const double* contour);

/**
* Get ITR max/min data limits.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[out] min TODO
* @param[out] max TODO
**
* @par Note 
*      In some ITRs, especially those defined and
*      embedded inside grid (IMG) objects, the
*      actual data minimum and maximum values are
*      stored. This function retrieves those values.
*      This is NOT true of all ITR objects, and in
*      those cases dummy values will be returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetDataLimits_ITR(void* p_geo, const int32_t* itr, double* min, double* max);

/**
* Get the ITR's REG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @return REG object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetREG_ITR(void* p_geo, const int32_t* itr);

/**
* Get the color in a zone of the ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  zone TODO
* @param[out] color TODO
**
* @par Note 
*      Valid indices are 0 to N-1, where N is the size of the ITR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetZoneColor_ITR(void* p_geo, const int32_t* itr, const int32_t* zone, int32_t* color);

/**
* Transform single data value to color
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  val TODO
* @return MVIEW_COLOR
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT int32_t iColorValue_ITR(void* p_geo, const int32_t* itr, const double* val);

/**
* Get the number of zones in an ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @return The number of zones.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetSize_ITR(void* p_geo, const int32_t* itr);

/**
* Get the ITR zone model (e.g. Linear, LogLin, Equal Area).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @return ITR_ZONE_MODEL
**
* @par Note 
*      This function may be used to determine if a color
*      transform is included in an ITR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t iGetZoneModelType_ITR(void* p_geo, const int32_t* itr);

/**
* Calculate a linear transform.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  contour TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Linear_ITR(void* p_geo, const int32_t* itr, const double* min, const double* max, const double* contour);

/**
* Load to an ASCII file, ZON, TBL or ER-Mapper LUT
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void LoadA_ITR(void* p_geo, const int32_t* itr, const char* file);

/**
* Calculate a log transform.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  contour TODO
**
* @par Note 
*      The function name is a misnomer. This is a pure log transform.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LogLinear_ITR(void* p_geo, const int32_t* itr, const double* min, const double* max, const double* contour);

/**
* Calculate a normal distribution transform.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  std_dev TODO
* @param[in]  mean TODO
* @param[in]  exp TODO
* @param[in]  contour TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void Normal_ITR(void* p_geo, const int32_t* itr, const double* std_dev, const double* mean, const double* exp, const double* contour);

/**
* Modified ITR zone values to 10 (or e) raized to the power of the values
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  pow TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PowerZone_ITR(void* p_geo, const int32_t* itr, const int32_t* pow);

/**
* Get the brightness setting of the ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @return The brightness setting of the ITR
**
* @par Note 
*      Brightness can range from -1.0 (black) to 1.0 (white).
*      This brightness control is relative to the normal color
*      when the ITR is created.
*
* @par See also 
*      ChangeBrightness_ITR, rGetBrightness_AGG, ChangeBrightness_AGG
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetBrightness_ITR(void* p_geo, const int32_t* itr);

/**
* Get the value in a zone of the ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  zone TODO
* @return The value of the specified zone.
**
* @par Note 
*      Valid indices are 0 to N-2, where N is the size of the ITR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetZoneValue_ITR(void* p_geo, const int32_t* itr, const int32_t* zone);

/**
* Save to an ASCII file, ZON, TBL or ER-Mapper LUT
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SaveA_ITR(void* p_geo, const int32_t* itr, const char* file);

/**
* Save to any type (based on the extension of the input file name).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void SaveFile_ITR(void* p_geo, const int32_t* itr, const char* file);

/**
* Serialize an ITR to a BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Serial_ITR(void* p_geo, const int32_t* itr, const int32_t* bf);

/**
* Set ITR to an AGG in map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @param[in]  itr TODO
**
* @par Note 
*      See the CreateMap_ITR function
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetAggMap_ITR(void* p_geo, const int32_t* map, const char* name, const int32_t* itr);

/**
* Set the brightness of the ITR colors
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  brt TODO
* @param[in]  con TODO
**
* @par Note 
*      Brightness settings:
*      0.0   - black
*      0.5   - normal (no change)
*      1.0   - white
*      
*      Contrast
*      0.0   - flat
*      1.0   - full contrast (normal)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetBrightContrast_ITR(void* p_geo, const int32_t* itr, const double* brt, const double* con);

/**
* Set the color model of an ITR.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  model TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.2
*/
GX_EXPORT void SetColorModel_ITR(void* p_geo, const int32_t* itr, const int32_t* model);

/**
* Set ITR max/min data limits.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  min TODO
* @param[in]  max TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetDataLimits_ITR(void* p_geo, const int32_t* itr, const double* min, const double* max);

/**
* Set the number of zones in an ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  zones TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetSize_ITR(void* p_geo, const int32_t* itr, const int32_t* zones);

/**
* Set the color in a zone of the ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  zone TODO
* @param[in]  color TODO
**
* @par Note 
*      Valid indices are 0 to N-1, where N is the size of the ITR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetZoneColor_ITR(void* p_geo, const int32_t* itr, const int32_t* zone, const int32_t* color);

/**
* Set the value in a zone of the ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  zone TODO
* @param[in]  value TODO
**
* @par Note 
*      Valid indices are 0 to N-2, where N is the size of the ITR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetZoneValue_ITR(void* p_geo, const int32_t* itr, const int32_t* zone, const double* value);

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
