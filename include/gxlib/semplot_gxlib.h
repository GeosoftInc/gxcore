//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file semplot_gxlib.h
* @date 2017-11-06
* @brief File containing SEMPLOT GX C API constant and function declarations
*/

/**
* @defgroup SEMPLOT_Module SEMPLOT
* Oasis montaj implementation of RTE SEMPLOT
* @{
*/

#pragma once
#ifndef HSEMPLOT_H_DEFINED
#define HSEMPLOT_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name SEMPLOT_GROUP_CLASS Definitions
* 
* SEMPLOT group class.
*/
///@{
/** 
* SEMPLOT_GROUP_CLASS
*/
#define SEMPLOT_GROUP_CLASS "Semplot"
///@}

/**
* @name SEMPLOT_EXPORT Definitions
* 
* SEMPLOT export type selection.
*/
///@{
/** 
* SEMPLOT_EXPORT_NORMAL
* 
* Exports Sample info channels, oxides/ratios, totals, extra channels.
*/
#define SEMPLOT_EXPORT_NORMAL 0
/** 
* SEMPLOT_EXPORT_NOEXTRA
* 
* Exports Sample info, oxides/ratios, totals.
*/
#define SEMPLOT_EXPORT_NOEXTRA 1
///@}

/**
* @name SEMPLOT_EXT Definitions
* 
* SEMPLOT file extension selection
*/
///@{
/** 
* SEMPLOT_EXT_ALL
* 
* Use for selection only. Selects both "Semplot" and "CHIMERA" type
* files when creating LSTs etc.
*/
#define SEMPLOT_EXT_ALL 0
/** 
* SEMPLOT_EXT_SEMPLOT
* 
* Read/write templates with extensions ".xyt", ".tri" and ".semtemplate"
* Read/write overlays with extensions ".oly" and ".semoverlay"
*/
#define SEMPLOT_EXT_SEMPLOT 1
/** 
* SEMPLOT_EXT_CHIMERA
* 
* Read/write templates with extensions ".geosoft_template"
* Read/write overlays with extensions ".geosoft_overlay"
*/
#define SEMPLOT_EXT_CHIMERA 2
///@}

/**
* @name SEMPLOT_PLOT Definitions
* 
* SEMPLOT plot type selection.
*/
///@{
/** 
* SEMPLOT_PLOT_ALL
* 
* Use for selection only. Selects both "XYPlot" and "TriPlot"
* plots when creating LSTs etc.
*/
#define SEMPLOT_PLOT_ALL 0
/** 
* SEMPLOT_PLOT_XYPLOT
* 
* Select XY (Scatter) plot.
*/
#define SEMPLOT_PLOT_XYPLOT 1
/** 
* SEMPLOT_PLOT_TRIPLOT
* 
* Select Tri (Triangular) plot.
*/
#define SEMPLOT_PLOT_TRIPLOT 2
/** 
* SEMPLOT_PLOT_UNKNOWN
* 
* Returned as an error status from some functions.
*/
#define SEMPLOT_PLOT_UNKNOWN 3
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Apply the filter to the mask channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  filter TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  mineral TODO
* @param[in]  mode TODO
**
* @par Note 
*      The mask channel is updated for the current data to reflect
*      the actions of the filter. Those values passing get 1, those
*      failing get 0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ApplyFilterToMask_SEMPLOT(void* p_geo, const int32_t* db, const char* filter, const char* mask_ch, const char* mineral_ch, const char* mineral, const int32_t* mode);

/**
* Convert dummies to zero values for assay channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
**
* @par Note 
*      The is operation is controlled by the Preferences
*      "Use dummies to indicate no data?" By default, this option is "yes"
*      so this function will return with no changes. However, if
*      "no", then all ASSAY class channels will have dummy values
*      converted to 0.0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ConvertDummies_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* line);

/**
* Group data by anomaly or string channel - Interactive.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mask_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void CreateGroups_SEMPLOT(void* p_geo, const int32_t* db, const char* mask_ch);

/**
* Group data by selected anomalies.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void DefaultGroups_SEMPLOT(void* p_geo, const int32_t* db);

/**
* Alter parameters in an XYplot Triplot map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  map TODO
* @param[in]  view TODO
**
* @par Note 
*      The Parameters GUI is loaded based on settings stored in
*      the map. The map is then re-plotted, overwriting the old one,
*      based on the new settings. Note that the selection of data
*      in the current DB is used to replot the map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void EditMapPlotParameters_SEMPLOT(void* p_geo, const int32_t* db, const char* mask_ch, const char* mineral_ch, const int32_t* map, const char* view);

/**
* Set group names and channels to plot in a template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
**
* @par Note 
*      The "Components" group in the INI file is edited.
*      
*      Looks first in user\etc, then in \etc.
*      Looks first for file prefix "semtemplate" then "xyt" or "tri"
*      The altered template will be output to the user\etc directory with
*      the file extension "semtemplate".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void EditPlotComponents_SEMPLOT(void* p_geo, const int32_t* db, const char* template);

/**
* Set TriPlot parameters in a template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
**
* @par Note 
*      The "Parameters" group in the INI file is edited.
*      
*      Looks first in user\etc, then in \etc.
*      Looks first for file prefix "semtemplate" then "xyt" or "tri"
*      The altered template will be output to the user\etc directory with
*      the file extension "semtemplate".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void EditPlotParameters_SEMPLOT(void* p_geo, const int32_t* db, const char* template);

/**
* Create overlay map and file from a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  overlay TODO
* @param[in]  map TODO
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  plot_type TODO
* @param[in]  x_stage TODO
* @param[in]  x_oxide TODO
* @param[in]  y_stage TODO
* @param[in]  y_oxide TODO
* @param[in]  z_stage TODO
* @param[in]  z_oxide TODO
* @param[in]  extension TODO
**
* @par Note 
*      The group is written to a new map, and an overlay file
*      is created which points to this map.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ExportOverlay_SEMPLOT(void* p_geo, const char* overlay, const char* map, const int32_t* mview, const char* group, const int32_t* plot_type, const char* x_stage, const char* x_oxide, const char* y_stage, const char* y_oxide, const char* z_stage, const char* z_oxide, const int32_t* extension);

/**
* Create a "View" database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  new_db TODO
* @param[in]  view TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  mineral TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ExportView_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* lst, const int32_t* new_db, const int32_t* view, const char* mask_ch, const char* mineral_ch, const char* mineral);

/**
* Create a "View" database, with channel selection
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  new_db TODO
* @param[in]  view TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  mineral TODO
* @param[in]  export TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT void ExportView2_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* lst, const int32_t* new_db, const int32_t* view, const char* mask_ch, const char* mineral_ch, const char* mineral, const int32_t* export);

/**
* Fill a LST with existing SEMPLOT filters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
**
* @par Note 
*      "Supplied" filters are stored in \etc, while user-edited and new filters
*      are stored in user\etc. This function finds all files with the extension
*      ".semfilter", first in user\etc, then in \etc, and adds the file names
*      (without the extension) to the LST. The name with the extension is stored
*      as the value.
*      The LST is cleared first.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void FilterLST_SEMPLOT(void* p_geo, const int32_t* lst);

/**
* Filter raw data by position and mineral values
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  mineral TODO
* @param[in]  pos TODO
**
* @par Note 
*      The Mask channel will be updated so that those data values
*      which "pass" get "1" and those that "fail" get dummy "*"
*      NO DATA IS REMOVED.
*      Works on all selected lines of data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void FilterMineralPosData_SEMPLOT(void* p_geo, const int32_t* db, const char* mask_ch, const char* mineral_ch, const char* mineral, const int32_t* pos);

/**
* Get the associated channels for this group in a LST
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  group TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void GetAssociatedLST_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* group, const int32_t* lst);

/**
* Retrieve LST of minerals in selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mineral_ch TODO
* @param[in]  lst TODO
**
* @par Note 
*      If the mineral channel name is not specified, it returns
*      just the "X" (Unknown) item.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void GetCurrentMineralLST_SEMPLOT(void* p_geo, const int32_t* db, const char* mineral_ch, const int32_t* lst);

/**
* Retrieve LST of positions in selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void GetCurrentPositionLST_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Retrieve LST of all minerals in Semplot_Minerals.csv
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void GetFullMineralLST_SEMPLOT(void* p_geo, const int32_t* lst);

/**
* Retrieve LST of all possible mineral positions.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void GetFullPositionLST_SEMPLOT(void* p_geo, const int32_t* lst);

/**
* Get list of items to group symbols by.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      The first item is "Anomaly", which gives the line names, The second
*      item (if the channel exists in the database) is the Sample Number.
*      After this are included all string channels which are NOT oxides or
*      elements. (The list can include the mineral).
*      Channel symbol is the LST value (except for the first item - "Anomaly")
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void GetGroupingLST_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* : Generate ASCII import template automatically
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @return 1 if it succeeds in creating a Template.
* 0 if it fails.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT int32_t iCreateASCIITemplate_SEMPLOT(void* p_geo, const char* name, const char* temp);

/**
* Generate database import template automatically
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @return 1 if it succeeds in creating a Template.
* 0 if it fails.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT int32_t iCreateDatabaseTemplate_SEMPLOT(void* p_geo, const char* name, const char* temp);

/**
* Edit and create filter on channel values
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  filter TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  mineral TODO
* @return -1 - Cancel - Edits to filter discarded.
* 
*  0 - Normal Return. Edits saved to filter file.
* 
*  1 - Apply filter to current data only
* 
*  2 - Remove filter - If removing filtered data, just
*      restore the data to the Min/Pos data
*      otherwise set the mask channel to 1.
* 
* Re-entry code. If not iDUMMY, what to do inside the filter after
* going back in. Returned on exit, used on next input.
* 
*  0 - Nothing. Don't need to go back into this function again.
*  1 - Edit the filter.
* 
* Notes            New and edited filters are stored in user\etc in files with
*  the file extension ".semfilter"
*  If a file for the specified filter does not exist, then a
*  new filter by that name will be created.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT int32_t iEditFilter_SEMPLOT(void* p_geo, const int32_t* db, const char* filter, const char* mask_ch, const char* mineral_ch, const char* mineral);

/**
* Retrieve the mineral channel name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[out] mineral_ch TODO
* @param[in]  size TODO
**
* @par Note 
*      First looks at the SEMPLOT.MINERAL_CHANNEL value.
*      If not found, returns the first MINERAL class
*      channel found. If still not found, returns a
*      blank string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void IGetMineralChannelName_SEMPLOT(void* p_geo, const int32_t* db, char* mineral_ch, const int32_t* size);

/**
* Generate a SEMPLOT ASCII import template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @param[out] anomaly TODO
* @param[in]  size TODO
**
* @par Note 
*      If the anomaly name is not included, then
*      the input data must have an "Anom_Name" field.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void IImportAsciiWizard_SEMPLOT(void* p_geo, const char* name, const char* temp, char* anomaly, const int32_t* size);

/**
* Generate a template file for importing ODBC databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] connection TODO
* @param[in]  connection_size TODO
* @param[out] temp TODO
* @param[in]  temp_size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void IImportDatabaseODBC_SEMPLOT(void* p_geo, char* connection, const int32_t* connection_size, char* temp, const int32_t* temp_size);

/**
* Import blocked binary or archive ASCII data
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  data TODO
* @param[in]  template TODO
* @param[in]  line TODO
* @param[in]  flight TODO
* @param[in]  date TODO
**
* @par Note 
*      This wrapper is for SEMPLOT, and does not require the import licence.
*      
*         1. Binary import templates have extension .I2 by convention.  See
*            BINARY.I2 for a description of the template format.
*            Archive import templates have extension .I3 by convention. See
*            ARCHIVE.I3 for a description of the template format.
*      
*         2. Both the import template and data file must exist.
*      
*         3. If a line already exists in the database, a new version is created
*            unless a line name is passed in.  In this case, the specified name
*            is used and the imported channels on the previous line will be
*            destroyed.
*
* @par See also 
*      LabTemplate_DU in du.gxh
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ImportBIN_SEMPLOT(void* p_geo, const int32_t* db, const char* data, const char* template, const char* line, const int32_t* flight, const double* date);

/**
* Generate a template file for importing semplot databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ImportDatabaseADO_SEMPLOT(void* p_geo, const char* name, const char* temp);

/**
* Initializes memory of symbols used in plotting.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
**
* @par Note 
*      Maintains a list of the symbols used in plotting. Call before
*      Plotting one or more legends - symbols are accumulated.
*      PlotSymbolLegend_SEMPLOT uses this information to create a legend.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void InitGroupSymbolsUsed_SEMPLOT(void* p_geo, const int32_t* db);

/**
* Create a new XYPlot or TriPlot template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  template TODO
* @return SEMPLOT_PLOT_XYPLOT or
* SEMPLOT_PLOT_TRIPLOT
* Terminates if error.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT int32_t iTemplateType_SEMPLOT(void* p_geo, const char* template);

/**
* Test to see if a view is an XYPlot or Triplot view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  view TODO
* @return SEMPLOT_PLOT
**
* @par Note 
*      First checks the view name to see if it starts with
*      "XYplt_" or "Triplt_". Failing that it looks in the
*      view REG for a value for "Components.Type", which will
*      be either "XYPlot" or "TriPlot".
*      If the view does not appear to be an XYPlot or a TriPlot view,
*      the function returns SEMPLOT_PLOT_UNKNOWN.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4.2
*/
GX_EXPORT int32_t iViewType_SEMPLOT(void* p_geo, const int32_t* map, const char* view);

/**
* Identify minerals from the oxide channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  resid TODO
* @param[in]  min_ch TODO
* @param[in]  res_ch TODO
**
* @par Note 
*      Finds the best mineral matching the composition for each
*      row of oxide values. Works using linear programming and
*      the simplex method to maximize the oxides used to create
*      each of the possible output minerals. The mineral leaving the
*      least leftover is selected, as long as the residual (measured
*      as a percent of the total) is less than or equal to the
*      input value.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void MineralID_SEMPLOT(void* p_geo, const int32_t* db, const double* resid, const int32_t* min_ch, const int32_t* res_ch);

/**
* Create a new selection filter.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  filter TODO
* @param[in]  model TODO
**
* @par Note 
*      Creates a new, empty filter file in the user\etc directory
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void NewFilter_SEMPLOT(void* p_geo, const char* filter, const char* model);

/**
* Create a new XYPlot or TriPlot template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  template TODO
* @param[in]  type TODO
* @param[in]  model TODO
**
* @par Note 
*      The new template is written to the user\etc directory, with
*      the file extension "semfilter". The template contains a parameter
*      identifying it as an XY or Triplot.
*      
*      Model Template: Looks first in user\etc, then in \etc.
*      Looks first for file prefix "semtemplate" then "xyt" or "tri"
*      
*      Because there are so many shared parameters, it is possible to use
*      an XYPlot template as a model for a TriPlot, and vica-verca, with
*      few complications.  (e.g. needing to define a "Z" component)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void NewTemplate_SEMPLOT(void* p_geo, const char* template, const int32_t* type, const char* model);

/**
* Fill a list with the available plot overlay names
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  extension TODO
* @param[in]  type TODO
**
* @par Note 
*      Looks first in user\etc, then in \etc.
*      See SEMPLOT_EXT definitions above for which files to look for.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void OverlayLST_SEMPLOT(void* p_geo, const int32_t* lst, const int32_t* extension, const int32_t* type);

/**
* Plot an XYPlot or TriPlot based on the template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  map TODO
* @param[in]  map_mode TODO
* @param[in]  plot_symb TODO
**
* @par Note 
*      The "Components" and "Parameters" groups in the INI file
*      are used.
*      Only values with mask values of 1 are plotted, if the mask
*      channel is specified.
*      
*      Call "ResetUsedChannel_SEMPLOT" prior to this function
*      in order to track the values actually plotted.
*      
*      Call InitGroupSymbolsUsed_SEMPLOT prior to this function
*      to reset recording of the symbols used in plotting (for legends etc).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void Plot_SEMPLOT(void* p_geo, const int32_t* db, const char* template, const char* mask_ch, const char* mineral_ch, const char* map, const int32_t* map_mode, const int32_t* plot_symb);

/**
* Plot a symbol legend in a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mview TODO
* @param[in]  x_min TODO
* @param[in]  y_min TODO
* @param[in]  y_max TODO
* @param[in]  symb_size TODO
**
* @par Note 
*      This function depends on InitGroupSymbolsUsed_SEMPLOT
*      before the plot for which this legend is created is made.
*      The symbols and groups to use in the legend are stored to
*      a database blob after the plot is made. These values are
*      recovered by this function to make the legend at the
*      specified location.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void PlotSymbolLegend_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* mview, const double* x_min, const double* y_min, const double* y_max, const double* symb_size);

/**
* Plot a proportional symbol plot.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  map TODO
* @param[in]  view TODO
* @param[in]  chan TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  log TODO
* @param[in]  area TODO
* @param[in]  base TODO
* @param[in]  scale TODO
* @param[in]  symb TODO
* @param[in]  wt TODO
* @param[in]  line_col TODO
* @param[in]  fill_col TODO
* @param[in]  legend TODO
**
* @par Note 
*      Replots map using proportional symbols
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void PropSymb_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* map, const char* view, const char* chan, const char* mask_ch, const char* mineral_ch, const int32_t* log, const int32_t* area, const double* base, const double* scale, const int32_t* symb, const int32_t* wt, const int32_t* line_col, const int32_t* fill_col, const int32_t* legend);

/**
* Replot an existing SEMPLOT plot based on current data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  map TODO
* @param[in]  view TODO
**
* @par Note 
*      Note that the selection of data
*      in the current DB is used to replot the map.
*      
*      Call "ResetUsedChannel_SEMPLOT" prior to this function
*      in order to track the values actually plotted.
*      
*      Call InitGroupSymbolsUsed_SEMPLOT prior to this function
*      to reset recording of the symbols used in plotting (for legends etc).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void Replot_SEMPLOT(void* p_geo, const int32_t* db, const char* mask_ch, const char* mineral_ch, const int32_t* map, const char* view);

/**
* Replot a symbol legend in a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mview TODO
**
* @par Note 
*      Searches the VIEW REG for information on a previously
*      created legend, and if it finds that info, replots the Legend,
*      using the current data, group key etc.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void RePlotSymbolLegend_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* mview);

/**
* Re-group data using current settings.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mask_ch TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ResetGroups_SEMPLOT(void* p_geo, const int32_t* db, const char* mask_ch);

/**
* Set the "Plotted" channel to dummies
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
**
* @par Note 
*      This function is called before one or a series of plots to initialize
*      the "Plotted" channel in all the selected lines to dummy values.
*      As the plots are created, those points used in the plot are set to 1,
*      so that at the end the database records which values have been plotted.
*      This information can then be used to make a symbol legend.
*      If the "Plotted" channel does not exist, it is created, associated,
*      loaded, and filled with dummies.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void ResetUsedChannel_SEMPLOT(void* p_geo, const int32_t* db);

/**
* Select data from a polygonal area on a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mview TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  pply TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void SelectPoly_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* mview, const char* mask_ch, const char* mineral_ch, const int32_t* pply, const int32_t* mode);

/**
* Sets preset channel order.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Sets channel order as follows:
*      
*      Sample_No
*      X and Y Locations
*      Mineral
*      Grain_No
*      Position (e.g. center, edge etc.)
*      Grain Morph
*      Oxides (in the order they appear in Semplot_Oxides.csv)
*      Trace Elements (Ordered as in the periodic table)
*      Total
*      Mask
*      IsPlotted (flag set when a value is plotted)
*      Other channels
*      
*      Channel order is set for all "RawData" groups.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void SetChannelOrder_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Set units for oxides (%) and elements (ppm)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
**
* @par Note 
*      If the channel units are already set, then they are not changed.
*      Oxide channels are identified from the Semplot_Oxides.csv file.
*      Trace elements are identified from the periodic table of the
*      elements, except for "Y", if it is the current Y channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void SetChannelUnits_SEMPLOT(void* p_geo, const int32_t* db);

/**
* Put ITR into a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  itr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void SetITR_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* ch, const int32_t* itr);

/**
* Set the mask channel ON or OFF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mask_ch TODO
* @param[in]  mineral_ch TODO
* @param[in]  mineral TODO
* @param[in]  selected TODO
* @param[in]  val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void SetMask_SEMPLOT(void* p_geo, const int32_t* db, const char* mask_ch, const char* mineral_ch, const char* mineral, const int32_t* selected, const int32_t* val);

/**
* Sort data by Sample No, Grain and Position
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  group TODO
* @param[in]  anomaly TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void SortData_SEMPLOT(void* p_geo, const int32_t* db, const int32_t* group, const int32_t* anomaly);

/**
* Fill a list with the available plot template names
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
**
* @par Note 
*      Looks first in user\etc, then in \etc.
*      Looks first for file prefix "semtemplate" then "xyt" or "tri"
*      (New-style templates with the "semtemplate" extentsion have the
*      plot type "triplot" or "xyplot" inside them.)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void TemplateLST_SEMPLOT(void* p_geo, const int32_t* lst, const int32_t* type);

/**
* Tile currently maximimized windows.
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void TileWindows_SEMPLOT(void* p_geo);

/**
* Calculate the total oxides channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  mineral_ch TODO
**
* @par Note 
*      The mineral channel is needed in order to adjust the total
*      with the Fe Corrected Ferric and Ferrous values, and these
*      require a mineral for their identification. If none is provided,
*      mineral "X" (unknown) is assumed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.2
*/
GX_EXPORT void TotalOxides_SEMPLOT(void* p_geo, const int32_t* db, const char* mineral_ch);

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
