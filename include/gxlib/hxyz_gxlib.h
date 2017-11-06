//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file hxyz_gxlib.h
* @date 2017-11-06
* @brief File containing HXYZ GX C API constant and function declarations
*/

/**
* @defgroup HXYZ_Module HXYZ
* High Performance Data Point Storage. This is used
* to put Point data on a DAP server. It is compressed
* and uses a Quad-Tree design to allow very high speed
* data extraction. It is also multi-threaded.
* @{
*/

#pragma once
#ifndef HHXYZ_H_DEFINED
#define HHXYZ_H_DEFINED

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
* Create a handle to an HXYZ object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return HXYZ Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t Create_HXYZ(void* p_geo, const char* name);

/**
* Destroy a HXYZ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hxyz TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void Destroy_HXYZ(void* p_geo, const int32_t* hxyz);

/**
* Get the metadata of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hxyz TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void GetMETA_HXYZ(void* p_geo, const int32_t* hxyz, const int32_t* meta);

/**
* Make an HXYZ from GDB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  gvv TODO
* @param[in]  name TODO
* @return HXYZ object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT int32_t hCreateDB_HXYZ(void* p_geo, const int32_t* db, const int32_t* gvv, const char* name);

/**
* Make an HXYZ from SQL Query
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  template TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  ipj TODO
* @param[in]  name TODO
* @return HXYZ object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t hCreateSQL_HXYZ(void* p_geo, const char* template, const char* x, const char* y, const char* z, const int32_t* ipj, const char* name);

/**
* Set the metadata of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hxyz TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void SetMETA_HXYZ(void* p_geo, const int32_t* hxyz, const int32_t* meta);

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
