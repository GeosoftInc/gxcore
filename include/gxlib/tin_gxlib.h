//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file tin_gxlib.h
* @date 2017-11-06
* @brief File containing TIN GX C API constant and function declarations
*/

/**
* @defgroup TIN_Module TIN
* The TIN class calculates the Delaunay triangulation of the
* positions in a database. This is the "best" set of triangles
* that can be formed from irregularly distributed points. The
* serialized TIN files can be used for gridding using the
* Tin-based Nearest Neighbour Algorithm, or for plotting the
* Delaunay triangles or Voronoi cells to a map.
* @{
*/

#pragma once
#ifndef HTIN_H_DEFINED
#define HTIN_H_DEFINED

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
* Copy TIN
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest TODO
* @param[in]  source TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Copy_TIN(void* p_geo, const int32_t* dest, const int32_t* source);

/**
* This method creates a TIN object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @return TIN Object
**
* @par Note 
*      CreateTIN does the TIN calculation.
*      The Z values are not required, and a 0-length VV can be used to indicate
*      the values are not to be used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_TIN(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Create TIN from a serialized source
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return TIN Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateS_TIN(void* p_geo, const int32_t* bf);

/**
* Destroys the TIN object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_TIN(void* p_geo, const int32_t* tin);

/**
* Export a TIN object as XML
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT void ExportXML_TIN(void* p_geo, const char* tin, int32_t* crc, const char* file);

/**
* Get the convex hull of the TIN.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  ply TODO
**
* @par Note 
*      The convex hull is the outside boundary of the
*      triangulated region.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetConvexHull_TIN(void* p_geo, const int32_t* tin, const int32_t* ply);

/**
* Get the projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.3
*/
GX_EXPORT void GetIPJ_TIN(void* p_geo, const int32_t* tin, const int32_t* ipj);

/**
* Get joins from a TIN mesh.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  vv_joins TODO
* @param[in]  vv_index TODO
* @param[in]  vv_num TODO
**
* @par Note 
*      The join information is returned in three VVs.
*      
*          - The joins VV is a list off the adjacent nodes for
*            each node, arranged for 1st node, 2nd node etc.
*          - The index VV gives the starting index in the
*            joins VV for the adjacent nodes to each node.
*          - The number VV gives the number of adjacent nodes
*            for each node.
*      
*      All VVs must be type GS_LONG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetJoins_TIN(void* p_geo, const int32_t* tin, const int32_t* vv_joins, const int32_t* vv_index, const int32_t* vv_num);

/**
* Get lines from a TIN mesh.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetMesh_TIN(void* p_geo, const int32_t* tin, const int32_t* vv);

/**
* Get the X,Y locations and Z values of the TIN nodes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  vvx TODO
* @param[in]  vvy TODO
* @param[in]  vvz TODO
**
* @par Note 
*      If this is not a Z-valued TIN, the Z values will
*      be dummies.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetNodes_TIN(void* p_geo, const int32_t* tin, const int32_t* vvx, const int32_t* vvy, const int32_t* vvz);

/**
* Get the triangle nodes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  tri_vv_pt1 TODO
* @param[in]  tri_vv_pt2 TODO
* @param[in]  tri_vv_pt3 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.4
*/
GX_EXPORT void GetTriangles_TIN(void* p_geo, const int32_t* tin, const int32_t* tri_vv_pt1, const int32_t* tri_vv_pt2, const int32_t* tri_vv_pt3);

/**
* Get the locations of the vertices of a specific triangle
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  index TODO
* @param[out] x0 TODO
* @param[out] y0 TODO
* @param[out] x1 TODO
* @param[out] y1 TODO
* @param[out] x2 TODO
* @param[out] y2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetTriangle_TIN(void* p_geo, const int32_t* tin, const int32_t* index, double* x0, double* y0, double* x1, double* y1, double* x2, double* y2);

/**
* Get line segments defining Voronoi cells.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetVoronoiEdges_TIN(void* p_geo, const int32_t* tin, const int32_t* vv);

/**
* Does the TIN contain Z values with each X,Y?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @return Returns 1 if Z values are defined in the TIN
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iIsZValued_TIN(void* p_geo, const int32_t* tin);

/**
* Get the index of the triangle containing X, Y.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  t TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @return The index of the triangle containing X, Y.
**
* @par Note 
*      Index returned begins at 0, but could be negative.
*      
*          -1: If X,Y is not contained in a triangle (or triangle not found)
*      
*          -2: If the location is on an edge
*              This is for "fall-back" purposes only.
*      
*              Frequently edge positions are located as being part of
*              a triangle, so do not rely on this result to determine
*              if a node position is on an edge.
*      
*          -3: If the location is a vertex.
*              This is for "fall-back" purposes only in the code.
*              Normal operation is to include a node position
*              inside a triangle, so do not rely on this result to determine
*              if a node position is input.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLocateTriangle_TIN(void* p_geo, const int32_t* tin, const int32_t* t, const double* x, const double* y);

/**
* Returns the number of nodes in the TIN
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @return The number of nodes in the TIN
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNodes_TIN(void* p_geo, const int32_t* tin);

/**
* Interp TINned values using the natural neighbour method.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  vvx TODO
* @param[in]  vvy TODO
* @param[in]  vvz TODO
**
* @par Note 
*      The TIN have been created using max length = rDUMMY to
*      ensure that the TIN has a convex hull (otherwise the
*      routine that locates the triangle for a given location may fail).
*      The TIN must also have been created using the Z values.
*      Values located outside the convex hull are set to rDUMMY.
*      The method is based on the following paper:
*      
*      Sambridge, M., Braun, J., and McQueen, H., 1995,
*      Geophysical parameterization and interpolation of irregular
*      data using natural neighbours:
*      Geophysical Journal International, 122 p. 837-857.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void InterpVV_TIN(void* p_geo, const int32_t* tin, const int32_t* vvx, const int32_t* vvy, const int32_t* vvz);

/**
* Returns the number of triangles in the TIN.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @return The number of triangles in the TIN
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t iTriangles_TIN(void* p_geo, const int32_t* tin);

/**
* Interp TINned values using the linear interpolation
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  vvx TODO
* @param[in]  vvy TODO
* @param[in]  vvz TODO
**
* @par Note 
*      The TIN have been created using max length = rDUMMY to
*      ensure that the TIN has a convex hull (otherwise the
*      routine that locates the triangle for a given location may fail).
*      The TIN must also have been created using the Z values.
*      Values located outside the convex hull are set to rDUMMY.
*      
*      The values are set assuming that each TIN triangle defines a
*      plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.4
*/
GX_EXPORT void LinearInterpVV_TIN(void* p_geo, const int32_t* tin, const int32_t* vvx, const int32_t* vvy, const int32_t* vvz);

/**
* Interp TINned values using the nearest neighbour.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  vvx TODO
* @param[in]  vvy TODO
* @param[in]  vvz TODO
**
* @par Note 
*      The TIN have been created using max length = rDUMMY to
*      ensure that the TIN has a convex hull (otherwise the
*      routine that locates the triangle for a given location may fail).
*      The TIN must also have been created using the Z values.
*      Values located outside the convex hull are set to rDUMMY.
*      
*      Within each voronoi triangle, the Z value of node closest to the input
*      X,Y location is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT void NearestVV_TIN(void* p_geo, const int32_t* tin, const int32_t* vvx, const int32_t* vvy, const int32_t* vvz);

/**
* Find the range in X and Y of the TINned region.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[out] x_min TODO
* @param[out] y_min TODO
* @param[out] x_max TODO
* @param[out] y_max TODO
**
* @par Note 
*      The TINned range is the range of X and Y covered by
*      the TIN triangles. It can thus be less than the full
*      X and Y range of the nodes themselves, if a full
*      convex hull is not calculated.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void RangeXY_TIN(void* p_geo, const int32_t* tin, double* x_min, double* y_min, double* x_max, double* y_max);

/**
* Serialize TIN
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Serial_TIN(void* p_geo, const int32_t* tin, const int32_t* bf);

/**
* Set the projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tin TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.3
*/
GX_EXPORT void SetIPJ_TIN(void* p_geo, const int32_t* tin, const int32_t* ipj);

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
