//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file arcdh_gxlib.h
* @date 2017-11-06
* @brief File containing ARCDH GX C API constant and function declarations
*/

/**
* @defgroup ARCDH_Module ARCDH
* This library is not a class. It contains various utilities
* used in the Target extension for ArcGIS.
* @{
*/

#pragma once
#ifndef HARCDH_H_DEFINED
#define HARCDH_H_DEFINED

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
* Closes the current DH project in the Target extension
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void CloseProject_ARCDH(void* p_geo);

/**
* Sets the current DH project in the Target extension
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  path TODO
* @param[in]  project TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void SetProject_ARCDH(void* p_geo, const char* path, const char* project);

/**
* Sets the current Geostring File Geodatabase in the Target extension
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  string_file_gdb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT void SetStringFileGDB_ARCDH(void* p_geo, const char* string_file_gdb);

/**
* Stops editing session for current string fGDB
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void StopEditingStringFileGDB_ARCDH(void* p_geo);

/**
* Is a Geostring File Geodatabase loaded and contains edits?
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT int32_t iHasStringFileGDBEdits_ARCDH(void* p_geo);

/**
* Verifies if the geostrings extension in TfA is available. Return 1 if true, 0 otherwise
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT int32_t iGeostringsExtensionAvailable_ARCDH(void* p_geo);

/**
* Gets the current Geostring File Geodatabase.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT void GetCurrentStringFileGDB_ARCDH(void* p_geo, char* name, const int32_t* length);

/**
* Is this a valid FGDB filename?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fgdb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT int32_t iIsValidFGDBFileName_ARCDH(void* p_geo, const char* fgdb);

/**
* Is this a valid featureclass name?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  feature_class_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0.1
*/
GX_EXPORT int32_t iIsValidFeatureClassName_ARCDH(void* p_geo, const char* feature_class_name);

/**
* Prompt the user to select an ESRI symbol and return it as an XML string. The output string will be empty if the user cancels the dialog.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hwnd TODO
* @param[in]  h_wnd TODO
* @param[in]  input_xml_string TODO
* @param[out] xml TODO
* @param[in]  xml_size TODO
* @param[out] fill_color TODO
* @param[out] edge_color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.2
*/
GX_EXPORT void sPromptForESRISymbol_ARCDH(void* p_geo, HWND hwnd, const char* h_wnd, const int32_t* input_xml_string, char* xml, const int32_t* xml_size, int32_t* fill_color, int32_t* edge_color);

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
