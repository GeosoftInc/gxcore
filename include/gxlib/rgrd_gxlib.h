//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file rgrd_gxlib.h
* @date 2017-11-06
* @brief File containing RGRD GX C API constant and function declarations
*/

/**
* @defgroup RGRD_Module RGRD
* The RGRD object is used as a storage place for the control
* parameters which the Rangrid (minimum curvature) program needs to execute. The
* Run_RGRD function executes the Rangrid program using the RGRD object.
* @{
*/

#pragma once
#ifndef HRGRD_H_DEFINED
#define HRGRD_H_DEFINED

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
* Clears all the parameters in a RGRD object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  rgrd TODO
**
* @par Note 
*      DLL name _Clear_RGRD
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void _Clear_RGRD(void* p_geo, const int32_t* rgrd);

/**
* Create a handle to a Rangrid object
*
* @param[in]  p_geo GX Context Pointer
* @return RGRD Object
**
* @par Note 
*      The Rangrid object is initially empty. It will store the
*      control file parameters which the Rangrid program needs
*      to execute. Use the LoadParms_RGRD method to get the
*      control file parameters into the RGRD object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_RGRD(void* p_geo);

/**
* Run Rangrid directly on XYZ VV data, output to an IMG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  ipj TODO
* @param[in]  ctl TODO
* @param[in]  grid TODO
* @return IMG object
**
* @par Note 
*      If the grid file name is defined, the IMG is tied to a new output file.
*      If the grid file name is not defined, the IMG is memory-based; not
*      tied to a file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0.1
*/
GX_EXPORT int32_t CreateIMG_RGRD(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* ipj, const char* ctl, const char* grid);

/**
* Destroy a RGRD.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  rgrd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_RGRD(void* p_geo, const int32_t* rgrd);

/**
* Set the defaults.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  rgrd TODO
* @param[in]  zchan TODO
* @param[in]  in_dat TODO
* @return 0 OK, 1 Error.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iDefault_RGRD(void* p_geo, const int32_t* rgrd, const char* zchan, const int32_t* in_dat);

/**
* Retrieves a Rangrid object's control parameters from a file,
* or sets the parameters to default if the file doesn't exist.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  rgrd TODO
* @param[in]  file TODO
* @return 0 OK, 1 Error.
**
* @par Note 
*      If the control file name passed into this function is a file
*      which does not exist, then the defaults for a Rangrid control
*      file will be generated and put into the RGRD object.
*      Otherwise, the control file's settings are retrieved from
*      the file and loaded into the RGRD object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iLoadParms_RGRD(void* p_geo, const int32_t* rgrd, const char* file);

/**
* Executes the Rangrid program, using the input channel and
* output file parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  rgrd TODO
* @param[in]  in_dat TODO
* @param[in]  out_dat TODO
* @return 0 OK, 1 Error.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iRun_RGRD(void* p_geo, const int32_t* rgrd, const int32_t* in_dat, const int32_t* out_dat);

/**
* Executes the Rangrid program directly on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  ctl TODO
* @param[in]  grd TODO
* @return 0, always.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iRun2_RGRD(void* p_geo, const int32_t* db, const char* x, const char* y, const char* z, const char* ctl, const char* grd);

/**
* Puts the Rangrid object's control parameters back into
* its control file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  rgrd TODO
* @param[in]  name TODO
* @return 0 OK, 1 Error.
**
* @par Note 
*      If the control file did not previously exist, it will be
*      created. Otherwise, the old file will be overwritten.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iSaveParms_RGRD(void* p_geo, const int32_t* rgrd, const char* name);

/**
* Executes the Rangrid program directly on input data VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  ipj TODO
* @param[in]  ctl TODO
* @param[in]  grd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void RunVV_RGRD(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* ipj, const char* ctl, const char* grd);

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
