//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file usermeta_gxlib.h
* @date 2017-11-06
* @brief File containing USERMETA GX C API constant and function declarations
*/

/**
* @defgroup USERMETA_Module USERMETA
* The USERMETA class handles user style metadata tied to real
* data.
* @{
*/

#pragma once
#ifndef HUSERMETA_H_DEFINED
#define HUSERMETA_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name USERMETA_FORMAT Definitions
* 
* USERMETA Format Types
*/
///@{
/** 
* USERMETA_FORMAT_DEFAULT
* 
* Use the standard type for the system
*/
#define USERMETA_FORMAT_DEFAULT -1
/** 
* USERMETA_FORMAT_ISO
* 
* ISO 19139 standard
*/
#define USERMETA_FORMAT_ISO 0
/** 
* USERMETA_FORMAT_FGDC
* 
* FGDC Metadata Standard
*/
#define USERMETA_FORMAT_FGDC 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Creates an empty USERMETA object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  format TODO
* @return USERMETA Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t Create_USERMETA(void* p_geo, const int32_t* format);

/**
* Create a USERMETA from a file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return USERMETA Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t CreateS_USERMETA(void* p_geo, const char* file);

/**
* Destroyes the USERMETA object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void Destroy_USERMETA(void* p_geo, const int32_t* usermeta);

/**
* Get the Data Creation Date
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] date TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void GetDataCreationDate_USERMETA(void* p_geo, const int32_t* usermeta, double* date);

/**
* Get the 2d Extents
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void GetExtents2d_USERMETA(void* p_geo, const int32_t* usermeta, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Get the 3d Extents
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void GetExtents3d_USERMETA(void* p_geo, const int32_t* usermeta, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z);

/**
* Get the IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void GetIPJ_USERMETA(void* p_geo, const int32_t* usermeta, const int32_t* ipj);

/**
* Get the Meta Creation Date
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] date TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void GetMetaCreationDate_USERMETA(void* p_geo, const int32_t* usermeta, double* date);

/**
* Get the XML Format
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] format TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void GetXMLFormat_USERMETA(void* p_geo, const int32_t* usermeta, int32_t* format);

/**
* Compare 2 USERMETA's
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta1 TODO
* @param[in]  usermeta2 TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iCompare_USERMETA(void* p_geo, const int32_t* usermeta1, const int32_t* usermeta2);

/**
* Get the Data Creator
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] data_creator TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetDataCreator_USERMETA(void* p_geo, const int32_t* usermeta, char* data_creator, const int32_t* size);

/**
* Get the File Format
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] format TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetFormat_USERMETA(void* p_geo, const int32_t* usermeta, char* format, const int32_t* size);

/**
* Get the Meta Creator
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] meta_creator TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetMetaCreator_USERMETA(void* p_geo, const int32_t* usermeta, char* meta_creator, const int32_t* size);

/**
* Get the File Project
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] project TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetProject_USERMETA(void* p_geo, const int32_t* usermeta, char* project, const int32_t* size);

/**
* Get the Title
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[out] title TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetTitle_USERMETA(void* p_geo, const int32_t* usermeta, char* title, const int32_t* size);

/**
* Serialize USERMETA to a BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  save_geo TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void Serial_USERMETA(void* p_geo, const int32_t* usermeta, const int32_t* save_geo, const char* file);

/**
* Set the Data Creation Date
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  date TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetDataCreationDate_USERMETA(void* p_geo, const int32_t* usermeta, const double* date);

/**
* Set the Data Creator
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  data_creator TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetDataCreator_USERMETA(void* p_geo, const int32_t* usermeta, const char* data_creator);

/**
* Set the 2d Extents
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetExtents2d_USERMETA(void* p_geo, const int32_t* usermeta, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Set the 3d Extents
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  min_z TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  max_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetExtents3d_USERMETA(void* p_geo, const int32_t* usermeta, const double* min_x, const double* min_y, const double* min_z, const double* max_x, const double* max_y, const double* max_z);

/**
* Set the File Format
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  format TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetFormat_USERMETA(void* p_geo, const int32_t* usermeta, const char* format);

/**
* Set the IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetIPJ_USERMETA(void* p_geo, const int32_t* usermeta, const int32_t* ipj);

/**
* Set the Meta Creation Date
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  date TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetMetaCreationDate_USERMETA(void* p_geo, const int32_t* usermeta, const double* date);

/**
* Set the Meta Creator
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  meta_creator TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetMetaCreator_USERMETA(void* p_geo, const int32_t* usermeta, const char* meta_creator);

/**
* Set the File Project
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  project TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetProject_USERMETA(void* p_geo, const int32_t* usermeta, const char* project);

/**
* Set the Title
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  usermeta TODO
* @param[in]  title TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetTitle_USERMETA(void* p_geo, const int32_t* usermeta, const char* title);

/**
* Edit an existing XML metadata file by
* changing the extents and projection data
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  filename TODO
* @param[in]  ipj TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0.1
*/
GX_EXPORT void UpdateExtents2D_USERMETA(void* p_geo, const char* filename, const int32_t* ipj, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Edit an existing XML metadata file by
* changing the file type
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file_name TODO
* @param[in]  new_file_type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void UpdateFileType_USERMETA(void* p_geo, const char* file_name, const char* new_file_type);

/**
* Add lineage to XML
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file_name TODO
* @param[in]  save_geo TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void SaveFileLineage_USERMETA(void* p_geo, const char* file_name, const int32_t* save_geo);

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
