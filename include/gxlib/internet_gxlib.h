//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file internet_gxlib.h
* @date 2017-11-06
* @brief File containing INTERNET GX C API constant and function declarations
*/

/**
* @defgroup INTERNET_Module INTERNET
* This library provides functions for accessing the internet
* and MAPI-compliant e-mail services.
* Supported by Oasis montaj ONLY.
* @{
*/

#pragma once
#ifndef HINTERNET_H_DEFINED
#define HINTERNET_H_DEFINED

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
* Download HTTP file from the internet to file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  url TODO
* @param[in]  file TODO
* @param[in]  size TODO
* @return 0 - Ok
* 1 - Error
**
* @par Note 
*      The file must be stored on a server that supports
*      the HTTP protocol and not require a password.
*
* @par See also 
*      iserver.gxh internet class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iDownloadHTTP_INTERNET(void* p_geo, const char* url, const char* file, const int32_t* size);

/**
* Prepaire an email for the user.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  recipient TODO
* @param[in]  p2 TODO
* @param[in]  p3 TODO
* @param[in]  p4 TODO
* @param[in]  p5 TODO
* @param[in]  p6 TODO
* @param[in]  p7 TODO
* @param[in]  p8 TODO
**
* @par Note 
*      Requires a MAPI complient mail system to be installed
*      on the client machine.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SendMail_INTERNET(void* p_geo, const char* recipient, const char* p2, const char* p3, const char* p4, const char* p5, const char* p6, const char* p7, const char* p8);

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
