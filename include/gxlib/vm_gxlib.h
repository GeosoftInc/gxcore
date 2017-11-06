//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file vm_gxlib.h
* @date 2017-11-06
* @brief File containing VM GX C API constant and function declarations
*/

/**
* @defgroup VM_Module VM
* In-memory vector data methods
* The VM class will store vector (array) data in a memory buffer which
* can be accessed using the VM methods.
* The main use for the VM class is to store data in a single physical
* memory location.  This memory can then be accessed by a user DLL using
* the GetPtrVM_GEO function defined in gx_extern.h.
* VM memory can be any size, but a VM is intended for handling relatively
* small sets of data compared to a VV, which can work efficiently with
* very large volumes of data.  The acceptable maximum VM size depends on
* the operating system and the performance requirements of an application.
* The best performance is achieved when all VM memory can be stored
* comfortably within the the available system RAM.  If all VM memory
* will not fit in the system RAM, the operating system virtual memory
* manager will be used to swap memory to the operations systems virtual
* memory paging file.  Note that the operating system virtual memory
* manager is much slower than the manager used by Geosoft when working with
* very large arrays in a VV.
* 
* See VV for methods to move data between a VM and a VV.
* @{
*/

#pragma once
#ifndef HVM_H_DEFINED
#define HVM_H_DEFINED

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
* Create a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  elements TODO
* @return VM Object
**
* @par Note 
*      The VM elements are initialized to dummies.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_VM(void* p_geo, const int32_t* type, const int32_t* elements);

/**
* Create a VM, using one of the GS_TYPES special data types.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  elements TODO
* @return VM Object
**
* @par Note 
*      The VM elements are initialized to dummies.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4.2
*/
GX_EXPORT int32_t CreateExt_VM(void* p_geo, const int32_t* type, const int32_t* elements);

/**
* Destroy a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_VM(void* p_geo, const int32_t* vm);

/**
* Get an integer element from a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @param[in]  element TODO
* @return Element wanted, or iDUMMY
* if the value is dummy or outside of the range of data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetInt_VM(void* p_geo, const int32_t* vm, const int32_t* element);

/**
* Get a string element from a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @param[in]  element TODO
* @param[out] str_val TODO
* @param[in]  str_size TODO
**
* @par Note 
*      Returns element wanted, or blank string
*      if the value is dummy or outside of the range of data.
*      
*      Type conversions are performed if necessary.  Dummy values
*      are converted to "*" string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetString_VM(void* p_geo, const int32_t* vm, const int32_t* element, char* str_val, const int32_t* str_size);

/**
* Returns current VM length.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @return # of elements in the VM.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLength_VM(void* p_geo, const int32_t* vm);

/**
* Re-set the size of a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @param[in]  newsize TODO
**
* @par Note 
*      If increasing the VM size, new elements are set to dummies.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReSize_VM(void* p_geo, const int32_t* vm, const int32_t* newsize);

/**
* Get a real element from a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @param[in]  element TODO
* @return Element wanted, or rDUMMY
* if the value is dummy or outside of the range of data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetReal_VM(void* p_geo, const int32_t* vm, const int32_t* element);

/**
* Set an integer element in a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @param[in]  element TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      
*      If the element is > current VM length, the VM length is
*      increased.  Reallocating VM lengths can lead to fragmented
*      memory and should be avoided if possible.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInt_VM(void* p_geo, const int32_t* vm, const int32_t* element, const int32_t* value);

/**
* Set a real element in a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @param[in]  element TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      
*      If the element is > current VM length, the VM length is
*      increased.  Reallocating VM lengths can lead to fragmented
*      memory and should be avoided if possible.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReal_VM(void* p_geo, const int32_t* vm, const int32_t* element, const double* value);

/**
* Set a string element in a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @param[in]  element TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      
*      If the element is > current VM length, the VM length is
*      increased.  Reallocating VM lengths can lead to fragmented
*      memory and should be avoided if possible.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetString_VM(void* p_geo, const int32_t* vm, const int32_t* element, const char* value);

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
