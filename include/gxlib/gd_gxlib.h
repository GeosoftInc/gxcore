//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file gd_gxlib.h
* @date 2017-11-06
* @brief File containing GD GX C API constant and function declarations
*/

/**
* @defgroup GD_Module GD
* This class provides access to Geosoft grid files using an old interface.
* Only the SampleGD_DU function uses this class.  Use the IMG class
* instead.
* @{
*/

#pragma once
#ifndef HGD_H_DEFINED
#define HGD_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name GD_STATUS Definitions
* 
* Grid open mode
*/
///@{
/** 
* GD_STATUS_READONLY
*/
#define GD_STATUS_READONLY 0
/** 
* GD_STATUS_NEW
*/
#define GD_STATUS_NEW 1
/** 
* GD_STATUS_OLD
*/
#define GD_STATUS_OLD 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* This method creates a GD object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
* @return Handle to the GD object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_GD(void* p_geo, const char* name, const int32_t* type);

/**
* This method destroys a GD object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_GD(void* p_geo, const int32_t* gd);

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
