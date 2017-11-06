//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file gis_gxlib.h
* @date 2017-11-06
* @brief File containing GIS GX C API constant and function declarations
*/

/**
* @defgroup GIS_Module GIS
* The GIS class is used for the import, export,
* and interrogation of GIS Data stored in external formats,
* such as MapInfo® TAB files.
* @{
*/

#pragma once
#ifndef HGIS_H_DEFINED
#define HGIS_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name GIS_MAP2D Definitions
* 
* View type to create
*/
///@{
/** 
* GIS_MAP2D_PLAN
* 
* Plan view
*/
#define GIS_MAP2D_PLAN 0
/** 
* GIS_MAP2D_EWSECTION
* 
* Section view, East-West
*/
#define GIS_MAP2D_EWSECTION 1
/** 
* GIS_MAP2D_NSSECTION
* 
* Section view, North-South
*/
#define GIS_MAP2D_NSSECTION 2
///@}

/**
* @name GIS_TYPE Definitions
* 
* Type of file
*/
///@{
/** 
* GIS_TYPE_MAPINFO
* 
* Mapinfo Files
*/
#define GIS_TYPE_MAPINFO 1
/** 
* GIS_TYPE_ARCVIEW
* 
* ArcView files
*/
#define GIS_TYPE_ARCVIEW 2
/** 
* GIS_TYPE_DGN
* 
* Microstation DGN files
*/
#define GIS_TYPE_DGN 3
/** 
* GIS_TYPE_SURPAC
* 
* Surpac STR and DTM files
*/
#define GIS_TYPE_SURPAC 4
/** 
* GIS_TYPE_DATAMINE
* 
* Datamine DM files
*/
#define GIS_TYPE_DATAMINE 5
/** 
* GIS_TYPE_GEMCOM
* 
* GEMCOM files
*/
#define GIS_TYPE_GEMCOM 6
/** 
* GIS_TYPE_MICROMINE
* 
* MICROMINE files
*/
#define GIS_TYPE_MICROMINE 7
/** 
* GIS_TYPE_MINESIGHT
* 
* MINESIGHT files
*/
#define GIS_TYPE_MINESIGHT 8
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Creates a GIS Object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  info TODO
* @param[in]  type TODO
* @return GIS Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_GIS(void* p_geo, const char* file, const char* info, const int32_t* type);

/**
* CreateMap2D_GIS   Create a new 2D map for GIS imports.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  map TODO
* @param[in]  map_scale TODO
* @param[in]  ipj TODO
* @param[in]  map2_d TODO
**
* @par Note 
*      This function was created to minimize duplication in
*      creation of new maps with 2D views.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void CreateMap2D_GIS(void* p_geo, const int32_t* gis, const char* map, const double* map_scale, const int32_t* ipj, const int32_t* map2_d);

/**
* Destroy GIS instance
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_GIS(void* p_geo, const int32_t* gis);

/**
* Get a LST of block models contained in a Gemcom BPR or BRP2 file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  file TODO
* @param[in]  lst TODO
**
* @par Note 
*      The Returned LST has items in the following format:
*      
*      Name:  If there is only one sub-directory with models, then only
*      the block model name "Rock Type_5" is required to ensure uniqueness.
*      If there is more than one sub-directory, then the name is set
*      to (.e.g.) "[Standard]Rock Type_5"
*      Value: Sub-directory file path  "Standard\Rock Type_5.BLK", (includes the extension).
*      
*      The Gemcom BPR and BPR2 files keep their block models in one
*      or more sub-directories, identified in the *.CAT file located
*      beside the input BPR or BPR2.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void GetBPRModelsLST_GIS(void* p_geo, const int32_t* gis, const char* file, const int32_t* lst);

/**
* Get the GIS IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @return IPJ handle
* NULL if error
**
* @par Note 
*      This is your copy, you must destroy it.
*      If the GIS does not have an IPJ, an IPJ with
*      no warp and UNKNOWN projection is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetIPJ_GIS(void* p_geo, const int32_t* gis);

/**
* Get the GIS META
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetMETA_GIS(void* p_geo, const int32_t* gis, const int32_t* meta);

/**
* Get the range of data in the GIS
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[out] x_min TODO
* @param[out] x_max TODO
* @param[out] y_min TODO
* @param[out] y_max TODO
* @param[out] z_min TODO
* @param[out] z_max TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetRange_GIS(void* p_geo, const int32_t* gis, double* x_min, double* x_max, double* y_min, double* y_max, double* z_min, double* z_max);

/**
* Returns the type of a Datamine file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return Datamine file types - bitwise AND of types.
**
* @par Note 
*      Terminates if file is not a Datamine file.
*      A datamine file can contain fields from a multitude
*      of types, so use iAnd_MATH or iOr_MATH to determine if
*      the file contains the required data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iDatamineType_GIS(void* p_geo, const char* file);

/**
* Get the file name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void IGetFileName_GIS(void* p_geo, const int32_t* gis, char* name, const int32_t* length);

/**
* Returns TRUE if file is a MapInfo MAP file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return 0 if not a MapInfo MAP file
* 1 if it is.
**
* @par Note 
*      It is important not to overwrite a MapInfo MAP file
*      with a Geosoft one. Use this function to test the MAP
*      file (looks at the first few bytes).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iIsMIMapFile_GIS(void* p_geo, const char* map);

/**
* Returns TRUE if file is a MapInfo Raster TAB file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tab TODO
* @return 0 if not a MapInfo Raster TAB file
* 1 if it is.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iIsMIRasterTabFile_GIS(void* p_geo, const char* tab);

/**
* Returns TRUE if file is a rotated MapInfo Raster TAB file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tab TODO
* @return 0 if not a rotated MapInfo Raster TAB file
* 1 if it is (see conditions below).
**
* @par Note 
*      Returns 1 if:
*      
*          a) This is a MapInfo RASTER file
*          b) A three-point warp is defined.
*          c) The warp requires a rotation in order to exactly map
*             the input and output warp points. The rotation must
*             be at least 1.e-6 radians.
*      
*      This function will register an error (and return 0)
*      if problems are encountered opening or reading the TAB file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t iIsMIRotatedRasterTabFile_GIS(void* p_geo, const char* tab);

/**
* Returns TRUE if an ArcView SHP file is type POINTZ, ARCZ, POLYGONZ or MULTIPOINTZ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @return 0 if the SHP file is 2D
* 1 if the SHP file is of type POINTZ, ARCZ, POLYGONZ or MULTIPOINTZ
**
* @par Note 
*      SHP files come in 2D and 3D forms.
*      Fails if not GIS_TYPE_ARCVIEW.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iIsSHPFile3D_GIS(void* p_geo, const int32_t* gis);

/**
* Returns TRUE if an ArcView SHP file is type POINT or POINTZ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @return 0 if the SHP file is not points
* if the SHP file is of type POINT or POINTZ
**
* @par Note 
*      Fails if not GIS_TYPE_ARCVIEW.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT int32_t iIsSHPFilePoint_GIS(void* p_geo, const int32_t* gis);

/**
* The number of attribute fields in the GIS dataset
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @return The number of attribute fields
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT int32_t iNumAttribs_GIS(void* p_geo, const int32_t* gis);

/**
* The number of shape entities in the GIS dataset
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @return The number of shape entities
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT int32_t iNumShapes_GIS(void* p_geo, const int32_t* gis);

/**
* Scan and set up a MapInf RASTER.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tab TODO
* @param[out] file TODO
* @param[in]  file_len TODO
* @param[in]  ipj TODO
**
* @par Note 
*      This will create a GI file for the raster image.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IScanMIRasterTabFile_GIS(void* p_geo, const char* tab, char* file, const int32_t* file_len, const int32_t* ipj);

/**
* Save GIS attribute table information (string fields) into a WA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  wa TODO
**
* @par Note 
*      All string fields (excluding X/Y and numerical fields) will be saved into the WA columns.
*      
*      e field names are saved in the first line, followed by a blank line.
*      e field columns are separated by a tab (delimited character).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void LoadASCII_GIS(void* p_geo, const int32_t* gis, const int32_t* wa);

/**
* Load GIS table information into a GDB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  db TODO
**
* @par Note 
*      All fields of the database will be loaded into the group.
*      
*      Channels will use the same name (or a allowable alias) as
*      the GIS field name.
*      
*      If a channel does not exist, it will be created based on the
*      characteristics of the GIS field.
*      
*      If a channel exists, it will be used as-is.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadGDB_GIS(void* p_geo, const int32_t* gis, const int32_t* db);

/**
* Load GIS table drawing into a MVIEW.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  mview TODO
**
* @par Note 
*      The GIS drawing will be drawin in the current group.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadMAP_GIS(void* p_geo, const int32_t* gis, const int32_t* mview);

/**
* Load GIS table drawing into a MAP.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  map TODO
* @param[in]  view_name TODO
**
* @par Note 
*      The GIS drawing will be drawin in the current group.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void LoadMAPEx_GIS(void* p_geo, const int32_t* gis, const int32_t* map, const char* view_name);

/**
* Load GIS table drawing into a MVIEW.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  mview TODO
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  prefix TODO
* @param[in]  name_field TODO
**
* @par Note 
*      The GIS drawing will be drawn in the current group.
*      A group will be created for every entity and data items
*      containing an entity's field will be added to the Meta
*      information of every group into the class specified.
*      Note that the map may grow very large for big datasets.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void LoadMetaGroupsMAP_GIS(void* p_geo, const int32_t* gis, const int32_t* mview, const int32_t* meta, const int32_t* ph_object, const char* prefix, const char* name_field);

/**
* Load GIS table drawing into a Multi-Polygon object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  ply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void LoadPLY_GIS(void* p_geo, const int32_t* gis, const int32_t* ply);

/**
* Load GIS shapes table information into separate lines in a GDB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  db TODO
**
* @par Note 
*      All fields of the database will be loaded into the group.
*      
*      Channels will use the same name (or a allowable alias) as
*      the GIS field name.
*      
*      If a channel does not exist, it will be created based on the
*      characteristics of the GIS field.
*      
*      If a channel exists, it will be used as-is.
*      
*      The shape ID will be used as the line numbers.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void LoadShapesGDB_GIS(void* p_geo, const int32_t* gis, const int32_t* db);

/**
* Specify the wireframe point file corresponding to the input file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  file TODO
**
* @par Note 
*      Datamine wireframe models are specified by pairs of files,
*      the first is the triangle node file, and the second gives
*      the XYZ locations of the node points. This
*      function allows you to specify the latter when reading the
*      first, so that the full model can be decoded.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetDmWireframePtFile_GIS(void* p_geo, const int32_t* gis, const char* file);

/**
* Save the IPJ back to GIS file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void SetIPJ_GIS(void* p_geo, const int32_t* gis, const int32_t* ipj);

/**
* Save a LST of items inside the GIS object for special use.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  lst TODO
**
* @par Note 
*      If the GIS LST object already exists, it is destroyed and
*      recreated to match the size of the input LST, before the
*      input LST is copied to it.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void SetLST_GIS(void* p_geo, const int32_t* gis, const int32_t* lst);

/**
* Save the META back to GIS
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void SetMETA_GIS(void* p_geo, const int32_t* gis, const int32_t* meta);

/**
* Set the triangulation object index (Micromine)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gis TODO
* @param[in]  i_toi TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void SetTriangulationObjectIndex_GIS(void* p_geo, const int32_t* gis, const int32_t* i_toi);

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
