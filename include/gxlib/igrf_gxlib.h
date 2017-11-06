//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file igrf_gxlib.h
* @date 2017-11-06
* @brief File containing IGRF GX C API constant and function declarations
*/

/**
* @defgroup IGRF_Module IGRF
* International Geomagnetic Reference Field
* Methods to work with IGRF objects. The IGRF object
* contains data for the IGRF model of the geomagnetic
* reference field.
* @{
*/

#pragma once
#ifndef HIGRF_H_DEFINED
#define HIGRF_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code



/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Calculate IGRF data for a given IGRF model.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  igrf TODO
* @param[in]  el TODO
* @param[in]  lon TODO
* @param[in]  lat TODO
* @param[out] str_val TODO
* @param[out] inc TODO
* @param[out] dec TODO
**
* @par Note 
*      Calculate IGRF data (total field, inclination, and declination)
*      for a given IGRF model. The model used will be the same as that
*      obtained with Create_IGRF.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Calc_IGRF(void* p_geo, const int32_t* igrf, const double* el, const double* lon, const double* lat, double* str_val, double* inc, double* dec);

/**
* Calculate IGRF data VV's for a given IGRF model.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  igrf TODO
* @param[in]  gv_vel TODO
* @param[in]  gv_vlon TODO
* @param[in]  gv_vlat TODO
* @param[in]  gv_vfs TODO
* @param[in]  gv_vinc TODO
* @param[in]  gv_vdec TODO
**
* @par Note 
*      Calculate IGRF data (total field, inclination, and declination)
*      for a given IGRF model. The model used will be the same as that
*      obtained with Create_IGRF.
*      All of the VV's should be the same length. The function
*      will abort if they are not.
*      
*      No assumption is made on what data types are contained by
*      any of the VV's. However, all total field, inclination, and
*      declination values are internally calculated as real data.
*      These values will be converted to the types contained in the
*      output VV's.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void CalcVV_IGRF(void* p_geo, const int32_t* igrf, const int32_t* gv_vel, const int32_t* gv_vlon, const int32_t* gv_vlat, const int32_t* gv_vfs, const int32_t* gv_vinc, const int32_t* gv_vdec);

/**
* Create an IGRF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  date TODO
* @param[in]  year TODO
* @param[in]  filename TODO
* @return IGRF Object
**
* @par Note 
*      If the year of the IGRF model is dummy, then
*      the IGRF year nearest to the line's date will
*      be used. Otherwise, the specified year is used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_IGRF(void* p_geo, const double* date, const int32_t* year, const char* filename);

/**
* Determine the range of years covered by an IGRF or DGRF file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file_name TODO
* @param[out] min TODO
* @param[out] max TODO
**
* @par Note 
*      This is useful when using a DGRF file, because the system is set
*      up only to calculate for years within the date range, and will
*      return an error otherwise.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.1
*/
GX_EXPORT void DateRange_IGRF(void* p_geo, const char* file_name, double* min, double* max);

/**
* Destroy an IGRF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  igrf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_IGRF(void* p_geo, const int32_t* igrf);

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
