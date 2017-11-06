//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file multivoxset_gxlib.h
* @date 2017-11-06
* @brief File containing MULTIVOXSET GX C API constant and function declarations
*/

/**
* @defgroup MULTIVOXSET_Module MULTIVOXSET
* High Performance 3D Grid.
* @{
*/

#pragma once
#ifndef HMULTIVOXSET_H_DEFINED
#define HMULTIVOXSET_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DIRECTION3D Definitions
* 
* Direction in 3D
*/
///@{
/** 
* DIRECTION3D_XYZ
* 
* XYZ
*/
#define DIRECTION3D_XYZ 0
/** 
* DIRECTION3D_YXZ
* 
* YXZ
*/
#define DIRECTION3D_YXZ 1
/** 
* DIRECTION3D_XZY
* 
* XZY
*/
#define DIRECTION3D_XZY 2
/** 
* DIRECTION3D_YZX
* 
* YZX
*/
#define DIRECTION3D_YZX 3
/** 
* DIRECTION3D_ZXY
* 
* ZXY
*/
#define DIRECTION3D_ZXY 4
/** 
* DIRECTION3D_ZYX
* 
* ZYX
*/
#define DIRECTION3D_ZYX 5
///@}

/**
* @name GOCAD_ORIENTATION Definitions
* 
* GOCAD Orientations
*/
///@{
/** 
* GOCAD_ORIENTATIONS_NORMAL
* 
* Normal
*/
#define GOCAD_ORIENTATIONS_NORMAL 0
/** 
* GOCAD_ORIENTATIONS_INVERTED
* 
* Inverted (Z)
*/
#define GOCAD_ORIENTATIONS_INVERTED 1
/** 
* GOCAD_ORIENTATIONS_NORMAL_ZFIRST
* 
* Normal (ZFirst)
*/
#define GOCAD_ORIENTATIONS_NORMAL_ZFIRST 2
/** 
* GOCAD_ORIENTATIONS_INVERTED_ZFIRST
* 
* Inverted (Z) (ZFirst)
*/
#define GOCAD_ORIENTATIONS_INVERTED_ZFIRST 3
///@}

/**
* @name VECTOR_IMPORT Definitions
* 
* Vector voxel import direction
*/
///@{
/** 
* VECTOR_IMPORT_XYZ
* 
* X, Y and Z
*/
#define VECTOR_IMPORT_XYZ 0
/** 
* VECTOR_IMPORT_UVW
* 
* U, V and W
*/
#define VECTOR_IMPORT_UVW 1
/** 
* VECTOR_IMPORT_AID
* 
* Amplitude, Inclination and Declination
*/
#define VECTOR_IMPORT_AID 2
///@}

/**
* @name FILTER3D Definitions
* 
* Voxel filter type
*/
///@{
/** 
* FILTER3D_FILE
* 
* Specify a file containing the 27-point filter
*/
#define FILTER3D_FILE 0
/** 
* FILTER3D_SMOOTHING
* 
* Smoothing filter
*/
#define FILTER3D_SMOOTHING 1
/** 
* FILTER3D_LAPLACE
* 
* Laplace filter
*/
#define FILTER3D_LAPLACE 2
/** 
* FILTER3D_X_GRADIENT
* 
* X-Gradient filter
*/
#define FILTER3D_X_GRADIENT 3
/** 
* FILTER3D_Y_GRADIENT
* 
* Y-Gradient filter
*/
#define FILTER3D_Y_GRADIENT 4
/** 
* FILTER3D_Z_GRADIENT
* 
* Z-Gradient filter
*/
#define FILTER3D_Z_GRADIENT 5
/** 
* FILTER3D_TOTAL_GRADIENT
* 
* Total-Gradient filter
*/
#define FILTER3D_TOTAL_GRADIENT 6
///@}

/**
* @name MULTIVOXSET_DIRECTGRID_METHOD Definitions
* 
* How to calculate the cell values for direct gridding.
*/
///@{
/** 
* MULTIVOXSET_DIRECTGRID_MIN
*/
#define MULTIVOXSET_DIRECTGRID_MIN 0
/** 
* MULTIVOXSET_DIRECTGRID_MAX
*/
#define MULTIVOXSET_DIRECTGRID_MAX 1
/** 
* MULTIVOXSET_DIRECTGRID_MEAN
*/
#define MULTIVOXSET_DIRECTGRID_MEAN 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Import XYZ file into a Multi-Voxset
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  ra TODO
* @param[in]  type TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ImportFromXYZ_MULTIVOXSET(void* p_geo, const char* name, const int32_t* ra, const int32_t* type, const int32_t* ipj);

/**
* Export a MULTIVOXSET to an XYZ File
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  xyz TODO
* @param[in]  dir TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  dummies TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ExportToXYZ_MULTIVOXSET(void* p_geo, const char* voxel_file, const char* xyz, const int32_t* dir, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const int32_t* dummies);

/**
* Export contents of MULTIVOXSET to a Binary File.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  binary_file TODO
* @param[in]  dir TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  swap TODO
* @param[in]  output_type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.3
*/
GX_EXPORT void ExportToBinary_MULTIVOXSET(void* p_geo, const char* voxel_file, const char* binary_file, const int32_t* dir, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const int32_t* swap, const int32_t* output_type);

/**
* Export a MULTIVOXSET to XML
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  xml_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ExportToXML_MULTIVOXSET(void* p_geo, const char* voxel_file, const char* xml_file);

/**
* Compare MULTIVOXSET to Legacy Voxel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  legacy_voxel_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void CheckEqualToLegacyVoxel_MULTIVOXSET(void* p_geo, const char* voxel_file, const char* legacy_voxel_file);

/**
* Import UBC file into a MultiVoxset
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  mesh TODO
* @param[in]  mod TODO
* @param[in]  dummy TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ImportFromUBC_MULTIVOXSET(void* p_geo, const char* name, const char* mesh, const char* mod, const double* dummy, const int32_t* ipj);

/**
* Imports a MultiVoxset from a GOCAD File
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  header TODO
* @param[in]  property TODO
* @param[in]  ipj TODO
* @param[in]  orientation TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ImportFromGOCAD_MULTIVOXSET(void* p_geo, const char* name, const char* header, const char* property, const int32_t* ipj, const int32_t* orientation);

/**
* List all the properties available in this GOCAD file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  header TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ListPropertiesGOCAD_MULTIVOXSET(void* p_geo, const char* header, const int32_t* lst);

/**
* Imports from a Geosoft Database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  db TODO
* @param[in]  symb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ImportFromGDB_MULTIVOXSET(void* p_geo, const char* voxel_file, const int32_t* db, const int32_t* symb);

/**
* Imports from a Vector Geosoft Database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  db TODO
* @param[in]  vector_type TODO
* @param[in]  symb_x TODO
* @param[in]  symb_y TODO
* @param[in]  symb_z TODO
* @param[in]  inc TODO
* @param[in]  dec TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ImportFromVectorGDB_MULTIVOXSET(void* p_geo, const char* voxel_file, const int32_t* db, const int32_t* vector_type, const int32_t* symb_x, const int32_t* symb_y, const int32_t* symb_z, const double* inc, const double* dec);

/**
* Export To SEGY
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  voxel_name TODO
* @param[in]  output_segy_filename TODO
* @param[in]  sample_interval TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ExportToSEGY_MULTIVOXSET(void* p_geo, const char* voxel_file, const char* voxel_name, const char* output_segy_filename, const double* sample_interval);

/**
* Export To GDB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  dir TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  dummies TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ExportToGDB_MULTIVOXSET(void* p_geo, const char* voxel_file, const int32_t* db, const char* chan, const int32_t* dir, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const int32_t* dummies);

/**
* Export To GDB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file_name TODO
* @param[in]  wa TODO
* @param[in]  dir TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  dummy TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ExportToWA_MULTIVOXSET(void* p_geo, const char* file_name, const int32_t* wa, const int32_t* dir, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const char* dummy);

/**
* Convert 3 Double Voxels to a Vector Voxel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x_file_name TODO
* @param[in]  y_file_name TODO
* @param[in]  z_file_name TODO
* @param[in]  out_file_name TODO
* @param[in]  inclination TODO
* @param[in]  declination TODO
* @param[in]  rotated TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ConvertDoubleToVector_MULTIVOXSET(void* p_geo, const char* x_file_name, const char* y_file_name, const char* z_file_name, const char* out_file_name, const double* inclination, const double* declination, const int32_t* rotated);

/**
* Convert a Vector Voxel to 3 double Voxels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file_name TODO
* @param[in]  x_file_name TODO
* @param[in]  y_file_name TODO
* @param[in]  z_file_name TODO
* @param[in]  rotated TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ConvertVectorToDouble_MULTIVOXSET(void* p_geo, const char* file_name, const char* x_file_name, const char* y_file_name, const char* z_file_name, const int32_t* rotated);

/**
* Generate a double MultiVoxset with a constant value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  value TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cell_x TODO
* @param[in]  cell_y TODO
* @param[in]  cell_z TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  size_z TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void CreateDoubleConstant_MULTIVOXSET(void* p_geo, const char* name, const double* value, const double* ox, const double* oy, const double* oz, const double* cell_x, const double* cell_y, const double* cell_z, const int32_t* size_x, const int32_t* size_y, const int32_t* size_z, const int32_t* ipj);

/**
* Generate a double MultiVoxset with a constant value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  value TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cell_x TODO
* @param[in]  cell_y TODO
* @param[in]  cell_z TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  size_z TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void CreateThematicConstant_MULTIVOXSET(void* p_geo, const char* name, const int32_t* value, const double* ox, const double* oy, const double* oz, const double* cell_x, const double* cell_y, const double* cell_z, const int32_t* size_x, const int32_t* size_y, const int32_t* size_z, const int32_t* ipj);

/**
* Generate a double MultiVoxset with a constant value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  value_x TODO
* @param[in]  value_y TODO
* @param[in]  value_z TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cell_x TODO
* @param[in]  cell_y TODO
* @param[in]  cell_z TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  size_z TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void CreateVectorConstant_MULTIVOXSET(void* p_geo, const char* name, const double* value_x, const double* value_y, const double* value_z, const double* ox, const double* oy, const double* oz, const double* cell_x, const double* cell_y, const double* cell_z, const int32_t* size_x, const int32_t* size_y, const int32_t* size_z, const int32_t* ipj);

/**
* Generate a double MultiVoxset with a constant value and non-uniform cell sizes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  value TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cx TODO
* @param[in]  cy TODO
* @param[in]  cz TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void CreateDoubleConstantVV_MULTIVOXSET(void* p_geo, const char* name, const double* value, const double* ox, const double* oy, const double* oz, const int32_t* cx, const int32_t* cy, const int32_t* cz, const int32_t* ipj);

/**
* Generate a double MultiVoxset with a constant value and non-uniform cell sizes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  value TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cx TODO
* @param[in]  cy TODO
* @param[in]  cz TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void CreateThematicConstantVV_MULTIVOXSET(void* p_geo, const char* name, const int32_t* value, const double* ox, const double* oy, const double* oz, const int32_t* cx, const int32_t* cy, const int32_t* cz, const int32_t* ipj);

/**
* Generate a double MultiVoxset with a constant value and non-uniform cell sizes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  x_value TODO
* @param[in]  y_value TODO
* @param[in]  z_value TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cx TODO
* @param[in]  cy TODO
* @param[in]  cz TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void CreateVectorConstantVV_MULTIVOXSET(void* p_geo, const char* name, const double* x_value, const double* y_value, const double* z_value, const double* ox, const double* oy, const double* oz, const int32_t* cx, const int32_t* cy, const int32_t* cz, const int32_t* ipj);

/**
* Exports a Multi-Voxset into a Voxel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  project_file TODO
* @param[in]  multi_voxset_uuid TODO
* @param[in]  multi_voxset_attribute TODO
* @param[in]  voxel_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ExportToVoxel_MULTIVOXSET(void* p_geo, const char* project_file, const char* multi_voxset_uuid, const char* multi_voxset_attribute, const char* voxel_file);

/**
* Import a Voxel directly into a Multi-Voxset
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  project_file TODO
* @param[in]  voxel_file TODO
* @param[in]  multi_voxset_attribute TODO
* @param[out] p_uuid_string TODO
* @param[in]  p_uuid_string_len TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void ImportFromVoxel_MULTIVOXSET(void* p_geo, const char* project_file, const char* voxel_file, const char* multi_voxset_attribute, char* p_uuid_string, const int32_t* p_uuid_string_len);

/**
* Create a Geosoft Voxel file from a Datamine block model file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  field TODO
* @param[in]  ipj TODO
* @param[in]  voxel TODO
**
* @par Note 
*      Create a Geosoft Voxel file from a Datamine block model file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.3
*/
GX_EXPORT void ImportFromDATAMINE_MULTIVOXSET(void* p_geo, const char* file, const char* field, const int32_t* ipj, const char* voxel);

/**
* Used if the user does not provide a default cell size.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  min_x TODO
* @param[in]  max_x TODO
* @param[in]  min_y TODO
* @param[in]  max_y TODO
* @param[in]  min_z TODO
* @param[in]  max_z TODO
* @return Default Cell Size
**
* @par Note 
*      Compute a default cell size for a voxel given a data range.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.3
*/
GX_EXPORT double rComputeDefaultCellSize_MULTIVOXSET(void* p_geo, const double* min_x, const double* max_x, const double* min_y, const double* max_y, const double* min_z, const double* max_z);

/**
* Apply a 3D filter to a voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input_file TODO
* @param[in]  output_file TODO
* @param[in]  filter TODO
* @param[in]  filter_file TODO
* @param[in]  n_passes TODO
* @param[in]  interpolate_dummies TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.3
*/
GX_EXPORT void Filter_MULTIVOXSET(void* p_geo, const char* input_file, const char* output_file, const int32_t* filter, const char* filter_file, const int32_t* n_passes, const int32_t* interpolate_dummies);

/**
* Create a voxel using direct gridding.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  output_voxel_filename TODO
* @param[in]  origin_x TODO
* @param[in]  origin_y TODO
* @param[in]  origin_z TODO
* @param[in]  cell_count_x TODO
* @param[in]  cell_count_y TODO
* @param[in]  cell_count_z TODO
* @param[in]  cell_size_x TODO
* @param[in]  cell_size_y TODO
* @param[in]  cell_size_z TODO
* @param[in]  method TODO
* @param[in]  db TODO
* @param[in]  x_channel TODO
* @param[in]  y_channel TODO
* @param[in]  z_channel TODO
* @param[in]  data_channel TODO
**
* @par Note 
*      The Z and Data channels may be array channels. If they are, the array sizes must match.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.3
*/
GX_EXPORT void GridDirectFromGDB_MULTIVOXSET(void* p_geo, const char* output_voxel_filename, const double* origin_x, const double* origin_y, const double* origin_z, const int32_t* cell_count_x, const int32_t* cell_count_y, const int32_t* cell_count_z, const double* cell_size_x, const double* cell_size_y, const double* cell_size_z, const int32_t* method, const int32_t* db, const int32_t* x_channel, const int32_t* y_channel, const int32_t* z_channel, const int32_t* data_channel);

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
