//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file dh_gxlib.h
* @date 2017-11-06
* @brief File containing DH GX C API constant and function declarations
*/

/**
* @defgroup DH_Module DH
* This class is used for importing and interacting with Drill Hole
* data files. For detailed information on Drill Hole data,
* see the documentation for Wholeplot.
*
* Notes:
*
* The DH class has some defines not used by any functions.
*     DH_DEFINE_PLAN
*     DH_DEFINE_SECT
*
* @{
*/

#pragma once
#ifndef HDH_H_DEFINED
#define HDH_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DH_DEFAULT_FILENAMES Definitions
* 
* Default filenames
*/
///@{
/** 
* DH_DEFAULT_ROCKCODE_FILE
*/
#define DH_DEFAULT_ROCKCODE_FILE "agso.csv"
/** 
* DH_DEFAULT_STRUCTURECODE_FILE
*/
#define DH_DEFAULT_STRUCTURECODE_FILE "structcodes.csv"
///@}

/**
* @name STR_DH_HOLES Definitions
* 
* This declares the size of the string used in various
* DH GXs to store all the currently selected holes, as input to the two-panel
* selection tool. This should be big enough for 65,000 16-character hole names!
*/
///@{
/** 
* STR_DH_HOLES
*/
#define STR_DH_HOLES 1048576
///@}

/**
* @name DH_COMP_CHOICE Definitions
* 
* Composition
*/
///@{
/** 
* DH_COMP_DONE
* 
* User is done
*/
#define DH_COMP_DONE 0
/** 
* DH_COMP_CANCEL
* 
* User canceled
*/
#define DH_COMP_CANCEL -1
/** 
* DH_COMP_SELECT
* 
* User chose to select an interval interactively
*/
#define DH_COMP_SELECT 1
/** 
* DH_COMP_REFRESH
* 
* User chose to refresh
*/
#define DH_COMP_REFRESH 2
///@}

/**
* @name DH_COMPSTDB_HOLSEL Definitions
* 
* Composite Hole Selection
*/
///@{
/** 
* DH_COMPSTDB_HOLSEL_ALL
*/
#define DH_COMPSTDB_HOLSEL_ALL 0
/** 
* DH_COMPSTDB_HOLSEL_SELECTED
*/
#define DH_COMPSTDB_HOLSEL_SELECTED 1
///@}

/**
* @name DH_COMPSTDB_INTSEL Definitions
* 
* Composite Interval
*/
///@{
/** 
* DH_COMPSTDB_INTSEL_FIXED
*/
#define DH_COMPSTDB_INTSEL_FIXED 0
/** 
* DH_COMPSTDB_INTSEL_LITHOLOGY
*/
#define DH_COMPSTDB_INTSEL_LITHOLOGY 1
/** 
* DH_COMPSTDB_INTSEL_BESTFITLITH
*/
#define DH_COMPSTDB_INTSEL_BESTFITLITH 2
/** 
* DH_COMPSTDB_INTSEL_INTFILE
*/
#define DH_COMPSTDB_INTSEL_INTFILE 3
///@}

/**
* @name DH_DATA Definitions
* 
* What to import
*/
///@{
/** 
* DH_DATA_DIPAZIMUTH
*/
#define DH_DATA_DIPAZIMUTH 0
/** 
* DH_DATA_EASTNORTH
*/
#define DH_DATA_EASTNORTH 1
/** 
* DH_DATA_FROMTO
*/
#define DH_DATA_FROMTO 2
/** 
* DH_DATA_POINT
*/
#define DH_DATA_POINT 3
/** 
* DH_DATA_COLLAR
*/
#define DH_DATA_COLLAR 4
/** 
* DH_DATA_UNKNOWN
* 
* The type is not known
*/
#define DH_DATA_UNKNOWN 100
///@}

/**
* @name DH_DEFINE_PLAN Definitions
* 
* Plans
*/
///@{
/** 
* DH_DEFINE_PLAN
*/
#define DH_DEFINE_PLAN 1
///@}

/**
* @name DH_DEFINE_SECT Definitions
* 
* Types of Sections
*/
///@{
/** 
* DH_DEFINE_SECT_NS
*/
#define DH_DEFINE_SECT_NS 1
/** 
* DH_DEFINE_SECT_EW
*/
#define DH_DEFINE_SECT_EW 2
/** 
* DH_DEFINE_SECT_ANGLED
*/
#define DH_DEFINE_SECT_ANGLED 3
///@}

/**
* @name DH_EXP Definitions
* 
* Type of Export
*/
///@{
/** 
* DH_EXP_CSV
*/
#define DH_EXP_CSV 0
/** 
* DH_EXP_ASCII
*/
#define DH_EXP_ASCII 1
/** 
* DH_EXP_ACCESS
*/
#define DH_EXP_ACCESS 2
/** 
* DH_EXP_SHP
* 
* Collars as points
*/
#define DH_EXP_SHP 3
/** 
* DH_EXP_SURPAC
* 
* To Surpace Geological database (special format ACCESS)
*/
#define DH_EXP_SURPAC 4
/** 
* DH_EXP_SHP_TRACES
* 
* Hole traces as polylines
*/
#define DH_EXP_SHP_TRACES 5
///@}

/**
* @name DH_HOLES Definitions
* 
* Holes to select
*/
///@{
/** 
* DH_HOLES_ALL
*/
#define DH_HOLES_ALL 0
/** 
* DH_HOLES_SELECTED
*/
#define DH_HOLES_SELECTED 1
///@}

/**
* @name DH_MASK Definitions
* 
* Masks
*/
///@{
/** 
* DH_MASK_APPEND
*/
#define DH_MASK_APPEND 0
/** 
* DH_MASK_NEW
*/
#define DH_MASK_NEW 1
///@}

/**
* @name DH_PLOT Definitions
* 
* Type of Plot
*/
///@{
/** 
* DH_PLOT_PLAN
*/
#define DH_PLOT_PLAN 0
/** 
* DH_PLOT_SECTION
*/
#define DH_PLOT_SECTION 1
/** 
* DH_PLOT_STRIPLOG
*/
#define DH_PLOT_STRIPLOG 2
/** 
* DH_PLOT_HOLE_TRACES
*/
#define DH_PLOT_HOLE_TRACES 3
/** 
* DH_PLOT_3D
*/
#define DH_PLOT_3D 4
/** 
* DH_PLOT_SECTION_STACK
*/
#define DH_PLOT_SECTION_STACK 5
/** 
* DH_PLOT_SECTION_FENCE
*/
#define DH_PLOT_SECTION_FENCE 6
/** 
* DH_PLOT_SECTION_CROOKED
*/
#define DH_PLOT_SECTION_CROOKED 7
///@}

/**
* @name DH_SECT_PAGE Definitions
* 
* Sections
*/
///@{
/** 
* DH_SECT_PAGE_SECTION
*/
#define DH_SECT_PAGE_SECTION 1
///@}

/**
* @name DH_SURFACE Definitions
* 
* Surface selection for creation of geological
* top or bottom surfaces.
*/
///@{
/** 
* DH_SURFACE_FIRST_LAYER_FROM
*/
#define DH_SURFACE_FIRST_LAYER_FROM 0
/** 
* DH_SURFACE_FIRST_LAYER_TO
*/
#define DH_SURFACE_FIRST_LAYER_TO 1
/** 
* DH_SURFACE_SECOND_LAYER_FROM
*/
#define DH_SURFACE_SECOND_LAYER_FROM 2
/** 
* DH_SURFACE_SECOND_LAYER_TO
*/
#define DH_SURFACE_SECOND_LAYER_TO 3
/** 
* DH_SURFACE_LAST_LAYER_FROM
*/
#define DH_SURFACE_LAST_LAYER_FROM 4
/** 
* DH_SURFACE_LAST_LAYER_TO
*/
#define DH_SURFACE_LAST_LAYER_TO 5
///@}

/**
* @name DIP_CONVENTION Definitions
* 
* Dip convention
*/
///@{
/** 
* DIP_CONVENTION_NEGATIVE
*/
#define DIP_CONVENTION_NEGATIVE -1
/** 
* DIP_CONVENTION_POSITIVE
*/
#define DIP_CONVENTION_POSITIVE 1
///@}


/**
* @name ArcGIS Target Functions Functions 
*/
///@{

/**
* Running inside ArcGIS?
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - if No
* 1 - if Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iIsESRI_DH(void* p_geo);

///@}

/**
* @name Data processing/conversion methods Functions 
*/
///@{

/**
* Fills a LST with available string and numeric channel code values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
**
* @par Note 
*      Channel codes are in the format "[Assay] Au", where the name in
*      the square brackets is descriptive part of the project database
*      containing the given channel name. The above code might refer to
*      the "Au" channel in the "Tutorial_Assay.gdb" database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void CreatChanLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Fills a LST with available channel code values from Depth databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
**
* @par Note 
*      Channel codes are in the format "[Assay] Au", where the name in
*      the square brackets is descriptive part of the project database
*      containing the given channel name. The above code might refer to
*      the "Au" channel in the "Tutorial_Assay.gdb" database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void DepthDataLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Fills a LST with available string and numeric channel code values from From-To databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay TODO
* @param[in]  lst TODO
**
* @par Note 
*      Channel codes are in the format "[Assay] Au", where the name in
*      the square brackets is descriptive part of the project database
*      containing the given channel name. The above code might refer to
*      the "Au" channel in the "Tutorial_Assay.gdb" database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void FromToDataLST_DH(void* p_geo, const int32_t* dh, const char* assay, const int32_t* lst);

/**
* Return XYZ locations of top or bottom geological surfaces
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  chan_code TODO
* @param[in]  geology TODO
* @param[in]  surface TODO
* @param[in]  gap TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      For the input LST of holes, returns XYZ location of top or bottom
*      contact with the input geology. Those selected holes which do NOT
*      have contacts, return rDUMMY for the corresponding locations.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT void GetGeologyContacts_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const char* chan_code, const char* geology, const int32_t* surface, const double* gap, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Converted alpha/beta values in oriented cores to dip/dip direction.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  alpha TODO
* @param[in]  beta TODO
* @param[in]  top_ref TODO
* @param[in]  dip TODO
* @param[in]  dip_dir TODO
**
* @par Note 
*      The input data are the oriented core alpha and beta values, using either
*      top or bottom reference. The values for each hole in the LST are converted
*      to "absolute" dip and dip-direction values, using the resurveyed hole
*      orientations at each depth.
*      The alpha and beta data must be from the same database, and the output
*      dip and dip/dir channels are written to the same database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void GetOrientedCoreDipDir_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const char* alpha, const char* beta, const int32_t* top_ref, const char* dip, const char* dip_dir);

/**
* Return a VV with unique items in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  chan_code TODO
* @param[in]  selected_holes TODO
* @param[in]  vv TODO
**
* @par Note 
*      Finds and sorts all the unique non-dummy items for the selected channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT void GetUniqueChannelItems_DH(void* p_geo, const int32_t* dh, const char* chan_code, const int32_t* selected_holes, const int32_t* vv);

/**
* Return a VV with unique items in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  chan_name TODO
* @param[in]  selected_holes TODO
* @param[in]  vv TODO
**
* @par Note 
*      Finds and sorts all the unique non-dummy items for the selected channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.3
*/
GX_EXPORT void GetUniqueChannelItemsFromCollar_DH(void* p_geo, const int32_t* dh, const char* chan_name, const int32_t* selected_holes, const int32_t* vv);

/**
* Return the data type for a channel code.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  chan_code TODO
* @return Channel data type
**
* @par Note 
*      Finds and sorts all the unique non-dummy items for the selected channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iChanType_DH(void* p_geo, const int32_t* dh, const char* chan_code);

/**
* Return XYZ locations of the intersection of a hole with a DEM grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  img TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @return 1 if intersection found
* 0 if no intersection found
**
* @par Note 
*      Input the hole index and an IMG object. Returns XYZ location
*      of the hole intersection with the DEM. Interpolation inside the DEM
*      uses the native IMG interp method. If no intersection is found the
*      returned XYZ locations are rDUMMY.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iFindHoleIntersection_DH(void* p_geo, const int32_t* dh, const int32_t* hole, const int32_t* img, double* x, double* y, double* z);

/**
* Return the assay database index and channel name from a channel code string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  chan_code TODO
* @param[out] assay_db_index TODO
* @param[out] chan TODO
* @param[in]  size_chan TODO
**
* @par Note 
*      The input channel code is in the form "[Assay] channel"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.3
*/
GX_EXPORT void IGetChanCodeInfo_DH(void* p_geo, const int32_t* dh, const char* chan_code, int32_t* assay_db_index, char* chan, const int32_t* size_chan);

/**
* Algorithm to determine the intersection of a straight hole with a surface (DEM) grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  xi TODO
* @param[in]  yi TODO
* @param[in]  zi TODO
* @param[in]  dip TODO
* @param[in]  az TODO
* @param[in]  grid TODO
* @param[out] xo TODO
* @param[out] yo TODO
* @param[out] zo TODO
* @return 1 if an intersection is found, 0 if not.
**
* @par Note 
*      Given a point on the hole and the straight hole dip and azimuth,
*      ocate (an) intersection point with the input DEM grid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.3
*/
GX_EXPORT int32_t iGridIntersection_DH(void* p_geo, const int32_t* dh, const double* xi, const double* yi, const double* zi, const double* dip, const double* az, const char* grid, double* xo, double* yo, double* zo);

/**
* Create a lithology voxel grid with lith codes mapped to single values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  chan_code TODO
* @param[in]  tpat TODO
* @param[in]  vox TODO
* @param[in]  cell_size TODO
* @param[in]  gap TODO
* @param[in]  non_contact_radius TODO
* @param[in]  gridding_type TODO
* @param[in]  reg TODO
* @param[in]  retain_grid_files TODO
**
* @par Note 
*      Values in the input channel are assigned the index of the corresponding
*      item found in the input TPAT.
*      The compositing gap refers to the size of gaps in the data (either
*      a blank lithology or missing from-to interval) which will be ignored
*      when compositing lithologies into contiguous from-to intervals.
*      The non-contact radius is used to dummy out the level grids around holes
*      where the gridded lithology is not found. If not specified (dummy) then
*      half the distance to the nearest contacting hole is used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT void LithoGrid3D_DH(void* p_geo, const int32_t* dh, const char* chan_code, const int32_t* tpat, const char* vox, const double* cell_size, const double* gap, const double* non_contact_radius, const int32_t* gridding_type, const int32_t* reg, const int32_t* retain_grid_files);

/**
* Fills a LST with available numeric channel code values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
**
* @par Note 
*      Channel codes are in the format "[Assay] Au", where the name in
*      the square brackets is descriptive part of the project database
*      containing the given channel name. The above code might refer to
*      the "Au" channel in the "Tutorial_Assay.gdb" database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT void NumericChanLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Fills a LST with available numeric channel code values from From-To databases..
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay TODO
* @param[in]  lst TODO
**
* @par Note 
*      Channel codes are in the format "[Assay] Au", where the name in
*      the square brackets is descriptive part of the project database
*      containing the given channel name. The above code might refer to
*      the "Au" channel in the "Tutorial_Assay.gdb" database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT void NumericFromToDataLST_DH(void* p_geo, const int32_t* dh, const char* assay, const int32_t* lst);

/**
* Dummy out locations in a grid around non-contact holes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  img TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  blank_dist TODO
**
* @par Note 
*      Grid is dummied out to the blanking distance around holes where
*      the input Z value is dummy. If a contacting hole is closer then
*      twice the blanking distance, the blanking distance is reduced
*      accordingly. Distances are measured horizontally (e.g. Z is ignored).
*      If the blanking distance is zero or dummy, the distance is
*      automatically set to half the distance to the closest hole intersection.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT void PunchGridHoles_DH(void* p_geo, const int32_t* dh, const int32_t* img, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const double* blank_dist);

/**
* Fills a LST with available string channel code values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
**
* @par Note 
*      Channel codes are in the format "[Assay] Au", where the name in
*      the square brackets is descriptive part of the project database
*      containing the given channel name. The above code might refer to
*      the "Au" channel in the "Tutorial_Assay.gdb" database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT void StringChanLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Fills a LST with available string-type channel code values from From-To databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay TODO
* @param[in]  lst TODO
**
* @par Note 
*      Channel codes are in the format "[Geology] Lithology", where the name in
*      the square brackets is descriptive part of the project database
*      containing the given channel name. The above code might refer to
*      the "Lithology" channel in the "Tutorial_Geology.gdb" database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT void StringFromToDataLST_DH(void* p_geo, const int32_t* dh, const char* assay, const int32_t* lst);

///@}

/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Database for an assay data set.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay TODO
* @return x - DB
* DB_NULL if no assay data (no error registered)
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t _hAssayDB_DH(void* p_geo, const int32_t* dh, const int32_t* assay);

/**
* Line/Group symbol for a specific assay data set hole.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay TODO
* @param[in]  hole TODO
* @return x - DB_SYMB
* NULLSYMB if no survey data for this hole (no error registered)
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t _hAssaySymb_DH(void* p_geo, const int32_t* dh, const int32_t* assay, const int32_t* hole);

/**
* Database for the collar table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return x - DB
* DB_NULL if no collar table (no error registered)
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t _hCollarDB_DH(void* p_geo, const int32_t* dh);

/**
* Line/Group symbol for the collar table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return x - DB_SYMB
* NULLSYMB if no collar table (no error registered)
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t _hCollarSymb_DH(void* p_geo, const int32_t* dh);

/**
* Database for the Dip-Azimuth survey data
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return x - DB
* DB_NULL if no dip-azimuth survey data (no error registered)
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t _hDipAzSurveyDB_DH(void* p_geo, const int32_t* dh);

/**
* Line/Group symbol for a specific hole Dip-Azimuth survey.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @return x - DB_SYMB
* NULLSYMB if no Dip-Azimuth survey data for this hole (no error registered)
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t _hDipAzSurveySymb_DH(void* p_geo, const int32_t* dh, const int32_t* hole);

/**
* Database for the East-North survey data
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return x - DB
* DB_NULL if no East-North survey data (no error registered)
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t _hENSurveyDB_DH(void* p_geo, const int32_t* dh);

/**
* Line/Group symbol for a specific hole East-North survey.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @return x - DB_SYMB
* NULLSYMB if no EN survey data for this hole (no error registered)
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t _hENSurveySymb_DH(void* p_geo, const int32_t* dh, const int32_t* hole);

/**
* Add a survey table for a new hole.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
**
* @par Note 
*      The information is created from the collar table info.
*      If the survey info already exists, does nothing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void AddSurveyTable_DH(void* p_geo, const int32_t* dh, const int32_t* hole);

/**
* Populate an LST with holes in an assay database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay_db TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void AssayHoleLST_DH(void* p_geo, const int32_t* dh, const int32_t* assay_db, const int32_t* lst);

/**
* Return the LST of from-to and point assay datasets
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
**
* @par Note 
*      Assay dataset name is given as LST_ITEM_NAME
*      Assay dataset number is given as LST_ITEM_VALUE
*      Returns an empty LST if no datasets.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void AssayLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Use automatic hole selection based on slice.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  flag TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void AutoSelectHoles_DH(void* p_geo, const int32_t* flag);

/**
* Delete extraneous holes from project databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
**
* @par Note 
*      Removes from Project databases any lines not connected to
*      a line found in the collar table list.
*      If all the database lines would be removed, the database is
*      simply deleted.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void Clean_DH(void* p_geo, const int32_t* dh);

/**
* Make a composite database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  mast_db TODO
* @param[in]  comp_db TODO
* @param[in]  hol_sel TODO
* @param[in]  int_sel TODO
* @param[in]  fix_int TODO
* @param[in]  lith_ch TODO
* @param[in]  int_file TODO
* @param[in]  wt_ch TODO
* @param[in]  rej1_val TODO
* @param[in]  rej2_val TODO
* @param[in]  rej3_val TODO
* @param[in]  rej3_op TODO
* @param[in]  rej3_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void CompositeDB_DH(void* p_geo, const int32_t* dh, const int32_t* mast_db, const int32_t* comp_db, const int32_t* hol_sel, const int32_t* int_sel, const double* fix_int, const char* lith_ch, const char* int_file, const char* wt_ch, const double* rej1_val, const double* rej2_val, const double* rej3_val, const int32_t* rej3_op, const char* rej3_ch);

/**
* Computes XYZ for survey and assay data for a single hole.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.3
*/
GX_EXPORT void ComputeHoleXYZ_DH(void* p_geo, const int32_t* dh, const int32_t* hole);

/**
* Computes the extents for selected holes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[out] e_min TODO
* @param[out] e_max TODO
* @param[out] n_min TODO
* @param[out] n_max TODO
* @param[out] z_min TODO
* @param[out] z_max TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ComputeSelExtent_DH(void* p_geo, const int32_t* dh, double* e_min, double* e_max, double* n_min, double* n_max, double* z_min, double* z_max);

/**
* Computes XYZ for survey and assay data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void ComputeXYZ_DH(void* p_geo, const int32_t* dh);

/**
* Convert old "DD001.Assay" type lines to "DD001"
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      The input LST must be filled using a function like SymbLST_DB, which
*      puts the name and symbol into the LST items.
*      Any names with a period are truncated at the period, and
*      the line name in the database is changed to the new name
*      (just the hole name).
*      The LST is modified to have the new names.
*      A value is put into the DB REG "DH_CONVERTED_NAMES" parameter so
*      this process is done only once on a database.
*      
*      DO NOT use on old-style single-database Wholeplot projects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void ConvertOldLineNames_DH(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Create DH.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return DH Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_DH(void* p_geo, const char* db);

/**
* Create a default job from scratch.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void CreateDefaultJob_DH(void* p_geo, const int32_t* dh, const char* ini, const int32_t* type);

/**
* Create a DH from an external process (no montaj running).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return DH Object
**
* @par Note 
*      The regular Create_DH assumes a workspace is open and creates
*      the project from the databases which are currently loaded.
*      This function instead creates the project from all projects
*      in the input databases's directory.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t CreateExternal_DH(void* p_geo, const char* db);

/**
* Creates a drill project from current environment.
*
* @param[in]  p_geo GX Context Pointer
* @return DH Object
**
* @par Note 
*      If no DH database is open the Open DH Project GUI will be displayed which may be
*      cancelled by the user in which case the GX will terminate with cancel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT int32_t Current_DH(void* p_geo);

/**
* Convert a Datamine drillhole file to CSV files ready for import.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  proj TODO
**
* @par Note 
*      Creates three CSV files and the accompanying template files
*      ready for batch ASCII import into a drill project.
*      
*           Project_Collar.csv, .i3
*           Project_Survey.csv, .i3
*           Project_Assay.csv,  .i3
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void DatamineToCSV_DH(void* p_geo, const char* file, const char* proj);

/**
* Delete a list of holes from the project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
**
* @par Note 
*      Removes all lines in the input LST from DH project databases.
*      If all the database lines would be removed, the database is
*      simply deleted.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void DeleteHoles_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Destroy a DH handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_DH(void* p_geo, const int32_t* dh);

/**
* Exports a Drill Hole database to an external file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  file TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Export_DH(void* p_geo, const int32_t* dh, const char* file, const int32_t* type);

/**
* Exports whole or part of a Drill Hole database to an ArcGIS Geodatabase as feature class(es).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  file TODO
* @param[in]  pre TODO
* @param[out] feat_class TODO
* @param[in]  feat_class_size TODO
* @param[in]  overwrite TODO
**
* @par Note 
*      A table with metadata about the created feature classes will be written to the Geodatabase. This table will have the same
*      name with the postfix "_Metadata" attached
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT void ExportGeodatabaseLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const char* file, const char* pre, char* feat_class, const int32_t* feat_class_size, const int32_t* overwrite);

/**
* Exports a Drill Hole database to a LAS v2 file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay_db TODO
* @param[in]  hole TODO
* @param[in]  interval TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void ExportLAS_DH(void* p_geo, const int32_t* dh, const int32_t* assay_db, const int32_t* hole, const double* interval, const char* file);

/**
* Exports a LST of holes in a Drill Hole database to an external file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  file TODO
* @param[in]  type TODO
**
* @par Note 
*      Use functions like SelectedLineLST_DB to construct the LST
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void ExportLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const char* file, const int32_t* type);

/**
* Flush all selections to database selection engine.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void FlushSelect_DH(void* p_geo, const int32_t* dh);

/**
* Get the names of the project databases in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  gvv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void GetDatabasesVV_DH(void* p_geo, const int32_t* dh, const int32_t* gvv);

/**
* Get the names of the project databases in a VV, same as GetDatabasesVV_DH but the list is sorted alphabetically.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  gvv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.2
*/
GX_EXPORT void GetDatabasesSortedVV_DH(void* p_geo, const int32_t* dh, const int32_t* gvv);

/**
* Get the type of data in a Wholeplot database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
* @param[out] type TODO
**
* @par Note 
*      Returns DH_DATA_UNKNOWN if it can't determine the type.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void GetDataType_DH(void* p_geo, const int32_t* dh, const int32_t* db, int32_t* type);

/**
* Computes default section azimuths, extents for selected holes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[out] az TODO
* @param[out] x1 TODO
* @param[out] x2 TODO
* @param[out] l TODO
* @param[out] w TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetDefaultSection_DH(void* p_geo, const int32_t* dh, double* az, double* x1, double* x2, double* l, double* w);

/**
* Get the Group symbol for this hole/table combination.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  assay TODO
* @return Hole Symbol
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetHoleGroup_DH(void* p_geo, const int32_t* dh, const int32_t* hole, const char* assay);

/**
* Get the Survey information of a Hole.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetHoleSurvey_DH(void* p_geo, const int32_t* dh, const int32_t* hole, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d);

/**
* Get the project IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ipj TODO
**
* @par Note 
*      The projection for the project is the projection stored
*      in the DH_EAST channel in the collar table.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void GetIPJ_DH(void* p_geo, const int32_t* dh, const int32_t* ipj);

/**
* Get plotted map names.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  vv TODO
**
* @par Note 
*      This will return the currently plotted map name(s)
*      in a VV. This should only be called after a call
*      to Wholeplot_DH. The VV size is set to the number
*      of maps created.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void GetMapNamesVV_DH(void* p_geo, const int32_t* dh, const int32_t* vv);

/**
* Get a plotting map
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  index TODO
* @return MAP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT int32_t GetMap_DH(void* p_geo, const int32_t* dh, const int32_t* index);

/**
* Get the number plotting maps
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return Number of plotting maps
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT int32_t GetNumMaps_DH(void* p_geo, const int32_t* dh);

/**
* Get the REG Object used in this project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return REG Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetREG_DH(void* p_geo, const int32_t* dh);

/**
* Populate a VV with the indices of all selected holes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void GetSelectedHolesVV_DH(void* p_geo, const int32_t* dh, const int32_t* vv);

/**
* Return list of default channels by collar/assay/survey table type.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
**
* @par Note 
*      Fills a LST with the default channel names created according to
*      type (Collar, Survey, Assay). Value is in the LST_ITEM_NAME part.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.3
*/
GX_EXPORT void GetTableDefaultChanLST_DH(void* p_geo, const int32_t* lst, const int32_t* type);

/**
* Populate an LST with the list of the selected holes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void HoleLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Populate an LST with the list of all the holes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void HoleLST2_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Add a hole and return it's index.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @return x  - Hole index
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iAddHole_DH(void* p_geo, const int32_t* dh, const char* hole);

/**
* See if "cleaning" will delete project databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return 1 if calling Clean_DH will remove all "lines" from
*     one of the DH project databases.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iCleanWillDeleteDB_DH(void* p_geo, const int32_t* dh);

/**
* Annotate a strip log map using the compositing tool.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  map TODO
* @param[in]  x TODO
* @param[in]  y1 TODO
* @param[in]  y2 TODO
* @return DH_COMP_CHOICE
**
* @par Note 
*      If any of the input X or Y values are dummies the tool uses default values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t iCompositingToolGUI_DH(void* p_geo, const int32_t* dh, const int32_t* map, const double* x, const double* y1, const double* y2);

/**
* Create a collar table DB with channels set up.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  project TODO
* @param[in]  chan TODO
* @param[out] db TODO
* @param[in]  db_size TODO
**
* @par Note 
*      The database name will be of the form
*      
*      "d:\directory\Project_Collar.gdb"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.6
*/
GX_EXPORT void ICreateCollarTable_DH(void* p_geo, const char* project, const int32_t* chan, char* db, const int32_t* db_size);

/**
* Create a collar table in the specified directory.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  project TODO
* @param[in]  dir TODO
* @param[in]  chan TODO
* @param[out] db TODO
* @param[in]  db_size TODO
**
* @par Note 
*      The database name will be of the form
*      
*      "d:\directory\Project_Collar.gdb"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void ICreateCollarTableDir_DH(void* p_geo, const char* project, const char* dir, const int32_t* chan, char* db, const int32_t* db_size);

/**
* See if deleting holes will delete project databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @return 1 if deleting the LST of holes will remove all "lines" from
* one of the DH project databases.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iDeleteWillDeleteDB_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Find a hole and return it's index.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @return x  - Hole index
* -1 - Not found
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFindHole_DH(void* p_geo, const int32_t* dh, const char* hole);

/**
* Get the name of the database containing the collar table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[out] db TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void IGetCollarTableDB_DH(void* p_geo, const int32_t* dh, char* db, const int32_t* size);

/**
* Get Collar Information.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  name TODO
* @param[out] data TODO
* @param[in]  size TODO
**
* @par Note 
*      If the DH_ELEV channel is requested it will also
*      search for the DH_RL channel, which is the new
*      name for the collar elevation.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetInfo_DH(void* p_geo, const int32_t* dh, const int32_t* hole, const char* name, char* data, const int32_t* size);

/**
* Get the Wholeplot project name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[out] project TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void IGetProjectName_DH(void* p_geo, const int32_t* dh, char* project, const int32_t* size);

/**
* Create a section ID based on its location
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  azimuth TODO
* @param[in]  east TODO
* @param[in]  north TODO
* @param[out] id TODO
* @param[in]  id_size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void IGetSectionID_DH(void* p_geo, const double* azimuth, const double* east, const double* north, char* id, const int32_t* id_size);

/**
* Retrieve the import template from the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
* @param[out] imp_type TODO
* @return 0: No template stored in the database
* 1: Template retrieved and written to a file.
**
* @par Note 
*      The template can be retrieved in order to refresh the
*      database with a call to the DHIMPORT.GX.
*      
*      The import types correspond to the DHIMPORT.IMPTYPE variable:
*      0: ASCII, 1: Database/XLS, 2: ODBC
*      
*      If no template blob exists, templ
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT int32_t iGetTemplateBlob_DH(void* p_geo, const int32_t* db, const char* template, int32_t* imp_type);

/**
* Retrieve the file, DH Table name and type from an import template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  template TODO
* @param[out] data_type TODO
* @param[out] file TODO
* @param[in]  file_size TODO
* @param[out] table TODO
* @param[in]  table_size TODO
**
* @par Note 
*      As of version 6.0, the import templates (*.i3, *.i4) produced
*      by the Wholeplot import wizards contain the following lines:
*      
*       FILE assay.txt  (except for ODBC)
*       DRILLTYPE 3
*       DRILLTABLE Assay
*      
*      The FILE is normally the input file name, except for ODBC, where it
*      is not defined.
*      The DRILLTYPE is one of DH_DATA_XXX, and the DRILLTABLE
*      is the name of the Wholeplot database table; e.g. Project_Assay.gdb
*      in the above case. The DRILLTABLE is only included in the template
*      for DH_DATA_FROMTO and DH_DATA_POINT, but this function will
*      return the appropriate table names (e.g. Collar, Survey, ENSurvey)
*      for the other types.
*      If the DRILLTYPE is NOT found in the template, a value of
*      DH_DATA_UNKNOWN is returned for the data type; likely an indication that this
*      is not a new-style template produced by Wholeplot.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT void IGetTemplateInfo_DH(void* p_geo, const char* template, int32_t* data_type, char* file, const int32_t* file_size, char* table, const int32_t* table_size);

/**
* Retrieve the file, DH Table name, type and channel list from an import template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  template TODO
* @param[out] data_type TODO
* @param[out] file TODO
* @param[in]  file_size TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[in]  lst TODO
**
* @par Note 
*      As of version 6.0, the import templates (*.i3, *.i4) produced
*      by the Wholeplot import wizards contain the following lines:
*      
*       FILE assay.txt  (except for ODBC)
*       DRILLTYPE 3
*       DRILLTABLE Assay
*      
*      The FILE is normally the input file name, except for ODBC, where it
*      is not defined.
*      The DRILLTYPE is one of DH_DATA_XXX, and the DRILLTABLE
*      is the name of the Wholeplot database table; e.g. Project_Assay.gdb
*      in the above case. The DRILLTABLE is only included in the template
*      for DH_DATA_FROMTO and DH_DATA_POINT, but this function will
*      return the appropriate table names (e.g. Collar, Survey, ENSurvey)
*      for the other types.
*      If the DRILLTYPE is NOT found in the template, a value of
*      DH_DATA_UNKNOWN is returned for the data type; likely an indication that this
*      is not a new-style template produced by Wholeplot.
*      This version also returns a list of the channels in the template checks can be made to
*      see if the import will exceed the database channel limit.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.3
*/
GX_EXPORT void IGetTemplateInfoEx_DH(void* p_geo, const char* template, int32_t* data_type, char* file, const int32_t* file_size, char* table, const int32_t* table_size, const int32_t* lst);

/**
* Get the positional units and conversion factor to m.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[out] units TODO
* @param[in]  size TODO
* @param[out] conv_factor TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetUnits_DH(void* p_geo, const int32_t* dh, char* units, const int32_t* size, double* conv_factor);

/**
* Returns True if a drill project is loaded
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT int32_t iHaveCurrent_DH(void* p_geo);

/**
* Returns True if a drill project is loaded, and the collar database if it is loaded.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] db TODO
* @param[in]  db_size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT int32_t IiHaveCurrent2_DH(void* p_geo, char* db, const int32_t* db_size);

/**
* Return number of holes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return x  - Number of holes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iHoles_DH(void* p_geo, const int32_t* dh);

/**
* Select/Deselect holes using the two-panel selection tool.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  sel_lst TODO
* @return 0  - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iHoleSelectFromListGUI_DH(void* p_geo, const int32_t* lst, const int32_t* sel_lst);

/**
* Select/Deselect holes using plan map tool.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return 0  - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iHoleSelectionToolGUI_DH(void* p_geo, const int32_t* dh);

/**
* Modify parameters for a 3D plot.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t iModify3dGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Edit a symbol color/pattern CSV file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  chan TODO
* @param[out] class_file TODO
* @param[in]  class_file_size TODO
* @param[in]  fill_patterns TODO
* @param[in]  colors_only TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.3
*/
GX_EXPORT int32_t iEditClassificationTableFileGUI_DH(void* p_geo, const int32_t* dh, const char* chan, char* class_file, const int32_t* class_file_size, const int32_t* fill_patterns, const int32_t* colors_only);

/**
* Modify parameters to replot holes and hole data to an existing crooked section map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
**
* @par Note 
*      Will plot to an empty crooked section.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT int32_t iModifyCrookedSectionHolesGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify parameters for a section plot.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* 1 - Interactively define a fence.
* -1 - User Cancelled
**
* @par Note 
*      The fence section function.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iModifyFenceGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify parameters for a hole traces plot to an existing 3D view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT int32_t iModifyHoleTraces3DGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify parameters for a hole traces plot to a current map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iModifyHoleTracesGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify parameters for a hole traces plot to a current plan or section view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[in]  plot_type TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
**
* @par Note 
*      Currently supports DH_PLOT_PLAN and DH_PLOT_SECTION
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.3
*/
GX_EXPORT int32_t iModifyHoleTracesGUI2_DH(void* p_geo, const int32_t* dh, const char* ini, const int32_t* plot_type, int32_t* page);

/**
* Modify parameters for a plan plot.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iModifyPlanGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify parameters to replot holes and hole data to an existing plan map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
**
* @par Note 
*      Modifies only hole trace, hole data, topo, voxel slice data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT int32_t iModifyPlanHolesGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify/create a rock codes file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iModifyRockCodesGUI_DH(void* p_geo, const char* file);

/**
* Modify/create a rock codes file, channel population option.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
* @return 0 - Ok
* -1 - User Cancelled
**
* @par Note 
*      Same as above, but passes the current database so that
*      the "Populate from channel" button can be used to
*      automatically populate the rock code list. The database
*      should be a Wholeplot database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT int32_t iModifyRockCodesGUI2_DH(void* p_geo, const int32_t* db, const char* file);

/**
* Modify parameters for a section plot.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* 1 - Interactively define a NS section
* 2 - Interactively define an EW section
* 3 - Interactively define an angled section
* -1 - User Cancelled
**
* @par Note 
*      The stacked section function uses the same control file
*      format, but the plotting of profiles and plan views is
*      disabled, and if multiple sections are requested, they
*      are plotted in a stack on the left side of the same map,
*      not to individual maps.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iModifySectionGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify parameters to replot holes and hole data to an existing section map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
**
* @par Note 
*      Works for both regular and stacked sections.
*      Modifies only hole trace, hole data, topo, voxel slice data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT int32_t iModifySectionHolesGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify parameters for a section plot.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* 1 - Interactively define a NS section
* 2 - Interactively define an EW section
* 3 - Interactively define an angled section
* -1 - User Cancelled
**
* @par Note 
*      The stacked section function uses the same control file
*      format, but the plotting of profiles and plan views is
*      disabled, and if multiple sections are requested, they
*      are plotted in a stack on the left side of the same map,
*      not to individual maps.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iModifyStackedSectionGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify parameters for a strip log plot.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t iModifyStripLogGUI_DH(void* p_geo, const int32_t* dh, const char* ini, int32_t* page);

/**
* Modify/create a structure codes file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT int32_t iModifyStructureCodesGUI_DH(void* p_geo, const char* file);

/**
* Modify/create a structure codes file, channel population option.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
* @return 0 - Ok
* -1 - User Cancelled
**
* @par Note 
*      Same as above, but passes the current database so that
*      the "Populate from channel" button can be used to
*      automatically populate the structure code list. The database
*      should be a Wholeplot database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT int32_t iModifyStructureCodesGUI2_DH(void* p_geo, const int32_t* db, const char* file);

/**
* Imports data into a Drill Hole Database (obsolete).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  project TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  hole TODO
* @param[in]  table TODO
* @param[in]  type TODO
* @param[in]  log TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT void Import2_DH(void* p_geo, const char* project, const int32_t* db, const int32_t* line, const int32_t* hole, const char* table, const int32_t* type, const char* log);

/**
* Imports LAS Data into a DH database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay TODO
* @param[in]  file TODO
* @param[in]  interval TODO
* @param[in]  interp TODO
* @param[in]  wa TODO
**
* @par Note 
*      The argument for the assay database is the file name
*      without the project name and underscore, e.g. for
*      "Project_Assay.gdb" use "Assay"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT void ImportLAS_DH(void* p_geo, const int32_t* dh, const char* assay, const char* file, const double* interval, const int32_t* interp, const int32_t* wa);

/**
* Number of assay datasets.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return The number of assay datasets.
**
* @par Note 
*      Works for both single and multiple DB Wholeplots.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t iNumAssays_DH(void* p_geo, const int32_t* dh);

/**
* Returns number of selected holes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @return The number of selected holes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNumSelectedHoles_DH(void* p_geo, const int32_t* dh);

/**
* Do QA/QC Curvature checking on Dip Azimuth data for holes in a LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  tolerance TODO
* @param[in]  wa TODO
* @return The number of holes found and checked.
**
* @par Note 
*      Checks all holes with Dip-Azimuth survey data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iQADipAzCurvatureLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const double* tolerance, const int32_t* wa);

/**
* Do QA/QC on Dip/Az Survey data for holes in a LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  wa TODO
* @return The number of holes found and checked.
**
* @par Note 
*      Error if no Dip-Azimuth survey database, or if
*      a requested hole does not exist in the drill project.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iQADipAzSurveyLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const int32_t* wa);

/**
* Do QA/QC Curvature checking on Dip Azimuth data for holes in a LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  tolerance TODO
* @param[in]  wa TODO
* @return The number of holes found and checked.
**
* @par Note 
*      Checks all holes with East-North survey data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iQAEastNorthCurvatureLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const double* tolerance, const int32_t* wa);

/**
* Do QA/QC on East/North Survey data for holes in a LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  wa TODO
* @return The number of holes found and checked.
**
* @par Note 
*      Error if no East-North survey database, or if
*      a requested hole does not exist in the drill project.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0
*/
GX_EXPORT int32_t iQAEastNorthSurveyLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const int32_t* wa);

/**
* Select a slice with the holes in context. An optional 4 point area of interest (AOI) can be added to be represented in the UI too.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  aoix1 TODO
* @param[in]  aoiy1 TODO
* @param[in]  aoix2 TODO
* @param[in]  aoiy2 TODO
* @param[in]  aoix3 TODO
* @param[in]  aoiy3 TODO
* @param[in]  aoix4 TODO
* @param[in]  aoiy4 TODO
* @param[out] x1 TODO
* @param[out] y1 TODO
* @param[out] x2 TODO
* @param[out] y2 TODO
* @return 0  - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT int32_t iSliceSelectionToolGUI_DH(void* p_geo, const int32_t* dh, const double* aoix1, const double* aoiy1, const double* aoix2, const double* aoiy2, const double* aoix3, const double* aoiy3, const double* aoix4, const double* aoiy4, double* x1, double* y1, double* x2, double* y2);

/**
* Update the Survey table from the collar info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @return 0 - No change; there is no survey table, the table was empty, or values were same as collar
* 1 - Survey table updated; values changed and there is just one row.
* 2 - Survey table unchanged; there was more than one row in the table, and values were different
**
* @par Note 
*      Call when the collar values are edited to update the survey table
*      values. If the survey contains more than one row, then no changes
*      are applied, and no warning or error is registered.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT int32_t iUpdateSurveyFromCollar_DH(void* p_geo, const int32_t* dh, const int32_t* hole);

/**
* Load data parameters from INI files..
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
* @param[in]  dir TODO
**
* @par Note 
*      Wholeplot data graphing parameters for each channel are stored
*      in the channel REG. This function lets a user transfer pre-defined
*      settings to individual INI files (eg. cu.ini).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT void LoadDataParametersINI_DH(void* p_geo, const int32_t* dh, const int32_t* db, const char* dir);

/**
* Load parameters from a Job into the Drill object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ini TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT void LoadPlotParameters_DH(void* p_geo, const int32_t* dh, const char* ini, const int32_t* type);

/**
* Load selections to from a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void LoadSelect_DH(void* p_geo, const int32_t* dh, const char* file);

/**
* Set mask channel based on view selection polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  pply TODO
* @param[in]  ipj TODO
* @param[in]  tol TODO
* @param[in]  mask TODO
* @param[in]  select TODO
* @param[in]  append TODO
**
* @par Note 
*      Data values inside the polygon area, and within the slice thickness
*      have their mask channel values set to 1.
*      If the specified mask channel does not exist, it is created.
*      DH_MASK_NEW --- Mask is created new for each selected hole
*      DH_MASK_APPEND --- Current selection is added to previous.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void MaskPLY_DH(void* p_geo, const int32_t* dh, const int32_t* pply, const int32_t* ipj, const double* tol, const char* mask, const int32_t* select, const int32_t* append);

/**
* Open DH from collar database and load all associated databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return DH Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT int32_t Open_DH(void* p_geo, const char* db);

/**
* Open a DH plotting job
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  job TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void OpenJob_DH(void* p_geo, const int32_t* dh, const char* job, const int32_t* type);

/**
* Plot hole traces to a regular (plan) map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  map TODO
* @param[in]  job TODO
**
* @par Note 
*      Both the hole traces and data can be plotted.
*      The DHPLANHOLES GX uses the default plan map parameter file
*      "_plan.inp".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void PlotHoleTraces_DH(void* p_geo, const int32_t* dh, const int32_t* map, const char* job);

/**
* Plot hole traces to an existing 3D map view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  mview TODO
* @param[in]  job TODO
**
* @par Note 
*      Both the hole traces and data can be plotted.
*      The DH3DHOLES GX uses the default 3D map parameter file
*      "_3D.in3".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void PlotHoleTraces3D_DH(void* p_geo, const int32_t* dh, const int32_t* mview, const char* job);

/**
* Plot 3D symbols to an existing 3D map view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  mview TODO
* @param[in]  job TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.1
*/
GX_EXPORT void PlotSymbols3D_DH(void* p_geo, const int32_t* dh, const int32_t* mview, const char* job);

/**
* Do QA/QC on Hole Collar data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void QACollar_DH(void* p_geo, const int32_t* dh, const int32_t* wa);

/**
* Do QA/QC on Hole Collar data - LST of holes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.0.1
*/
GX_EXPORT void QACollarLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst, const int32_t* wa);

/**
* Do QA/QC Curvature checking on Dip Azimuth data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  wa TODO
* @param[in]  tolerance TODO
**
* @par Note 
*      Checks all holes with Dip-Azimuth survey data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void QADipAzCurvature_DH(void* p_geo, const int32_t* dh, const int32_t* wa, const double* tolerance);

/**
* Do QA/QC Curvature checking on Dip Azimuth data for a single hole.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  wa TODO
* @param[in]  tolerance TODO
* @param[in]  hole TODO
**
* @par Note 
*      Checks single hole with Dip-Azimuth survey data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4.2
*/
GX_EXPORT void QADipAzCurvature2_DH(void* p_geo, const int32_t* dh, const int32_t* wa, const double* tolerance, const char* hole);

/**
* Do QA/QC on Dip/Az Survey data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
* @param[in]  wa TODO
* @param[in]  line TODO
* @param[in]  hole TODO
**
* @par Note 
*      Error if no Dip-Azimuth survey database, or if
*      the requested line does not exist in the database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void QADipAzSurvey_DH(void* p_geo, const int32_t* dh, const int32_t* db, const int32_t* wa, const int32_t* line, const char* hole);

/**
* Do QA/QC Curvature checking on Dip Azimuth data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  wa TODO
* @param[in]  tolerance TODO
**
* @par Note 
*      Checks all holes with East-North survey data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void QAEastNorthCurvature_DH(void* p_geo, const int32_t* dh, const int32_t* wa, const double* tolerance);

/**
* Do QA/QC Curvature checking on Dip Azimuth data for a single hole.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  wa TODO
* @param[in]  tolerance TODO
* @param[in]  hole TODO
**
* @par Note 
*      Checks single holes with East-North survey data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4.2
*/
GX_EXPORT void QAEastNorthCurvature2_DH(void* p_geo, const int32_t* dh, const int32_t* wa, const double* tolerance, const char* hole);

/**
* Do QA/QC on East/North Survey data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
* @param[in]  wa TODO
* @param[in]  line TODO
* @param[in]  hole TODO
**
* @par Note 
*      Error if no East-North survey database, or if
*      the requested line does not exist in the database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void QAEastNorthSurvey_DH(void* p_geo, const int32_t* dh, const int32_t* db, const int32_t* wa, const int32_t* line, const char* hole);

/**
* Do QA/QC on From/To data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
* @param[in]  wa TODO
* @param[in]  line TODO
* @param[in]  hole TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void QAFromToData_DH(void* p_geo, const int32_t* dh, const int32_t* db, const int32_t* wa, const int32_t* line, const char* hole);

/**
* Do QA/QC on Point data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
* @param[in]  wa TODO
* @param[in]  line TODO
* @param[in]  hole TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void QAPointData_DH(void* p_geo, const int32_t* dh, const int32_t* db, const int32_t* wa, const int32_t* line, const char* hole);

/**
* Write out unregistered holes in a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
* @param[in]  wa TODO
**
* @par Note 
*      Looks at each line in a database and sees if it is listed in
*      the collar tables' hole list.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void QAWriteUnregisteredHoles_DH(void* p_geo, const int32_t* dh, const int32_t* db, const int32_t* wa);

/**
* Replot holes on an existing drill map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  job TODO
* @param[in]  plot_type TODO
**
* @par Note 
*      The parameter file must correspond to the plot Type.
*      The hDH->hMAP value must be set first, using SetMAP_DH.
*      Overwrites existing hole and hole data groups.
*      Replots the legend if the legend is enabled.
*      This should only be used on a slightly modified version of the
*      INI file used to create the existing map, or things may not
*      work out (e.g. bad locations etc).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT void ReplotHoles_DH(void* p_geo, const int32_t* dh, const char* job, const int32_t* plot_type);

/**
* Plot the currently selected holes on an existing section view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  job TODO
* @param[in]  plot_type TODO
* @param[in]  view TODO
**
* @par Note 
*      Plot the currently selected holes to a section view.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.3
*/
GX_EXPORT void PlotHolesOnSection_DH(void* p_geo, const int32_t* dh, const char* job, const int32_t* plot_type, const char* view);

/**
* Resurvey an East-North-RL survey.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
* @param[in]  east TODO
* @param[in]  north TODO
* @param[in]  elev TODO
* @param[in]  top TODO
* @param[out] bot TODO
**
* @par Note 
*      Re-interpolates in X, Y and Z to proper depth interval
*      and returns depths for each point
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void ReSurveyEastNorth_DH(void* p_geo, const int32_t* dh, const char* hole, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d, const double* east, const double* north, const double* elev, const double* top, double* bot);

/**
* Use the polynomial fit resurveying method.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  vv_dip TODO
* @param[in]  vv_az TODO
* @param[in]  vv_depth TODO
* @param[in]  east TODO
* @param[in]  north TODO
* @param[in]  elev TODO
* @param[in]  top TODO
* @param[in]  bot TODO
* @param[in]  inc TODO
* @param[in]  dip_conv TODO
* @param[in]  order TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
**
* @par Note 
*      Uses the polynomial fit method to calculate (X, Y, Z)
*      locations down the hole from azimuth, dip, depth values.
*      The collar is assumed to be at zero depth, and depth is the
*      measure distance down the hole (even if it's horizontal).
*      A negative dip convention means vertical down is -90 degrees.
*      The polynomial order must be in the range 1-20, with 5 being adequate
*      for most smoothly curving holes. The order is reduced to no more than
*      the number of input points.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void ReSurveyPolFit_DH(void* p_geo, const int32_t* dh, const char* hole, const int32_t* vv_dip, const int32_t* vv_az, const int32_t* vv_depth, const double* east, const double* north, const double* elev, const double* top, const double* bot, const double* inc, const int32_t* dip_conv, const int32_t* order, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d);

/**
* Use radius of curvature resurveying method.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  vv_dip TODO
* @param[in]  vv_az TODO
* @param[in]  vv_depth TODO
* @param[in]  east TODO
* @param[in]  north TODO
* @param[in]  elev TODO
* @param[in]  top TODO
* @param[in]  bot TODO
* @param[in]  inc TODO
* @param[in]  dip_conv TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
**
* @par Note 
*      Uses the Radius of curvature method to calculate (X, Y, Z)
*      locations down the hole from azimuth, dip, depth values.
*      The collar is assumed to be at zero depth, and depth is the
*      measure distance down the hole (even if it's horizontal).
*      A negative dip convention means vertical down is -90 degrees.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void ReSurveyRadCurve_DH(void* p_geo, const int32_t* dh, const char* hole, const int32_t* vv_dip, const int32_t* vv_az, const int32_t* vv_depth, const double* east, const double* north, const double* elev, const double* top, const double* bot, const double* inc, const int32_t* dip_conv, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d);

/**
* Resurvey a straight hole.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  dip TODO
* @param[in]  az TODO
* @param[in]  east TODO
* @param[in]  north TODO
* @param[in]  elev TODO
* @param[in]  top TODO
* @param[in]  bot TODO
* @param[in]  inc TODO
* @param[in]  dip_conv TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
**
* @par Note 
*      Assumes a straight hole to calculate (X, Y, Z)
*      locations down the hole from azimuth, dip, depth values.
*      The collar is assumed to be at zero depth, and depth is the
*      measure distance down the hole (even if it's horizontal).
*      A negative dip convention means vertical down is -90 degrees.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void ReSurveyStraight_DH(void* p_geo, const int32_t* dh, const char* hole, const double* dip, const double* az, const double* east, const double* north, const double* elev, const double* top, const double* bot, const double* inc, const int32_t* dip_conv, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d);

/**
* Resurvey a hole with straight segments between locations.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  vv_dip TODO
* @param[in]  vv_az TODO
* @param[in]  vv_depth TODO
* @param[in]  east TODO
* @param[in]  north TODO
* @param[in]  elev TODO
* @param[in]  top TODO
* @param[in]  bot TODO
* @param[in]  inc TODO
* @param[in]  dip_conv TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_d TODO
**
* @par Note 
*      Calculate (X, Y, Z) locations down the hole from azimuth, dip,
*      depth values, assuming each segment is straight, and the hole
*      bends at each successive azimuth, dip, depth value.
*      The collar is assumed to be at zero depth, and depth is the
*      measure distance down the hole (even if it's horizontal).
*      A negative dip convention means vertical down is -90 degrees.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ReSurveyStraightSeg_DH(void* p_geo, const int32_t* dh, const char* hole, const int32_t* vv_dip, const int32_t* vv_az, const int32_t* vv_depth, const double* east, const double* north, const double* elev, const double* top, const double* bot, const double* inc, const int32_t* dip_conv, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_d);

/**
* Save data parameters to INI files..
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
* @param[in]  dir TODO
**
* @par Note 
*      Wholeplot data graphing parameters for each channel are stored
*      in the channel REG. This function lets a user transfer pre-defined
*      settings to individual INI files (eg. cu.ini).
*      As of v6.3, the DH object is NOT required for this function, and
*      is, in fact, ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT void SaveDataParametersINI_DH(void* p_geo, const int32_t* dh, const int32_t* db, const char* dir);

/**
* Save a DH plotting job
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  job TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void SaveJob_DH(void* p_geo, const int32_t* dh, const char* job, const int32_t* type);

/**
* Saves current selections to a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void SaveSelect_DH(void* p_geo, const int32_t* dh, const char* file);

/**
* Deterine the size, in mm, of the section window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[out] xmm TODO
* @param[out] ymm TODO
**
* @par Note 
*      Given the current selection of windows (e.g. legend, plan),
*      paper size and orientation, return the size in mm of the
*      window used for plotting the section.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT void SectionWindowSizeMM_DH(void* p_geo, const int32_t* dh, double* xmm, double* ymm);

/**
* Select all the holes in a Drill hole project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void SelectAllHoles_DH(void* p_geo, const int32_t* dh);

/**
* Select holes by hole indices.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  gvv TODO
* @param[in]  sel TODO
**
* @par Note 
*      Indices less than 0 are skipped. This lets you use this function
*      after a call to FindItems_LST, which returns -1 for indices not located.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void SelectHoles_DH(void* p_geo, const int32_t* dh, const int32_t* gvv, const int32_t* sel);

/**
* Select holes using a name mask.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  mask TODO
* @param[in]  sel TODO
* @param[in]  mode TODO
**
* @par Note 
*      Overwrite mode - all selections tested and selected or not selected
*      Append mode    - only holes matching the mask are selected or not selected.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void SelectName_DH(void* p_geo, const int32_t* dh, const char* mask, const int32_t* sel, const int32_t* mode);

/**
* Select all holes in PLY (Polygon) object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  pply TODO
**
* @par Note 
*      This function operates the same as the SelectPLY2_DH method 
*      with parameters (1, 0, 0)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void SelectPLY_DH(void* p_geo, const int32_t* dh, const int32_t* pply);

/**
* Select holes in PLY (Polygon) object with options.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  pply TODO
* @param[in]  select TODO
* @param[in]  inside TODO
* @param[in]  new TODO
**
* @par Note 
*      The various selection options give the following results:
*      
*      New/Select/inside: Unselect all holes, then
*                         select all holes inside the polygon.
*      New/Select/outside: Unselect all holes, then
*                         select all holes outside the polygon.
*      New/Deselect/inside: Select all holes, then
*                         deselect all holes inside the polygon.
*      New/Deselect/outside: Select all holes, then
*                         deselect all holes outside the polygon.
*      
*      Append/Select/inside: Select all holes inside the polygon.
*                            Leave selections outside as is.
*      Append/Select/outside: Select all holes outside the polygon.
*                            Leave selections inside as is.
*      Append/Deselect/inside: Deselect all holes inside the polygon
*                            Leave selections outside as is.
*      Append/Deselect/outside: Deselect all holes outside the polygon.
*                            Leave selections inside as is.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void SelectPLY2_DH(void* p_geo, const int32_t* dh, const int32_t* pply, const int32_t* select, const int32_t* inside, const int32_t* new);

/**
* Pass the Crooked projection required for plotting to a crooked section.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ipj TODO
**
* @par Note 
*      This might be extracted from an existing crooked section view, or created from a database line.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT void SetCrookedSectionIPJ_DH(void* p_geo, const int32_t* dh, const int32_t* ipj);

/**
* Set the current map view name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  cur_view TODO
**
* @par Note 
*      Can be used to specify the name of the view to plot into.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT void SetCurrentViewName_DH(void* p_geo, const int32_t* dh, const char* cur_view);

/**
* Set Collar Information.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
* @param[in]  name TODO
* @param[in]  data TODO
**
* @par Note 
*      If the DH_ELEV channel is requested it will also
*      search for the DH_RL channel, which is the new
*      name for the collar elevation.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetInfo_DH(void* p_geo, const int32_t* dh, const int32_t* hole, const char* name, const char* data);

/**
* Set the project IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  ipj TODO
**
* @par Note 
*      The projection for the project is the projection stored
*      in the DH_EAST channel in the collar table. This
*      function sets the projection of the (DH_EAST, DH_NORTH)
*      channel pairs in each of the project databases to the
*      input IPJ.
*      The input IPJ cannot be a geographic coordinate system
*      or this call will fail with an error message.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void SetIPJ_DH(void* p_geo, const int32_t* dh, const int32_t* ipj);

/**
* Store the current MAP to the DH object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  map TODO
**
* @par Note 
*      Use this before calling the ReplotHoles functions,
*      so that, instead of creating a new map, the plotting
*      functions use the existing one.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT void SetMAP_DH(void* p_geo, const int32_t* dh, const int32_t* map);

/**
* Set a new project database projection to collar table projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  db TODO
**
* @par Note 
*      Gets the IPJ of the collar table current x channel and copies it
*      into the named database (as long as it is in the project!)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void SetNewIPJ_DH(void* p_geo, const int32_t* dh, const char* db);

/**
* Set hole selection using hole indices.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  vv TODO
* @param[in]  append TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void SetSelectedHolesVV_DH(void* p_geo, const int32_t* dh, const int32_t* vv, const int32_t* append);

/**
* Store the import template to the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
* @param[in]  imp_type TODO
**
* @par Note 
*      The template can later be retrieved in order to refresh the
*      database with a call to the DHIMPORT.GX.
*      
*      The import types correspond to the DHIMPORT.IMPTYPE variable:
*      0: ASCII, 1: Database/XLS, 2: ODBC
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0
*/
GX_EXPORT void SetTemplateBlob_DH(void* p_geo, const int32_t* db, const char* template, const int32_t* imp_type);

/**
* Make a report of Significant Intersections
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  mast_db TODO
* @param[in]  comp_db TODO
* @param[in]  hol_sel TODO
* @param[in]  assay_ch TODO
* @param[in]  cut_off_grade TODO
* @param[in]  clip_grade TODO
* @param[in]  min_composite_thickness TODO
* @param[in]  min_composite_grade TODO
* @param[in]  max_internal_dilution_length TODO
* @param[in]  min_internal_dilution_grade TODO
* @param[in]  grade_for_missing_assays TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.2
*/
GX_EXPORT void SignificantIntersectionsDB_DH(void* p_geo, const int32_t* dh, const int32_t* mast_db, const int32_t* comp_db, const int32_t* hol_sel, const char* assay_ch, const double* cut_off_grade, const double* clip_grade, const double* min_composite_thickness, const double* min_composite_grade, const double* max_internal_dilution_length, const double* min_internal_dilution_grade, const double* grade_for_missing_assays);

/**
* Tests import of LAS Data for problems.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  assay TODO
* @param[in]  file TODO
* @param[in]  interval TODO
* @param[in]  wa TODO
* @param[out] warn TODO
**
* @par Note 
*      See ImportLAS_DH.
*      Determines if the import of the LAS data will result in data
*      being overwritten, interpolated or resampled. Warnings are written to a log
*      file, as in sImportLAS_DH. Warnings are not registered in cases
*      where data is merely extended at the start or the end with dummies
*      to match a different interval down the hole.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.0.1
*/
GX_EXPORT void TestImportLAS_DH(void* p_geo, const int32_t* dh, const char* assay, const char* file, const double* interval, const int32_t* wa, int32_t* warn);

/**
* Unselect all the holes in a Drill hole project.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void UnSelectAllHoles_DH(void* p_geo, const int32_t* dh);

/**
* Populate an LST with the list of the unselected holes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void UnSelectedHoleLST_DH(void* p_geo, const int32_t* dh, const int32_t* lst);

/**
* Update all collar table information.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void UpdateCollarTable_DH(void* p_geo, const int32_t* dh);

/**
* Update extents for one hole.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  hole TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void UpdateHoleExtent_DH(void* p_geo, const int32_t* dh, const int32_t* hole);

/**
* Run a Wholeplot plot job.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  job TODO
* @param[in]  plot_type TODO
**
* @par Note 
*      The parameter file must correspond to the plot Type. The INI file
*      contains settings for all of the non-database data related
*      parameters (e.g. Map template, scale, boundaries,
*      section definitions, hole trace parameters etc...)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void Wholeplot_DH(void* p_geo, const int32_t* dh, const char* job, const int32_t* plot_type);

/**
* Determine intersections of drillholes with a surface.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dh TODO
* @param[in]  output_db TODO
* @param[in]  input_geosurface_or_grid TODO
* @param[in]  hole_selection TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.3
*/
GX_EXPORT void SurfaceIntersections_DH(void* p_geo, const int32_t* dh, const int32_t* output_db, const char* input_geosurface_or_grid, const int32_t* hole_selection);

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
