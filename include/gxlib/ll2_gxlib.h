//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ll2_gxlib.h
* @date 2017-11-06
* @brief File containing LL2 GX C API constant and function declarations
*/

/**
* @defgroup LL2_Module LL2
* local datum lookup creator
* ll2 methods are used to create LL2 objects.  LL2 objects contain
* latitude, longitude correction lookup tables to convert between datums.
* @{
*/

#pragma once
#ifndef HLL2_H_DEFINED
#define HLL2_H_DEFINED

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
* Create an empty LL2 table to be filled
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lon0 TODO
* @param[in]  lat0 TODO
* @param[in]  lon TODO
* @param[in]  lat TODO
* @param[in]  nlon TODO
* @param[in]  nlat TODO
* @param[in]  in_ipj TODO
* @param[in]  out_ipj TODO
* @return LL2 Object
*
* @par See also 
*      Destroy_LL2, SetRow_LL2, Save_LL2
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_LL2(void* p_geo, const double* lon0, const double* lat0, const double* lon, const double* lat, const int32_t* nlon, const int32_t* nlat, const int32_t* in_ipj, const int32_t* out_ipj);

/**
* Destroy
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ll2_ll TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_LL2(void* p_geo, const int32_t* ll2_ll);

/**
* Save an LL2 to a named resource
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ll2_ll TODO
* @param[in]  name TODO
**
* @par Note 
*      The named resource is the name of the datum transform define
*      inside square brackets in the datum transform name in the
*      datumtrf table.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Save_LL2(void* p_geo, const int32_t* ll2_ll, const char* name);

/**
* Define a row of the LL2
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ll2_ll TODO
* @param[in]  row TODO
* @param[in]  lon_vv TODO
* @param[in]  lat_vv TODO
**
* @par Note 
*      The correction data is in degrees, added to the input
*      datum to product output datum results.
*      
*      The VV lengths must be equal to #longitudes defined
*      by Create_LL2.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetRow_LL2(void* p_geo, const int32_t* ll2_ll, const int32_t* row, const int32_t* lon_vv, const int32_t* lat_vv);

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
