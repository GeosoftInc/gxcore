//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file dbread_gxlib.h
* @date 2017-11-06
* @brief File containing DBREAD GX C API constant and function declarations
*/

/**
* @defgroup DBREAD_Module DBREAD
* The DBREAD class is used to open and read from databases. Very large lines
* are split into blocks and served up sequentially to prevent the over-use of virtual memory when channels are read into VVs or VAs.
* Individual data blocks are limited by default to 1 MB (which is user-alterable). Single lines smaller than the block size
* are served up whole, one block per line.
* @{
*/

#pragma once
#ifndef HDBREAD_H_DEFINED
#define HDBREAD_H_DEFINED

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
* Create a DBREAD object
* Add channels using the iAddChannel_DBREAD method.channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line_lst TODO
* @return DBREAD object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t Create_DBREAD(void* p_geo, const int32_t* db, const int32_t* line_lst);

/**
* Create a DBREAD object for a XY-located data. Add channels using the
* iAddChannel_DBREAD method.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line_lst TODO
* @return DBREAD object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t CreateXY_DBREAD(void* p_geo, const int32_t* db, const int32_t* line_lst);

/**
* Create a DBREAD object for a XYZ-located data.
* Add channels using the iAddChannel_DBREAD method.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line_lst TODO
* @return DBREAD object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t CreateXYZ_DBREAD(void* p_geo, const int32_t* db, const int32_t* line_lst);

/**
* Destroy DBREAD handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void Destroy_DBREAD(void* p_geo, const int32_t* dbread);

/**
* Add a data channel to the DBREAD object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @param[in]  chan TODO
* @return Channel index. Use for getting the correct VV or VA object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t iAddChannel_DBREAD(void* p_geo, const int32_t* dbread, const int32_t* chan);

///@}

/**
* @name Data Access Methods Functions 
*/
///@{

/**
* Get the VV handle for a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @param[in]  chan TODO
* @return VV handle
**
* @par Note 
*      Call only for single-column (regular) channels. You can call the iGetChanArraySize_DBREAD
*      function to find the number fo columns in a given channel. The VV is filled anew for 
*      each block served up.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t GetVV_DBREAD(void* p_geo, const int32_t* dbread, const int32_t* chan);

/**
* Get the VA handle for an array channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @param[in]  chan TODO
* @return VA handle
**
* @par Note 
*      Call only for array (multi-column) channels. You can call the iGetChanArraySize_DBREAD
*      function to find the number fo columns in a given channel, or you can call iCol_VA on the returned VA handle.
*      The VA is filled anew for each block served up.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t GetVA_DBREAD(void* p_geo, const int32_t* dbread, const int32_t* chan);

/**
* Get the X channel VV handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @return VV handle
**
* @par Note 
*      Only available for the CreateXY or CreateXYZ methods.
*      The VV is filled anew for each block served up.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t GetVVx_DBREAD(void* p_geo, const int32_t* dbread);

/**
* Get the Y channel VV handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @return VV handle
**
* @par Note 
*      Only available for the CreateXY or CreateXYZ methods.
*      The VV is filled anew for each block served up.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t GetVVy_DBREAD(void* p_geo, const int32_t* dbread);

/**
* Get the Z channel VV handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @return VV handle
**
* @par Note 
*      Only available for the CreateXY or CreateXYZ methods.
*      The VV is filled anew for each block served up.
*      If the Z channel is an array channel, the returned VV is the "base" VV of the VA and contains all items sequentially.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t GetVVz_DBREAD(void* p_geo, const int32_t* dbread);

/**
* Get the number of columns of data in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @param[in]  chan TODO
* @return The number of columns (array size) for a channel
**
* @par Note 
*      Regular channels have one column of data. Array channels have more than one column of data.
*      This function should be called to determine whether to use GetVV_DBREAD or GetVA_DBREAD to access data
*      for a channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t iGetChanArraySize_DBREAD(void* p_geo, const int32_t* dbread, const int32_t* chan);

/**
* Get the number of blocks to be served up.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @return The number of blocks to process in the selected lines.
**
* @par Note 
*      The selected lines are scanned. All lines where the served up data is less than the maximum block size for
*      all channels are served as a single block. Any lines where any channel's data exceeds the maximum block size are split up into blocks.
*      The value returned can be used as the progress message maximum iteration value.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t iGetNumberOfBlocksToProcess_DBREAD(void* p_geo, const int32_t* dbread);

///@}

/**
* @name Processing Functions 
*/
///@{

/**
* Get the next block of data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbread TODO
* @param[out] line TODO
* @param[out] block TODO
* @param[out] n_blocks TODO
* @return Returns the current block index, or -1 if at end of file (no new data returned).
**
* @par Note 
*      The next block of data is read and copied into the channel VV and/or VA objects, accessed using
*      the GetVV_DBREAD and GetVA_DBREAD functions.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT int32_t iGetNextBlock_DBREAD(void* p_geo, const int32_t* dbread, int32_t* line, int32_t* block, int32_t* n_blocks);

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
