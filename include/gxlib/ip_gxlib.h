//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ip_gxlib.h
* @date 2017-11-06
* @brief File containing IP GX C API constant and function declarations
*/

/**
* @defgroup IP_Module IP
* This class is used in the IP System for the import, export
* and processing of Induced Polarization data.
*
* Notes:
*
* The following defines are used in GX code but are not
* part of any functions:
* 
* IP_ARRAY
* IP_CHANNELS
* IP_LINES
*
* @{
*/

#pragma once
#ifndef HIP_H_DEFINED
#define HIP_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name IP_ARRAY Definitions
* 
* IP Array options
*/
///@{
/** 
* IP_ARRAY_DPDP
*/
#define IP_ARRAY_DPDP 0
/** 
* IP_ARRAY_PLDP
*/
#define IP_ARRAY_PLDP 1
/** 
* IP_ARRAY_PLPL
*/
#define IP_ARRAY_PLPL 2
/** 
* IP_ARRAY_GRAD
*/
#define IP_ARRAY_GRAD 3
/** 
* IP_ARRAY_WENNER
*/
#define IP_ARRAY_WENNER 5
/** 
* IP_ARRAY_SCHLUMBERGER
*/
#define IP_ARRAY_SCHLUMBERGER 6
/** 
* IP_ARRAY_UNKNOWN
*/
#define IP_ARRAY_UNKNOWN 7
/** 
* IP_ARRAY_3D
*/
#define IP_ARRAY_3D 9
/** 
* IP_ARRAY_3D_PLDP
*/
#define IP_ARRAY_3D_PLDP 10
/** 
* IP_ARRAY_3D_PLPL
*/
#define IP_ARRAY_3D_PLPL 11
///@}

/**
* @name IP_CHANNELS Definitions
* 
* Channels to display
*/
///@{
/** 
* IP_CHANNELS_DISPLAYED
*/
#define IP_CHANNELS_DISPLAYED 0
/** 
* IP_CHANNELS_SELECTED
*/
#define IP_CHANNELS_SELECTED 1
/** 
* IP_CHANNELS_ALL
*/
#define IP_CHANNELS_ALL 2
///@}

/**
* @name IP_DOMAIN Definitions
* 
* Types of Domains
*/
///@{
/** 
* IP_DOMAIN_NONE
*/
#define IP_DOMAIN_NONE -1
/** 
* IP_DOMAIN_TIME
*/
#define IP_DOMAIN_TIME 0
/** 
* IP_DOMAIN_FREQUENCY
*/
#define IP_DOMAIN_FREQUENCY 1
/** 
* IP_DOMAIN_BOTH
*/
#define IP_DOMAIN_BOTH 2
///@}

/**
* @name IP_DUPLICATE Definitions
* 
* How to handle duplicates
*/
///@{
/** 
* IP_DUPLICATE_APPEND
*/
#define IP_DUPLICATE_APPEND 0
/** 
* IP_DUPLICATE_OVERWRITE
*/
#define IP_DUPLICATE_OVERWRITE 1
///@}

/**
* @name IP_FILTER Definitions
* 
* Fraser Filters
*/
///@{
/** 
* IP_FILTER_PANTLEG
* 
* ::
* 
*     Regular pant-leg filter:
* 
* 
*        _!_    
*       /*_*\   n1
*      /*/ \*\  n2`
*     /*/   \*\ n3
*        :  :
*/
#define IP_FILTER_PANTLEG 1
/** 
* IP_FILTER_PANTLEGP
* 
* ::
* 
*     Regular pant-leg filter with top at first point:
* 
*        !  nscp:
*       /*\   n1
*      /*_*\  n2
*     /*/ \*\ n3
*       :  :
*/
#define IP_FILTER_PANTLEGP 2
/** 
* IP_FILTER_PYRIAMID
* 
* ::
* 
*     Regular pyramid filter:
* 
*        _!_  maxn:
*       /* *\   n1
*      /* * *\  n2
*     /* * * *\ n3
*        :  :
*/
#define IP_FILTER_PYRIAMID 3
/** 
* IP_FILTER_PYRIAMIDP
* 
* ::
* 
*     Regular pyramid filter with peak on a point:
* 
*        !  maxn:
*       /*\   n1
*      /* *\  n2
*     /* * *\ n3
*       :  :
*/
#define IP_FILTER_PYRIAMIDP 4
///@}

/**
* @name IP_I2XIMPMODE Definitions
* 
* Interpext Import Mode
*/
///@{
/** 
* IP_I2XIMPMODE_REPLACE
* 
* Recreates the line from scratch.
*/
#define IP_I2XIMPMODE_REPLACE 0
/** 
* IP_I2XIMPMODE_MERGE
* 
* Looks for matching Tx1 and N values and
* replaces data in matching lines only.
*/
#define IP_I2XIMPMODE_MERGE 1
///@}

/**
* @name IP_I2XINV Definitions
* 
* Type of Inversion
*/
///@{
/** 
* IP_I2XINV_IMAGE
*/
#define IP_I2XINV_IMAGE 0
/** 
* IP_I2XINV_ZONGE
*/
#define IP_I2XINV_ZONGE 1
///@}

/**
* @name IP_LINES Definitions
* 
* Lines to display
*/
///@{
/** 
* IP_LINES_DISPLAYED
*/
#define IP_LINES_DISPLAYED 0
/** 
* IP_LINES_SELECTED
*/
#define IP_LINES_SELECTED 1
/** 
* IP_LINES_ALL
*/
#define IP_LINES_ALL 2
///@}

/**
* @name IP_PLOT Definitions
* 
* Type of Plot
*/
///@{
/** 
* IP_PLOT_PSEUDOSECTION
*/
#define IP_PLOT_PSEUDOSECTION 0
/** 
* IP_PLOT_STACKEDSECTION
*/
#define IP_PLOT_STACKEDSECTION 1
///@}

/**
* @name IP_QCTYPE Definitions
* 
* Type of Measurement
*/
///@{
/** 
* IP_QCTYPE_RESISTIVITY
* 
* Resistivity
*/
#define IP_QCTYPE_RESISTIVITY 0
/** 
* IP_QCTYPE_IP
* 
* IP
*/
#define IP_QCTYPE_IP 1
///@}

/**
* @name IP_STACK_TYPE Definitions
* 
* Spacing Types
*/
///@{
/** 
* IP_STACK_TYPE_MAP
* 
* Use map-based spacing, and preserve the directions of the
* original lines by rotating the sections as desired to their true
* locations. (At present only N-S and E-W sections are supported).
*/
#define IP_STACK_TYPE_MAP 0
/** 
* IP_STACK_TYPE_EQUAL
* 
* Spaces the sections equally, with enough room to
* guarantee no overlap with high N-values or closely spaced lines.
*/
#define IP_STACK_TYPE_EQUAL 1
/** 
* IP_STACK_TYPE_GEOGRAPHIC
* 
* Now the same as IP_STACK_MAP
*/
#define IP_STACK_TYPE_GEOGRAPHIC 2
///@}

/**
* @name IP_STNSCALE Definitions
* 
* Station Scaling
*/
///@{
/** 
* IP_STNSCALE_NONE
* 
* Station numbers become X or Y locations
*/
#define IP_STNSCALE_NONE 0
/** 
* IP_STNSCALE_ASPACE
* 
* Multiply station numbers by the A spacing
*/
#define IP_STNSCALE_ASPACE 1
/** 
* IP_STNSCALE_VALUE
* 
* Multiply by an input value.
*/
#define IP_STNSCALE_VALUE 2
/** 
* IP_STNSCALE_FILE
* 
* Look up locations from a CSV Line/Station/X/Y file
*/
#define IP_STNSCALE_FILE 3
///@}

/**
* @name IP_SYS Definitions
* 
* Instrument
*/
///@{
/** 
* IP_SYS_IPDATA
*/
#define IP_SYS_IPDATA 0
/** 
* IP_SYS_IP2
*/
#define IP_SYS_IP2 1
/** 
* IP_SYS_IP6
*/
#define IP_SYS_IP6 2
/** 
* IP_SYS_IP10
*/
#define IP_SYS_IP10 3
/** 
* IP_SYS_SYSCALR2
*/
#define IP_SYS_SYSCALR2 4
/** 
* IP_SYS_IPR11
*/
#define IP_SYS_IPR11 5
/** 
* IP_SYS_IPR12
*/
#define IP_SYS_IPR12 6
/** 
* IP_SYS_PHOENIX
*/
#define IP_SYS_PHOENIX 7
/** 
* IP_SYS_PHOENIX_V2
*/
#define IP_SYS_PHOENIX_V2 8
/** 
* IP_SYS_ELREC_PRO
*/
#define IP_SYS_ELREC_PRO 9
/** 
* IP_SYS_PROSYS_II
*/
#define IP_SYS_PROSYS_II 10
///@}

/**
* @name IP_UBC_CONTROL Definitions
* 
* Types of Domains
*/
///@{
/** 
* IP_UBC_CONTROL_NONE
*/
#define IP_UBC_CONTROL_NONE -1
/** 
* IP_UBC_CONTROL_DEFAULT
*/
#define IP_UBC_CONTROL_DEFAULT 0
/** 
* IP_UBC_CONTROL_FILE
*/
#define IP_UBC_CONTROL_FILE 1
/** 
* IP_UBC_CONTROL_VALUE
*/
#define IP_UBC_CONTROL_VALUE 2
/** 
* IP_UBC_CONTROL_LENGTH
*/
#define IP_UBC_CONTROL_LENGTH 3
///@}

/**
* @name IP_PLDP_CONV Definitions
* 
* Types of Domains
*/
///@{
/** 
* IP_PLDP_CONV_CLOSE_RX
*/
#define IP_PLDP_CONV_CLOSE_RX 0
/** 
* IP_PLDP_CONV_MID_RX
*/
#define IP_PLDP_CONV_MID_RX 1
/** 
* IP_PLDP_CONV_DISTANT_RX
*/
#define IP_PLDP_CONV_DISTANT_RX 2
///@}


/**
* @name Plot Jobs Functions 
*/
///@{

/**
* Convert a UBC 2D model to a regular grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  pg TODO
* @param[in]  vv_x TODO
* @param[in]  vv_z TODO
* @param[in]  x TODO
* @param[in]  z TODO
* @param[in]  cx TODO
* @param[in]  cz TODO
* @param[in]  reciprocal TODO
**
* @par Note 
*      Uses TIN gridding to sample the model.
*      By setting the final value, a resistivity grid can be
*      created from conductivity data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT void ConvertUBCIP2DToGrid_IP(void* p_geo, const char* file, const int32_t* pg, const int32_t* vv_x, const int32_t* vv_z, const double* x, const double* z, const double* cx, const double* cz, const int32_t* reciprocal);

/**
* Create a default job from scratch.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  ini TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void CreateDefaultJob_IP(void* p_geo, const int32_t* ip, const char* ini, const int32_t* type);

/**
* Export of IP data to UBC format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  error_chan TODO
* @param[in]  obs TODO
* @param[in]  topo TODO
* @param[in]  version TODO
**
* @par Note 
*      Outputs a *.DAT file of the survey data for use in the
*      UBC 2D inversion program IPINV2D.
*      Include error channel output and version-specific formatting.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT void ExportUBCIP3_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line, const char* chan, const char* error_chan, const char* obs, const char* topo, const double* version);

/**
* Export a control file for using in the UBC IPINV2D program.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  control TODO
* @param[in]  n_iter TODO
* @param[in]  i_rest TODO
* @param[in]  chi_factor TODO
* @param[in]  obs TODO
* @param[in]  cond TODO
* @param[in]  mesh TODO
* @param[in]  topo TODO
* @param[in]  initial TODO
* @param[in]  ref_mod TODO
* @param[in]  alphas TODO
* @param[in]  wts TODO
**
* @par Note 
*      UBC Version 3 Control file.
*      Outputs a control file for use in the
*      UBC 2D IP inversion program IPINV2D.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void ExportUBCIPControl_IP(void* p_geo, const char* control, const int32_t* n_iter, const int32_t* i_rest, const double* chi_factor, const char* obs, const char* cond, const char* mesh, const char* topo, const char* initial, const char* ref_mod, const char* alphas, const char* wts);

/**
* Export a control file for using in the UBC IPINV2D program.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  control TODO
* @param[in]  n_iter TODO
* @param[in]  chi_factor TODO
* @param[in]  obs TODO
* @param[in]  topo TODO
* @param[in]  cond_selection TODO
* @param[in]  cond TODO
* @param[in]  mesh_selection TODO
* @param[in]  mesh TODO
* @param[in]  initial_selection TODO
* @param[in]  initial TODO
* @param[in]  reference_selection TODO
* @param[in]  ref_cond TODO
* @param[in]  alphas_selection TODO
* @param[in]  alphas TODO
* @param[in]  wts TODO
**
* @par Note 
*      UBC Version 5 Control file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT void ExportUBCIPControlV5_IP(void* p_geo, const char* control, const int32_t* n_iter, const double* chi_factor, const char* obs, const char* topo, const int32_t* cond_selection, const char* cond, const int32_t* mesh_selection, const char* mesh, const int32_t* initial_selection, const char* initial, const int32_t* reference_selection, const char* ref_cond, const int32_t* alphas_selection, const char* alphas, const char* wts);

/**
* Export of IP Resistivity data to UBC format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  voltage_chan TODO
* @param[in]  current_chan TODO
* @param[in]  error_chan TODO
* @param[in]  obs TODO
* @param[in]  topo TODO
* @param[in]  version TODO
**
* @par Note 
*      Outputs a *.DAT file of the survey data for use in the
*      UBC 2D inversion program DCINV2D.
*      Voltage and current channels should be in units such that
*      V/I gives volts/amp (or mV/mA).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT void ExportUBCRes3_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line, const char* voltage_chan, const char* current_chan, const char* error_chan, const char* obs, const char* topo, const double* version);

/**
* Export a control file for using in the UBC DCINV2D program.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  control TODO
* @param[in]  n_iter TODO
* @param[in]  i_rest TODO
* @param[in]  chi_factor TODO
* @param[in]  obs TODO
* @param[in]  mesh TODO
* @param[in]  topo TODO
* @param[in]  initial TODO
* @param[in]  ref_cond TODO
* @param[in]  alphas TODO
* @param[in]  wts TODO
**
* @par Note 
*      UBC Version 3.
*      Outputs a control file for use in the
*      UBC 2D resistivity inversion program DCINV2D.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void ExportUBCResControl_IP(void* p_geo, const char* control, const int32_t* n_iter, const int32_t* i_rest, const double* chi_factor, const char* obs, const char* mesh, const char* topo, const char* initial, const double* ref_cond, const char* alphas, const char* wts);

/**
* Export a control file for using in the UBC DCINV2D program.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  control TODO
* @param[in]  n_iter TODO
* @param[in]  chi_factor TODO
* @param[in]  obs TODO
* @param[in]  topo TODO
* @param[in]  mesh_selection TODO
* @param[in]  mesh TODO
* @param[in]  initial_selection TODO
* @param[in]  initial TODO
* @param[in]  reference_selection TODO
* @param[in]  ref_cond TODO
* @param[in]  alphas_selection TODO
* @param[in]  alphas TODO
* @param[in]  wts TODO
**
* @par Note 
*      UBC Version 5.
*      Outputs a control file for use in the
*      UBC 2D resistivity inversion program DCINV2D.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT void ExportUBCResControlV5_IP(void* p_geo, const char* control, const int32_t* n_iter, const double* chi_factor, const char* obs, const char* topo, const int32_t* mesh_selection, const char* mesh, const int32_t* initial_selection, const char* initial, const int32_t* reference_selection, const char* ref_cond, const int32_t* alphas_selection, const char* alphas, const char* wts);

/**
* Export of IP data to UBC 3D IP format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line_lst TODO
* @param[in]  locations_only TODO
* @param[in]  include_z TODO
* @param[in]  chan TODO
* @param[in]  error_chan TODO
* @param[in]  mask_chan TODO
* @param[in]  ip_type TODO
* @param[in]  comments TODO
* @param[in]  obs TODO
**
* @par Note 
*      Outputs a *.DAT file of the survey data for use in the
*      UBC IP 3D inversion programs.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.2
*/
GX_EXPORT void ExportDataToUBC3D_IP(void* p_geo, const int32_t* ip, const int32_t* db, const int32_t* line_lst, const int32_t* locations_only, const int32_t* include_z, const char* chan, const char* error_chan, const char* mask_chan, const int32_t* ip_type, const char* comments, const char* obs);

/**
* Import a MOD file from the UBC IPINV2D program.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  type TODO
* @return PG Object
**
* @par Note 
*      Imports the MOD file values to a PG object.
*      The CON/CHG selection is necessary because the import sets
*      padding values to dummies based on the type of file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT int32_t ImportUBC2DMOD_IP(void* p_geo, const char* file, const int32_t* type);

/**
* Import a MSH file from the UBC IPINV2D program.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] x TODO
* @param[out] z TODO
* @param[in]  vv_x TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Imports the MSH file geometry.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT void ImportUBC2DMSH_IP(void* p_geo, const char* file, double* x, double* z, const int32_t* vv_x, const int32_t* vv_z);

/**
* Import a Topography file from the UBC IPINV2D program.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] elev0 TODO
* @param[in]  vv_x TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Imports the maximum elevation (top of mesh)
*      as well as the topo (X, Z) values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT void ImportUBC2DTopo_IP(void* p_geo, const char* file, double* elev0, const int32_t* vv_x, const int32_t* vv_z);

/**
* Open a IP plotting job
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  job TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void OpenJob_IP(void* p_geo, const int32_t* ip, const char* job, const int32_t* type);

/**
* Save a IP plotting job
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  job TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void SaveJob_IP(void* p_geo, const int32_t* ip, const char* job, const int32_t* type);

/**
* Trim the padding cells from the UBC IPINV2D Model.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  trim_xl TODO
* @param[in]  trim_xr TODO
* @param[in]  trim_z TODO
* @param[in]  vv_x TODO
* @param[in]  vv_z TODO
* @param[out] x TODO
* @return PG Object
**
* @par Note 
*      The cells are removed from the left, right and bottom.
*      The returned PG is the trimmed version.
*      The input cell size VVs are also trimmed to match,
*      and the origin is updated (still upper left corner).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.1
*/
GX_EXPORT int32_t TrimUBC2DModel_IP(void* p_geo, const int32_t* pg, const int32_t* trim_xl, const int32_t* trim_xr, const int32_t* trim_z, const int32_t* vv_x, const int32_t* vv_z, double* x);

/**
* Write distant electrode locations to channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
**
* @par Note 
*      Writes values for ALL lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void WriteDistantElectrodes_IP(void* p_geo, const int32_t* ip, const int32_t* db);

/**
* Write distant electrode locations to channels for a LST of lines
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Writes values for lines in the input LST.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4.2
*/
GX_EXPORT void WriteDistantElectrodesLST_IP(void* p_geo, const int32_t* ip, const int32_t* db, const int32_t* lst);

///@}

/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Average duplicate samples in a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  qc_chan TODO
* @param[in]  out TODO
**
* @par Note 
*      Averages all values with shared station and N values,
*      as long as the mask channel is defined at that FID.
*      Previous averaged values (IP_DATA_AVG) are overwritten according to the
*      overwrite flag.
*      If the QC channel is selected, only those rows of data where the QC channel
*      value is "1" will be included in the average.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.3
*/
GX_EXPORT void AverageDuplicatesQC_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan, const char* qc_chan, const int32_t* out);

/**
* Create IP.
*
* @param[in]  p_geo GX Context Pointer
* @return IP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_IP(void* p_geo);

/**
* Destroy a IP handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_IP(void* p_geo, const int32_t* ip);

/**
* Export line(s) to an Interpex RESIX I2X format file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  line TODO
* @param[in]  res_data TODO
* @param[in]  ip_data TODO
* @param[in]  res_model TODO
* @param[in]  ip_model TODO
* @param[in]  res_synth TODO
* @param[in]  ip_synth TODO
* @param[in]  res_poly TODO
* @param[in]  ip_poly TODO
**
* @par Note 
*      Exports a line to an ".I2X" file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ExportI2X_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const char* line, const char* res_data, const char* ip_data, const char* res_model, const char* ip_model, const char* res_synth, const char* ip_synth, const char* res_poly, const char* ip_poly);

/**
* Exports data in the Geosoft IPDATA format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  title TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ExportIPDATA_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan, const char* title);

/**
* Exports data in the Geosoft IPDATA format in the specified directory
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  title TODO
* @param[in]  dir TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void ExportIPDATADir_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan, const char* title, const char* dir);

/**
* Exports pseudo-section in the Geosoft IPRED format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  title TODO
* @param[in]  chan TODO
* @param[in]  suffix TODO
* @param[in]  filter TODO
* @param[in]  wts TODO
* @param[in]  stn1 TODO
* @param[in]  stn2 TODO
* @param[in]  max_n TODO
**
* @par Note 
*      The Fraser Filter weights apply to each N expansion above,
*      and are listed as w1,w2,w3,...   Unspecified values beyond
*      the list's end are set to 1.0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ExportIPRED_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* title, const char* chan, const char* suffix, const int32_t* filter, const char* wts, const double* stn1, const double* stn2, const int32_t* max_n);

/**
* Exports pseudo-section in the Geosoft IPRED format in the specified directory
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  title TODO
* @param[in]  chan TODO
* @param[in]  suffix TODO
* @param[in]  filter TODO
* @param[in]  wts TODO
* @param[in]  stn1 TODO
* @param[in]  stn2 TODO
* @param[in]  max_n TODO
* @param[in]  dir TODO
**
* @par Note 
*      The Fraser Filter weights apply to each N expansion above,
*      and are listed as w1,w2,w3,...   Unspecified values beyond
*      the list's end are set to 1.0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void ExportIPREDDir_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* title, const char* chan, const char* suffix, const int32_t* filter, const char* wts, const double* stn1, const double* stn2, const int32_t* max_n, const char* dir);

/**
* Exports one line of data in the Geosoft IPDATA format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  title TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void ExportLineIPDATA_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line, const char* chan, const char* title);

/**
* Exports data to a Scintrex Geophysical Data Format file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  chan TODO
* @param[in]  chan2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ExportSGDF_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const char* chan, const char* chan2);

/**
* Fill a list with unique N values in selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void GetNValueLST_IP(void* p_geo, const int32_t* ip, const int32_t* db, const int32_t* lst);

/**
* Get topography values for a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  x_min TODO
* @param[in]  x_max TODO
* @param[in]  x_inc TODO
* @param[in]  vv TODO
**
* @par Note 
*      If topography info is available, returns values calculated for
*      the input line. If no topography is available, returned values
*      will be dummies. Values between actual data are interpolated using
*      the Akima spline. Ends are extrapolated using the end data points.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4.2
*/
GX_EXPORT void GetTopoLine_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line, const double* x_min, const double* x_max, const double* x_inc, const int32_t* vv);

/**
* Is this channel registered as a Time or Frequency domain channel?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @return IP_DOMAIN
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iGetChanDomain_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan);

/**
* Get the default label and units for a given channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  chan TODO
* @param[out] label TODO
* @param[in]  len_label TODO
* @param[out] units TODO
* @param[in]  len_units TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void IGetChanLabel_IP(void* p_geo, const char* chan, char* label, const int32_t* len_label, char* units, const int32_t* len_units);

/**
* Time Windows or Frequency info from a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[out] domain TODO
* @param[out] delay TODO
* @param[out] n_windows TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT void GetChannelInfo_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan, int32_t* domain, double* delay, int32_t* n_windows, const int32_t* vv);

/**
* Set Time Windows or Frequency info for a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  domain TODO
* @param[in]  delay TODO
* @param[in]  n_windows TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT void SetChannelInfo_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan, const int32_t* domain, const double* delay, const int32_t* n_windows, const int32_t* vv);

/**
* Imports data from an IP instrument dump file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  ip_sys TODO
* @param[in]  db TODO
* @param[in]  dump_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportDump_IP(void* p_geo, const int32_t* ip, const int32_t* ip_sys, const int32_t* db, const char* dump_file);

/**
* Imports data from a grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  grid TODO
* @param[in]  chan TODO
**
* @par Note 
*      Data is imported to the specified channel.
*      The values are interpolated at each row's X and Y
*      positions.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportGrid_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* grid, const char* chan);

/**
* Imports an Interpex RESIX I2X format file to a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  line TODO
* @param[in]  res_data TODO
* @param[in]  ip_data TODO
* @param[in]  res_model TODO
* @param[in]  ip_model TODO
* @param[in]  res_synth TODO
* @param[in]  ip_synth TODO
* @param[in]  res_poly TODO
* @param[in]  ip_poly TODO
* @param[in]  mode TODO
**
* @par Note 
*      Imports a single ".I2X" file to a specified line.
*      If the line does not exist, it will be created.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportI2X_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const char* line, const char* res_data, const char* ip_data, const char* res_model, const char* ip_model, const char* res_synth, const char* ip_synth, const char* res_poly, const char* ip_poly, const int32_t* mode);

/**
* Same as ImportI2X_IP, with Zonge data imported as well.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  line TODO
* @param[in]  res_data TODO
* @param[in]  ip_data TODO
* @param[in]  res_model TODO
* @param[in]  ip_model TODO
* @param[in]  res_synth TODO
* @param[in]  ip_synth TODO
* @param[in]  res_poly TODO
* @param[in]  ip_poly TODO
* @param[in]  res_zonge TODO
* @param[in]  ip_zonge TODO
* @param[in]  mode TODO
**
* @par Note 
*      Imports a single ".I2X" file to a specified line.
*      If the line does not exist, it will be created.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT void ImportI2XEx_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const char* line, const char* res_data, const char* ip_data, const char* res_model, const char* ip_model, const char* res_synth, const char* ip_synth, const char* res_poly, const char* ip_poly, const char* res_zonge, const char* ip_zonge, const int32_t* mode);

/**
* Imports an Instrumentation GDD format file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void ImportInstrumentationGDD_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file);

/**
* Imports data in the Geosoft IPDATA format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  chan TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportIPDATA_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const char* chan);

/**
* Imports data in the Geosoft IPDATA format - up to two arrays.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  chan TODO
* @param[in]  chan2 TODO
**
* @par Note 
*      The second channel may be specified for frequency domain data sets
*      with two array channels; e.g. amplitude and phase, or real and
*      imaginary parts. If the second channel is specified, and no
*      time or frequncy information is specified in the header (using
*      the T= or F= fields) then the import is assumed to be frequency
*      domain.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1
*/
GX_EXPORT void ImportIPDATA2_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const char* chan, const char* chan2);

/**
* Imports data from the Geosoft IPRED format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  chan TODO
**
* @par Note 
*      This import produces a limited IP data set with no Current "I",
*      Voltage "Vp" or Apparent Resistivity "ResApp" values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1
*/
GX_EXPORT void ImportIPRED_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const char* chan);

/**
* Imports IPRED data to an existing line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  chan TODO
**
* @par Note 
*      Exits with error if the line does not exist.
*      Data is merged on basis of Stn and N value.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void ImportMergeIPRED_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const char* chan);

/**
* Imports data from a Scintrex Geophysical Data Format file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportSGDF_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file);

/**
* Imports topography data from a CSV line-station file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  csv TODO
**
* @par Note 
*      The elevation of each point in the current database
*      is interpolated from the input topography values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportTopoCSV_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* csv);

/**
* Imports topography data from a grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  grid TODO
**
* @par Note 
*      The elevation of each point in the current database
*      is interpolated from the input topography grid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportTopoGrid_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* grid);

/**
* Imports a Zonge AVG format file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  line TODO
* @param[in]  scale TODO
* @param[in]  mult TODO
**
* @par Note 
*      See ImportZongeFLD_IP
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportZongeAVG_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const double* line, const int32_t* scale, const double* mult);

/**
* Imports a Zonge FLD format file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  scale TODO
* @param[in]  mult TODO
**
* @par Note 
*      The Zonge Line and Station numbers may not be the X or Y position
*      values, and a conversion is required.
*      The line direction is taken from the IP setup values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void ImportZongeFLD_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* file, const int32_t* scale, const double* mult);

/**
* Create a subset database using a mask channel, "N" value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  new_db TODO
* @param[in]  chan_vv TODO
* @param[in]  mask TODO
* @param[in]  pr_n_val TODO
**
* @par Note 
*      A mask channel can be used to select a subset of the data.
*      A single N value can also be selected (Dummy for all).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void NewXYDatabase_IP(void* p_geo, const int32_t* ip, const int32_t* db, const int32_t* new_db, const int32_t* chan_vv, const char* mask, const double* pr_n_val);

/**
* Create pseudo-sections of a single line using a control file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  ini_file TODO
* @param[in]  cur_line TODO
* @param[in]  map TODO
**
* @par Note 
*      The control file is created using the IPPLTCON GX. It may then
*      be modified by hand as required.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void PseudoPlot_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* ini_file, const char* cur_line, const char* map);

/**
* Same as PseudoPlot_IP, but specify a tag for grids created.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  ini_file TODO
* @param[in]  cur_line TODO
* @param[in]  tag TODO
* @param[in]  map TODO
**
* @par Note 
*      The control file is created using the IPPLTCON GX. It may then
*      be modified by hand as required.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void PseudoPlot2_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* ini_file, const char* cur_line, const char* tag, const char* map);

/**
* Same as PseudoPlot2_IP, but with directory specified.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  ini_file TODO
* @param[in]  cur_line TODO
* @param[in]  tag TODO
* @param[in]  map TODO
* @param[in]  dir TODO
**
* @par Note 
*      The control file is created using the IPPLTCON GX. It may then
*      be modified by hand as required.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void PseudoPlot2Dir_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* ini_file, const char* cur_line, const char* tag, const char* map, const char* dir);

/**
* Create a stacked pseudo-section plot using a control file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  con_file TODO
* @param[in]  map TODO
**
* @par Note 
*      The control file is created using the IPSTAKCON GX. It may then
*      be modified by hand as required.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void PSStack_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan, const char* con_file, const char* map);

/**
* As PSStack_IP, but select section spacing option.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  con_file TODO
* @param[in]  type TODO
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1
*/
GX_EXPORT void PSStack2_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan, const char* con_file, const int32_t* type, const char* map);

/**
* Same as PseudoPlot2_IP, but with directory specified.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  con_file TODO
* @param[in]  type TODO
* @param[in]  map TODO
* @param[in]  dir TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.4
*/
GX_EXPORT void PSStack2Dir_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* chan, const char* con_file, const int32_t* type, const char* map, const char* dir);

/**
* Fill a list with QC channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Searches for the following QC channels existing in a database:
*      QC, QC_RES.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 7.3
*/
GX_EXPORT void QCChanLST_IP(void* p_geo, const int32_t* ip, const int32_t* db, const int32_t* lst);

/**
* Recalculate derived channel values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
**
* @par Note 
*      This function recalculates "derived" channel values from
*      "core" data.
*      
*          1. Recalculates the "STN" and "N" channels, using the TX1,
*             TX2, RX1 and RX2 channels (depending on the system).
*          2. Recalculates the apparent resistivity "ResCalc",
*             average "IP_Avg" and metal factor "MF" channels
*          3. Recalculates the "X" and "Y" channels. One of these will
*             be equal to "STN", the other to the internally stored
*             line number for the current line.
*          4. Recalculate the "Z" channel, based on the current "Topo"
*             channel, and the "N" values.
*      
*      Warning: If you make a change to an electrode location, you
*      would have to call Recalculate_IP, then recalculate "Topo"
*      (since the X and Y values would have changed), then call
*      RecalculateZ_IP, since "Z" values are based on "Topo" values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Recalculate_IP(void* p_geo, const int32_t* ip, const int32_t* db);

/**
* Recalculate derived channel values, with option for including/excluding location calculations.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  recalculate_xyz TODO
**
* @par Note 
*      See Recalculate_IP. This version allows you to suppress the recalculation of the
*      current X, Y and Z channel values from the station locations.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void RecalculateEx_IP(void* p_geo, const int32_t* ip, const int32_t* db, const int32_t* recalculate_xyz);

/**
* Recalculate Z channel values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
**
* @par Note 
*      The "Z" channel values are calculated as follows:
*      If the "Topo" value is defined, then
*      Z = Topo - 0.5*N*A, where "N" is the N-spacing, and
*      A is the A-spacing. If the Topography is not defined, then
*      it is assumed to be equal to 0.
*
* @par See also 
*      Recalculate_IP
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.1
*/
GX_EXPORT void RecalculateZ_IP(void* p_geo, const int32_t* ip, const int32_t* db);

/**
* Set the line name for some imports.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  line TODO
**
* @par Note 
*      For some imports, no line name is derivable from the import itself.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.3
*/
GX_EXPORT void SetImportLine_IP(void* p_geo, const int32_t* ip, const char* line);

/**
* When importing data to a line, set append/overwrite mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  append TODO
**
* @par Note 
*      By default, importing data overwrites existing data.
*      Call this function before doing the import in order
*      to append imported data to existing data.
*      "Short" data channels will be dummied to the existing
*      data length before the new data is appended.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.3
*/
GX_EXPORT void SetImportMode_IP(void* p_geo, const int32_t* ip, const int32_t* append);

/**
* Window an IP array channel to produce a normal channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  va_chan TODO
* @param[in]  chan TODO
* @param[in]  windows TODO
**
* @par Note 
*      The array channels cannot be used directly to produce sections.
*      Window_IP allows the user to select one or more of the windows
*      and create a new channel. In time domain, if more than one channel
*      is selected a weighted sum is performed, according to window widths.
*      In frequency domain a simple sum is performed.
*      Window List Syntax:
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Window_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* va_chan, const char* chan, const char* windows);

/**
* Removes obviously non-pseudo-section type channels from list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void WinnowChanList_IP(void* p_geo, const int32_t* lst);

/**
* Same as WinnowChanList_IP, but removes current X,Y,Z.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  db TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void WinnowChanList2_IP(void* p_geo, const int32_t* lst, const int32_t* db);

/**
* See if a given database line is registered for the IP system
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @return 1 if the line is a valid IP line, 0 if not
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT int32_t isValidLine_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line);

/**
* Return the type of IP array for the input line. If necessary, first imports the specified line into the IP object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @return IP_ARRAY
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT int32_t iLineArrayType_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line);

/**
* Return the A-Spacing for the input line. If necessary, first imports the specified line into the IP object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @return The A-Spacing value. If there are multiple A-Spacings, the base or smallest value.
* 				 This value could be rDUMMY for some arrays (such as 3D) where no A-Spacing is explicitly defined.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT double rASpacing_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line);

/**
* Return the user's plot point convention for pole-dipole arrays.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @return The user's PLDP plot point convention IP_PLDP_CONV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT int32_t iPLDPConvention_IP(void* p_geo, const int32_t* ip);

/**
* Get unique electrodes, along with current mask info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  tx_rx TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @param[in]  v_vm1 TODO
* @param[in]  v_vm2 TODO
**
* @par Note 
*      The mask values are determined from the first row where a given electrode is found.
*      Values returned for all currently selected lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.0
*/
GX_EXPORT void GetElectrodeLocationsAndMaskValues_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line, const int32_t* tx_rx, const int32_t* v_vx, const int32_t* v_vy, const int32_t* v_vm1, const int32_t* v_vm2);

/**
* Get unique electrodes, along with current mask info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  tx_rx TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @param[in]  v_vm1 TODO
* @param[in]  v_vm2 TODO
* @param[in]  v_vlines TODO
**
* @par Note 
*      The mask values are determined from the first row where a given electrode is found.
*      Values returned for all currently selected lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.2
*/
GX_EXPORT void GetElectrodeLocationsAndMaskValues2_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line, const int32_t* tx_rx, const int32_t* v_vx, const int32_t* v_vy, const int32_t* v_vm1, const int32_t* v_vm2, const int32_t* v_vlines);

/**
* Set unique electrodes, along with current mask info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  tx_rx TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @param[in]  v_vm1 TODO
* @param[in]  v_vm2 TODO
**
* @par Note 
*      Mask values are set for all included electrode locations, currently selected lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.0
*/
GX_EXPORT void SetElectrodeMaskValues_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line, const int32_t* tx_rx, const int32_t* v_vx, const int32_t* v_vy, const int32_t* v_vm1, const int32_t* v_vm2);

/**
* Set unique electrodes, along with current mask info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  tx_rx TODO
* @param[in]  qc_type TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @param[in]  v_vm TODO
**
* @par Note 
*      Mask values are set for all included electrode locations, currently selected lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.2
*/
GX_EXPORT void SetElectrodeMaskValuesSingleQCChannel_IP(void* p_geo, const int32_t* ip, const int32_t* db, const char* line, const int32_t* tx_rx, const int32_t* qc_type, const int32_t* v_vx, const int32_t* v_vy, const int32_t* v_vm);

/**
* Get the QC channel handle, if it exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  qc_type TODO
* @param[out] chan TODO
* @param[in]  size TODO
* @return Channel handle,  NULLSYMB if not found
**
* @par Note 
*      For IP, looks for "QC_IP", then "QC_OffTime", then "QC".
*      For Resistivity, looks for "QC_Res", then "QC_OnTime" (case insensitive).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.2
*/
GX_EXPORT int32_t GetQCChannel_IP(void* p_geo, const int32_t* db, const int32_t* qc_type, char* chan, const int32_t* size);

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
