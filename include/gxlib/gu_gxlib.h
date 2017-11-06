//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file gu_gxlib.h
* @date 2017-11-06
* @brief File containing GU GX C API constant and function declarations
*/

/**
* @defgroup GU_Module GU
* Not a class. A catch-all group of functions performing
* various geophysical processes, including the calculation
* of simple EM model responses, certain instrument dump
* file imports, and 2D Euler deconvolution.
* @{
*/

#pragma once
#ifndef HGU_H_DEFINED
#define HGU_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name EM_ERR Definitions
* 
* Error Scaling
*/
///@{
/** 
* EM_ERR_UNSCALED
*/
#define EM_ERR_UNSCALED 0
/** 
* EM_ERR_LOGSCALING
*/
#define EM_ERR_LOGSCALING 1
///@}

/**
* @name EM_INV Definitions
* 
* Type of Inversion
*/
///@{
/** 
* EM_INV_INPHASE
*/
#define EM_INV_INPHASE 0
/** 
* EM_INV_QUADRATURE
*/
#define EM_INV_QUADRATURE 1
/** 
* EM_INV_BOTH
*/
#define EM_INV_BOTH 2
///@}

/**
* @name EMPLATE_DOMAIN Definitions
* 
* Type of Domain
*/
///@{
/** 
* EMPLATE_FREQUENCY
*/
#define EMPLATE_FREQUENCY 1
/** 
* EMPLATE_TIME
*/
#define EMPLATE_TIME 9
///@}

/**
* @name EMPLATE_TX Definitions
* 
* Orientation
*/
///@{
/** 
* EMPLATE_TX_X
*/
#define EMPLATE_TX_X 1
/** 
* EMPLATE_TX_Y
*/
#define EMPLATE_TX_Y 2
/** 
* EMPLATE_TX_Z
*/
#define EMPLATE_TX_Z 3
///@}

/**
* @name GU_DAARC500_DATATYPE Definitions
* 
* Supported serial data types for import
*/
///@{
/** 
* GU_DAARC500_UNKNOWN
*/
#define GU_DAARC500_UNKNOWN 0
/** 
* GU_DAARC500_GENERIC_ASCII
*/
#define GU_DAARC500_GENERIC_ASCII 1
/** 
* GU_DAARC500_GPS
*/
#define GU_DAARC500_GPS 2
/** 
* GU_DAARC500_GR820_256D
*/
#define GU_DAARC500_GR820_256D 3
/** 
* GU_DAARC500_GR820_256DU
*/
#define GU_DAARC500_GR820_256DU 4
/** 
* GU_DAARC500_GR820_512DU
*/
#define GU_DAARC500_GR820_512DU 5
/** 
* GU_DAARC500_NAV
*/
#define GU_DAARC500_NAV 6
///@}

/**
* @name PEAKEULER_XY Definitions
* 
* Fit Options
*/
///@{
/** 
* PEAKEULER_XY_NOFIT
*/
#define PEAKEULER_XY_NOFIT 0
/** 
* PEAKEULER_XY_FIT
*/
#define PEAKEULER_XY_FIT 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Calculate a dipole magnetic field into XYZ file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  xyz_file TODO
* @param[in]  depth TODO
* @param[in]  inc TODO
* @param[in]  nx TODO
* @param[in]  ny TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.6
*/
GX_EXPORT void DipoleMag_GU(void* p_geo, const char* xyz_file, const double* depth, const double* inc, const int32_t* nx, const int32_t* ny, const double* dx, const double* dy);

/**
* Inverts EM responses to the best halfspace model.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  coil_spacing TODO
* @param[in]  coil_frequency TODO
* @param[in]  coil_configuration TODO
* @param[in]  tol TODO
* @param[in]  threshold TODO
* @param[in]  vv_height TODO
* @param[in]  vv_in_phase TODO
* @param[in]  vv_quadrature TODO
* @param[in]  vv_res TODO
* @param[in]  inv TODO
* @param[in]  err TODO
* @param[in]  start_val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void EMHalfSpaceInv_GU(void* p_geo, const double* coil_spacing, const double* coil_frequency, const int32_t* coil_configuration, const double* tol, const double* threshold, const int32_t* vv_height, const int32_t* vv_in_phase, const int32_t* vv_quadrature, const int32_t* vv_res, const int32_t* inv, const int32_t* err, const double* start_val);

/**
* EM Halfspace forward model response.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  coil_spacing TODO
* @param[in]  coil_frequency TODO
* @param[in]  coil_configuration TODO
* @param[in]  rvv TODO
* @param[in]  hvv TODO
* @param[in]  ivv TODO
* @param[in]  qvv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void EMHalfSpaceVV_GU(void* p_geo, const double* coil_spacing, const double* coil_frequency, const int32_t* coil_configuration, const int32_t* rvv, const int32_t* hvv, const int32_t* ivv, const int32_t* qvv);

/**
* Convert a Geometrics STN file to a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ra TODO
* @param[in]  log_wa TODO
* @param[in]  survey_mode TODO
* @param[in]  line_dir TODO
* @param[in]  corner TODO
* @param[in]  bi_uni TODO
* @param[in]  corner_x TODO
* @param[in]  corner_y TODO
* @param[in]  mark_space TODO
* @param[in]  line_space TODO
**
* @par Note 
*      Assumes that the database is new and empty. If not, existing channels
*      with names X, Y, Mag1, Mag2, Time, Date, and Mark will deleted and then created.  
*      Existing lines will be erased and then created if they are the same as the new ones.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Geometrics2DB_GU(void* p_geo, const int32_t* db, const int32_t* ra, const int32_t* log_wa, const int32_t* survey_mode, const int32_t* line_dir, const int32_t* corner, const int32_t* bi_uni, const double* corner_x, const double* corner_y, const double* mark_space, const double* line_space);

/**
* Convert a Geometrics station file (STN) to a table file (TBL)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ra TODO
* @param[in]  wa TODO
* @param[in]  log_wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Geometrics2TBL_GU(void* p_geo, const int32_t* ra, const int32_t* wa, const int32_t* log_wa);

/**
* Correct reading positions in a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  wa TODO
* @param[in]  line TODO
* @param[in]  in_vv TODO
* @param[in]  tol TODO
* @param[in]  min_coord TODO
* @param[in]  max_coord TODO
* @param[in]  out_vv TODO
* @param[in]  flag_vv TODO
**
* @par Note 
*      There are six cases to consider:
*      
*      ========    ====  =============  ========================================
*      Case        Flag  Solutions      Symptoms
*      ========    ====  =============  ========================================
*      CASE 1A:    0     No correction  Recorded and actual Line lengths same
*                                       Reading densities vary slightly (passed
*                                       the tolerance test)
*      --------    ----  -------------  ----------------------------------------
*      CASE 1B     -1    No correction  Line lengths same
*                                       Reading densities vary and cannot
*                                       pass the tolerance test
*      --------    ----  -------------  ----------------------------------------
*      CASE 2A     1     Corrected by   Recorded line length too short
*                        extension      Possible high readings in segment(s)
*                                       Corrected (by extending) and actual
*                                       lengths become the same
*      --------    ----  -------------  ----------------------------------------
*      CASE 2B     2     Corrected by   Recorded line length too short
*                        interpolation  Possible high readings in segment(s)
*                                       Corrected (by extending) and actual
*                                       lengths are not same. Interpolation is
*                                       then applied
*      --------    ----  -------------  ----------------------------------------
*      CASE 3A     1     Corrected by   Recorded line length too long
*                        shifting or    Possible low readings in segment(s)
*                        (shrank)       Corrected (by shifting) and actual
*                                       lengths are same
*      --------    ----  -------------  ----------------------------------------
*      CASE 3B     2     Corrected by   Recorded line length too long
*                        interpolation  Possible low readings in segment(s)
*                                       Corrected (by shifting) and actual
*                                       lengths are not same. Interpolation
*                                       is then applied
*      ========    ====  =============  ========================================
*      
*      
*      TERMINOLOGY:
*      
*      Segments
*           A segment refers to the distance and its contents between
*           two adjacent fiducial markers
*      
*      Normal Density
*           The density (number of readings) shared by the segments in
*           a survey line. The number of segments with the density is greater 
*           than the number of segments having a different density in a line.
*      
*      Tolerance and Bound:
*           Tolerance is defined as a percentage, say 50% (=0.5).
*           Based on the tolerance, a lower bound and upper bound
*      
*           can be defined:
*      
*           ::
*      
*               Lower bound = (Normal Density) - (Normal Density)*Tolerance
*               Upper bound = (Normal Density) - (Normal Density)*Tolerance
*      
*           Segments will pass the tolerance test if the number of readings
*           falls within the Lower and Upper Bounds.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GeometricsQC_GU(void* p_geo, const int32_t* wa, const char* line, const int32_t* in_vv, const double* tol, const double* min_coord, const double* max_coord, const int32_t* out_vv, const int32_t* flag_vv);

/**
* Convert a Geonics EM31/EM38 file in dump format to a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  r_ah TODO
* @param[in]  r_ad TODO
* @param[in]  log_wa TODO
* @param[in]  line_mult TODO
* @param[in]  stat_mult TODO
**
* @par Note 
*      Assumes that the database is new and empty. If not, existing channels
*      with names X, Y, Station, Conductivity, Inphase, Quadrature,
*      and Time will deleted and then created.  Existing lines will
*      be erased and then created if they are the same as the new ones.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Geonics3138Dump2DB_GU(void* p_geo, const int32_t* db, const int32_t* r_ah, const int32_t* r_ad, const int32_t* log_wa, const double* line_mult, const double* stat_mult);

/**
* Convert a Geonics EM61 file in dump format to a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ra TODO
* @param[in]  log_wa TODO
* @param[in]  line_mult TODO
* @param[in]  stat_mult TODO
**
* @par Note 
*      Assumes that the database is new and empty. If not, existing channels
*      with names X, Y, Station, Conductivity, Inphase, Quadrature,
*      and Time will deleted and then created.  Existing lines will
*      be erased and then created if they are the same as the new ones.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Geonics61Dump2DB_GU(void* p_geo, const int32_t* db, const int32_t* ra, const int32_t* log_wa, const double* line_mult, const double* stat_mult);

/**
* Convert a Geonics EM31/EM38/EM61 file in DAT format to a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ra TODO
* @param[in]  log_wa TODO
* @param[in]  line_mult TODO
* @param[in]  stat_mult TODO
**
* @par Note 
*      Assumes that the database is new and empty. If not, existing channels
*      with names X, Y, Station, Conductivity, Inphase, Quadrature,
*      and Time will deleted and then created.  Existing lines will
*      be erased and then created if they are the same as the new ones.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GeonicsDAT2DB_GU(void* p_geo, const int32_t* db, const int32_t* ra, const int32_t* log_wa, const double* line_mult, const double* stat_mult);

/**
* Gravity Curvature (Bullard B) Correction to Bouguer anomaly
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_elev TODO
* @param[in]  vv_lat TODO
* @param[in]  vv_boug TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GrCurvCor_GU(void* p_geo, const int32_t* vv_elev, const int32_t* vv_lat, const int32_t* vv_boug);

/**
* Gravity Curvature (Bullard B) Correction to Bouguer anomaly, with user input cap density.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_elev TODO
* @param[in]  vv_lat TODO
* @param[in]  vv_boug TODO
* @param[in]  rho TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void GrCurvCorEx_GU(void* p_geo, const int32_t* vv_elev, const int32_t* vv_lat, const int32_t* vv_boug, const double* rho);

/**
* Get gravity DEM grid VV for Bouguer anomaly
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gdem TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void GrDEMVV_GU(void* p_geo, const int32_t* im_gdem, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Test triangular prism gravity calculation
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  xm TODO
* @param[in]  ym TODO
* @param[in]  zm TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_g3 TODO
* @param[in]  vv_g4 TODO
* @param[in]  vv_g1 TODO
* @param[in]  vv_g2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.4
*/
GX_EXPORT void GrTest_GU(void* p_geo, const double* xm, const double* ym, const double* zm, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_g3, const int32_t* vv_g4, const int32_t* vv_g1, const int32_t* vv_g2);

/**
* Gravity Still Reading Correction on selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  grav_in TODO
* @param[in]  date TODO
* @param[in]  time TODO
* @param[in]  still TODO
* @param[in]  grav_out TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.5
*/
GX_EXPORT void GravityStillReadingCorrection_GU(void* p_geo, const int32_t* db, const int32_t* grav_in, const int32_t* date, const int32_t* time, const char* still, const int32_t* grav_out);

/**
* Calculate the EM response of a layered earth model.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  coil_spacing TODO
* @param[in]  coil_frequency TODO
* @param[in]  coil_height TODO
* @param[in]  coil_configuration TODO
* @param[in]  n_layers TODO
* @param[in]  vv_thickness TODO
* @param[in]  vv_sigma TODO
* @param[out] in_phase TODO
* @param[out] quadrature TODO
* @return 0 of OK
* 1 if some error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iEMLayer_GU(void* p_geo, const double* coil_spacing, const double* coil_frequency, const double* coil_height, const int32_t* coil_configuration, const int32_t* n_layers, const int32_t* vv_thickness, const int32_t* vv_sigma, double* in_phase, double* quadrature);

/**
* Calculate the conductance of a thin plate model.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  strike_length TODO
* @param[in]  dip_length TODO
* @param[in]  strike TODO
* @param[in]  dip TODO
* @param[in]  plunge TODO
* @param[in]  x_off TODO
* @param[in]  y_off TODO
* @param[in]  z_off TODO
* @param[in]  plate_depth TODO
* @param[in]  n_spons TODO
* @param[in]  sig_tvv TODO
* @param[in]  tx_orient TODO
* @param[in]  tx_freq TODO
* @param[in]  tx_dt TODO
* @param[in]  params TODO
* @param[in]  xivv TODO
* @param[in]  yivv TODO
* @param[in]  zivv TODO
* @param[in]  xqvv TODO
* @param[in]  yqvv TODO
* @param[in]  zqvv TODO
* @return 0 of OK
* 1 if some error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iEMPlate_GU(void* p_geo, const double* strike_length, const double* dip_length, const double* strike, const double* dip, const double* plunge, const double* x_off, const double* y_off, const double* z_off, const double* plate_depth, const int32_t* n_spons, const int32_t* sig_tvv, const int32_t* tx_orient, const double* tx_freq, const double* tx_dt, const double* params, const int32_t* xivv, const int32_t* yivv, const int32_t* zivv, const int32_t* xqvv, const int32_t* yqvv, const int32_t* zqvv);

/**
* Generate a group name string for UX-Detect symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  target_gdb TODO
* @param[in]  targets TODO
* @param[out] ostr TODO
* @param[in]  size TODO
**
* @par Note 
*      Start a new group for the symbols in the UX-Detect system.
*      The Target GDB is often in the form "GDB_Targets", where
*      "GDB" is the original data. Cut off the part including the
*      underscore when creating the map, so you don't get map group
*      Names like "SYMBOLS_UxData_Targets_Targets".
*
* @par See also 
*      IGenGroupName_STR
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void IGenUXDetectSymbolsGroupName_GU(void* p_geo, const char* target_gdb, const char* targets, char* ostr, const int32_t* size);

/**
* Import Ethernet data from the RMS Instruments DAARC500.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  output TODO
* @param[out] bytes TODO
**
* @par Note 
*      Imports Ethernet data recorded
*      by the RMS Instruments DAARC500 instrument, and outputs the data
*      to a new binary file, returning the number of bytes per
*      block, to make it easier to import the data using the regular binary import.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void ImportDAARC500Ethernet_GU(void* p_geo, const char* file, const char* output, int32_t* bytes);

/**
* Import Serial data from the RMS Instruments DAARC500.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  channel TODO
* @param[in]  output TODO
* @param[out] bytes TODO
**
* @par Note 
*      Imports a single channel of the up to 8 serial data channels recorded
*      by the RMS Instruments DAARC500 instrument, and outputs the data for
*      that channel to a new binary file, returning the number of bytes per
*      block, to make it easier to import the data using the regular binary import.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void ImportDAARC500Serial_GU(void* p_geo, const char* file, const int32_t* channel, const char* output, int32_t* bytes);

/**
* Import navigation data in the P190 format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  rec_type TODO
* @param[in]  wa TODO
**
* @par Note 
*      Imports the data, and, if projection information is included
*      set the "X" and "Y" channel projection info. (Note: the last file
*      imported always takes precedence).
*      Different record types are imported to separate lines, but in the
*      same order as in the file. Data in existing lines is overwritten.
*      If the record type is specified, only records beginning with that
*      letter are imported, otherwise all records (except for the header "H"
*      records) are imported.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void ImportP190_GU(void* p_geo, const int32_t* db, const char* file, const char* rec_type, const int32_t* wa);

/**
* Lag the GPS fid values for the DAARC500 import.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mag_fid_vv TODO
* @param[in]  mag_event_vv TODO
* @param[in]  gps_fid_vv TODO
**
* @par Note 
*      The fiducial times recorded for the GPS in the RMS Instrument DAARC500
*      are delayed, and associated with the "wrong" fid value. They should actually
*      be moved to the previous fid value in the mag data where the event flag is non-zero.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void LagDAARC500GPS_GU(void* p_geo, const int32_t* mag_fid_vv, const int32_t* mag_event_vv, const int32_t* gps_fid_vv);

/**
* Calculate the corner point locations for a Maxwell Plate.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  dip TODO
* @param[in]  dip_dir TODO
* @param[in]  plunge TODO
* @param[in]  length TODO
* @param[in]  width TODO
* @param[out] x1 TODO
* @param[out] y1 TODO
* @param[out] z1 TODO
* @param[out] x2 TODO
* @param[out] y2 TODO
* @param[out] z2 TODO
* @param[out] x3 TODO
* @param[out] y3 TODO
* @param[out] z3 TODO
* @param[out] x4 TODO
* @param[out] y4 TODO
* @param[out] z4 TODO
**
* @par Note 
*      This routine calculates the corner locations of plates defined in the Maxwell Plate
*      program, given the top-center location and plate geometry parameters.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.1
*/
GX_EXPORT void MaxwellPlateCorners_GU(void* p_geo, const double* x, const double* y, const double* z, const double* dip, const double* dip_dir, const double* plunge, const double* length, const double* width, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2, double* x3, double* y3, double* z3, double* x4, double* y4, double* z4);

/**
* Scan Ethernet data from the RMS Instruments DAARC500.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] type TODO
* @param[out] items TODO
**
* @par Note 
*      Scans the file to see what data type is in the Ethernet file.
*      Currently only detects GR820 types.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void ScanDAARC500Ethernet_GU(void* p_geo, const char* file, int32_t* type, int32_t* items);

/**
* Scan Serial data from the RMS Instruments DAARC500.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  vv_type TODO
* @param[in]  vv_items TODO
**
* @par Note 
*      Scans the file to see which of the 8 serial channels were used to store data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void ScanDAARC500Serial_GU(void* p_geo, const char* file, const int32_t* vv_type, const int32_t* vv_items);

/**
* Get Euler solutions of depth from VVs and grids.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_xin TODO
* @param[in]  vv_yin TODO
* @param[in]  img_data TODO
* @param[in]  imgx TODO
* @param[in]  imgy TODO
* @param[in]  imgz TODO
* @param[in]  vv_xout TODO
* @param[in]  vv_yout TODO
* @param[in]  vv_depth TODO
* @param[in]  vvdc TODO
* @param[in]  vv_zer TODO
* @param[in]  vvx_yer TODO
* @param[in]  wnd_sz TODO
* @param[in]  si TODO
* @param[in]  wt_pow TODO
* @param[in]  x_yfit TODO
**
* @par Note 
*      All VVs must be REAL
*      
*      The output X and Y values are the same as the inputs,
*      except if PEAKEULER_XY_FIT is selected. All other
*      output values are set to dummy if:
*      
*           a) The input X or Y is a dummy
*           b) The derived window size is a dummy.
*           c) The derived solution is outside the range
*           d) The solution is invalid (singular matrix)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void VVEuler_GU(void* p_geo, const int32_t* vv_xin, const int32_t* vv_yin, const int32_t* img_data, const int32_t* imgx, const int32_t* imgy, const int32_t* imgz, const int32_t* vv_xout, const int32_t* vv_yout, const int32_t* vv_depth, const int32_t* vvdc, const int32_t* vv_zer, const int32_t* vvx_yer, const int32_t* wnd_sz, const double* si, const double* wt_pow, const int32_t* x_yfit);

/**
* Get Euler solutions of depth from VVs and grids (method 2).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_xin TODO
* @param[in]  vv_yin TODO
* @param[in]  img_data TODO
* @param[in]  imgx TODO
* @param[in]  imgy TODO
* @param[in]  imgz TODO
* @param[in]  vv_xout TODO
* @param[in]  vv_yout TODO
* @param[in]  vv_depth TODO
* @param[in]  vvdc TODO
* @param[in]  vv_zer TODO
* @param[in]  vvx_yer TODO
* @param[in]  vv_wnd TODO
* @param[in]  si TODO
* @param[in]  wt_pow TODO
* @param[in]  x_yfit TODO
**
* @par Note 
*      All VVs must be REAL
*
* @par See also 
*      VVEuler_GU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void VVEuler2_GU(void* p_geo, const int32_t* vv_xin, const int32_t* vv_yin, const int32_t* img_data, const int32_t* imgx, const int32_t* imgy, const int32_t* imgz, const int32_t* vv_xout, const int32_t* vv_yout, const int32_t* vv_depth, const int32_t* vvdc, const int32_t* vv_zer, const int32_t* vvx_yer, const int32_t* vv_wnd, const double* si, const double* wt_pow, const int32_t* x_yfit);

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
