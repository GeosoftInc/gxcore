//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file st2_gxlib.h
* @date 2017-11-06
* @brief File containing ST2 GX C API constant and function declarations
*/

/**
* @defgroup ST2_Module ST2
* Bi-variate statistics. The ST2 class accumulates statistics
* on two data vectors simultaneously in order to compute correlation
* information. Statistics are accumulated using the DataVV_ST2 function.
* See also ST (mono-variate statistics).
* @{
*/

#pragma once
#ifndef HST2_H_DEFINED
#define HST2_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name ST2_CORRELATION Definitions
* 
* Correlation style
*/
///@{
/** 
* ST2_CORR
* 
* Simple correlation
*/
#define ST2_CORR 0
/** 
* ST2_PCORR
* 
* Pearson's correlation (normalized to standard deviations)
*/
#define ST2_PCORR 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Creates a statistics object which is used to accumulate statistics.
*
* @param[in]  p_geo GX Context Pointer
* @return ST2 Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_ST2(void* p_geo);

/**
* Add all the values in VVx and VVy to ST2 object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st2 TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DataVV_ST2(void* p_geo, const int32_t* st2, const int32_t* vv_x, const int32_t* vv_y);

/**
* Destroys the statistics object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_ST2(void* p_geo, const int32_t* st2);

/**
* Gets Number of items
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st2 TODO
* @return Number of items in ST2
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iItems_ST2(void* p_geo, const int32_t* st2);

/**
* Resets the Statistics.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Reset_ST2(void* p_geo, const int32_t* st2);

/**
* Gets correlation coeff. from the ST2 object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st2 TODO
* @param[in]  id TODO
* @return Data you asked for
* GS_R8DM for none
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT double rGet_ST2(void* p_geo, const int32_t* st2, const int32_t* id);

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
