//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file kgrd_gxlib.h
* @date 2017-11-06
* @brief File containing KGRD GX C API constant and function declarations
*/

/**
* @defgroup KGRD_Module KGRD
* The KGRD object is used as a storage place for the control
* parameters that the Krigrid program needs to execute. The
* Run_KGRD function executes the Krigrid program using the
* KGRD object.
* @{
*/

#pragma once
#ifndef HKGRD_H_DEFINED
#define HKGRD_H_DEFINED

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
* Clears all the parameters in a KGRD object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  kgrd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void _Clear_KGRD(void* p_geo, const int32_t* kgrd);

/**
* Create a handle to a Krigrid object
*
* @param[in]  p_geo GX Context Pointer
* @return KGRD Object
**
* @par Note 
*      The Krigrid object is initially empty. It will store the
*      control file parameters which the Krigrid program needs
*      to execute. Use the LoadParms_KGRD method to get the
*      control file parameters into the KGRD object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_KGRD(void* p_geo);

/**
* Destroy a KGRD.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  kgrd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_KGRD(void* p_geo, const int32_t* kgrd);

/**
* Retrieves a Krigrid object's control parameters from a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  kgrd TODO
* @param[in]  file TODO
* @return 0 OK, 1 Error.
**
* @par Note 
*      If the control file name passed into this function is a file
*      which does not exist, then the defaults for a Krigrid control
*      file will be generated and put into the KGRD object.
*      Otherwise, the control file's settings are retrieved from
*      the file and loaded into the KGRD object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iLoadParms_KGRD(void* p_geo, const int32_t* kgrd, const char* file);

/**
* Executes the Krigrid program, using the input channel and
* output file parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  kgrd TODO
* @param[in]  zchan TODO
* @param[in]  in_dat TODO
* @param[in]  out_grd_dat TODO
* @param[in]  out_err_dat TODO
* @param[in]  in_var_name TODO
* @param[in]  out_var_name TODO
* @param[in]  vao TODO
* @param[in]  vi TODO
* @param[in]  vo TODO
* @return 0 OK, 1 Error.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iRun_KGRD(void* p_geo, const int32_t* kgrd, const char* zchan, const int32_t* in_dat, const int32_t* out_grd_dat, const int32_t* out_err_dat, const char* in_var_name, const char* out_var_name, const int32_t* vao, const int32_t* vi, const int32_t* vo);

/**
* Executes the Krigrid program directly on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  ctl TODO
* @param[in]  grd TODO
* @param[in]  err_grd TODO
* @param[in]  in_var TODO
* @param[in]  out_var TODO
* @param[in]  vao TODO
* @return 0 OK, 1 Error.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iRun2_KGRD(void* p_geo, const int32_t* db, const char* x, const char* y, const char* z, const char* ctl, const char* grd, const char* err_grd, const char* in_var, const char* out_var, const int32_t* vao);

/**
* Executes the Krigrid program directly on a database and specifies the log file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  ctl TODO
* @param[in]  grd TODO
* @param[in]  err_grd TODO
* @param[in]  in_var TODO
* @param[in]  out_var TODO
* @param[in]  log_file TODO
* @param[in]  vao TODO
* @return 0 OK, 1 Error.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT int32_t iRun3_KGRD(void* p_geo, const int32_t* db, const char* x, const char* y, const char* z, const char* ctl, const char* grd, const char* err_grd, const char* in_var, const char* out_var, const char* log_file, const int32_t* vao);

/**
* Puts the Krigrid object's control parameters back into
* its control file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  kgrd TODO
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
GX_EXPORT int32_t iSaveParms_KGRD(void* p_geo, const int32_t* kgrd, const char* name);

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
