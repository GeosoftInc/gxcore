//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file dbwrite_gxlib.h
* @date 2017-11-06
* @brief File containing DBWRITE GX C API constant and function declarations
*/

/**
* @defgroup DBWRITE_Module DBWRITE
* The DBWRITE class is used to open and write to databases. Large blocks of data
* are split into blocks and served up sequentially to prevent the over-use of virtual memory when VVs or VAs are being written to channels.
* Individual data blocks are limited by default to 1 MB (which is user-alterable). Data less than the block size
* are served up whole, one block per line.
* @{
*/

#pragma once
#ifndef HDBWRITE_H_DEFINED
#define HDBWRITE_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code



/**
* @name Create Methods Functions 
*/
///@{

/**
* Create a DBWRITE object
* Add channels using the iAddChannel_DBWRITE method.channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return DBWRITE object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t Create_DBWRITE(void* p_geo, const int32_t* db);

/**
* Create a DBWRITE object for a XY-located data. Add channels using the
* iAddChannel_DBWRITE method.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return DBWRITE object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t CreateXY_DBWRITE(void* p_geo, const int32_t* db);

/**
* Create a DBWRITE object for a XYZ-located data.
* Add channels using the iAddChannel_DBWRITE method.channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return DBWRITE object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t CreateXYZ_DBWRITE(void* p_geo, const int32_t* db);

/**
* Destroy DBWRITE handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void Destroy_DBWRITE(void* p_geo, const int32_t* dbwrite);

/**
* Add a data channel to the DBWRITE object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @param[in]  chan TODO
* @return Channel index. Use for getting the correct VV or VA object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t iAddChannel_DBWRITE(void* p_geo, const int32_t* dbwrite, const int32_t* chan);

///@}

/**
* @name Data Access Methods Functions 
*/
///@{

/**
* Get the output DB handle from the DBWRITE object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @return DB handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t GetDB_DBWRITE(void* p_geo, const int32_t* dbwrite);

/**
* Get the VV handle for a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @param[in]  chan TODO
* @return VV handle
**
* @par Note 
*      Call only for single-column (regular) channels. You can call the iGetChanArraySize_DBWRITE
*      function to find the number fo columns in a given channel. The VV is filled anew for each block served up.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t GetVV_DBWRITE(void* p_geo, const int32_t* dbwrite, const int32_t* chan);

/**
* Get the VA handle for an array channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @param[in]  chan TODO
* @return VA handle
**
* @par Note 
*      Call only for array (multi-column) channels. You can call the iGetChanArraySize_DBWRITE
*      function to find the number fo columns in a given channel, or you can call iCol_VA on the returned VA handle.
*      The VA is filled anew for each block served up.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t GetVA_DBWRITE(void* p_geo, const int32_t* dbwrite, const int32_t* chan);

/**
* Get the X channel VV handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @return VV handle
**
* @par Note 
*      Only available for the CreateXY or CreateXYZ methods.
*      The VV is filled anew for each block served up.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t GetVVx_DBWRITE(void* p_geo, const int32_t* dbwrite);

/**
* Get the Y channel VV handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @return VV handle
**
* @par Note 
*      Only available for the CreateXY or CreateXYZ methods.
*      The VV is filled anew for each block served up.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t GetVVy_DBWRITE(void* p_geo, const int32_t* dbwrite);

/**
* Get the Z channel VV handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @return VV handle
**
* @par Note 
*      Only available for the CreateXY or CreateXYZ methods.
*      The VV is filled anew for each block served up.
*      If the Z channel is an array channel, the returned VV is the "base" VV of the VA and contains all items sequentially.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t GetVVz_DBWRITE(void* p_geo, const int32_t* dbwrite);

/**
* Get the number of columns of data in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @param[in]  chan TODO
* @return The number of columns (array size) for a channel
**
* @par Note 
*      Regular channels have one column of data. Array channels have more than one column of data.
*      This function should be called to determine whether to use GetVV_DBWRITE or GetVA_DBWRITE to access data
*      for a channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t iGetChanArraySize_DBWRITE(void* p_geo, const int32_t* dbwrite, const int32_t* chan);

///@}

/**
* @name Processing Functions 
*/
///@{

/**
* Add the current block of data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @param[in]  line TODO
**
* @par Note 
*      First, set up the data for each channel by copying values into the individual channel VVs and VAs.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void AddBlock_DBWRITE(void* p_geo, const int32_t* dbwrite, const int32_t* line);

/**
* Commit remaining data to the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void Commit_DBWRITE(void* p_geo, const int32_t* dbwrite);

/**
* Temporary test function.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbwrite TODO
* @param[in]  ra TODO
**
* @par Note 
*      Designed to import the "Massive.xyz" file, which has data in the format "X Y Z Data".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void TestFunc_DBWRITE(void* p_geo, const int32_t* dbwrite, const int32_t* ra);

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
