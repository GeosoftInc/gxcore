//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file arcmap_gxlib.h
* @date 2017-11-06
* @brief File containing ARCMAP GX C API constant and function declarations
*/

/**
* @defgroup ARCMAP_Module ARCMAP
* This library is not a class. It contains various utilities
* used in maps and layers by the Geosoft extensions for ArcGIS.
* @{
*/

#pragma once
#ifndef HARCMAP_H_DEFINED
#define HARCMAP_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name ARCMAP_LOAD_FLAGS Definitions
* 
* Flags that can be combined and passed to iLoadMap_ARCMAP
*/
///@{
/** 
* ARCMAP_LOAD_DELFRAME
* 
* If an existing frame is found delete it
*/
#define ARCMAP_LOAD_DELFRAME 1
/** 
* ARCMAP_LOAD_DELLAYER
* 
* If an existing layer is found delete it
*/
#define ARCMAP_LOAD_DELLAYER 2
/** 
* ARCMAP_LOAD_EXISTFRAME
* 
* If an existing frame is found add new layers to it
*/
#define ARCMAP_LOAD_EXISTFRAME 4
/** 
* ARCMAP_LOAD_COPYLAYER
* 
* If an existing layer is found make a copy
*/
#define ARCMAP_LOAD_COPYLAYER 8
/** 
* ARCMAP_LOAD_HIDESIBLINGS
* 
* Hide all other existing layers in frame
*/
#define ARCMAP_LOAD_HIDESIBLINGS 16
/** 
* ARCMAP_LOAD_PREFIXMAPFRAME
* 
* Prefix the map filename part as part of the frame name
*/
#define ARCMAP_LOAD_PREFIXMAPFRAME 32
/** 
* ARCMAP_LOAD_PREFIXMAPLAYER
* 
* Prefix the map filename part as part of the layer name
*/
#define ARCMAP_LOAD_PREFIXMAPLAYER 64
/** 
* ARCMAP_LOAD_MERGETOSINGLEVIEW
* 
* Will render all views in single layer with the data view defining the coordinate system
*/
#define ARCMAP_LOAD_MERGETOSINGLEVIEW 128
/** 
* ARCMAP_LOAD_INTOCURRENTFRAME
* 
* Load everything into the current data frame
*/
#define ARCMAP_LOAD_INTOCURRENTFRAME 256
/** 
* ARCMAP_LOAD_NOMAPLAYERS
* 
* Use the map only for sizing data frames in layout, only load extra datasets.
*/
#define ARCMAP_LOAD_NOMAPLAYERS 512
/** 
* ARCMAP_LOAD_ACTIVATE
* 
* Activates the main quickmap layer when done (e.g. 3D Viewer)
*/
#define ARCMAP_LOAD_ACTIVATE 1024
/** 
* ARCMAP_LOAD_NEW
* 
* New method for loading maps introduced in 7.1. Will mimic what happens in montaj (i.e. base groups and 3D become graphics and views gets split into separate LYRs).
*/
#define ARCMAP_LOAD_NEW 2048
/** 
* ARCMAP_LOAD_NAMETAGISPREFIX
* 
* Use a provided name tag as prefix when naming a newly created map layer.
*/
#define ARCMAP_LOAD_NAMETAGISPREFIX 4096
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Changes the custom page size of the ArcGIS Map document.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x TODO
* @param[in]  y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void ChangeSize_ARCMAP(void* p_geo, const double* x, const double* y);

/**
* Display a file in 3D view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void DisplayIn3DView_ARCMAP(void* p_geo, const char* file);

/**
* Exports the shapes from a feature layer of the ArcMap document to a 3D File.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mxd_file TODO
* @param[in]  dataframe_name TODO
* @param[in]  layer_name TODO
* @param[in]  output_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void ExportFeatureLayerByNameTo3DFile_ARCMAP(void* p_geo, const char* mxd_file, const char* dataframe_name, const char* layer_name, const char* output_file);

/**
* Exports the shapes from the currently selected feature layer (if any) in ArcMap to a 3D file (only on oriented frames i.e. sections).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  output_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void ExportSelectedFeatureLayerTo3DFile_ARCMAP(void* p_geo, const char* output_file);

/**
* Get some info on the current MXD in ArcMap and selected layer (if any)
*
* @param[in]  p_geo GX Context Pointer
* @param[out] mxd TODO
* @param[out] layer TODO
* @param[out] map TODO
* @param[in]  strings_length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void GetCurrentDocumentInfo_ARCMAP(void* p_geo, char* mxd, char* layer, char* map, const int32_t* strings_length);

/**
* Get the name info on the specified selected layer
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layer_number TODO
* @param[out] layer TODO
* @param[out] map TODO
* @param[in]  strings_length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void GetSelectedLayerInfo_ARCMAP(void* p_geo, const int32_t* layer_number, char* layer, char* map, const int32_t* strings_length);

/**
* Get the number of selected layers in the TOC
* 
* Returns									 The number of layers selected.
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iGetNumberOfSelectedLayers_ARCMAP(void* p_geo);

/**
* Loads a Geosoft map into the ArcMap document.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  extra_csv TODO
* @param[in]  layer_tag TODO
* @param[in]  flags TODO
* @return 0 - OK
* 1 - Error
* -1 - Canceled
**
* @par Note 
*      The extra datasets CSV should contain the the following fields:
*      
*       ID          -  Unique identifier
*       DATASOURCE  -  Filename
*       TYPE        -  RASTER and SHAPE supported
*       MAPMATCH    -  Map to associate with (used for grouping logic)
*       VIEWMATCH   -  View to match with in associated map (used for grouping logic)
*       ZONEFILE    -  Used for type RASTER
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iLoadMAP_ARCMAP(void* p_geo, const char* map, const char* extra_csv, const char* layer_tag, const int32_t* flags);

/**
* Loads a Geosoft map into the ArcMap document, specifying which View to use as Data view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @param[in]  extra_csv TODO
* @param[in]  layer_tag TODO
* @param[in]  flags TODO
* @return 0 - OK
* 1 - Error
* -1 - Canceled
**
* @par Note 
*      The extra datasets CSV should contain the the following fields:
*      
*       ID          -  Unique identifier
*       DATASOURCE  -  Filename
*       TYPE        -  RASTER and SHAPE supported
*       MAPMATCH    -  Map to associate with (used for grouping logic)
*       VIEWMATCH   -  View to match with in associated map (used for grouping logic)
*       ZONEFILE    -  Used for type RASTER
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iLoadMAPEx_ARCMAP(void* p_geo, const char* map, const char* view, const char* extra_csv, const char* layer_tag, const int32_t* flags);

/**
* Load a shape file into ArcMap.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  delete_existing TODO
* @return 0- OK, 1 - Error, -1 - Cancel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iLoadShape_ARCMAP(void* p_geo, const char* shp, const int32_t* delete_existing);

/**
* Load all the shape files generated by importing a SPF into ArcMap.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  num_shp TODO
* @return 0- OK, 1 - Error, -1 - Cancel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iLoadSPF_ARCMAP(void* p_geo, const char* shp, const int32_t* num_shp);

/**
* Load a LYR file to the current data frame
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void LoadLYR_ARCMAP(void* p_geo, const char* file);

/**
* Loads a Geosoft map into the current ArcMap document
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @param[in]  extra_csv TODO
* @param[in]  layer_tag TODO
* @param[in]  fit TODO
* @param[in]  activate TODO
* @param[in]  prefix TODO
**
* @par Note 
*      The extra datasets CSV should contain the the following fields:
*      
*          ID          -  Unique identifier
*          DATASOURCE  -  Filename
*          TYPE        -  RASTER and SHAPE supported
*          MAPMATCH    -  Map to associate with (used for grouping logic)
*          VIEWMATCH   -  View to match with in associated map (used for grouping logic)
*          ZONEFILE    -  Used for type RASTER
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void LoadMap_ARCMAP(void* p_geo, const char* map, const char* view, const char* extra_csv, const char* layer_tag, const int32_t* fit, const int32_t* activate, const int32_t* prefix);

/**
* Load a Geosoft Map as a layer into the current data frame
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @param[in]  layer TODO
* @param[in]  all TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void LoadMapView_ARCMAP(void* p_geo, const char* map, const char* view, const char* layer, const int32_t* all);

/**
* Load a raster file to the current data frame
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
**
* @par Note 
*      Loads any file type recognized as "raster" formats by ARC GIS.
*      This includes geosoft GRD files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void LoadRaster_ARCMAP(void* p_geo, const char* file);

/**
* Load a SHP file to the current data frame
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  layer_prefix TODO
* @param[in]  layer_suffix TODO
**
* @par Note 
*      The input layer name is created using the (optional) prefix and suffix as follows:
*      
*      Prefix_NAME_Suffix
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void LoadShape_ARCMAP(void* p_geo, const char* file, const char* layer_prefix, const char* layer_suffix);

/**
* Create SHP file(s) from a Geosoft Map view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @param[in]  shp TODO
* @param[in]  lst TODO
**
* @par Note 
*      The output SHP file name(s) are made up as follows
*      (where NAME is the input SHP file name):
*      
*            NAME_pt.shp    (point objects)
*            NAME_ln.shp    (line or arc objects)
*            NAME_pg.shp    (polygon objects)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void MapViewToShape_ARCMAP(void* p_geo, const char* map, const char* view, const char* shp, const int32_t* lst);

/**
* Query the page size in mm of the entire map page.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void QuerySize_ARCMAP(void* p_geo, double* x, double* y);

/**
* Shows a layer in ArcMap in a 3D view in an MXD
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mxd_file TODO
* @param[in]  dataframe_name TODO
* @param[in]  layer_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void ShowLayerByNameIn3D_ARCMAP(void* p_geo, const char* mxd_file, const char* dataframe_name, const char* layer_name);

/**
* Shows the selected layers in ArcMap in a 3D view
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void ShowSelectedLayersIn3D_ARCMAP(void* p_geo);

/**
* Fills an IPJ with a predefined ESRI GCS
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  esri_gcs_code TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void GetIPJForPredefinedEsriGCS_ARCMAP(void* p_geo, const int32_t* ipj, const int32_t* esri_gcs_code);

/**
* Fills an IPJ with a predefined ESRI PCS
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  esri_pcs_code TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void GetIPJForPredefinedEsriPCS_ARCMAP(void* p_geo, const int32_t* ipj, const int32_t* esri_pcs_code);

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
