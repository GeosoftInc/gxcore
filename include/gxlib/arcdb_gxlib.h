//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file arcdb_gxlib.h
* @date 2017-11-06
* @brief File containing ARCDB GX C API constant and function declarations
*/

/**
* @defgroup ARCDB_Module ARCDB
* The ARCDB class is used in ArcGIS to access table contents from
* data sources and layers.
* @{
*/

#pragma once
#ifndef HARCDB_H_DEFINED
#define HARCDB_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name ARC_SELTBL_TYPE Definitions
* 
* Describes what kind of table was selected
*/
///@{
/** 
* ARC_SELTBL_STANDALONE
* 
* Standalone Table
*/
#define ARC_SELTBL_STANDALONE 0
/** 
* ARC_SELTBL_FEATURELAYER
* 
* Feature Layer
*/
#define ARC_SELTBL_FEATURELAYER 1
/** 
* ARC_SELTBL_CANCELED
* 
* User Canceled
*/
#define ARC_SELTBL_CANCELED -1
///@}

/**
* ARCDB_NULL
*
* Database Null
*/
#define ARCDB_NULL 0


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a handle to a ARCGIS table DAT 2D object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arcdb TODO
* @param[in]  x_field TODO
* @param[in]  y_field TODO
* @param[in]  d_field TODO
* @return DAT, terminates if creation fails
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT int32_t CreateDAT_ARCDB(void* p_geo, const int32_t* arcdb, const char* x_field, const char* y_field, const char* d_field);

/**
* Create a handle to a ARCGIS table DAT 3D object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arcdb TODO
* @param[in]  x_field TODO
* @param[in]  y_field TODO
* @param[in]  z_field TODO
* @param[in]  d_field TODO
* @return DAT, terminates if creation fails
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT int32_t CreateDAT3D_ARCDB(void* p_geo, const int32_t* arcdb, const char* x_field, const char* y_field, const char* z_field, const char* d_field);

/**
* This method return a handle to the current table
*
* @param[in]  p_geo GX Context Pointer
* @return ARCDB Handle, ARCDB_NULL if no table selected
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t Current_ARCDB(void* p_geo);

/**
* Export data from an ARCDB table into a group in a Geosoft GDB using a template.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arcdb TODO
* @param[in]  db TODO
* @param[in]  temp TODO
* @param[in]  line TODO
**
* @par Note 
*      1. The import template can be in the local directory or the GEOSOFT
*         directory.
*      
*      3. If the line already exists, the data will overwrite the existing data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void ExportToDB_ARCDB(void* p_geo, const int32_t* arcdb, const int32_t* db, const char* temp, const char* line);

/**
* Place the list of field names in a LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arcdb TODO
* @param[in]  lst TODO
**
* @par Note 
*      If Z or M values are supported by the table geometry the strings
*      "<Z Values>" and "<M Values>" will be added accordingly.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void FieldLST_ARCDB(void* p_geo, const int32_t* arcdb, const int32_t* lst);

/**
* This method attempts to make a table handle from an IUnknown pointer
* 
* Returns				 ARCDB Handle, ARCDB_NULL if not successful
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  unknown TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t FromIUnknown_ARCDB(void* p_geo, const int32_t* unknown);

/**
* Get georeference information from a table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arcdb TODO
* @param[in]  ipj TODO
**
* @par Note 
*      If the table does not have an IPJ, the IPJ that is
*      returned will have an unknown projection.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void GetIPJ_ARCDB(void* p_geo, const int32_t* arcdb, const int32_t* ipj);

/**
* This method checks to see if the specified field exists
* in the table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arcdb TODO
* @param[in]  field TODO
* @return 0 - Field does not exist
* 1 - Field Exists
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iExistField_ARCDB(void* p_geo, const int32_t* arcdb, const char* field);

/**
* This method gets the IUnknown pointer
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arcdb TODO
* @return IUnknown pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iGetIUnknown_ARCDB(void* p_geo, const int32_t* arcdb);

/**
* Template creation for importing geochem data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  arcdb TODO
* @param[in]  temp TODO
* @param[in]  type TODO
* @return 0-OK 1-Cancel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.0
*/
GX_EXPORT int32_t iImportChemDatabaseWizard_ARCDB(void* p_geo, const int32_t* arcdb, const char* temp, const int32_t* type);

/**
* Select table GUI with table type.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] table_type TODO
* @return Handle to the table (Terminate on Error)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t SelTblExGUI_ARCDB(void* p_geo, int32_t* table_type);

/**
* Select table GUI.
*
* @param[in]  p_geo GX Context Pointer
* @return Handle to the table
**
* @par Note 
*      Terminates with Cancel on cancel, returns ARCDB_NULL if there are no valid tables in current document.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t SelTblGUI_ARCDB(void* p_geo);

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
