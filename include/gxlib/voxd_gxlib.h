//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file voxd_gxlib.h
* @date 2017-11-06
* @brief File containing VOXD GX C API constant and function declarations
*/

/**
* @defgroup VOXD_Module VOXD
* VOX Display object.
* @{
*/

#pragma once
#ifndef HVOXD_H_DEFINED
#define HVOXD_H_DEFINED

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
* Create a new VOXD
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  table TODO
* @param[in]  zone TODO
* @param[in]  contour TODO
* @return VOXD handle, terminates if creation fails
**
* @par Note 
*      Fails if the VOX object is NOT thematic.
*      (See the CreateThematic_VOXD function.)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t Create_VOXD(void* p_geo, const int32_t* vox, const char* table, const int32_t* zone, const double* contour);

/**
* Create a new VOXD with our own ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @param[in]  itr TODO
* @return VOXD handle, terminates if creation fails
**
* @par Note 
*      Fails if the VOX object is thematic.
*      (See the CreateThematic_VOXD function.)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t CreateITR_VOXD(void* p_geo, const int32_t* vox, const int32_t* itr);

/**
* Create a new VOXD for a thematic VOX object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
* @return VOXD handle, terminates if creation fails
**
* @par Note 
*      A thematic voxel is one where the stored integer values
*      represent indices into an internally stored TPAT object.
*      Thematic voxels contain their own color definitions, and
*      normal numerical operations, such as applying ITRs for display,
*      are not valid.
*      
*      To determine if a VOX object is thematic, use the
*      iIsThematic_VOXD function.
*      
*      Fails if the VOX object is NOT thematic.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t CreateThematic_VOXD(void* p_geo, const int32_t* vox);

/**
* Is this a thematic voxel?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @return 1 if VOX is thematic
**
* @par Note 
*      A thematic voxel is one where the stored integer values
*      represent indices into an internally stored TPAT object.
*      Thematic voxels contain their own color definitions, and
*      normal numerical operations, such as applying ITRs for display,
*      are not valid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t iIsThematic_VOXD(void* p_geo, const int32_t* voxd);

/**
* Get a copy of a thematic voxel's TPAT object and a VV containing the current display selections.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[in]  tpat TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void GetThematicInfo_VOXD(void* p_geo, const int32_t* voxd, const int32_t* tpat, const int32_t* vv);

/**
* Get a copy of a thematic voxel's TPAT object and a VV containing the current display selections.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void SetThematicSelection_VOXD(void* p_geo, const int32_t* voxd, const int32_t* vv);

/**
* Destroy a VOXD.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void Destroy_VOXD(void* p_geo, const int32_t* voxd);

/**
* Get the draw controls
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[out] box TODO
* @param[out] trans TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetDrawControls_VOXD(void* p_geo, const int32_t* voxd, int32_t* box, double* trans, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z);

/**
* Gets the file name of the voxel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void IGetName_VOXD(void* p_geo, const int32_t* voxd, char* name, const int32_t* size);

/**
* Get the ITR of the VOXD
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[in]  itr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetITR_VOXD(void* p_geo, const int32_t* voxd, const int32_t* itr);

/**
* Get the shell controls
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[out] min TODO
* @param[out] max TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void GetShellControls_VOXD(void* p_geo, const int32_t* voxd, double* min, double* max);

/**
* Set the draw controls
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[in]  box TODO
* @param[in]  trans TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  min_z TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  max_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetDrawControls_VOXD(void* p_geo, const int32_t* voxd, const int32_t* box, const double* trans, const double* min_x, const double* min_y, const double* min_z, const double* max_x, const double* max_y, const double* max_z);

/**
* Set the ITR of the VOXD
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[in]  itr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetITR_VOXD(void* p_geo, const int32_t* voxd, const int32_t* itr);

/**
* Set the shell controls
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  voxd TODO
* @param[in]  min TODO
* @param[in]  max TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetShellControls_VOXD(void* p_geo, const int32_t* voxd, const double* min, const double* max);

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
