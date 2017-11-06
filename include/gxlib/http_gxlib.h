//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file http_gxlib.h
* @date 2017-11-06
* @brief File containing HTTP GX C API constant and function declarations
*/

/**
* @defgroup HTTP_Module HTTP
* Connect to an Internet Server using HTTP.
*
* Notes:
*
* References:
* 
* 1. http://www.w3.org/Protocols/HTTP/HTTP2.html
* 
* 2. http://www.w3.org/Addressing/URL/5_BNF.html
* 
* Note that path and search must conform be xalpha string (ref 2.).
* Special characters can be specified with a %xx, where xx is the
* hex ASCII number.  For example, a search string "This one" should
* be  specified as "This%20one"
*
* @{
*/

#pragma once
#ifndef HHTTP_H_DEFINED
#define HHTTP_H_DEFINED

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
* This method creates a connection to an HTTP server
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  url TODO
* @param[in]  user_name TODO
* @param[in]  password TODO
* @param[in]  purpose TODO
* @return HTTP Object
**
* @par Note 
*      An OM user has the ability to control access and verification of access
*      to servers over the Internet.  A GX Developer has no way to change the
*      users choice of access.  This is to prevent the creation of GX's that
*      may be dangerous or may be used to collect information without the
*      knowledgede of the user.
*      
*      If the specified URL is restricted from access by the user, the create
*      function will fail.
*      
*      If the specified URL has not been accessed by this user before, or if
*      the user has this site on "Verify", the user will be presented with a
*      dialog requiring verification before communication can begin.  The user
*      may choose to change the server site to a full "Trust" relationship, in
*      which case the verification message will not reappear unless the site
*      is explicitly changed back to verify or is restricted.
*      
*      If you intend your GX to communicate with a server without
*      verification, you must instruct your user to change their trust
*      relationship with your server to "Trusted".  Your user will have the
*      opportunity to do so the first time a script is run.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_HTTP(void* p_geo, const char* url, const char* user_name, const char* password, const char* purpose);

/**
* Destroy HTTP
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  http TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_HTTP(void* p_geo, const int32_t* http);

/**
* Download file from the internet to a BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  http TODO
* @param[in]  file TODO
* @param[in]  bf TODO
* @param[in]  dynamic TODO
**
* @par Note 
*      The file will be written starting at the current location
*      in the BF
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Download_HTTP(void* p_geo, const int32_t* http, const char* file, const int32_t* bf, const int32_t* dynamic);

/**
* Download file from the internet to a BF with no prompt for proxy authentication.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  http TODO
* @param[in]  file TODO
* @param[in]  bf TODO
* @param[in]  dynamic TODO
**
* @par Note 
*      The file will be written starting at the current location
*      in the BF. No prompt for proxy authentication
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void SilentDownload_HTTP(void* p_geo, const int32_t* http, const char* file, const int32_t* bf, const int32_t* dynamic);

/**
* Get data from a server.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  http TODO
* @param[in]  cl TODO
* @param[in]  method TODO
* @param[in]  bf TODO
* @param[in]  ret_bf TODO
**
* @par Note 
*      Full contents of the BF are sent in an HTTP GET message.
*      BF pointer is returned to location before the call.
*      
*      request URL will be:
*      http://server/path?search
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Get_HTTP(void* p_geo, const int32_t* http, const char* cl, const char* method, const int32_t* bf, const int32_t* ret_bf);

/**
* Post data to the server.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  http TODO
* @param[in]  cl TODO
* @param[in]  method TODO
* @param[in]  bf TODO
**
* @par Note 
*      Full contents of the BF are sent as an HTTP POST message.
*      
*      request URL will be:
*      http://server/path?search
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Post_HTTP(void* p_geo, const int32_t* http, const char* cl, const char* method, const int32_t* bf);

/**
* Assigns the proxy username and password so that
* user is not prompted when the first download fails
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  http TODO
* @param[in]  username TODO
* @param[in]  password TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void SetProxyCredentials_HTTP(void* p_geo, const int32_t* http, const char* username, const char* password);

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
