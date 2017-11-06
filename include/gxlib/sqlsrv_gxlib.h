//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file sqlsrv_gxlib.h
* @date 2017-11-06
* @brief File containing SQLSRV GX C API constant and function declarations
*/

/**
* @defgroup SQLSRV_Module SQLSRV
* SQL Server and MSDE utility functions
* @{
*/

#pragma once
#ifndef HSQLSRV_H_DEFINED
#define HSQLSRV_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name MFCSQL_DRIVER Definitions
* 
* SQL Server Driver
*/
///@{
/** 
* MFCSQL_DRIVER_NOPROMPT
* 
* No dialog box, Error if authentication parameters are wrong
*/
#define MFCSQL_DRIVER_NOPROMPT 0
/** 
* MFCSQL_DRIVER_COMPLETE
* 
* Only shows dialog box if authentication parameters are wrong
*/
#define MFCSQL_DRIVER_COMPLETE 1
/** 
* MFCSQL_DRIVER_PROMPT
* 
* Always show dialog box, with option to change parameter
*/
#define MFCSQL_DRIVER_PROMPT 2
/** 
* MFCSQL_DRIVER_COMPLETE_REQUIRED
* 
* Same as MFCSQL_DRIVER_COMPLETE except only missing parameters are editable
*/
#define MFCSQL_DRIVER_COMPLETE_REQUIRED 3
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Attaches an MDF SQL server file to a server.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  server TODO
* @param[in]  user TODO
* @param[in]  password TODO
* @param[in]  db TODO
* @param[in]  mdf_file_name TODO
* @param[in]  ldf_file_name TODO
* @return 0 - OK
* 1 - DB Operation Canceled
* Terminates on Error
**
* @par Note 
*      The file's path need to be visible as local files on the server.
*      Network drives and substitutes may not work.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iAttachMDF_SQLSRV(void* p_geo, const char* server, const char* user, const char* password, const char* db, const char* mdf_file_name, const char* ldf_file_name);

/**
* Detaches a SQL Server database from a server.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  server TODO
* @param[in]  user TODO
* @param[in]  password TODO
* @param[in]  db TODO
* @return 0 - OK
* 1 - DB Operation Canceled
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iDetachDB_SQLSRV(void* p_geo, const char* server, const char* user, const char* password, const char* db);

/**
* Get a list of the languages into LST
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  server TODO
* @param[in]  user TODO
* @param[in]  password TODO
* @param[in]  win_auth TODO
* @return Number of languages
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iGetDatabaseLanguagesLST_SQLSRV(void* p_geo, const int32_t* lst, const char* server, const char* user, const char* password, const int32_t* win_auth);

/**
* Get a list of the database into LST
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  server TODO
* @param[in]  user TODO
* @param[in]  password TODO
* @param[in]  win_auth TODO
* @return Number of database
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iGetDatabasesLST_SQLSRV(void* p_geo, const int32_t* lst, const char* server, const char* user, const char* password, const int32_t* win_auth);

/**
* Get/Test login information to SQL Server
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  server TODO
* @param[out] user TODO
* @param[in]  user_size TODO
* @param[out] password TODO
* @param[in]  password_size TODO
* @param[in]  mode TODO
* @param[out] win_auth TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void IGetLoginGUI_SQLSRV(void* p_geo, const char* server, char* user, const int32_t* user_size, char* password, const int32_t* password_size, const int32_t* mode, int32_t* win_auth);

/**
* Get a list of the visible servers into LST
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @return Number of servers
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iGetServersLST_SQLSRV(void* p_geo, const int32_t* lst);

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
