//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file reg_gxlib.h
* @date 2017-11-06
* @brief File containing REG GX C API constant and function declarations
*/

/**
* @defgroup REG_Module REG
* The REG class is used for storing and retrieving named
* variables. Many classes contain REG objects for storing
* information particular to the class.  The META class supersedes
* the REG class and is gradually replacing the use of the
* REG class in newer applications.
* @{
*/

#pragma once
#ifndef HREG_H_DEFINED
#define HREG_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name REG_MERGE Definitions
* 
* REG merge options
*/
///@{
/** 
* REG_MERGE_REPLACE
* 
* Replace Values
*/
#define REG_MERGE_REPLACE 0
/** 
* REG_MERGE_ADD
* 
* Only append values
*/
#define REG_MERGE_ADD 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Clears all the parameters in a REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Clear_REG(void* p_geo, const int32_t* reg);

/**
* Copy
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest TODO
* @param[in]  srce TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_REG(void* p_geo, const int32_t* dest, const int32_t* srce);

/**
* Create a handle to a REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  l_parm_length TODO
* @return REG Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_REG(void* p_geo, const int32_t* l_parm_length);

/**
* Create a handle to a REG object from a BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return REG Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateS_REG(void* p_geo, const int32_t* bf);

/**
* Destroy a REG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_REG(void* p_geo, const int32_t* reg);

/**
* Gets a string for a specified parameter in the REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  parm TODO
* @param[out] data TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Get_REG(void* p_geo, const int32_t* reg, const char* parm, char* data, const int32_t* size);

/**
* Gets an int for a specified parameter in the REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  parm TODO
* @param[out] data TODO
**
* @par Note 
*      If parameter is not present in REG, iDUMMY is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetInt_REG(void* p_geo, const int32_t* reg, const char* parm, int32_t* data);

/**
* Gets n-th entry of the REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  loc TODO
* @param[out] parm TODO
* @param[in]  plen TODO
* @param[out] data TODO
* @param[in]  dlen TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void GetOne_REG(void* p_geo, const int32_t* reg, const int32_t* loc, char* parm, const int32_t* plen, char* data, const int32_t* dlen);

/**
* Gets an real for a specified parameter in the REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  parm TODO
* @param[out] data TODO
**
* @par Note 
*      If parameter is not present in REG, rDUMMY is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetReal_REG(void* p_geo, const int32_t* reg, const char* parm, double* data);

/**
* Get the number of parms in a REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @return Number of parms in a REG object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iEntries_REG(void* p_geo, const int32_t* reg);

/**
* Load a registry from an INI file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  ini TODO
**
* @par Note 
*      Items are loaded into the REG in the format "GROUP.ITEM".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadINI_REG(void* p_geo, const int32_t* reg, const char* ini);

/**
* Replace a string with reg settings.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  parm TODO
* @param[out] data TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MatchString_REG(void* p_geo, const int32_t* reg, const char* parm, char* data, const int32_t* length);

/**
* Merge
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest TODO
* @param[in]  srce TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Merge_REG(void* p_geo, const int32_t* dest, const int32_t* srce, const int32_t* type);

/**
* Save a REG to an INI file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  ini TODO
**
* @par Note 
*      Only REG parameters in the form "GROUP.ITEM" are
*      dumped to the INI file, because they match the INI format
*      which groups items under [GROUP] headings.
*      Single-word items (without a separating period) are skipped.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SaveINI_REG(void* p_geo, const int32_t* reg, const char* ini);

/**
* Serialize a REG object into a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Serial_REG(void* p_geo, const int32_t* reg, const int32_t* bf);

/**
* Sets a string parameter in the REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  parm TODO
* @param[in]  data TODO
**
* @par Note 
*      To remove a parameter completely, use one of the
*      following:
*      
*      SetInt_REG(Reg, sParam, iDUMMY);
*      or
*      SetReal_REG(Reg, sParam, rDUMMY);
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Set_REG(void* p_geo, const int32_t* reg, const char* parm, const char* data);

/**
* Sets an int for a specified parameter in the REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  parm TODO
* @param[in]  data TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInt_REG(void* p_geo, const int32_t* reg, const char* parm, const int32_t* data);

/**
* Sets an real for a specified parameter in the REG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  parm TODO
* @param[in]  p3 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReal_REG(void* p_geo, const int32_t* reg, const char* parm, const double* p3);

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
