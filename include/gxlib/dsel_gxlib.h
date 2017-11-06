//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file dsel_gxlib.h
* @date 2017-11-06
* @brief File containing DSEL GX C API constant and function declarations
*/

/**
* @defgroup DSEL_Module DSEL
* The DSEL object is used to select subsets of data from the DATA object
* @{
*/

#pragma once
#ifndef HDSEL_H_DEFINED
#define HDSEL_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DSEL_PICTURE_QUALITY Definitions
* 
* Line Label Formats
*/
///@{
/** 
* DSEL_PICTURE_QUALITY_DEFAULT
*/
#define DSEL_PICTURE_QUALITY_DEFAULT 0
/** 
* DSEL_PICTURE_QUALITY_LOSSLESS
*/
#define DSEL_PICTURE_QUALITY_LOSSLESS 1
/** 
* DSEL_PICTURE_QUALITY_SEMILOSSY
*/
#define DSEL_PICTURE_QUALITY_SEMILOSSY 2
/** 
* DSEL_PICTURE_QUALITY_LOSSY
*/
#define DSEL_PICTURE_QUALITY_LOSSY 3
/** 
* DSEL_PICTURE_QUALITY_NATIVE
*/
#define DSEL_PICTURE_QUALITY_NATIVE 4
/** 
* DSEL_PICTURE_QUALITY_ECW
*/
#define DSEL_PICTURE_QUALITY_ECW 5
/** 
* DSEL_PICTURE_QUALITY_JPG
*/
#define DSEL_PICTURE_QUALITY_JPG 6
/** 
* DSEL_PICTURE_QUALITY_PNG
*/
#define DSEL_PICTURE_QUALITY_PNG 7
/** 
* DSEL_PICTURE_QUALITY_BMP
*/
#define DSEL_PICTURE_QUALITY_BMP 8
/** 
* DSEL_PICTURE_QUALITY_TIF
*/
#define DSEL_PICTURE_QUALITY_TIF 9
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a Selection object
*
* @param[in]  p_geo GX Context Pointer
* @return DSEL handle, terminates if creation fails
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.3
*/
GX_EXPORT int32_t Create_DSEL(void* p_geo);

/**
* Specify the data significant figures required
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  sf TODO
**
* @par Note 
*      This is the number of significant figures that you require for the data.
*      You can reduce this number to achieve better compression ratios.
*      This should only be used when there is one data type in the data.
*      
*      See sSpatialResolution_DSEL to set the desired spatial resolution.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void DataSignificantFigures_DSEL(void* p_geo, const int32_t* dsel, const double* sf);

/**
* Destroy a DSEL.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.3
*/
GX_EXPORT void Destroy_DSEL(void* p_geo, const int32_t* dsel);

/**
* Specify a metadata query string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  query TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void MetaQuery_DSEL(void* p_geo, const int32_t* dsel, const char* query);

/**
* Specify the quality of pictures being returned.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  quality TODO
**
* @par Note 
*      Affected Data Types: PICTURE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.4
*/
GX_EXPORT void PictureQuality_DSEL(void* p_geo, const int32_t* dsel, const int32_t* quality);

/**
* Request that all meta-data info be sent
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  request TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void RequestAllInfo_DSEL(void* p_geo, const int32_t* dsel, const int32_t* request);

/**
* Select a complex clipping area
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  pply TODO
**
* @par Note 
*      The DAP server may not handle clipping and may return
*      more data than requested.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void SelectArea_DSEL(void* p_geo, const int32_t* dsel, const int32_t* pply);

/**
* Select a rectangular area.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.3
*/
GX_EXPORT void SelectRect_DSEL(void* p_geo, const int32_t* dsel, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Specify the resolution desired
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  res TODO
* @param[in]  force TODO
**
* @par Note 
*      Resolution must be specified in the units of the selection IPJ.
*      
*      This will be the optimum data resoulution.  (grid cell for grids, data
*      separation for other data types).
*      You will normally get a reasonable resolution as near to or smaller than
*      this unless sRequireResolution_DSEL has been set.
*      
*      Call sRequireResolution_DSEL with TRUE to force the client to re-sample
*      the data to the resolution requested.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.3
*/
GX_EXPORT void SelectResolution_DSEL(void* p_geo, const int32_t* dsel, const double* res, const int32_t* force);

/**
* Specify the image size desired
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  width TODO
* @param[in]  height TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SelectSize_DSEL(void* p_geo, const int32_t* dsel, const int32_t* width, const int32_t* height);

/**
* Specify that we want to extract this file as a document
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT void SetExtractAsDocument_DSEL(void* p_geo, const int32_t* dsel, const int32_t* value);

/**
* Set the desired projection
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  ipj TODO
* @param[in]  force TODO
**
* @par Note 
*      If the server supports reprojection, the data will be
*      reprojected at the server.
*      
*      If reprojection is not forced, the data may come in any projection.
*      
*      The spatial resolution and accuracy are accumed to be in the
*      coordinate system defined by this IPJ.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void SetIPJ_DSEL(void* p_geo, const int32_t* dsel, const int32_t* ipj, const int32_t* force);

/**
* Specify the spatial accuracy required.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dsel TODO
* @param[in]  acc TODO
**
* @par Note 
*      Must be specified in the units of the selection IPJ.
*      
*      The spatial accuracy is used improve compression performance for
*      the spatial component of the data returned.
*      You can reduce this number to achieve better compression ratios.
*      This should only be used when there is one data type in the data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void SpatialAccuracy_DSEL(void* p_geo, const int32_t* dsel, const double* acc);

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
