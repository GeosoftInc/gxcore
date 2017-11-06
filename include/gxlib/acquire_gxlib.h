//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file acquire_gxlib.h
* @date 2017-11-06
* @brief File containing ACQUIRE GX C API constant and function declarations
*/

/**
* @defgroup ACQUIRE_Module ACQUIRE
* This class is used to import acQuire data. It uses the
* public acQuire API.
* @{
*/

#pragma once
#ifndef HACQUIRE_H_DEFINED
#define HACQUIRE_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name ACQUIRE_SEL Definitions
* 
* Type of Selection
*/
///@{
/** 
* ACQUIRE_SEL_HOLES
*/
#define ACQUIRE_SEL_HOLES 0
/** 
* ACQUIRE_SEL_POINT
*/
#define ACQUIRE_SEL_POINT 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create an acQuire object
*
* @param[in]  p_geo GX Context Pointer
* @return acQuire Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT int32_t Create_ACQUIRE(void* p_geo);

/**
* Delete empty channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  acqio TODO
* @param[in]  db TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void DeleteEmptyChan_ACQUIRE(void* p_geo, const int32_t* acqio, const int32_t* db);

/**
* Destroy ACQUIRE
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  acqio TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void Destroy_ACQUIRE(void* p_geo, const int32_t* acqio);

/**
* Import Drillhole data acQuire database into a GDB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  acqio TODO
* @param[in]  proj TODO
* @param[in]  dir TODO
* @param[in]  para TODO
* @param[in]  geo_vv TODO
* @param[in]  delete TODO
* @param[in]  convert TODO
* @return 0 - Ok
* 1 - Error (Will not stop GX)
**
* @par Note 
*      Point data and polygon data are saved into Dnnn lines in GDB,
*      nnn representing incremental number starting from 0
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iImportHole_ACQUIRE(void* p_geo, const int32_t* acqio, const char* proj, const char* dir, const char* para, const int32_t* geo_vv, const int32_t* delete, const int32_t* convert);

/**
* Import Point Sample data acQuire database into a GDB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  acqio TODO
* @param[in]  db TODO
* @param[in]  para TODO
* @param[in]  convert TODO
* @return 0 - Ok
* 1 - Error (Will not stop GX)
**
* @par Note 
*      Data existing in the receiving GDB file will be over-written.
*      Point data and polygon data are saved into Dnnn lines in GDB,
*      nnn representing incremental number starting from 0
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iImportPoint_ACQUIRE(void* p_geo, const int32_t* acqio, const int32_t* db, const char* para, const int32_t* convert);

/**
* Run the acQuire Selection Tool.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  acqio TODO
* @param[in]  selection_file TODO
* @param[in]  mode TODO
* @return 0 - Ok
* 1 - if user cancels
**
* @par Note 
*      The selection file will be loaded (if present) and then
*      the user can make selections then the selections are saved
*      back in the selection file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iSelectionTool_ACQUIRE(void* p_geo, const int32_t* acqio, const char* selection_file, const int32_t* mode);

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
