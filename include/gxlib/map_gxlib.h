//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file map_gxlib.h
* @date 2017-11-06
* @brief File containing MAP GX C API constant and function declarations
*/

/**
* @defgroup MAP_Module MAP
* MAPs are containers for MVIEW objects. A view is a 3-D translation
* and a clip window on a map. Graphic entities can be drawn in an MVIEW.
* It is recommended that the MAP class be instantiated by first creating
* an EMAP object and calling the Lock_EMAP function.
* (See the explanation on the distinction between the MAP and EMAP classes).
* @{
*/

#pragma once
#ifndef HMAP_H_DEFINED
#define HMAP_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DUPMAP Definitions
* 
* Duplicate Modes
*/
///@{
/** 
* DUPMAP_BLANK
* 
* Blank
*/
#define DUPMAP_BLANK 0
/** 
* DUPMAP_COPY
* 
* Copy all current contents
*/
#define DUPMAP_COPY 1
/** 
* DUPMAP_COPY_PRE62
* 
* Copy all current contents and save text for pre-6.2 versions.
*/
#define DUPMAP_COPY_PRE62 2
///@}

/**
* @name MAP_EXPORT_BITS Definitions
* 
* Color Types
*/
///@{
/** 
* MAP_EXPORT_BITS_24
* 
* 24 Bit Color
*/
#define MAP_EXPORT_BITS_24 24
/** 
* MAP_EXPORT_BITS_GREY8
* 
* 8 Bit Gray Scale
*/
#define MAP_EXPORT_BITS_GREY8 9
/** 
* MAP_EXPORT_BITS_8
* 
* 8 Bit Color
*/
#define MAP_EXPORT_BITS_8 8
/** 
* MAP_EXPORT_BITS_GREY4
* 
* 4 Bit Gray Scale
*/
#define MAP_EXPORT_BITS_GREY4 5
/** 
* MAP_EXPORT_BITS_4
* 
* 4 Bit Color
*/
#define MAP_EXPORT_BITS_4 4
/** 
* MAP_EXPORT_BITS_GREY1
* 
* 1 Bit Gray Scale
*/
#define MAP_EXPORT_BITS_GREY1 1
/** 
* MAP_EXPORT_BITS_DEFAULT
* 
* Default Resolution
*/
#define MAP_EXPORT_BITS_DEFAULT 0
///@}

/**
* @name MAP_EXPORT_FORMAT Definitions
* 
* Export Formats
* Format   Description                  Type
* =======  ==========================   ====
*/
///@{
/** 
* MAP_EXPORT_FORMAT_PLT
* 
* "PLT"    Geosoft Plot (*.plt)         Plot
*/
#define MAP_EXPORT_FORMAT_PLT "PLT"
/** 
* MAP_EXPORT_FORMAT_SHP
* 
* "SHP"    ArcView Shapfile (*.shp)     Plot
*/
#define MAP_EXPORT_FORMAT_SHP "SHP"
/** 
* MAP_EXPORT_FORMAT_DXF12
* 
* "DXF12"  AutoCad12 (*.dxf)            Plot
*/
#define MAP_EXPORT_FORMAT_DXF12 "DXF12"
/** 
* MAP_EXPORT_FORMAT_DXF13
* 
* "DXF13"  AutoCad13 (*.dxf)            Plot
*/
#define MAP_EXPORT_FORMAT_DXF13 "DXF13"
/** 
* MAP_EXPORT_FORMAT_GTIFF
* 
* "GTIFF"  GeoTIFF (*.tif),             Color Image
*/
#define MAP_EXPORT_FORMAT_GTIFF "GTIFF"
/** 
* MAP_EXPORT_FORMAT_MTIFF
* 
* "MTIFF"  MapInfo TIFF (*.tif)         Color Image
*/
#define MAP_EXPORT_FORMAT_MTIFF "MTIFF"
/** 
* MAP_EXPORT_FORMAT_ATIFF
* 
* "ATIFF"  ArcView TIFF (*.tif)         Color Image
*/
#define MAP_EXPORT_FORMAT_ATIFF "ATIFF"
/** 
* MAP_EXPORT_FORMAT_GEO
* 
* "GEO"    Geosoft COLOR grid (*.grd)   Color Image
*/
#define MAP_EXPORT_FORMAT_GEO "GEO"
/** 
* MAP_EXPORT_FORMAT_ERM
* 
* "ERM"    ER Mapper RGB (*.ers)        Color Image
*/
#define MAP_EXPORT_FORMAT_ERM "ERM"
/** 
* MAP_EXPORT_FORMAT_KMZ
* 
* "KMZ"    Keyhole Markup (*.kmz)       Zipped XML/Image files
*/
#define MAP_EXPORT_FORMAT_KMZ "KMZ"
///@}

/**
* @name MAP_EXPORT_METHOD Definitions
* 
* Dithering Methods
*/
///@{
/** 
* MAP_EXPORT_METHOD_STANDARD
* 
* Standard Dither
*/
#define MAP_EXPORT_METHOD_STANDARD 0
/** 
* MAP_EXPORT_METHOD_DIFFUSE
* 
* Error Diffusion Dither
*/
#define MAP_EXPORT_METHOD_DIFFUSE 1
/** 
* MAP_EXPORT_METHOD_NONE
* 
* No Dither
*/
#define MAP_EXPORT_METHOD_NONE 2
///@}

/**
* @name MAP_EXPORT_RASTER_FORMAT Definitions
* 
* Export Raster Formats
* .
* Format  Description                      Type           B/W  B/W  COL  B/W  COL  COL
* ======= ==========================       ===========    ===  ===  ===  ===  ===  ===
*/
///@{
/** 
* MAP_EXPORT_RASTER_FORMAT_EMF
* 
* "EMF"   Enhanced Metafile (*.emf)        Plot
*/
#define MAP_EXPORT_RASTER_FORMAT_EMF "EMF"
/** 
* MAP_EXPORT_RASTER_FORMAT_BMP
* 
* "BMP"   Bitmap (*.bmp)                   Color Image     X    X    X    X    X    X
*/
#define MAP_EXPORT_RASTER_FORMAT_BMP "BMP"
/** 
* MAP_EXPORT_RASTER_FORMAT_JPEGL
* 
* "JPEGL" JPEG Low Quality (*.jpg)         Color Image                              X
*/
#define MAP_EXPORT_RASTER_FORMAT_JPEGL "JPEGL"
/** 
* MAP_EXPORT_RASTER_FORMAT_JPEG
* 
* "JPEG" JPEG (*.jpg)                     Color Image                              X
*/
#define MAP_EXPORT_RASTER_FORMAT_JPEG "JPEG"
/** 
* MAP_EXPORT_RASTER_FORMAT_JPEGH
* 
* "JPEGH" JPEG High Quality (*.jpg)        Color Image                              X
*/
#define MAP_EXPORT_RASTER_FORMAT_JPEGH "JPEGH"
/** 
* MAP_EXPORT_RASTER_FORMAT_GIF
* 
* "GIF"   GIF (*.gif)                      Color Image     X    X    X    X    X
*/
#define MAP_EXPORT_RASTER_FORMAT_GIF "GIF"
/** 
* MAP_EXPORT_RASTER_FORMAT_PCX
* 
* "PCX"   PCX (*.pcx)                      Color Image     X    X    X    X    X    X
*/
#define MAP_EXPORT_RASTER_FORMAT_PCX "PCX"
/** 
* MAP_EXPORT_RASTER_FORMAT_PNG
* 
* "PNG"   PNG (*.png)                      Color Image     X    X    X    X    X    X
*/
#define MAP_EXPORT_RASTER_FORMAT_PNG "PNG"
/** 
* MAP_EXPORT_RASTER_FORMAT_EPS
* 
* "EPS"   Encasulated PostScript (*.eps)   Color Image                    X
*/
#define MAP_EXPORT_RASTER_FORMAT_EPS "EPS"
/** 
* MAP_EXPORT_RASTER_FORMAT_TIFF
* 
* "TIFF"  TIFF (*.tif)                     Color Image     X    X    X    X    X    X
*/
#define MAP_EXPORT_RASTER_FORMAT_TIFF "TIFF"
///@}

/**
* @name MAP_LIST_MODE Definitions
* 
* Map List modes
*/
///@{
/** 
* MAP_LIST_MODE_ALL
*/
#define MAP_LIST_MODE_ALL 0
/** 
* MAP_LIST_MODE_3D
*/
#define MAP_LIST_MODE_3D 1
/** 
* MAP_LIST_MODE_NOT3D
*/
#define MAP_LIST_MODE_NOT3D 2
///@}

/**
* @name MAP_OPEN Definitions
* 
* Open Modes
*/
///@{
/** 
* MAP_WRITENEW
*/
#define MAP_WRITENEW 1
/** 
* MAP_WRITEOLD
*/
#define MAP_WRITEOLD 2
///@}


/**
* @name Export Functions 
*/
///@{

/**
* Export the entire map in view units to an external format. View and Group names are removed and plane spatial coordinates will be in the units of the map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @param[in]  view TODO
* @param[in]  pix_size TODO
* @param[in]  dpi TODO
* @param[in]  bits TODO
* @param[in]  dither TODO
* @param[in]  format TODO
* @param[in]  options TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void ExportAllInView_MAP(void* p_geo, const int32_t* map, const char* name, const char* view, const double* pix_size, const double* dpi, const int32_t* bits, const int32_t* dither, const char* format, const char* options);

/**
* Export the entire map to map to a non-geo raster format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @param[in]  view TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  dpi TODO
* @param[in]  bits TODO
* @param[in]  dither TODO
* @param[in]  format TODO
* @param[in]  options TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void ExportAllRaster_MAP(void* p_geo, const int32_t* map, const char* name, const char* view, const int32_t* size_x, const int32_t* size_y, const double* dpi, const int32_t* bits, const int32_t* dither, const char* format, const char* options);

/**
* Export an area of a map in view units to an external format
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @param[in]  view TODO
* @param[in]  pix_size TODO
* @param[in]  dpi TODO
* @param[in]  bits TODO
* @param[in]  dither TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  format TODO
* @param[in]  options TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void ExportAreaInView_MAP(void* p_geo, const int32_t* map, const char* name, const char* view, const double* pix_size, const double* dpi, const int32_t* bits, const int32_t* dither, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const char* format, const char* options);

/**
* Export an area of a map to a non-geo raster format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @param[in]  view TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  size_x TODO
* @param[in]  size_y TODO
* @param[in]  dpi TODO
* @param[in]  bits TODO
* @param[in]  dither TODO
* @param[in]  format TODO
* @param[in]  options TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void ExportAreaRaster_MAP(void* p_geo, const int32_t* map, const char* name, const char* view, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* size_x, const int32_t* size_y, const double* dpi, const int32_t* bits, const int32_t* dither, const char* format, const char* options);

/**
* Render a map to a bitmap.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  file TODO
* @param[in]  max_res TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void RenderBitmap_MAP(void* p_geo, const int32_t* map, const char* view, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const char* file, const int32_t* max_res);

///@}

/**
* @name 3D View Functions 
*/
///@{

/**
* Create a 3D View in this map that is linked to a MVIEW in a 3D View file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  mview TODO
* @param[in]  view_name TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT void CreateLinked3DView_MAP(void* p_geo, const int32_t* map, const int32_t* mview, const char* view_name, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

///@}

/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Get a list of all aggregates in this map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  lst TODO
* @param[in]  optn TODO
**
* @par Note 
*      List items are returned as view/agg/layer.
*      The layer name is optional
*
* @par See also 
*      LST class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AGGList_MAP(void* p_geo, const int32_t* map, const int32_t* lst, const int32_t* optn);

/**
* Get a list of aggregates in this map based on a mode
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  lst TODO
* @param[in]  optn TODO
* @param[in]  mode TODO
**
* @par Note 
*      List items are returned as view/agg/layer.
*      The layer name is optional
*
* @par See also 
*      LST class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void AGGListEx_MAP(void* p_geo, const int32_t* map, const int32_t* lst, const int32_t* optn, const int32_t* mode);

/**
* Clean up empty groups in all views in map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Clean_MAP(void* p_geo, const int32_t* map);

/**
* Commit any changes to a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Commit_MAP(void* p_geo, const int32_t* map);

/**
* Copy entire map into one view in output map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  dest_map TODO
* @param[in]  dest_view TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void CopyMapToView_MAP(void* p_geo, const int32_t* map, const char* dest_map, const char* dest_view);

/**
* Generate an XML CRC of a MAP
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void CRCMap_MAP(void* p_geo, const int32_t* map, int32_t* crc, const char* file);

/**
* Create a MAP.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  mode TODO
* @return MAP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_MAP(void* p_geo, const char* name, const int32_t* mode);

/**
* This method returns the Current map opened.
*
* @param[in]  p_geo GX Context Pointer
* @return MAP Object
**
* @par Note 
*      If there is no current map, and running interactively,
*      the user is prompted to open a map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Current_MAP(void* p_geo);

/**
* Deletes a view in this map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
**
* @par Note 
*      If the view does not exist, nothing happens.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DeleteView_MAP(void* p_geo, const int32_t* map, const char* name);

/**
* Destroy the MAP handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
**
* @par Note 
*      All changes to the map will be committed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_MAP(void* p_geo, const int32_t* map);

/**
* Discard all changes made to the map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Discard_MAP(void* p_geo, const int32_t* map);

/**
* Duplicate copy of current map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ma_ps TODO
* @param[in]  ma_pd TODO
* @param[in]  content TODO
**
* @par Note 
*      Before version 6.2 text in maps were displayed with a character set
*      defining how characters above ASCII 127 would be displayed. 6.2 introduced
*      Unicode in the core montaj engine that eliminated the need for such a setting and
*      greatly increased the number of symbols that can be used. The only caveat
*      of the new system is that text may appear corrupted (especially with GFN fonts) in
*      versions prior to 6.2 that render maps created in version 6.2 and later.
*      The constant DUPMAP_COPY_PRE62 provides a way to create maps that can be
*      distributed to versions prior to 6.2.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DupMap_MAP(void* p_geo, const int32_t* ma_ps, const int32_t* ma_pd, const int32_t* content);

/**
* Get the LPT Object of a MAP.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return LPT Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetLPT_MAP(void* p_geo, const int32_t* map);

/**
* Get the size of the Map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[out] xmin TODO
* @param[out] ymin TODO
* @param[out] xmax TODO
* @param[out] ymax TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetMapSize_MAP(void* p_geo, const int32_t* map, double* xmin, double* ymin, double* xmax, double* ymax);

/**
* Get the map's META
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return META Object
**
* @par Note 
*      If the map has no META, an empty META will be created.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t GetMETA_MAP(void* p_geo, const int32_t* map);

/**
* Get the map's REG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return REG Object
**
* @par Note 
*      If the map has no REG, an empty REG will be created.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetREG_MAP(void* p_geo, const int32_t* map);

/**
* Get a list of all views/groups in this map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  lst TODO
**
* @par Note 
*      Returns all groups in the form "ViewName\GroupName"
*      To get a LST of groups in a specific map view, use
*      the iListGroups_MVIEW function.
*
* @par See also 
*      LST class.
*      iListGroups_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GroupList_MAP(void* p_geo, const int32_t* map, const int32_t* lst);

/**
* Get a list of views/groups in this map for this mode
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  lst TODO
* @param[in]  mode TODO
*
* @par See also 
*      LST class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void GroupListEx_MAP(void* p_geo, const int32_t* map, const int32_t* lst, const int32_t* mode);

/**
* Duplicate an entire view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @param[out] n_view TODO
* @param[in]  size TODO
* @param[in]  copy TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void IDuplicateView_MAP(void* p_geo, const int32_t* map, const char* view, char* n_view, const int32_t* size, const int32_t* copy);

/**
* Checks to see if a view exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @return 0 view does not exist.
* 1 view exists.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iExistView_MAP(void* p_geo, const int32_t* map, const char* name);

/**
* Get a class name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  cl TODO
* @param[out] name TODO
* @param[in]  length TODO
**
* @par Note 
*      Map class names are intended to be used to record the
*      names of certain view classes in the map, such as the
*      "Data", "Base" and "Section" views.
*      
*      There can only be one name for each class, but it can
*      be changed.  This lets the "Data" class name change,
*      for example, so plotting can select which class to plot
*      to.
*      
*      If a name is not set, the class name is set and
*      returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetClassName_MAP(void* p_geo, const int32_t* map, const char* cl, char* name, const int32_t* length);

/**
* Get the name of the map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetFileName_MAP(void* p_geo, const int32_t* map, char* name, const int32_t* length);

/**
* Get the Map Name of the Map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetMapName_MAP(void* p_geo, const int32_t* map, char* name, const int32_t* length);

/**
* The number of packed files in the current map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return The number of packed files in map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t iPackedFiles_MAP(void* p_geo, const int32_t* map);

/**
* UnPack all files from map to workspace.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  force TODO
* @param[out] errors TODO
* @param[in]  error_size TODO
**
* @par Note 
*      The option to force will simply overwrite the files.
*      When the non-force option is in effect the method will
*      stop if any files are going to be overwritting. These
*      file names will end up in the Errors string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void IUnPackFilesEx_MAP(void* p_geo, const int32_t* map, const int32_t* force, char* errors, const int32_t* error_size);

/**
* UnPack all files from map to workspace.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  force TODO
* @param[in]  dir TODO
* @param[out] errors TODO
* @param[in]  error_size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void IUnPackFilesToFolder_MAP(void* p_geo, const int32_t* map, const int32_t* force, const char* dir, char* errors, const int32_t* error_size);

/**
* Pack all files in the map so that it can be mailed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PackFiles_MAP(void* p_geo, const int32_t* map);

/**
* Render a map to file/device.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Render_MAP(void* p_geo, const int32_t* map, const char* name);

/**
* Resize a map to the extents of all views.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
**
* @par Note 
*      This is the same as ResizeAllEx_MAP with
*      MVIEW_EXTENT_CLIP.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ResizeAll_MAP(void* p_geo, const int32_t* map);

/**
* ResizeAll_MAP with selection of view extent type selection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  ext TODO
**
* @par Note 
*      MVIEW_EXTENT_VISIBLE gives a more "reasonable" map size, and won't
*      clip off labels outside a graph window.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void ResizeAllEx_MAP(void* p_geo, const int32_t* map, const int32_t* ext);

/**
* Get the current map scale
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return The current map scale
**
* @par Note 
*      If there is a "Data" view, the scale is derived from
*      this view.
*      
*      If their is no data view, the scale is derived
*      from the first view that is not scaled in mm.
*      otherwise, the scale is 1000 (mm).
*      
*      All views must be closed, or open read-only.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetMapScale_MAP(void* p_geo, const int32_t* map);

/**
* Save as ArcGIS MXD
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  mxd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void SaveAsMXD_MAP(void* p_geo, const int32_t* map, const char* mxd);

/**
* Set a class name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  cl TODO
* @param[in]  name TODO
**
* @par Note 
*      Map class names are intended to be used to record the
*      names of certain view classes in the map, such as the
*      "Data", "Base" and "Section" views.
*      
*      There can only be one name for each class, but it can
*      be changed.  This lets the "Data" class name change,
*      for example, so plotting can select which class to plot
*      to.
*      
*      If a name is not set, the class name is set and
*      returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetClassName_MAP(void* p_geo, const int32_t* map, const char* cl, const char* name);

/**
* Sets the current map to this map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetCurrent_MAP(void* p_geo, const int32_t* map);

/**
* Set the Map Name of the Map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetMapName_MAP(void* p_geo, const int32_t* map, const char* name);

/**
* Set the current map scale
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  scale TODO
**
* @par Note 
*      All views in the map will be resized for the new
*      map scale.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetMapScale_MAP(void* p_geo, const int32_t* map, const double* scale);

/**
* Set the size of the Map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  xmin TODO
* @param[in]  ymin TODO
* @param[in]  xmax TODO
* @param[in]  ymax TODO
**
* @par Note 
*      The map size is area on the MAP that contains graphics
*      to be plotted.  The area can be bigger or smaller that
*      the current views.  In the absense of any other information
*      only the area defined by the map size is plotted.
*
* @par See also 
*      SetSizeViews_MAP
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetMapSize_MAP(void* p_geo, const int32_t* map, const double* xmin, const double* ymin, const double* xmax, const double* ymax);

/**
* Write a META to a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void SetMETA_MAP(void* p_geo, const int32_t* map, const int32_t* meta);

/**
* Write a REG to a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  reg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetREG_MAP(void* p_geo, const int32_t* map, const int32_t* reg);

/**
* Syncronize the Metadata
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void Sync_MAP(void* p_geo, const char* map);

/**
* UnPack all files from map to workspace.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void UnPackFiles_MAP(void* p_geo, const int32_t* map);

/**
* Get a list of all views in this map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  lst TODO
*
* @par See also 
*      LST class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ViewList_MAP(void* p_geo, const int32_t* map, const int32_t* lst);

/**
* Get a list of views of certain types in this map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  lst TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void ViewListEx_MAP(void* p_geo, const int32_t* map, const int32_t* lst, const int32_t* mode);

/**
* Get the projection type of the Data view of a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return Project type as an integer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.3
*/
GX_EXPORT int32_t GetDataProj_MAP(void* p_geo, const int32_t* map);

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
