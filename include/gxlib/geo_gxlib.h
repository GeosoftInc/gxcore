//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file geo_gxlib.h
* @date 2017-11-06
* @brief File containing GEO GX C API constant and function declarations
*/

/**
* @defgroup GEO_Module GEO
* GEO Utility functions
* @{
*/

#pragma once
#ifndef HGEO_H_DEFINED
#define HGEO_H_DEFINED

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
* Test if Geosoft function has terminated with an error
*
* @param[in]  p_geo GX Context Pointer
* @return 0 if no errors.
* 1 if an error has occurred.
**
* @par Note 
*      For Geosoft functions that do not return an error
*      condition (all of them except those specifically designed
*      for DLL use) you must call this function to test if an
*      error has occurred in the Geosoft function.  If an error
*      has occurred, just clean-up and return.  Error messages
*      will have been registered by the Geosoft function.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iCheckError_SYS(void* p_geo);

/**
* Test if a Geosoft function has terminated with an error
*
* @param[in]  p_geo GX Context Pointer
* @param[out] reason TODO
* @return 0 continue
* 1 terminate
**
* @par Note 
*      Check if a script should be terminated. The reason for termination could
*                          be due to errors or due to calls like Cancel_SYS or Exit_SYS.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.1
*/
GX_EXPORT int32_t iCheckTerminate_SYS(void* p_geo, int32_t* reason);

/**
* Shows any errors to stdout or to gui if gui app
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ShowError_GEO(void* p_geo);

/**
* Gets the error string for 1 error.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] mod TODO
* @param[in]  mod_size TODO
* @param[out] err TODO
* @param[in]  err_size TODO
* @param[out] error TODO
* @return 0 - no error
* 1 - error found
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT short sGetError_GEO(void* p_geo, char* mod, int32_t mod_size, char* err, int32_t err_size, int32_t* error);

/**
* Gets the pointer of a VM object's data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @return Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void* GetPtrVM_GEO(void* p_geo, const int32_t* vm);

/**
* Gets the pointer of a VV object's data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @return Pointer to the base of the VV memory image.
**
* @par Note 
*      The VV must be a memory based VV for this method to work.
*      
*      Normal VVs are optimised to prevent thrashing, and to
*      efficiently support many extremely large VVs, although
*      there is a small performance penalty.
*      This function is intended for VV's that you know can be
*      handled by the operating system virtual memory manager,
*      and will be used heavily.  By using a memory based VV, you
*      can achieve some performance improvements provided your
*      application does not cause the memory manager to "thrash".
*      
*      External programs that use the GX API may prefer to use
*      memory-based VV's because you can get direct access to
*      the VV through the GetPtrVV_GEO function (see gx_extern.h).
*      
*      Note that you can only read and write to this memory up to
*      the declared or current size of the VV.  You should use the
*      SetLen_VV functions to change the size of a VV, after which
*      you should always call GetPtrVV_GEO to determine the new base
*      memory pointer.
*
* @par See also 
*      MakeMemBased_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void* GetPtrVV_GEO(void* p_geo, const int32_t* vv);

/**
* Innternal use only.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gxx_handle TODO
* @return Pointer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void* pGetInternalGXXPointer_GEO(void* p_geo, const int32_t* gxx_handle);

/**
* Check to see if terminate has been called by a wrapper.
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT short sCheckTerminate_GEO(void* p_geo);

/**
* Register a Resource Tracking function
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  resource TODO
* @param[in]  pinfo TODO
* @param[in]  destr TODO
**
* @par Note 
*      When this resource is destroyed, your
*      function will be called and passed your
*      pInfo pointer to cleanup.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void RegisterResourceTracking_GEO(void* p_geo, const int32_t* resource, void* pinfo, void (_stdcall *destr)(void*) destr);

/**
* Unregister a Resource Tracking function
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  handle TODO
* @param[in]  pinfo TODO
* @param[in]  destr TODO
**
* @par Note 
*      This removes the tracking controls
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void UnregisterResourceTracking_GEO(void* p_geo, const int32_t* handle, void* pinfo, void (_stdcall *destr)(void*) destr);

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
