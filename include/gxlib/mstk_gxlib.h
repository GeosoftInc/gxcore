//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file mstk_gxlib.h
* @date 2017-11-06
* @brief File containing MSTK GX C API constant and function declarations
*/

/**
* @defgroup MSTK_Module MSTK
* Multi-profile stack
* This class is used for storing data of multiple profiles and
* plotting profiles in a map. It is a container of STK class objects.
* 
* See also:         STK class.
* @{
*/

#pragma once
#ifndef HMSTK_H_DEFINED
#define HMSTK_H_DEFINED

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
* Create and add a STK object to MSTK
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @return STK, fail if error
**
* @par Note 
*      Index to the added STK object is the last one in MSTK container.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t AddSTK_MSTK(void* p_geo, const int32_t* mstk);

/**
* Save channel names in VVs based on channel types
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  db TODO
* @param[in]  num_ch_vv TODO
* @param[in]  str_ch_vv TODO
* @param[in]  x_ch_vv TODO
* @param[in]  prof_ch_vv TODO
* @param[in]  prof_ch__un_used_vv TODO
**
* @par Note 
*      Terms 'used' and 'unused' indicate that the a channel name
*      in database also 'in' and 'not in' the MSTK object respectively
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ChanListVV_MSTK(void* p_geo, const int32_t* mstk, const int32_t* db, const int32_t* num_ch_vv, const int32_t* str_ch_vv, const int32_t* x_ch_vv, const int32_t* prof_ch_vv, const int32_t* prof_ch__un_used_vv);

/**
* Create MSTK.
*
* @param[in]  p_geo GX Context Pointer
* @return MSTK, aborts if creation fails
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_MSTK(void* p_geo);

/**
* Destroy a MSTK handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_MSTK(void* p_geo, const int32_t* mstk);

/**
* Draw multiple profiles in map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void DrawProfile_MSTK(void* p_geo, const int32_t* mstk, const int32_t* db, const int32_t* line, const int32_t* map);

/**
* Set the Y-axis direction - normal or inverted
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  direction TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.3
*/
GX_EXPORT void SetYAxisDirection_MSTK(void* p_geo, const int32_t* mstk, const int32_t* direction);

/**
* Find index of STK from a string of group names and X/Y channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  str_val TODO
* @param[out] index TODO
* @param[in]  vv_rtd TODO
**
* @par Note 
*      Format of the input string:
*      
*      Map group name + " ( " + X channel name + " , " + Y channel name + " )"
*      
*      for example, string "DATA ( DIST , MAG )"  indicates a map group name of DATA,
*      X channel name of DIST and Y channel name of MAG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void FindSTK2_MSTK(void* p_geo, const int32_t* mstk, const char* str_val, int32_t* index, const int32_t* vv_rtd);

/**
* Get a specific STK object from a MSTK object
* (Index of 0 gets the first STK in the MSTK)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  num TODO
* @return x     - STK Object handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetSTK_MSTK(void* p_geo, const int32_t* mstk, const int32_t* num);

/**
* Delete a STK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  num TODO
**
* @par Note 
*      0 is the first one
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IDelete_MSTK(void* p_geo, const int32_t* mstk, const int32_t* num);

/**
* Find index of STK from a string of group names and X/Y channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  str_val TODO
* @param[out] index TODO
* @param[out] group TODO
* @param[in]  group_sz TODO
* @param[out] x_ch TODO
* @param[in]  x_ch_sz TODO
* @param[out] y_ch TODO
* @param[in]  y_ch_sz TODO
**
* @par Note 
*      Format of the input string:
*      
*      Map group name + " ( " + X channel name + " , " + Y channel name + " )"
*      
*      for example, string "DATA ( DIST , MAG )"  indicates a map group name of DATA,
*      X channel name of DIST and Y channel name of MAG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IFindSTK_MSTK(void* p_geo, const int32_t* mstk, const char* str_val, int32_t* index, char* group, const int32_t* group_sz, char* x_ch, const int32_t* x_ch_sz, char* y_ch, const int32_t* y_ch_sz);

/**
* Get the number of STK objects in a MSTK object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @return The number of STK objects in a MSTK object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetNumSTK_MSTK(void* p_geo, const int32_t* mstk);

/**
* Read multiple profiles parameters from an INI file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  ra TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ReadINI_MSTK(void* p_geo, const int32_t* mstk, const int32_t* ra);

/**
* Save multiple profile INI parameters in a WA file of INI format
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mstk TODO
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SaveProfile_MSTK(void* p_geo, const int32_t* mstk, const int32_t* wa);

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
