//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file dmpply_gxlib.h
* @date 2017-11-06
* @brief File containing DMPPLY GX C API constant and function declarations
*/

/**
* @defgroup DMPPLY_Module DMPPLY
* Datamine Multiple polygon object
* @{
*/

#pragma once
#ifndef HDMPPLY_H_DEFINED
#define HDMPPLY_H_DEFINED

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
* Clear/remove all polygons from the DMPPLY.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void _Clear_DMPPLY(void* p_geo, const int32_t* dmpply);

/**
* Copy
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest TODO
* @param[in]  source TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void Copy_DMPPLY(void* p_geo, const int32_t* dest, const int32_t* source);

/**
* Creates a DMPPLY object.
*
* @param[in]  p_geo GX Context Pointer
* @return DMPLY Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT int32_t Create_DMPPLY(void* p_geo);

/**
* Destroys the DMPPLY object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void Destroy_DMPPLY(void* p_geo, const int32_t* dmpply);

/**
* Get the azimuth of a given polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[out] az TODO
**
* @par Note 
*      The azimuth is the equivalent section azimuth,
*      equal to the azimuth of the normal vector plus
*      90 degrees.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void GetAzimuth_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, double* az);

/**
* Get the center, width and height of a given polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] w TODO
* @param[out] h TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void GetExtents_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, double* x, double* y, double* z, double* w, double* h);

/**
* Get join lines for each vertex in a specific polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[in]  vv TODO
**
* @par Note 
*      If a specific vertex is not joined, the returned value is 0.
*      If the vertex is joined, then the index of the join line (1 to NJoins)
*      is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void GetJoins_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, const int32_t* vv);

/**
* Get the normal vectors of a given polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[out] x1 TODO
* @param[out] y1 TODO
* @param[out] z1 TODO
* @param[out] x2 TODO
* @param[out] y2 TODO
* @param[out] z2 TODO
* @param[out] x3 TODO
* @param[out] y3 TODO
* @param[out] z3 TODO
**
* @par Note 
*      Three normalized vectors are returned.
*      The first is horizontal, in the plane of the polygon.
*      The second is in the vertical plane, corresponding to the
*      "down-dip" direction.
*      The third is the normal vector to the polygon plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void GetNormalVectors_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2, double* x3, double* y3, double* z3);

/**
* Get a specific polygon from a DMPPLY object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Get the number of points from the VV length.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void GetPoly_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Get the swing of a given polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[out] az TODO
**
* @par Note 
*      The swing is the equivalent section swing,
*      equal to zero for vertical plates, and increasing
*      as the normal vector goes from horizontal upward.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void GetSwing_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, double* az);

/**
* Get a vertex location from a DMPPLY object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[in]  v TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void GetVertex_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, const int32_t* v, double* x, double* y, double* z);

/**
* Get the number of joining lines in a DMPPLY object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @return Number of joining lines
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT int32_t iNumJoins_DMPPLY(void* p_geo, const int32_t* dmpply);

/**
* Get the number of polygons in a DMPPLY object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @return Number of polygons
**
* @par Note 
*      The value returned is the "NP" used in function descriptions
*      below.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT int32_t iNumPolys_DMPPLY(void* p_geo, const int32_t* dmpply);

/**
* Get the number of vertices in a polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @return Number of vertices in a polygon
**
* @par Note 
*      The value returned is the "NV" used in function descriptions
*      below.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT int32_t iNumVertices_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p);

/**
* Loads a Datamine polygon file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void Load_DMPPLY(void* p_geo, const int32_t* dmpply, const char* file);

/**
* Moves a vertex and any associated lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[in]  v TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void MoveVertex_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, const int32_t* v, const double* x, const double* y, const double* z);

/**
* Project a polygon onto a vertical plane.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[in]  xp TODO
* @param[in]  yp TODO
* @param[in]  zp TODO
* @param[in]  az TODO
* @param[in]  swing TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Gives the location in plane coordinates of a selected polygon,
*      after it has been projected perpendicularly onto the plane.
*      
*      Plane coodinates: X - horizontal in plane
*                        Y - "vertical" in plane (can be a swing)
*                        Z - horizontal, "perpendicular" to plane (RH)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void ProjectPoly_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, const double* xp, const double* yp, const double* zp, const double* az, const double* swing, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Recover polygon locations from 2D locations on vertical plane.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[in]  xp TODO
* @param[in]  yp TODO
* @param[in]  zp TODO
* @param[in]  az TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_x3 TODO
* @param[in]  vv_y3 TODO
* @param[in]  vv_z3 TODO
**
* @par Note 
*      This is the inverse operation of ProjectPoly_DMPPLY.
*      
*      Input the 2D locations on the projected vertical plane. These locations
*      are projected back onto the original polygon plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void ReProjectPoly_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, const double* xp, const double* yp, const double* zp, const double* az, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_x3, const int32_t* vv_y3, const int32_t* vv_z3);

/**
* Save to a Datamine polygon file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void Save_DMPPLY(void* p_geo, const int32_t* dmpply, const char* file);

/**
* Set a specific polygon into a DMPPLY object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dmpply TODO
* @param[in]  p TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Get the number of points from the VV length.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void SetPoly_DMPPLY(void* p_geo, const int32_t* dmpply, const int32_t* p, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

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
