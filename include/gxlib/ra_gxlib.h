//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ra_gxlib.h
* @date 2017-11-06
* @brief File containing RA GX C API constant and function declarations
*/

/**
* @defgroup RA_Module RA
* The RA class is used to access ASCII files sequentially or
* by line number. The files are opened in read-only mode, so no
* write operations are defined
* @{
*/

#pragma once
#ifndef HRA_H_DEFINED
#define HRA_H_DEFINED

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
* Creates RA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return RA Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_RA(void* p_geo, const char* file);

/**
* Creates RA on an SBF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  file TODO
* @return RA Object
**
* @par Note 
*      This method allows you to open an RA in a structured file
*      storage (an SBF).  SBFs can be created inside other data
*      containers, such as workspaces, maps, images and databases.
*      This lets you store application specific information together
*      with the data to which it applies.
*
* @par See also 
*      sbf.gxh
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateSBF_RA(void* p_geo, const int32_t* sbf, const char* file);

/**
* Destroy RA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ra TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_RA(void* p_geo, const int32_t* ra);

/**
* Get next full line from RA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ra TODO
* @param[out] strbuff TODO
* @param[in]  str_size TODO
* @return 0 - Ok
* 1 - End of file
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t IiGets_RA(void* p_geo, const int32_t* ra, char* strbuff, const int32_t* str_size);

/**
* Returns the total number of lines in RA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ra TODO
* @return # of lines in the RA.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLen_RA(void* p_geo, const int32_t* ra);

/**
* Returns current line #, 0 is the first
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ra TODO
* @return The current read line location.
**
* @par Note 
*      This will be the next line read.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLine_RA(void* p_geo, const int32_t* ra);

/**
* Position next read to specified line #
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ra TODO
* @param[in]  line TODO
* @return 0 if seeked line is within the range of lines,
* 1 if outside range, line pointer will not be moved.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iSeek_RA(void* p_geo, const int32_t* ra, const int32_t* line);

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
