//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file vox_gxlib.h
* @date 2017-11-06
* @brief File containing VOX GX C API constant and function declarations
*/

/**
* @defgroup VOX_Module VOX
* High Performance 3D Grid. Designed for accessing
* 3D grids quickly using slices. It designed arround
* non-uniform multi-resolution  compressed storage.
* To sample a voxel at specific locations, use VOXE.
* @{
*/

#pragma once
#ifndef HVOX_H_DEFINED
#define HVOX_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name VOX_DIR Definitions
* 
* Voxel direction
*/
///@{
/** 
* VOX_DIR_XY
* 
* X/Y Plane (Fastest)
*/
#define VOX_DIR_XY 0
/** 
* VOX_DIR_XZ
* 
* X/Z Plane (Middle)
*/
#define VOX_DIR_XZ 1
/** 
* VOX_DIR_YZ
* 
* Y/Z Plane (Slowest)
*/
#define VOX_DIR_YZ 2
///@}

/**
* @name VOX_DIRECTION Definitions
* 
* Voxel export direction
*/
///@{
/** 
* VOX_3D_DIR_XYZ
* 
* XYZ
*/
#define VOX_3D_DIR_XYZ 0
/** 
* VOX_3D_DIR_YXZ
* 
* YXZ
*/
#define VOX_3D_DIR_YXZ 1
/** 
* VOX_3D_DIR_XZY
* 
* XZY
*/
#define VOX_3D_DIR_XZY 2
/** 
* VOX_3D_DIR_YZX
* 
* YZX
*/
#define VOX_3D_DIR_YZX 3
/** 
* VOX_3D_DIR_ZXY
* 
* ZXY
*/
#define VOX_3D_DIR_ZXY 4
/** 
* VOX_3D_DIR_ZYX
* 
* ZYX
*/
#define VOX_3D_DIR_ZYX 5
///@}

/**
* @name VOX_FILTER3D Definitions
* 
* Voxel filter type
*/
///@{
/** 
* VOX_FILTER3D_FILE
* 
* Specify a file containing the 27-point filter
*/
#define VOX_FILTER3D_FILE 0
/** 
* VOX_FILTER3D_SMOOTHING
* 
* Smoothing filter
*/
#define VOX_FILTER3D_SMOOTHING 1
/** 
* VOX_FILTER3D_LAPLACE
* 
* Laplace filter
*/
#define VOX_FILTER3D_LAPLACE 2
/** 
* VOX_FILTER3D_X_GRADIENT
* 
* X-Gradient filter
*/
#define VOX_FILTER3D_X_GRADIENT 3
/** 
* VOX_FILTER3D_Y_GRADIENT
* 
* Y-Gradient filter
*/
#define VOX_FILTER3D_Y_GRADIENT 4
/** 
* VOX_FILTER3D_Z_GRADIENT
* 
* Z-Gradient filter
*/
#define VOX_FILTER3D_Z_GRADIENT 5
/** 
* VOX_FILTER3D_TOTAL_GRADIENT
* 
* Total-Gradient filter
*/
#define VOX_FILTER3D_TOTAL_GRADIENT 6
///@}

/**
* @name VOX_GOCAD_ORIENTATION Definitions
* 
* GOCAD Orientations
*/
///@{
/** 
* VOX_GOCAD_ORIENTATIONS_NORMAL
* 
* Normal
*/
#define VOX_GOCAD_ORIENTATIONS_NORMAL 0
/** 
* VOX_GOCAD_ORIENTATIONS_INVERTED
* 
* Inverted (Z)
*/
#define VOX_GOCAD_ORIENTATIONS_INVERTED 1
/** 
* VOX_GOCAD_ORIENTATIONS_NORMAL_ZFIRST
* 
* Normal (ZFirst)
*/
#define VOX_GOCAD_ORIENTATIONS_NORMAL_ZFIRST 2
/** 
* VOX_GOCAD_ORIENTATIONS_INVERTED_ZFIRST
* 
* Inverted (Z) (ZFirst)
*/
#define VOX_GOCAD_ORIENTATIONS_INVERTED_ZFIRST 3
///@}

/**
* @name VOX_GRID_LOGOPT Definitions
* 
* Voxel log gridding options
*/
///@{
/** 
* VOX_GRID_LOGOPT_LINEAR
* 
* Linear
*/
#define VOX_GRID_LOGOPT_LINEAR 0
/** 
* VOX_GRID_LOGOPT_LOG_SAVELINEAR
* 
* Log, save as linear
*/
#define VOX_GRID_LOGOPT_LOG_SAVELINEAR -1
/** 
* VOX_GRID_LOGOPT_LOGLINEAR_SAVELINEAR
* 
* Log-linear, save as linear
*/
#define VOX_GRID_LOGOPT_LOGLINEAR_SAVELINEAR -2
/** 
* VOX_GRID_LOGOPT_LOG_SAVELOG
* 
* Log, save as log
*/
#define VOX_GRID_LOGOPT_LOG_SAVELOG 1
/** 
* VOX_GRID_LOGOPT_LOGLINEAR_SAVELOG
* 
* Log-linear, save as log
*/
#define VOX_GRID_LOGOPT_LOGLINEAR_SAVELOG 2
///@}

/**
* @name VOX_ORIGIN Definitions
* 
* Voxel origin
*/
///@{
/** 
* VOX_ORIGIN_BOTTOM
* 
* Bottom corner (standard Geosoft)
*/
#define VOX_ORIGIN_BOTTOM 0
/** 
* VOX_ORIGIN_TOP
* 
* Top corner
*/
#define VOX_ORIGIN_TOP 1
///@}

/**
* @name VOX_SLICE_MODE Definitions
* 
* Voxel export direction
*/
///@{
/** 
* VOX_SLICE_MODE_LINEAR
* 
* Linear
*/
#define VOX_SLICE_MODE_LINEAR 1
/** 
* VOX_SLICE_MODE_NEAREST
* 
* Nearest
*/
#define VOX_SLICE_MODE_NEAREST 0
///@}

/**
* @name VOX_VECTORVOX_IMPORT Definitions
* 
* Voxel direction
*/
///@{
/** 
* VOX_VECTORVOX_XYZ
* 
* X, Y and Z
*/
#define VOX_VECTORVOX_XYZ 0
/** 
* VOX_VECTORVOX_UVW
* 
* U, V and W
*/
#define VOX_VECTORVOX_UVW 1
/** 
* VOX_VECTORVOX_AID
* 
* Amplitude, Inclination and Declination
*/
#define VOX_VECTORVOX_AID 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Calculate Statistics
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  st TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void CalcStats_VOX(void* p_geo, const int32_t* vox, const int32_t* st);

/**
* Create a handle to an VOX object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return VOX handle, terminates if creation fails
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t Create_VOX(void* p_geo, const char* name);

/**
* Create a 3D PG from a VOX object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @return PG Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t CreatePG_VOX(void* p_geo, const int32_t* vox);

/**
* Create a 3D PG from a VOX object with a specific Type
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  type TODO
* @return PG Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t CreateTypePG_VOX(void* p_geo, const int32_t* vox, const int32_t* type);

/**
* Destroy a VOX.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void Destroy_VOX(void* p_geo, const int32_t* vox);

/**
* Export all layers of this VOX in all directions.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void Dump_VOX(void* p_geo, const int32_t* vox, const char* name);

/**
* Export all layers of this VOX into grid files.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  name TODO
* @param[in]  dir TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void ExportIMG_VOX(void* p_geo, const int32_t* vox, const char* name, const int32_t* dir);

/**
* Export all layers of this VOX into grid files, with optional cell size.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  name TODO
* @param[in]  dir TODO
* @param[in]  start TODO
* @param[in]  incr TODO
* @param[in]  num TODO
* @param[in]  cell_size TODO
* @param[in]  interp TODO
**
* @par Note 
*      If the cell size is not specified, then:
*      1. If the cell sizes are uniform in a given direction, that size is used
*      2. If the cell sizes are variable in a given direction, then the smallest size is used
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void ExportToGrids_VOX(void* p_geo, const int32_t* vox, const char* name, const int32_t* dir, const int32_t* start, const int32_t* incr, const int32_t* num, const double* cell_size, const int32_t* interp);

/**
* Export a VOX to a compressed XML file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void ExportXML_VOX(void* p_geo, const char* voxel, int32_t* crc, const char* file);

/**
* Export a voxel to a depth SEG-Y file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  output_segy_filename TODO
* @param[in]  sample_interval TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.5
*/
GX_EXPORT void ExportSegY_VOX(void* p_geo, const int32_t* vox, const char* output_segy_filename, const double* sample_interval);

/**
* Export a VOX to a compressed XML file. Verbose version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel TODO
* @param[in]  file TODO
* @return Exports all values and stats by JIG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void ExportJIGsXML_VOX(void* p_geo, const char* voxel, const char* file);

/**
* Export a Voxel to an XYZ File
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  xyz TODO
* @param[in]  dir TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  dummies TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void ExportXYZ_VOX(void* p_geo, const int32_t* vox, const char* xyz, const int32_t* dir, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const int32_t* dummies);

/**
* Apply a 3D filter to a voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  filter TODO
* @param[in]  filter_file TODO
* @param[in]  n_passes TODO
* @param[in]  interpolate_dummies TODO
* @param[in]  output_vox TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void Filter_VOX(void* p_geo, const int32_t* vox, const int32_t* filter, const char* filter_file, const int32_t* n_passes, const int32_t* interpolate_dummies, const char* output_vox);

/**
* Generate a VOX from a Database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  db TODO
* @param[in]  symb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void GenerateDB_VOX(void* p_geo, const char* voxel_file, const int32_t* db, const int32_t* symb);

/**
* Generate a vector voxel VOX from a Database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[in]  db TODO
* @param[in]  type TODO
* @param[in]  symb_x TODO
* @param[in]  symb_y TODO
* @param[in]  symb_z TODO
* @param[in]  inc TODO
* @param[in]  dec TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void GenerateVectorVoxelFromDB_VOX(void* p_geo, const char* voxel_file, const int32_t* db, const int32_t* type, const int32_t* symb_x, const int32_t* symb_y, const int32_t* symb_z, const double* inc, const double* dec);

/**
* Generate a VOX from a 3D Pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  pg TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cx TODO
* @param[in]  cy TODO
* @param[in]  cz TODO
* @param[in]  ipj TODO
* @param[in]  meta TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t GeneratePG_VOX(void* p_geo, const char* name, const int32_t* pg, const double* ox, const double* oy, const double* oz, const double* cx, const double* cy, const double* cz, const int32_t* ipj, const int32_t* meta);

/**
* Generate a VOX with a constant value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  value TODO
* @param[in]  type TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cx TODO
* @param[in]  cy TODO
* @param[in]  cz TODO
* @param[in]  cell_count_x TODO
* @param[in]  cell_count_y TODO
* @param[in]  cell_count_z TODO
* @param[in]  ipj TODO
* @param[in]  meta TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t GenerateConstantValue_VOX(void* p_geo, const char* name, const double* value, const int32_t* type, const double* ox, const double* oy, const double* oz, const double* cx, const double* cy, const double* cz, const int32_t* cell_count_x, const int32_t* cell_count_y, const int32_t* cell_count_z, const int32_t* ipj, const int32_t* meta);

/**
* Generate a VOX from a 3D Pager, cells sizes passed in VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  pg TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cx TODO
* @param[in]  cy TODO
* @param[in]  cz TODO
* @param[in]  ipj TODO
* @param[in]  meta TODO
* @return VOX Object
**
* @par Note 
*      The input cell size VVs' lengths must match the input PG dimensions.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t GeneratePGVV_VOX(void* p_geo, const char* name, const int32_t* pg, const double* ox, const double* oy, const double* oz, const int32_t* cx, const int32_t* cy, const int32_t* cz, const int32_t* ipj, const int32_t* meta);

/**
* Generate a VOX with a constant value, cells sizes passed in VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  value TODO
* @param[in]  type TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cx TODO
* @param[in]  cy TODO
* @param[in]  cz TODO
* @param[in]  ipj TODO
* @param[in]  meta TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT int32_t GenerateConstantValueVV_VOX(void* p_geo, const char* name, const double* value, const int32_t* type, const double* ox, const double* oy, const double* oz, const int32_t* cx, const int32_t* cy, const int32_t* cz, const int32_t* ipj, const int32_t* meta);

/**
* Initialize the generate of a VOX from a series of 3D subset pagers
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data_type TODO
* @param[in]  nx TODO
* @param[in]  ny TODO
* @param[in]  nz TODO
* @return VOX Object
**
* @par Note 
*      Call InitGenerateBySubsetPG_VOX first, then add a series of subset PGs using AddGenerateBySubsetPG_VOX, and finally
*      serialize using EndGenerateBySubsetPG_VOX
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t InitGenerateBySubsetPG_VOX(void* p_geo, const int32_t* data_type, const int32_t* nx, const int32_t* ny, const int32_t* nz);

/**
* Add a subset 3D  pagers. These should be "slabs", 16 wide in the input direction, and the size of the
* full voxel in the other two directions.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  pg TODO
* @param[in]  dir TODO
* @param[in]  offset TODO
**
* @par Note 
*      See InitGenerateBySubsetPG_VOX and EndGenerateBySubsetPG_VOX.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void AddGenerateBySubsetPG_VOX(void* p_geo, const int32_t* vox, const int32_t* pg, const int32_t* dir, const int32_t* offset);

/**
* Output the voxel, after adding all the subset PGs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  name TODO
* @param[in]  ox TODO
* @param[in]  oy TODO
* @param[in]  oz TODO
* @param[in]  cx TODO
* @param[in]  cy TODO
* @param[in]  cz TODO
* @param[in]  ipj TODO
* @param[in]  meta TODO
**
* @par Note 
*      You must begin by calling InitGenerateBySubsetPG_VOX and add data using AddGenerateBySubsetPG_VOX.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void EndGenerateBySubsetPG_VOX(void* p_geo, const int32_t* vox, const char* name, const double* ox, const double* oy, const double* oz, const double* cx, const double* cy, const double* cz, const int32_t* ipj, const int32_t* meta);

/**
* Get the area of the voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetArea_VOX(void* p_geo, const int32_t* vox, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z);

/**
* Get the location of a voxel with origin and scaled xyz vectors for use with GOCAD.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] origin_x TODO
* @param[out] origin_y TODO
* @param[out] origin_z TODO
* @param[out] vect_xx TODO
* @param[out] vect_xy TODO
* @param[out] vect_xz TODO
* @param[out] vect_yx TODO
* @param[out] vect_yy TODO
* @param[out] vect_yz TODO
* @param[out] vect_zx TODO
* @param[out] vect_zy TODO
* @param[out] vect_zz TODO
**
* @par Note 
*      This is used for GOCAD voxel calculations, and begins with the
*      origin at (0,0,0), not the actual location of the corner point.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void GetGOCADLocation_VOX(void* p_geo, const int32_t* vox, double* origin_x, double* origin_y, double* origin_z, double* vect_xx, double* vect_xy, double* vect_xz, double* vect_yx, double* vect_yy, double* vect_yz, double* vect_zx, double* vect_zy, double* vect_zz);

/**
* Get default cell sizes in X and Y for a section grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  az TODO
* @param[out] cell_size_x TODO
* @param[out] cell_size_y TODO
**
* @par Note 
*      This function determines default cell sizes for a vertical grid
*      slicing a voxel. It tries to match the "X" and "Y" sizes (in the grid
*      coordinates) with the projection of the voxel's cells onto the grid
*      plane. It uses a few simple rules:
*      
*      If the voxel is rotated about a horizontal axis (i.e. if its own "Z" axis
*      is not vertical, then both cell sizes are set to the smallest voxel dimension
*      (a single volume pixel) in X, Y and Z.
*      
*      If the voxel is "horizontal", then the angle between the
*      section azimuth and the voxel's own X and Y axes is used to
*      calculate a value which varies between the minimum X size and the
*      minimum Y size, and this is used for the grid's "X" cell size.
*      (in other words, if the section is parallel to the voxel "X" axis,
*      then the returned "X" cells size is equal to the voxel's minimum "Y" cell size.
*      The grid's "Y" cell size is set to the voxel's minimum "Z" cell size.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void GetGridSectionCellSizes_VOX(void* p_geo, const int32_t* vox, const double* az, double* cell_size_x, double* cell_size_y);

/**
* Get information about a voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] type TODO
* @param[out] array TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetInfo_VOX(void* p_geo, const int32_t* vox, int32_t* type, int32_t* array, int32_t* x, int32_t* y, int32_t* z);

/**
* Get the projection of the voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetIPJ_VOX(void* p_geo, const int32_t* vox, const int32_t* ipj);

/**
* Get the range of indices with non-dummy data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
**
* @par Note 
*      Find the non-dummy volume of a VOX object. If the voxel is all dummies,
*      returns iMAX for the minima, and iMIN for the maxima.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void GetLimits_VOX(void* p_geo, const int32_t* vox, int32_t* min_x, int32_t* min_y, int32_t* min_z, int32_t* max_x, int32_t* max_y, int32_t* max_z);

/**
* Get the range in true XYZ of non-dummy data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
**
* @par Note 
*      Find the non-dummy volume of a VOX in true (X, Y, Z). This method
*      works for voxels which are rotated or oriented in 3D, and returns
*      the true min and max X, Y and Z limits in the data.
*      The bounds are the bounds for the voxel
*      center points. If the voxel is all dummies,
*      returns rMAX for the minima, and rMIN for the maxima.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void GetLimitsXYZ_VOX(void* p_geo, const int32_t* vox, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z);

/**
* Get Location information
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] origin_x TODO
* @param[out] origin_y TODO
* @param[out] origin_z TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetLocation_VOX(void* p_geo, const int32_t* vox, double* origin_x, double* origin_y, double* origin_z, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Get the computed location points.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void GetLocationPoints_VOX(void* p_geo, const int32_t* vox, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Get the metadata of a voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetMETA_VOX(void* p_geo, const int32_t* vox, const int32_t* meta);

/**
* Get the location of a voxel with origin and scaled xyz vectors
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] origin_x TODO
* @param[out] origin_y TODO
* @param[out] origin_z TODO
* @param[out] vect_xx TODO
* @param[out] vect_xy TODO
* @param[out] vect_xz TODO
* @param[out] vect_yx TODO
* @param[out] vect_yy TODO
* @param[out] vect_yz TODO
* @param[out] vect_zx TODO
* @param[out] vect_zy TODO
* @param[out] vect_zz TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void GetRealLocation_VOX(void* p_geo, const int32_t* vox, double* origin_x, double* origin_y, double* origin_z, double* vect_xx, double* vect_xy, double* vect_xz, double* vect_yx, double* vect_yy, double* vect_yz, double* vect_zx, double* vect_zy, double* vect_zz);

/**
* Get Simple Location information
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] origin_x TODO
* @param[out] origin_y TODO
* @param[out] origin_z TODO
* @param[out] cell_x TODO
* @param[out] cell_y TODO
* @param[out] cell_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetSimpleLocation_VOX(void* p_geo, const int32_t* vox, double* origin_x, double* origin_y, double* origin_z, double* cell_x, double* cell_y, double* cell_z);

/**
* Get precomputed statistics on this object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @return ST object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t GetStats_VOX(void* p_geo, const int32_t* vox);

/**
* Get a copy of a thematic voxel's TPAT object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  tpat TODO
**
* @par Note 
*      Each row in the TPAT object corresponds to a stored index
*      value in the thematic voxel. The TPAT should NOT be modified
*      by the addition or deletion of items, if it is to be
*      restored into the VOX object, but the CODE, LABEL, DESCRIPTION
*      or COLOR info can be changed.
*      The TPAT object is stored inside the VOX META object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void GetTPAT_VOX(void* p_geo, const int32_t* vox, const int32_t* tpat);

/**
* Grid a VOX from point VV's.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  error TODO
* @param[in]  cell_size TODO
* @param[in]  var_only TODO
* @param[in]  min_radius TODO
* @param[in]  max_radius TODO
* @param[in]  min_points TODO
* @param[in]  max_points TODO
* @param[in]  model TODO
* @param[in]  power TODO
* @param[in]  slope TODO
* @param[in]  range TODO
* @param[in]  nugget TODO
* @param[in]  sill TODO
* @param[in]  type TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
* @param[in]  ipj TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t GridPoints_VOX(void* p_geo, const char* name, const char* error, const double* cell_size, const int32_t* var_only, const double* min_radius, const double* max_radius, const int32_t* min_points, const int32_t* max_points, const int32_t* model, const double* power, const double* slope, const double* range, const double* nugget, const double* sill, const int32_t* type, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d, const int32_t* ipj);

/**
* Grid a VOX from point VV's (using variable Z's)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  error TODO
* @param[in]  cell_size TODO
* @param[in]  cell_size_z TODO
* @param[in]  var_only TODO
* @param[in]  min_radius TODO
* @param[in]  max_radius TODO
* @param[in]  min_points TODO
* @param[in]  max_points TODO
* @param[in]  model TODO
* @param[in]  power TODO
* @param[in]  slope TODO
* @param[in]  range TODO
* @param[in]  nugget TODO
* @param[in]  sill TODO
* @param[in]  type TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
* @param[in]  ipj TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t GridPointsZ_VOX(void* p_geo, const char* name, const char* error, const double* cell_size, const char* cell_size_z, const int32_t* var_only, const double* min_radius, const double* max_radius, const int32_t* min_points, const int32_t* max_points, const int32_t* model, const double* power, const double* slope, const double* range, const double* nugget, const double* sill, const int32_t* type, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d, const int32_t* ipj);

/**
* Grid a VOX from point VV's (using variable Z's)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  error TODO
* @param[in]  cell_size TODO
* @param[in]  cell_size_z TODO
* @param[in]  var_only TODO
* @param[in]  min_radius TODO
* @param[in]  max_radius TODO
* @param[in]  min_points TODO
* @param[in]  max_points TODO
* @param[in]  model TODO
* @param[in]  power TODO
* @param[out] slope TODO
* @param[out] range TODO
* @param[in]  nugget TODO
* @param[out] sill TODO
* @param[in]  strike TODO
* @param[in]  dip TODO
* @param[in]  plunge TODO
* @param[in]  along_strike_weight TODO
* @param[in]  down_dip_weight TODO
* @param[in]  type TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
* @param[in]  ipj TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t GridPointsZEx_VOX(void* p_geo, const char* name, const char* error, const double* cell_size, const char* cell_size_z, const int32_t* var_only, const double* min_radius, const double* max_radius, const int32_t* min_points, const int32_t* max_points, const int32_t* model, const double* power, double* slope, double* range, const double* nugget, double* sill, const double* strike, const double* dip, const double* plunge, const double* along_strike_weight, const double* down_dip_weight, const int32_t* type, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d, const int32_t* ipj);

/**
* Check if this voxel can append to a surface file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  surface_file TODO
* @return 1 if can append
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iCanAppendTo_VOX(void* p_geo, const int32_t* vox, const char* surface_file);

/**
* Get the Location Strings
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[out] loc_x TODO
* @param[in]  loc_size_x TODO
* @param[out] loc_y TODO
* @param[in]  loc_size_y TODO
* @param[out] loc_z TODO
* @param[in]  loc_size_z TODO
* @param[in]  scale_x TODO
* @param[in]  scale_y TODO
* @param[in]  scale_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3.1
*/
GX_EXPORT void IGetCellSizeStrings_VOX(void* p_geo, const int32_t* vox, char* loc_x, const int32_t* loc_size_x, char* loc_y, const int32_t* loc_size_y, char* loc_z, const int32_t* loc_size_z, const double* scale_x, const double* scale_y, const double* scale_z);

/**
* Is this a thematic voxel?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @return 1 if VOX is thematic
**
* @par Note 
*      A thematic voxel is one where the stored integer values
*      represent indices into an internally stored TPAT object.
*      Thematic voxels contain their own color definitions, and
*      normal numerical operations, such as applying ITRs for display,
*      are not valid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iIsThematic_VOX(void* p_geo, const int32_t* vox);

/**
* Is this a vector voxel?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @return 1 if VOX is a vector voxel
**
* @par Note 
*      A vector voxel is one where each data element consists of 3 4-byte float values.
*      Vector voxels normally have the file type "geosoft_vectorvoxel".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT int32_t iIsVectorVoxel_VOX(void* p_geo, const int32_t* vox);

/**
* Set the Location Strings
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  loc_x TODO
* @param[in]  loc_y TODO
* @param[in]  loc_z TODO
* @return 0 - Ok
* 1 - Invalid data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3.1
*/
GX_EXPORT int32_t iSetCellSizeStrings_VOX(void* p_geo, const int32_t* vox, const char* loc_x, const char* loc_y, const char* loc_z);

/**
* Log grid a VOX from point VV's (using variable Z's)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  error TODO
* @param[in]  cell_size TODO
* @param[in]  cell_size_z TODO
* @param[in]  var_only TODO
* @param[in]  min_radius TODO
* @param[in]  max_radius TODO
* @param[in]  min_points TODO
* @param[in]  max_points TODO
* @param[in]  model TODO
* @param[in]  power TODO
* @param[out] slope TODO
* @param[out] range TODO
* @param[in]  nugget TODO
* @param[out] sill TODO
* @param[in]  strike TODO
* @param[in]  dip TODO
* @param[in]  plunge TODO
* @param[in]  along_strike_weight TODO
* @param[in]  down_dip_weight TODO
* @param[in]  log_opt TODO
* @param[in]  min_log TODO
* @param[in]  type TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
* @param[in]  ipj TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t LogGridPointsZEx_VOX(void* p_geo, const char* name, const char* error, const double* cell_size, const char* cell_size_z, const int32_t* var_only, const double* min_radius, const double* max_radius, const int32_t* min_points, const int32_t* max_points, const int32_t* model, const double* power, double* slope, double* range, const double* nugget, double* sill, const double* strike, const double* dip, const double* plunge, const double* along_strike_weight, const double* down_dip_weight, const int32_t* log_opt, const double* min_log, const int32_t* type, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d, const int32_t* ipj);

/**
* A more compact and extensible form of LogGridPointsZEx_VOX.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  cell_size TODO
* @param[in]  type TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
* @param[in]  ipj TODO
* @param[in]  reg TODO
* @return VOX Object
**
* @par Note 
*      Optional Parameters.
*      
*      If these values are not set in the REG, then default parameters will be used.
*      
*      ERROR_VOXEL:		Name of error VOX ("" for none)
*      CELLSIZEZ:      Z Cell size string (space delimited, "" for default)
*      RADIUS_MIN:		Minimum Search Radius (REAL) (Default = 4) (Blanking Distance)
*      RADIUS_MAX:		Maximum Search Radius (REAL) (Default = 16)
*      SEARCH_MIN:		Minimum Search Points (INT) (Default = 16)
*      SEARCH_MAX:		Maximum Search Points (INT) (Default = 32)
*      VARIOGRAM_ONLY: Set to 1 to calculate the variogram only (INT) (Default = 0)
*      MODEL:				Variogram Model number 1-power, 2-sperical, 3-gaussian, 4-exponential  (INT) (Default = 2)
*      POWER:          Power (Default = DUMMY)
*      SLOPE:          Slope (REAL) (if input is DUMMY, value calculated and set on return)
*      RANGE:          Range (REAL) (if input is DUMMY, value calculated and set on return)
*      SILL :          Sill (REAL) (if input is DUMMY, value calculated and set on return)
*      STRIKE:				Strike (REAL) (Default = 0)
*      DIP:					Dip (REAL)	(Default = 90)
*      PLUNGE:				Plunge (REAL) (Default = 0)
*      STRIKE WEIGHT:	Along-Strike Weight (REAL) (Default = 1)
*      DIP_WEIGHT:      Down-Dip Weight (REAL) (Default = 1)
*      LOG_OPT:			One of VOX_GRID_LOGOPT (Default = 0)
*      MIN_LOG:			Log Minimum (REAL)	(Default = 1)
*      MIN_X:				Minimum X (REAL) (default = DUMMY to determine from the data. If input, nearest lt. or eq. multiple of cell size chosen)
*      MAX_X:				Maximum X (REAL) (default = DUMMY to determine from the data. If input, nearest gt. or eq. multiple of cell size chosen)
*      MIN_Y:				Minimum Y (REAL) (default = DUMMY to determine from the data. If input, nearest lt. or eq. external multiple of cell size chosen)
*      MAX_Y:				Maximum Y (REAL) (default = DUMMY to determine from the data. If input, nearest gt. or eq. multiple of cell size chosen)
*      MIN_Z:				Minimum Z (REAL) (default = DUMMY to determine from the data. If input, nearest lt. or eq. multiple of cell size chosen)
*      MAX_Z:				Maximum Z (REAL) (default = DUMMY to determine from the data. If input, nearest gt. or eq. multiple of cell size chosen)A more compact and extensible form of LogGridPointsZEx_VOX. Only the most
*      basic parameters are entered directly. Optional parameters are passed via a REG object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT int32_t Krig_VOX(void* p_geo, const char* name, const double* cell_size, const int32_t* type, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d, const int32_t* ipj, const int32_t* reg);

/**
* Produces a new voxes using a formula on existing voxels/Grids
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  master TODO
* @param[in]  mastervar TODO
* @param[in]  output TODO
* @param[in]  outvar TODO
* @param[in]  formula TODO
* @param[in]  lst TODO
* @return VOXEL handle
**
* @par Note 
*      The input voxels must all be of the same type.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t Math_VOX(void* p_geo, const char* master, const char* mastervar, const char* output, const char* outvar, const char* formula, const int32_t* lst);

/**
* Merge two Voxels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox1 TODO
* @param[in]  vox2 TODO
* @param[in]  reg TODO
* @param[in]  output_vox TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void Merge_VOX(void* p_geo, const int32_t* vox1, const int32_t* vox2, const int32_t* reg, const char* output_vox);

/**
* Grid a VOX from point VV's using the Nearest Neighbours method.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  cell_size TODO
* @param[in]  max_radius TODO
* @param[in]  type TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
* @param[in]  ipj TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t NearestNeighbourGrid_VOX(void* p_geo, const char* name, const double* cell_size, const double* max_radius, const int32_t* type, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d, const int32_t* ipj);

/**
* Compute the Cell size based on specific Area
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  min_z TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  max_z TODO
* @return Cell Size
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT double rComputeCellSize_VOX(void* p_geo, const double* min_x, const double* min_y, const double* min_z, const double* max_x, const double* max_y, const double* max_z);

/**
* Regrid a Voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox_master TODO
* @param[in]  vox_to_regrid TODO
* @param[in]  reg TODO
* @param[in]  output_vox TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void ReGrid_VOX(void* p_geo, const int32_t* vox_master, const int32_t* vox_to_regrid, const int32_t* reg, const char* output_vox);

/**
* Resample a voxel over an input volume to a PG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  ipj TODO
* @param[in]  orig_x TODO
* @param[in]  orig_y TODO
* @param[in]  orig_z TODO
* @param[in]  spacing_x TODO
* @param[in]  spacing_y TODO
* @param[in]  spacing_z TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  size_z TODO
* @param[in]  min_z TODO
* @param[in]  max_z TODO
* @param[in]  interp TODO
* @return PG object, terminates on error
**
* @par Note 
*      Creates and dummies a PG object based on the input
*      dimensions, then resamples the voxel to the pager
*      at the locations determined by input projection, origin and spacings.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t ResamplePG_VOX(void* p_geo, const int32_t* vox, const int32_t* ipj, const double* orig_x, const double* orig_y, const double* orig_z, const double* spacing_x, const double* spacing_y, const double* spacing_z, const int32_t* size_x, const int32_t* size_y, const int32_t* size_z, const double* min_z, const double* max_z, const int32_t* interp);

/**
* Multiply all cell sizes by a fixed factor.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  scale TODO
**
* @par Note 
*      This is useful, for instance for converting sizes in one
*      unit to sizes in another unit if changing the projection
*      and the projection's unit changes, since the voxel inherits
*      its projection's units.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void RescaleCellSizes_VOX(void* p_geo, const int32_t* vox, const double* scale);

/**
* Sample a voxel at locations/elevations in a CDI database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  elev_ch TODO
* @param[in]  negative_depths_down TODO
* @param[in]  topo_ch TODO
* @param[in]  mode TODO
* @param[in]  out_ch TODO
**
* @par Note 
*      A "CDI" database does not need to be conductivity/depth.
*      It normally contains an array channel of depth values for
*      each (X, Y) location, with corresponding data array channels of
*      values taken at those (X, Y, Z) locations.
*      If the optional elevation channel is used, its value is used as an
*      offset to the depth channel values. Depths are positive down by
*      default; use the "Negative depths down" parameter if the depths
*      become more negative as you go deeper.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void SampleCDI_VOX(void* p_geo, const int32_t* vox, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* elev_ch, const int32_t* negative_depths_down, const int32_t* topo_ch, const int32_t* mode, const char* out_ch);

/**
* Sample a voxel at fixed elevations along a path in a CDI database, and output them to an array channel, deleting leading dummy values, and
* writing the elevation of the first non-dummy item to a topography channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  zvv TODO
* @param[in]  mode TODO
* @param[in]  out_ch TODO
* @param[in]  topo_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void SampleCDIToTopography_VOX(void* p_geo, const int32_t* vox, const int32_t* db, const int32_t* line, const int32_t* x_ch, const int32_t* y_ch, const int32_t* zvv, const int32_t* mode, const char* out_ch, const char* topo_ch);

/**
* Sample a voxel at multiple locations.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  zvv TODO
* @param[in]  interp TODO
* @param[in]  dvv TODO
**
* @par Note 
*      Sample at voxel at XYZ locations input in VVs. Values returned in a VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void SampleVV_VOX(void* p_geo, const int32_t* vox, const int32_t* xvv, const int32_t* yvv, const int32_t* zvv, const int32_t* interp, const int32_t* dvv);

/**
* Set the projection of the voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetIPJ_VOX(void* p_geo, const int32_t* vox, const int32_t* ipj);

/**
* Set Location information
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  origin_x TODO
* @param[in]  origin_y TODO
* @param[in]  origin_z TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetLocation_VOX(void* p_geo, const int32_t* vox, const double* origin_x, const double* origin_y, const double* origin_z, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Set the metadata of a voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetMETA_VOX(void* p_geo, const int32_t* vox, const int32_t* meta);

/**
* Set the Voxel Origin
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  origin TODO
* @param[in]  origin_x TODO
* @param[in]  origin_y TODO
* @param[in]  origin_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3.1
*/
GX_EXPORT void SetOrigin_VOX(void* p_geo, const int32_t* vox, const int32_t* origin, const double* origin_x, const double* origin_y, const double* origin_z);

/**
* Set Simple Location information
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  origin_x TODO
* @param[in]  origin_y TODO
* @param[in]  origin_z TODO
* @param[in]  cell_x TODO
* @param[in]  cell_y TODO
* @param[in]  cell_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetSimpleLocation_VOX(void* p_geo, const int32_t* vox, const double* origin_x, const double* origin_y, const double* origin_z, const double* cell_x, const double* cell_y, const double* cell_z);

/**
* Set a thematic voxel's TPAT object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  tpat TODO
**
* @par Note 
*      Each row in the TPAT object corresponds to a stored index
*      value in the thematic voxel. The TPAT should NOT be modified
*      by the addition or deletion of items, if it is to be
*      restored into the VOX object, but the CODE, LABEL, DESCRIPTION
*      or COLOR info can be changed.
*      The TPAT object is stored inside the VOX META object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetTPAT_VOX(void* p_geo, const int32_t* vox, const int32_t* tpat);

/**
* Extract a slice of a voxel based on an IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  name TODO
* @param[in]  ipj TODO
* @param[in]  mode TODO
* @param[in]  orig_x TODO
* @param[in]  orig_y TODO
* @param[in]  cell_size_x TODO
* @param[in]  cell_size_y TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SliceIPJ_VOX(void* p_geo, const int32_t* vox, const char* name, const int32_t* ipj, const int32_t* mode, const double* orig_x, const double* orig_y, const double* cell_size_x, const double* cell_size_y, const int32_t* size_x, const int32_t* size_y);

/**
* Extract multiple slices of a voxel based on an IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  name TODO
* @param[in]  ipj TODO
* @param[in]  mode TODO
* @param[in]  orig_x TODO
* @param[in]  orig_y TODO
* @param[in]  cell_size_x TODO
* @param[in]  cell_size_y TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  layers TODO
* @param[in]  start_elev TODO
* @param[in]  elev_inc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void SliceMultiLayerIPJ_VOX(void* p_geo, const int32_t* vox, const char* name, const int32_t* ipj, const int32_t* mode, const double* orig_x, const double* orig_y, const double* cell_size_x, const double* cell_size_y, const int32_t* size_x, const int32_t* size_y, const int32_t* layers, const double* start_elev, const double* elev_inc);

/**
* Subset a VOX to real extents.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  output_vox TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void SubsetToRealExtents_VOX(void* p_geo, const int32_t* vox, const char* output_vox);

/**
* Syncronize the Metadata for this Voxel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void Sync_VOX(void* p_geo, const char* name);

/**
* Window a VOX to a PLY file and Z.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  pply TODO
* @param[in]  mask TODO
* @param[in]  min_z TODO
* @param[in]  max_z TODO
* @param[in]  output_vox TODO
* @param[in]  clip_dummies TODO
**
* @par Note 
*      The voxel is windowed horizontally to the input PLY file.
*      Optionally, it will be windowed to the input Z range as well.
*      The output can be clipped to the non-dummied cells.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void WindowPLY_VOX(void* p_geo, const int32_t* vox, const int32_t* pply, const int32_t* mask, const double* min_z, const double* max_z, const char* output_vox, const int32_t* clip_dummies);

/**
* Window a VOX to ranges in X, Y and Z.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  min_z TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  max_z TODO
* @param[in]  output_vox TODO
* @param[in]  clip_dummies TODO
**
* @par Note 
*      The six minima and maxima are optional.
*      The output can be clipped to the non-dummied cells.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.3
*/
GX_EXPORT void WindowXYZ_VOX(void* p_geo, const int32_t* vox, const double* min_x, const double* min_y, const double* min_z, const double* max_x, const double* max_y, const double* max_z, const char* output_vox, const int32_t* clip_dummies);

/**
* Export the VOX to XML
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void WriteXML_VOX(void* p_geo, const int32_t* vox, const char* file);

/**
* Convert numeric voxel to thematic (lithology) voxel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  vv_translate TODO
* @param[in]  output_vox TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void ConvertNumericToThematic_VOX(void* p_geo, const int32_t* vox, const int32_t* vv_translate, const char* output_vox);

/**
* Convert thematic (lithology) voxel to numeric voxel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  vv_translate TODO
* @param[in]  output_vox TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void ConvertThematicToNumeric_VOX(void* p_geo, const int32_t* vox, const int32_t* vv_translate, const char* output_vox);

/**
* Produces a density voxel using the velocity values in this voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  input_scaling_factor TODO
* @param[in]  a5 TODO
* @param[in]  a4 TODO
* @param[in]  a3 TODO
* @param[in]  a2 TODO
* @param[in]  a1 TODO
* @param[in]  a0 TODO
* @param[in]  output_scaling_factor TODO
* @param[in]  output_voxel_filename TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void ConvertVelocityToDensity_VOX(void* p_geo, const int32_t* vox, const double* input_scaling_factor, const double* a5, const double* a4, const double* a3, const double* a2, const double* a1, const double* a0, const double* output_scaling_factor, const char* output_voxel_filename);

/**
* Produces a density voxel using the velocity values in this voxel, as long as the velocity values are in range.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  input_scaling_factor TODO
* @param[in]  input_lower_bound TODO
* @param[in]  input_upper_bound TODO
* @param[in]  a5 TODO
* @param[in]  a4 TODO
* @param[in]  a3 TODO
* @param[in]  a2 TODO
* @param[in]  a1 TODO
* @param[in]  a0 TODO
* @param[in]  output_scaling_factor TODO
* @param[in]  output_voxel_filename TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void ConvertVelocityInRangeToDensity_VOX(void* p_geo, const int32_t* vox, const double* input_scaling_factor, const double* input_lower_bound, const double* input_upper_bound, const double* a5, const double* a4, const double* a3, const double* a2, const double* a1, const double* a0, const double* output_scaling_factor, const char* output_voxel_filename);

/**
* Produces a velocity voxel using the density values in this voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  input_scaling_factor TODO
* @param[in]  input_lower_bound TODO
* @param[in]  input_upper_bound TODO
* @param[in]  a5 TODO
* @param[in]  a4 TODO
* @param[in]  a3 TODO
* @param[in]  a2 TODO
* @param[in]  a1 TODO
* @param[in]  a0 TODO
* @param[in]  output_scaling_factor TODO
* @param[in]  output_voxel_filename TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void ConvertDensityToVelocity_VOX(void* p_geo, const int32_t* vox, const double* input_scaling_factor, const double* input_lower_bound, const double* input_upper_bound, const double* a5, const double* a4, const double* a3, const double* a2, const double* a1, const double* a0, const double* output_scaling_factor, const char* output_voxel_filename);

/**
* Convert an inverted voxel to normal orientation
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  output_voxel_filename TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void InvertZ_VOX(void* p_geo, const int32_t* vox, const char* output_voxel_filename);

/**
* IDWGridDB_VOX     Inverse-distance weighting gridding method, DB version, 3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel TODO
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  data TODO
* @param[in]  reg TODO
**
* @par Note 
*      3D cells take on the averaged values within a search radius, weighted inversely by distance.
*      
*      Weighting can be controlled using the power and slope properties;
*      
*      weighting = 1 / (distance^wtpower + 1/slope) where distance is in
*      units of grid cells (X dimenstion). Default is 0.0,
*      
*      If the blanking distance is set, all cells whose center point is not within the blanking distance of
*      at least one data point are set to dummy.
*      
*      REG Parameters:
*      
*      X0, Y0, Z0, DX, DY, DZ: Voxel origin, and cell sizes (required)
*      WT_POWER (default=2), WT_SLOPE (default=1) Weighting function parameters
*      SEARCH_RADIUS: Distance weighting limit (default = 4 * CUBE_ROOT(DX*DY*DZ))
*      BLANKING_DISTANCE: Dummy values farther from data than this distance. (default = 4 * CUBE_ROOT(DX*DY*DZ))
*      LOG: Apply log transform to input data before gridding (0:No (default), 1:Yes)?
*      LOG_BASE: One of VV_LOG_BASE_10 (default) or VV_LOG_BASE_E
*      LOG_NEGATIVE: One of VV_LOG_NEGATIVE_NO (default) or VV_LOG_NEGATIVE_YES
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void IDWGridDB_VOX(void* p_geo, const char* voxel, const int32_t* db, const int32_t* x, const int32_t* y, const int32_t* z, const int32_t* data, const int32_t* reg);

/**
* TINGridDB_VOX   TIN-Gridding, DB version, 3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel TODO
* @param[in]  db TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  data TODO
* @param[in]  method TODO
* @param[in]  z_cell TODO
* @param[in]  reg TODO
**
* @par Note 
*      Designed for data in array channels position vertically at single XY locations.
*      Creates a TIN using the XY locations and uses the coefficients for the top layer on
*      each layer below to make it efficient.
*      
*      REG Parameters:
*      
*      X0, Y0, Z0, DX, DY, DZ: Voxel origin, and cell sizes (required)
*      NX, NY, NZ: Voxel dimensions.
*      DZ and NZ are used only if the input cell sizes VV is of zero length.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.5
*/
GX_EXPORT void TINGridDB_VOX(void* p_geo, const char* voxel, const int32_t* db, const int32_t* x, const int32_t* y, const int32_t* z, const int32_t* data, const int32_t* method, const int32_t* z_cell, const int32_t* reg);

/**
* Get the UUID
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxel_file TODO
* @param[out] p_uuid_string TODO
* @param[in]  p_uuid_string_len TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void IGetMultiVoxsetGUID_VOX(void* p_geo, const char* voxel_file, char* p_uuid_string, const int32_t* p_uuid_string_len);

/**
* Generate a VOX from a GOCAD File
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  header TODO
* @param[in]  property TODO
* @param[in]  ipj TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t GenerateGOCAD_VOX(void* p_geo, const char* name, const char* header, const char* property, const int32_t* ipj);

/**
* Generate a VOX from a GOCAD File
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  header TODO
* @param[in]  property TODO
* @param[in]  ipj TODO
* @param[in]  orientation TODO
* @return VOX Object
**
* @par Note 
*      Allows the Orientation flag to be specified.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t GenerateOrientedGOCAD_VOX(void* p_geo, const char* name, const char* header, const char* property, const int32_t* ipj, const int32_t* orientation);

/**
* Generate a VOX from a UBC File
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  mesh TODO
* @param[in]  mod TODO
* @param[in]  dummy TODO
* @param[in]  ipj TODO
* @return VOX Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t GenerateUBC_VOX(void* p_geo, const char* name, const char* mesh, const char* mod, const double* dummy, const int32_t* ipj);

/**
* Generate a VOX from an XYZ File
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  ra TODO
* @param[in]  type TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void GenerateXYZ_VOX(void* p_geo, const char* name, const int32_t* ra, const int32_t* type, const int32_t* ipj);

/**
* List all the properties available in this GOCAD file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  header TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void ListGOCADProperties_VOX(void* p_geo, const char* header, const int32_t* lst);

/**
* Export a Voxel to a database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  dir TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  dummies TODO
**
* @par Note 
*      The database lines contain a slice of the voxel at a time.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void ExportDB_VOX(void* p_geo, const int32_t* vox, const int32_t* db, const char* chan, const int32_t* dir, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const int32_t* dummies);

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
