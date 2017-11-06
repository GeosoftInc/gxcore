//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file geostring_gxlib.h
* @date 2017-11-06
* @brief File containing GEOSTRING GX C API constant and function declarations
*/

/**
* @defgroup GEOSTRING_Module GEOSTRING
* The GEOSTRING class is used to read information stored in Geostring files 
* (*.geosoft_string). Geosoft geostrings are 3D vector files that store digitized 
* interpretations drawn on section maps. Both polygon and polyline features can be 
* stored in the same file. This API currently only provides read access, 
* but read/write support could be added in the future.
* @{
*/

#pragma once
#ifndef HGEOSTRING_H_DEFINED
#define HGEOSTRING_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name GEOSTRING_OPEN Definitions
* 
* Open Modes
*/
///@{
/** 
* GEOSTRING_OPEN_READ
*/
#define GEOSTRING_OPEN_READ 0
/** 
* GEOSTRING_OPEN_READWRITE
*/
#define GEOSTRING_OPEN_READWRITE 1
///@}

/**
* @name SECTION_ORIENTATION Definitions
* 
* Section orientation types
*/
///@{
/** 
* SECTION_ORIENTATION_UNKNOWN
*/
#define SECTION_ORIENTATION_UNKNOWN 0
/** 
* SECTION_ORIENTATION_PLAN
*/
#define SECTION_ORIENTATION_PLAN 1
/** 
* SECTION_ORIENTATION_SECTION
*/
#define SECTION_ORIENTATION_SECTION 2
/** 
* SECTION_ORIENTATION_CROOKED
*/
#define SECTION_ORIENTATION_CROOKED 2
/** 
* SECTION_ORIENTATION_GMSYS
*/
#define SECTION_ORIENTATION_GMSYS 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Open a Geostring file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring_file TODO
* @param[in]  mode TODO
* @return GEOSTRING Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t Open_GEOSTRING(void* p_geo, const char* geostring_file, const int32_t* mode);

/**
* Destroy the GEOSTRING Object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void Destroy_GEOSTRING(void* p_geo, const int32_t* geostring);

/**
* Get the coordinate system of the Geostring.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetIPJ_GEOSTRING(void* p_geo, const int32_t* geostring, const int32_t* ipj);

/**
* Get the features
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  lst TODO
**
* @par Note 
*      List items are returned with feature GUID in name and feature name in value.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetFeatures_GEOSTRING(void* p_geo, const int32_t* geostring, const int32_t* lst);

/**
* Get the sections
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  lst TODO
**
* @par Note 
*      List items are returned with section GUID in name and section name in value.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetSections_GEOSTRING(void* p_geo, const int32_t* geostring, const int32_t* lst);

/**
* Get the all shapes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetAllShapes_GEOSTRING(void* p_geo, const int32_t* geostring, const int32_t* lst);

/**
* Get all shapes linked to a specific feature
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  guid TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetShapesForFeature_GEOSTRING(void* p_geo, const int32_t* geostring, const char* guid, const int32_t* lst);

/**
* Get all shapes linked to a specific section
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  guid TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetShapesForSection_GEOSTRING(void* p_geo, const int32_t* geostring, const char* guid, const int32_t* lst);

/**
* Get all shapes linked to a specific feature and section
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  feature_guid TODO
* @param[in]  section_guid TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetShapesForFeatureAndSection_GEOSTRING(void* p_geo, const int32_t* geostring, const char* feature_guid, const char* section_guid, const int32_t* lst);

/**
* Get a feature's properties
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  guid TODO
* @param[out] name TODO
* @param[in]  name_size TODO
* @param[out] description TODO
* @param[in]  description_size TODO
* @param[out] polygon TODO
* @param[out] pat_number TODO
* @param[out] pat_size TODO
* @param[out] pat_thick TODO
* @param[out] pat_density TODO
* @param[out] pat_color TODO
* @param[out] pat_bg_color TODO
* @param[out] line_style TODO
* @param[out] line_thickness TODO
* @param[out] line_pitch TODO
* @param[out] line_color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetFeatureProperties_GEOSTRING(void* p_geo, const int32_t* geostring, const char* guid, char* name, const int32_t* name_size, char* description, const int32_t* description_size, int32_t* polygon, int32_t* pat_number, double* pat_size, double* pat_thick, double* pat_density, int32_t* pat_color, int32_t* pat_bg_color, int32_t* line_style, double* line_thickness, double* line_pitch, int32_t* line_color);

/**
* Get a section's properties
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  guid TODO
* @param[out] name TODO
* @param[in]  name_size TODO
* @param[out] container_name TODO
* @param[in]  container_name_size TODO
* @param[out] orientation TODO
* @param[out] easting TODO
* @param[out] northing TODO
* @param[out] elevation TODO
* @param[out] azimuth TODO
* @param[out] swing TODO
* @param[out] a TODO
* @param[out] b TODO
* @param[out] c TODO
* @param[out] d TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetSectionProperties_GEOSTRING(void* p_geo, const int32_t* geostring, const char* guid, char* name, const int32_t* name_size, char* container_name, const int32_t* container_name_size, int32_t* orientation, double* easting, double* northing, double* elevation, double* azimuth, double* swing, double* a, double* b, double* c, double* d);

/**
* Get a shape's properties
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  geostring TODO
* @param[in]  guid TODO
* @param[out] feature_guid TODO
* @param[in]  feature_guid_size TODO
* @param[out] section_guid TODO
* @param[in]  section_guid_size TODO
* @param[in]  vert_v_vx TODO
* @param[in]  vert_v_vy TODO
* @param[in]  vert_v_vz TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GetShapeProperties_GEOSTRING(void* p_geo, const int32_t* geostring, const char* guid, char* feature_guid, const int32_t* feature_guid_size, char* section_guid, const int32_t* section_guid_size, const int32_t* vert_v_vx, const int32_t* vert_v_vy, const int32_t* vert_v_vz);

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
