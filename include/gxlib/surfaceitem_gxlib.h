//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file surfaceitem_gxlib.h
* @date 2017-11-06
* @brief File containing SURFACEITEM GX C API constant and function declarations
*/

/**
* @defgroup SURFACEITEM_Module SURFACEITEM
* The SURFACEITEM allows you to create, read and alter Geosurface files (*.geosoft_surface).
* A Geosurface file can contain one or more surface items (see SURFACE class). A surface item can
* contains one or more triangular polyhedral meshes.
* @{
*/

#pragma once
#ifndef HSURFACEITEM_H_DEFINED
#define HSURFACEITEM_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name SURFACERENDER_MODE Definitions
* 
* Open Modes
*/
///@{
/** 
* SURFACERENDER_SMOOTH
*/
#define SURFACERENDER_SMOOTH 0
/** 
* SURFACERENDER_FILL
*/
#define SURFACERENDER_FILL 1
/** 
* SURFACERENDER_EDGES
*/
#define SURFACERENDER_EDGES 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a SURFACEITEM
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  name TODO
* @return SURFACEITEM Object
*
* @par See also 
*      SetProperties_SURFACEITEM and SetDefaultRenderProperties_SURFACEITEM
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t Create_SURFACEITEM(void* p_geo, const char* type, const char* name);

/**
* Destroy the SURFACEITEM Object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void Destroy_SURFACEITEM(void* p_geo, const int32_t* surfaceitem);

/**
* Gets the GUID of the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[out] guid TODO
* @param[in]  guid_size TODO
**
* @par Note 
*      The value returned by this call will not be valid for newly created items until after a call to AddSurfaceItem_SURFACE.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetGUID_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, char* guid, const int32_t* guid_size);

/**
* Sets the properties of the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[in]  type TODO
* @param[in]  name TODO
* @param[in]  source_guid TODO
* @param[in]  source_name TODO
* @param[in]  source_measure TODO
* @param[in]  secondary_source_guid TODO
* @param[in]  secondary_source_name TODO
* @param[in]  secondary_source_measure TODO
*
* @par See also 
*      GenerateGUID_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void SetProperties_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, const char* type, const char* name, const char* source_guid, const char* source_name, const double* source_measure, const char* secondary_source_guid, const char* secondary_source_name, const double* secondary_source_measure);

/**
* Sets the properties of the surface item (includes new properties introduced in 8.5).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[in]  type TODO
* @param[in]  name TODO
* @param[in]  source_guid TODO
* @param[in]  source_name TODO
* @param[in]  source_measure TODO
* @param[in]  secondary_source_guid TODO
* @param[in]  secondary_source_name TODO
* @param[in]  secondary_source_option TODO
* @param[in]  secondary_source_measure TODO
* @param[in]  secondary_source_measure2 TODO
*
* @par See also 
*      GenerateGUID_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void SetPropertiesEx_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, const char* type, const char* name, const char* source_guid, const char* source_name, const double* source_measure, const char* secondary_source_guid, const char* secondary_source_name, const int32_t* secondary_source_option, const double* secondary_source_measure, const double* secondary_source_measure2);

/**
* Gets the properties of the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[out] type TODO
* @param[in]  type_size TODO
* @param[out] name TODO
* @param[in]  name_size TODO
* @param[out] source_guid TODO
* @param[in]  source_guid_size TODO
* @param[out] source_name TODO
* @param[in]  source_name_size TODO
* @param[out] source_measure TODO
* @param[out] secondary_source_guid TODO
* @param[in]  secondary_source_guid_size TODO
* @param[out] secondary_source_name TODO
* @param[in]  secondary_source_name_size TODO
* @param[out] secondary_source_measure TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetProperties_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, char* type, const int32_t* type_size, char* name, const int32_t* name_size, char* source_guid, const int32_t* source_guid_size, char* source_name, const int32_t* source_name_size, double* source_measure, char* secondary_source_guid, const int32_t* secondary_source_guid_size, char* secondary_source_name, const int32_t* secondary_source_name_size, double* secondary_source_measure);

/**
* Gets the properties of the surface item  (includes new properties introduced in 8.5).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[out] type TODO
* @param[in]  type_size TODO
* @param[out] name TODO
* @param[in]  name_size TODO
* @param[out] source_guid TODO
* @param[in]  source_guid_size TODO
* @param[out] source_name TODO
* @param[in]  source_name_size TODO
* @param[out] source_measure TODO
* @param[out] secondary_source_guid TODO
* @param[in]  secondary_source_guid_size TODO
* @param[out] secondary_source_name TODO
* @param[in]  secondary_source_name_size TODO
* @param[out] secondary_source_option TODO
* @param[out] secondary_source_measure TODO
* @param[out] secondary_source_measure2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void GetPropertiesEx_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, char* type, const int32_t* type_size, char* name, const int32_t* name_size, char* source_guid, const int32_t* source_guid_size, char* source_name, const int32_t* source_name_size, double* source_measure, char* secondary_source_guid, const int32_t* secondary_source_guid_size, char* secondary_source_name, const int32_t* secondary_source_name_size, int32_t* secondary_source_option, double* secondary_source_measure, double* secondary_source_measure2);

/**
* Sets default render properties of the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[in]  color TODO
* @param[in]  transparency TODO
* @param[in]  render_mode TODO
*
* @par See also 
*      iColor_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void SetDefaultRenderProperties_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, const int32_t* color, const double* transparency, const int32_t* render_mode);

/**
* Gets default render properties of the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[out] color TODO
* @param[out] transparency TODO
* @param[out] render_mode TODO
*
* @par See also 
*      iColor_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetDefaultRenderProperties_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, int32_t* color, double* transparency, int32_t* render_mode);

/**
* Get the number of components in the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @return Number of components in the surface item.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t iNumComponents_SURFACEITEM(void* p_geo, const int32_t* surfaceitem);

/**
* Adds a triangular polyhedral mesh component to the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[in]  vert_v_vx TODO
* @param[in]  vert_v_vy TODO
* @param[in]  vert_v_vz TODO
* @param[in]  tri_vv_pt1 TODO
* @param[in]  tri_vv_pt2 TODO
* @param[in]  tri_vv_pt3 TODO
* @return The index of the component added.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t iAddMesh_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, const int32_t* vert_v_vx, const int32_t* vert_v_vy, const int32_t* vert_v_vz, const int32_t* tri_vv_pt1, const int32_t* tri_vv_pt2, const int32_t* tri_vv_pt3);

/**
* Gets a triangular polyhedral mesh of a component in the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[in]  index TODO
* @param[in]  vert_v_vx TODO
* @param[in]  vert_v_vy TODO
* @param[in]  vert_v_vz TODO
* @param[in]  tri_vv_pt1 TODO
* @param[in]  tri_vv_pt2 TODO
* @param[in]  tri_vv_pt3 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetMesh_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, const int32_t* index, const int32_t* vert_v_vx, const int32_t* vert_v_vy, const int32_t* vert_v_vz, const int32_t* tri_vv_pt1, const int32_t* tri_vv_pt2, const int32_t* tri_vv_pt3);

/**
* Get the spatial range of the the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
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
GX_EXPORT void GetExtents_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z);

/**
* Gets information about a triangular polyhedral mesh component in the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[in]  index TODO
* @param[out] closed TODO
* @param[out] n_inner_comps TODO
* @param[out] area TODO
* @param[out] volume TODO
* @param[out] volume_confidence_interval TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetMeshInfo_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, const int32_t* index, int32_t* closed, int32_t* n_inner_comps, double* area, double* volume, double* volume_confidence_interval);

/**
* Gets information about the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[out] closed TODO
* @param[out] area TODO
* @param[out] volume TODO
* @param[out] volume_confidence_interval TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void GetInfo_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, int32_t* closed, double* area, double* volume, double* volume_confidence_interval);

/**
* Get the total number of vertices and triangles of all mesh components in item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[out] vertices TODO
* @param[out] triangles TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void GetGeometryInfo_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, int32_t* vertices, int32_t* triangles);

/**
* Compute more information (including validation) about of all mesh components in the surface item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  surfaceitem TODO
* @param[out] components TODO
* @param[out] vertices TODO
* @param[out] edges TODO
* @param[out] triangles TODO
* @param[out] inconsistent TODO
* @param[out] invalid TODO
* @param[out] intersectiona TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void ComputeExtendedInfo_SURFACEITEM(void* p_geo, const int32_t* surfaceitem, int32_t* components, int32_t* vertices, int32_t* edges, int32_t* triangles, int32_t* inconsistent, int32_t* invalid, int32_t* intersectiona);

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
