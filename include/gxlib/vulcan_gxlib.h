//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file vulcan_gxlib.h
* @date 2017-11-06
* @brief File containing VULCAN GX C API constant and function declarations
*/

/**
* @defgroup VULCAN_Module VULCAN
* The VULCAN class is used for importing Maptek® Vulcan block and triangulation files.
* @{
*/

#pragma once
#ifndef HVULCAN_H_DEFINED
#define HVULCAN_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name BLOCK_MODEL_VARIABLE_TYPE Definitions
* 
* Which variables to return from sReadBlockModelVariableInfo
*/
///@{
/** 
* BLOCK_MODEL_NUMERIC_VARIABLE
* 
* Return numeric variable names
*/
#define BLOCK_MODEL_NUMERIC_VARIABLE 1
/** 
* BLOCK_MODEL_STRING_VARIABLE
* 
* Return string variable names
*/
#define BLOCK_MODEL_STRING_VARIABLE 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Check if the given file can be opened as a Vulcan triangulation file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  triangulation_file TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT int32_t IsValidTriangulationFile_VULCAN(void* p_geo, const char* triangulation_file);

/**
* Check if the given file can be opened as a Vulcan block model file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  block_model_file TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT int32_t IsValidBlockModelFile_VULCAN(void* p_geo, const char* block_model_file);

/**
* Draw triangle edges in a Vulcan triangulation file to a 3D view in a map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  triangulation_file TODO
* @param[in]  ipj TODO
* @param[in]  mview TODO
* @param[in]  new_group_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void TriangulationToView_VULCAN(void* p_geo, const char* triangulation_file, const int32_t* ipj, const int32_t* mview, const char* new_group_name);

/**
* Query a block model for the variable names and descriptions.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  block_model_file TODO
* @param[in]  query TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void GetBlockModelVariableInfo_VULCAN(void* p_geo, const char* block_model_file, const int32_t* query, const int32_t* lst);

/**
* Query a block model for the values a string variable can assume.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  block_model_file TODO
* @param[in]  variable_name TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void GetBlockModelStringVariableValues_VULCAN(void* p_geo, const char* block_model_file, const char* variable_name, const int32_t* lst);

/**
* Create a Geosoft voxel file from a Vulcan block model file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  block_model_file TODO
* @param[in]  ipj TODO
* @param[in]  variable_to_export TODO
* @param[in]  output_voxel_filename TODO
* @param[in]  remove_default_values TODO
* @param[in]  rock_code_filename TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void BlockModelToVoxel_VULCAN(void* p_geo, const char* block_model_file, const int32_t* ipj, const char* variable_to_export, const char* output_voxel_filename, const int32_t* remove_default_values, const char* rock_code_filename);

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
