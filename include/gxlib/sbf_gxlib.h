//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file sbf_gxlib.h
* @date 2017-11-06
* @brief File containing SBF GX C API constant and function declarations
*/

/**
* @defgroup SBF_Module SBF
* The SBF class provides a means of storing data in a
* file-type directory structure within a workspace, database
* or map. Each of these three objects contains its own SBF object,
* which may be accessed using the hGetSYS_SBF, hGetDB_SBF and
* hGetMAP_SBF functions. To access data in a file, or create a
* new file in the SBF object, call the CreatSBF_BF function (see BF),
* which will return a BF object to use.
* @{
*/

#pragma once
#ifndef HSBF_H_DEFINED
#define HSBF_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name SBF_OPEN Definitions
* 
* SBF Open defines
*/
///@{
/** 
* SBF_READ
* 
* Read only
*/
#define SBF_READ 0
/** 
* SBF_READWRITE_NEW
* 
* Read/write - erases structured file
*/
#define SBF_READWRITE_NEW 1
/** 
* SBF_READWRITE_OLD
* 
* Read/write - open and append onto pre-existing structured file
*/
#define SBF_READWRITE_OLD 2
///@}

/**
* @name SBF_TYPE Definitions
* 
* SBF Object type defines
*/
///@{
/** 
* SBF_TYPE_DIRS
* 
* Embedded directory names
*/
#define SBF_TYPE_DIRS 1
/** 
* SBF_TYPE_FILES
* 
* Embedded file names
*/
#define SBF_TYPE_FILES 2
/** 
* SBF_TYPE_BOTH
* 
* Embedded file and directory names
*/
#define SBF_TYPE_BOTH 3
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a child SBF object inside an SBF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbfp TODO
* @param[in]  file TODO
* @param[in]  status TODO
* @return SBF object, terminates if fails.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_SBF(void* p_geo, const int32_t* sbfp, const char* file, const int32_t* status);

/**
* Fills an LST with embedded storage names of an SBF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  lst TODO
* @param[in]  type TODO
**
* @par Note 
*      Function will populate an LST object with embedded files (SBF_TYPE_FILES),
*      directories (SBF_TYPE_DIRS), or both (pass SBF_TYPE_BOTH) in an SBF.
*      Along with the Name of the file or directory, a constant "dir" or "file" string is written
*      to the LST also.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.7
*/
GX_EXPORT void CreateObjList_SBF(void* p_geo, const int32_t* sbf, const int32_t* lst, const int32_t* type);

/**
* Delete a directory (storage) from this storage.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  dir TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DelDir_SBF(void* p_geo, const int32_t* sbf, const char* dir);

/**
* Delete a file from this storage.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DelFile_SBF(void* p_geo, const int32_t* sbf, const char* file);

/**
* Destroy SBF handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_SBF(void* p_geo, const int32_t* sbf);

/**
* Get the embedded file storage from a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return SBF Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t hGetDB_SBF(void* p_geo, const int32_t* db);

/**
* Get the embedded file storage from a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @return SBF Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t hGetMAP_SBF(void* p_geo, const int32_t* map);

/**
* Get the main embedded file storage (in workspace).
*
* @param[in]  p_geo GX Context Pointer
* @return SBF Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t hGetSYS_SBF(void* p_geo);

/**
* Check to see if a directory (storage) exists inside this storage.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  dir TODO
* @return 0 - Does not exist
* 1 - Exists
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iExistDir_SBF(void* p_geo, const int32_t* sbf, const char* dir);

/**
* Check to see if a file exists inside this storage.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  file TODO
* @return 0 - Does not exist
* 1 - Exists
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iExistFile_SBF(void* p_geo, const int32_t* sbf, const char* file);

/**
* Save an embedded file to an ASCII file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbfp TODO
* @param[in]  dir TODO
* @param[in]  file TODO
* @param[in]  file_save TODO
* @param[in]  p5 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SaveLog_SBF(void* p_geo, const int32_t* sbfp, const char* dir, const char* file, const char* file_save, const int32_t* p5);

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
