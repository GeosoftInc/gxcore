//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file bigrid_gxlib.h
* @date 2017-11-06
* @brief File containing BIGRID GX C API constant and function declarations
*/

/**
* @defgroup BIGRID_Module BIGRID
* The Bigrid class is used to grid data using a optimized algorithm that
* assumes data is collected in semi-straight lines.
* @{
*/

#pragma once
#ifndef HBIGRID_H_DEFINED
#define HBIGRID_H_DEFINED

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
* Clears all the parameters in a BIGRID object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bigrid TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void _Clear_BIGRID(void* p_geo, const int32_t* bigrid);

/**
* Create a handle to a Bigrid object
*
* @param[in]  p_geo GX Context Pointer
* @return BIGRID Object
**
* @par Note 
*      The Bigrid object is initially empty. It will store the
*      control file parameters which the Bigrid program needs
*      to execute. Use the LoadParms_BIGRID method to get the
*      control file parameters into the BIGRID object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_BIGRID(void* p_geo);

/**
* Destroy a BIGRID.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bigrid TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_BIGRID(void* p_geo, const int32_t* bigrid);

/**
* Retrieves a Bigrid object's control parameters from a file,
* or sets the parameters to default if the file doesn't exist.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bigrid TODO
* @param[in]  file TODO
* @return 0 - Ok
* 1 - Error
**
* @par Note 
*      If the control file name passed into this function is a file
*      which does not exist, then the defaults for a Bigrid control
*      file will be generated and put into the BIGRID object.
*      Otherwise, the control file's settings are retrieved from
*      the file and loaded into the BIGRID object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLoadParms_BIGRID(void* p_geo, const int32_t* bigrid, const char* file);

/**
* Load a warp projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bigrid TODO
* @param[in]  title TODO
* @param[in]  cell TODO
* @param[in]  warp TODO
* @return 0 - Ok
* 1 - Error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLoadWarp_BIGRID(void* p_geo, const int32_t* bigrid, const char* title, const char* cell, const char* warp);

/**
* Executes the Bigrid program, using the input channel and
* output file parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bigrid TODO
* @param[in]  zchan TODO
* @param[in]  in_dat TODO
* @param[in]  out_dat TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Run_BIGRID(void* p_geo, const int32_t* bigrid, const char* zchan, const int32_t* in_dat, const int32_t* out_dat);

/**
* Executes the Bigrid program, using the input channel and
* output file parameters with a projection handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bigrid TODO
* @param[in]  zchan TODO
* @param[in]  in_dat TODO
* @param[in]  out_dat TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void Run2_BIGRID(void* p_geo, const int32_t* bigrid, const char* zchan, const int32_t* in_dat, const int32_t* out_dat, const int32_t* ipj);

/**
* Puts the Bigrid object's control parameters back into
* its control file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bigrid TODO
* @param[in]  name TODO
**
* @par Note 
*      If the control file did not previously exist, it will be
*      created. Otherwise, the old file will be overwritten.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void SaveParms_BIGRID(void* p_geo, const int32_t* bigrid, const char* name);

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
