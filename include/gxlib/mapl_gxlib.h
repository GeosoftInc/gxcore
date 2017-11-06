//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file mapl_gxlib.h
* @date 2017-11-06
* @brief File containing MAPL GX C API constant and function declarations
*/

/**
* @defgroup MAPL_Module MAPL
* The MAPL class is the interface with the MAPPLOT program,
* which reads a MAPPLOT control file and plots graphical
* entities to a map. The MAPL object is created for a given
* control file, then passed to the MAPPLOT program, along
* with the target MAP object on which to do the drawing
* @{
*/

#pragma once
#ifndef HMAPL_H_DEFINED
#define HMAPL_H_DEFINED

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
* Create a MAPL.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  ref_name TODO
* @param[in]  line TODO
* @return MAPL, aborts if creation fails
**
* @par Note 
*      The default map groups will use the reference name with
*      "_Data" and "_Base" added.  If no reference name is specified,
*      the name "MAPL" is used
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_MAPL(void* p_geo, const char* name, const char* ref_name, const int32_t* line);

/**
* Create a MAPL with REG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  ref_name TODO
* @param[in]  line TODO
* @param[in]  reg TODO
* @return MAPL, aborts if creation fails
**
* @par Note 
*      The default map groups will use the reference name with
*      "_Data" and "_Base" added.  If no reference name is specified,
*      the name "MAPL" is used
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateREG_MAPL(void* p_geo, const char* name, const char* ref_name, const int32_t* line, const int32_t* reg);

/**
* Destroy the MAPL handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mapl TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_MAPL(void* p_geo, const int32_t* mapl);

/**
* Process a MAPL
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mapl TODO
* @param[in]  map TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Process_MAPL(void* p_geo, const int32_t* mapl, const int32_t* map);

/**
* Adds a replacement string to a mapplot control file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mapl TODO
* @param[in]  var TODO
* @param[in]  repl TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ReplaceString_MAPL(void* p_geo, const int32_t* mapl, const char* var, const char* repl);

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
