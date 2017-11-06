//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file surface_gxlib.h
* @date 2017-11-06
* @brief File containing SURFACE GX C API constant and function declarations
*/

/**
* @defgroup SURFACE_Module SURFACE
* The SURFACE class allows you to create, read and alter Geosurface files (*.geosoft_surface).
* A Geosurface file can contain one or more surface items (see SURFACEITEM class). In turn each item can
* contains one or more triangular polyhedral meshes.
* @{
*/

#pragma once
#ifndef HSURFACE_H_DEFINED
#define HSURFACE_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name SURFACE_OPEN Definitions
* 
* Open Modes
*/
///@{
/** 
* SURFACE_OPEN_READ
*/
#define SURFACE_OPEN_READ 0
/** 
* SURFACE_OPEN_READWRITE
*/
#define SURFACE_OPEN_READWRITE 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a new Geosurface file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface_file TODO
* @param[in]  ipj TODO
* @return SURFACE Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t Create_SURFACE(void* p_geo, const char* surface_file, const int32_t* ipj);

/**
* Open a Geosurface file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface_file TODO
* @param[in]  mode TODO
* @return SURFACE Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t Open_SURFACE(void* p_geo, const char* surface_file, const int32_t* mode);

/**
* Destroy the SURFACE Object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void Destroy_SURFACE(void* p_geo, const int32_t* surface);

/**
* Get the coordinate system of the SURFACE.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetIPJ_SURFACE(void* p_geo, const int32_t* surface, const int32_t* ipj);

/**
* Change the coordinate system of the SURFACE.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void SetIPJ_SURFACE(void* p_geo, const int32_t* surface, const int32_t* ipj);

/**
* Get the surfaces items in a Geosurface file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetSurfaceItems_SURFACE(void* p_geo, const int32_t* surface, const int32_t* lst);

/**
* Get the an existing surface item from the SURFACE
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface TODO
* @param[in]  guid TODO
* @return SURFACEITEM Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t GetSurfaceItem_SURFACE(void* p_geo, const int32_t* surface, const char* guid);

/**
* Add a new surface item to the SURFACE
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface TODO
* @param[in]  surfaceitem TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void AddSurfaceItem_SURFACE(void* p_geo, const int32_t* surface, const int32_t* surfaceitem);

/**
* Get the surface item names in a Geosurface file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface_file TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void GetSurfaceNames_SURFACE(void* p_geo, const char* surface_file, const int32_t* lst);

/**
* Get the names of closed surface items in a Geosurface file (may return an empty list)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface_file TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void GetClosedSurfaceNames_SURFACE(void* p_geo, const char* surface_file, const int32_t* lst);

/**
* Get the spatial range of all surface items.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void GetExtents_SURFACE(void* p_geo, const int32_t* surface, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z);

/**
* Compute an XML CRC of a Geosurface file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surface_file TODO
* @param[in]  output TODO
* @param[out] crc TODO
* @return CRC Value (always 0)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t CRC_SURFACE(void* p_geo, const char* surface_file, const char* output, int32_t* crc);

/**
* Syncronize the Metadata for this Geosurface
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void Sync_SURFACE(void* p_geo, const char* name);

/**
* Create Geosurface file from DXF file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  surface_file TODO
* @param[in]  dxf_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void CreateFromDXF_SURFACE(void* p_geo, const int32_t* ipj, const char* surface_file, const char* dxf_file);

/**
* Create Geosurface file from a Maptek Vulcan triangulation file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  triangulation_file TODO
* @param[in]  ipj TODO
* @param[in]  surface_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void CreateFromVulcanTriangulation_SURFACE(void* p_geo, const char* triangulation_file, const int32_t* ipj, const char* surface_file);

/**
* Create new surface from a Maptek Vulcan triangulation file and add to an existing geosurface.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  triangulation_file TODO
* @param[in]  ipj TODO
* @param[in]  surface_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void AppendVulcanTriangulation_SURFACE(void* p_geo, const char* triangulation_file, const int32_t* ipj, const char* surface_file);

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
