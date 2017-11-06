//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ipgui_gxlib.h
* @date 2017-11-06
* @brief File containing IPGUI GX C API constant and function declarations
*/

/**
* @defgroup IPGUI_Module IPGUI
* This class is used in the IP System for GUI functions
* such as defining parameters for pseudo-section plots.
* @{
*/

#pragma once
#ifndef HIPGUI_H_DEFINED
#define HIPGUI_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code



/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Modify parameters for an IP plot.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip TODO
* @param[in]  db TODO
* @param[in]  ini TODO
* @param[in]  plot_type TODO
* @param[out] page TODO
* @return 0 - Ok
* -1 - User Cancelled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 6.1
*/
GX_EXPORT int32_t iModifyJob_IPGUI(void* p_geo, const int32_t* ip, const int32_t* db, const char* ini, const int32_t* plot_type, int32_t* page);

/**
* Launch the In-Line IP QC tool on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
**
* @par Note 
*      The database should be a currently open database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT void LaunchIPQCTool_IPGUI(void* p_geo, const char* db, const char* line, const char* chan);

/**
* Launch the Offset IP QC tool on a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
**
* @par Note 
*      The database should be a currently open database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.1
*/
GX_EXPORT void LaunchOffsetIPQCTool_IPGUI(void* p_geo, const char* db, const char* line, const char* chan);

/**
* See if there is an IPQC Tool (Offset or Inline) already open.
*
* @param[in]  p_geo GX Context Pointer
* @return 0 if not open, 1 if open
**
* @par Note 
*      See if there is an IPQC Tool already open.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.1
*/
GX_EXPORT int32_t iIPQCToolExists_IPGUI(void* p_geo);

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
