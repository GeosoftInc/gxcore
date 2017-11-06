//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ger_gxlib.h
* @date 2017-11-06
* @brief File containing GER GX C API constant and function declarations
*/

/**
* @defgroup GER_Module GER
* Allows access to a Geosoft format error message file. This class
* does not in itself produce an error message, but retrieves a
* selected message from the file, and allows the
* setting of replacement parameters within the message. It
* is up to the user to display or use the message.
*
* Notes:
*
* GER message files contain numbered messages that can be used within GXs.
* Following is an example from the file GEOSOFT.GER:
* 
* 
*       #20008
*       ! Invalid password. The product installation has failed.
* 
*       #20009
*       ! Unable to find INI file: %1
*       ! See the documentation for details
* 
* 
* A '#' character in column 1 indicates a message number.  The message
* follows on lines that begin with a '!' character.  Strings in the message
* may be replaced at run time with values using the SetString_GER,
* SetInt_GER and SetReal_GER methods. The iGet_GER will return the message
* with strings replaced by their settings.  By convention, we recommend
* that you use "%1", "%2", etc. as replacement strings.
*
* @{
*/

#pragma once
#ifndef HGER_H_DEFINED
#define HGER_H_DEFINED

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
* Opens an ASCII error file to read from.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return GER Object
**
* @par Note 
*      The GER file may be in the local directory or the GEOSOFT
*      directory.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_GER(void* p_geo, const char* file);

/**
* Destroys a GER Object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ger TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_GER(void* p_geo, const int32_t* ger);

/**
* Get a message string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ger TODO
* @param[in]  num TODO
* @param[out] message TODO
* @param[in]  length TODO
* @return 0 if message found
* 1 if no message, passed message remains unchanged
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t IiGet_GER(void* p_geo, const int32_t* ger, const int32_t* num, char* message, const int32_t* length);

/**
* Set a replacement string value to an int.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ger TODO
* @param[in]  parm TODO
* @param[in]  set TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInt_GER(void* p_geo, const int32_t* ger, const char* parm, const int32_t* set);

/**
* Set a replacement string value to a real.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ger TODO
* @param[in]  parm TODO
* @param[in]  set TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReal_GER(void* p_geo, const int32_t* ger, const char* parm, const double* set);

/**
* Set a replacement string value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ger TODO
* @param[in]  parm TODO
* @param[in]  set TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetString_GER(void* p_geo, const int32_t* ger, const char* parm, const char* set);

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
