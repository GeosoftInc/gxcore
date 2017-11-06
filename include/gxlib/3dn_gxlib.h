//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file 3dn_gxlib.h
* @date 2017-11-06
* @brief File containing 3DN GX C API constant and function declarations
*/

/**
* @defgroup 3DN_Module 3DN
* This class manages the rendering of a 3D view. It allows
* the positioning of the camera, specification of the zoom
* as well as some rendering controls for the axis. It is
* directly related to the MVIEW class.
* @{
*/

#pragma once
#ifndef H3DN_H_DEFINED
#define H3DN_H_DEFINED

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
* Copy one 3DN object to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest TODO
* @param[in]  source TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void Copy_3DN(void* p_geo, const int32_t* dest, const int32_t* source);

/**
* Creates a 3DN.
*
* @param[in]  p_geo GX Context Pointer
* @return 3DN Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t Create_3DN(void* p_geo);

/**
* Destroys a 3DN object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void Destroy_3DN(void* p_geo, const int32_t* o3dn);

/**
* Get location of the point we are looking from
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[out] distance TODO
* @param[out] declination TODO
* @param[out] inclination TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void GetPointOfView_3DN(void* p_geo, const int32_t* o3dn, double* distance, double* declination, double* inclination);

/**
* Get the axis relative scales.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void GetScale_3DN(void* p_geo, const int32_t* o3dn, double* x, double* y, double* z);

/**
* Get the Axis draw color
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @return Axis Color
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iGetAxisColor_3DN(void* p_geo, const int32_t* o3dn);

/**
* Get the Axis font
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[out] font TODO
* @param[in]  font_size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void IGetAxisFont_3DN(void* p_geo, const int32_t* o3dn, char* font, const int32_t* font_size);

/**
* Get the window background color
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @return Background Color value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iGetBackgroundColor_3DN(void* p_geo, const int32_t* o3dn);

/**
* Get the rendering controls
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[out] box TODO
* @param[out] axis TODO
* @param[out] label_x TODO
* @param[in]  label_size_x TODO
* @param[out] label_y TODO
* @param[in]  label_size_y TODO
* @param[out] label_z TODO
* @param[in]  label_size_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void IGetRenderControls_3DN(void* p_geo, const int32_t* o3dn, int32_t* box, int32_t* axis, char* label_x, const int32_t* label_size_x, char* label_y, const int32_t* label_size_y, char* label_z, const int32_t* label_size_z);

/**
* Set the shading control on or off
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @return Shading On/Off
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iGetShading_3DN(void* p_geo, const int32_t* o3dn);

/**
* Set the Axis draw color
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[in]  color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetAxisColor_3DN(void* p_geo, const int32_t* o3dn, const int32_t* color);

/**
* Set the Axis font
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[in]  font TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetAxisFont_3DN(void* p_geo, const int32_t* o3dn, const char* font);

/**
* Set the window background color
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[in]  color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetBackgroundColor_3DN(void* p_geo, const int32_t* o3dn, const int32_t* color);

/**
* Set location of the point we are looking from
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[in]  distance TODO
* @param[in]  declination TODO
* @param[in]  inclination TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetPointOfView_3DN(void* p_geo, const int32_t* o3dn, const double* distance, const double* declination, const double* inclination);

/**
* Set the rendering controls
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[in]  box TODO
* @param[in]  axis TODO
* @param[in]  label_x TODO
* @param[in]  label_y TODO
* @param[in]  label_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetRenderControls_3DN(void* p_geo, const int32_t* o3dn, const int32_t* box, const int32_t* axis, const char* label_x, const char* label_y, const char* label_z);

/**
* Set the axis relative scales.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
**
* @par Note 
*      By default all scales are equal (1.0). By setting
*      these scales, relative adjustments to the overall
*      view of the 3D objects can be made. Note that they
*      are relative to each other. Thus, setting the scaling
*      to 5,5,5 is the same as 1,1,1. This is typically used
*      to exaggerate one scale such as Z (1,1,5).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT void SetScale_3DN(void* p_geo, const int32_t* o3dn, const double* x, const double* y, const double* z);

/**
* Set the shading control on or off
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  o3dn TODO
* @param[in]  shading TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetShading_3DN(void* p_geo, const int32_t* o3dn, const int32_t* shading);

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
