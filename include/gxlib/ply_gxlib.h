//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ply_gxlib.h
* @date 2017-11-06
* @brief File containing PLY GX C API constant and function declarations
*/

/**
* @defgroup PLY_Module PLY
* The PLY object contains the definitions for one or more
* polygons, and does import and export of polygon files.
* @{
*/

#pragma once
#ifndef HPLY_H_DEFINED
#define HPLY_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name PLY_CLIP Definitions
* 
* Polygon clipping mode
*/
///@{
/** 
* PLY_CLIP_NO_INTERSECT
* 
* The polygons do not intersect
*/
#define PLY_CLIP_NO_INTERSECT 0
/** 
* PLY_CLIP_INTERSECT
* 
* The polygons do intersect
*/
#define PLY_CLIP_INTERSECT 1
/** 
* PLY_CLIP_A_IN_B
* 
* Polygon A is completly inside polygon B
*/
#define PLY_CLIP_A_IN_B 2
/** 
* PLY_CLIP_B_IN_A
* 
* Polygon B is completly inside polygon A
*/
#define PLY_CLIP_B_IN_A 3
///@}

/**
* @name PLY_LINE_CLIP Definitions
* 
* Polygon line clip indicator
*/
///@{
/** 
* PLY_LINE_CLIP_INSIDE
* 
* The start point of the line is inside
*/
#define PLY_LINE_CLIP_INSIDE 0
/** 
* PLY_LINE_CLIP_NO_INTERSECT
* 
* This name is a misnomer - it should have been PLY_LINE_CLIP_INSIDE, but is retained to support legacy code
*/
#define PLY_LINE_CLIP_NO_INTERSECT 0
/** 
* PLY_LINE_CLIP_OUTSIDE
* 
* The start point of the line is outside
*/
#define PLY_LINE_CLIP_OUTSIDE 1
/** 
* PLY_LINE_CLIP_ERROR
*/
#define PLY_LINE_CLIP_ERROR 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Add a polygon to the polygon file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddPolygon_PLY(void* p_geo, const int32_t* pply, const int32_t* vv_x, const int32_t* vv_y);

/**
* Add a polygon to the polygon file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  exclude TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddPolygonEx_PLY(void* p_geo, const int32_t* pply, const int32_t* vv_x, const int32_t* vv_y, const int32_t* exclude);

/**
* Set the projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  ipj TODO
**
* @par Note 
*      The PLY is re-projected to the new projection.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT void ChangeIPJ_PLY(void* p_geo, const int32_t* pply, const int32_t* ipj);

/**
* Clear/remove all polygons from the PLY.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void Clear_PLY(void* p_geo, const int32_t* pply);

/**
* Destroys a PLY Object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest TODO
* @param[in]  srce TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_PLY(void* p_geo, const int32_t* dest, const int32_t* srce);

/**
* Creates a Polygon Object.
*
* @param[in]  p_geo GX Context Pointer
* @return PLY Handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_PLY(void* p_geo);

/**
* Create an PLY Object from a BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return PLY Handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT int32_t CreateS_PLY(void* p_geo, const int32_t* bf);

/**
* Destroys a PLY Object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_PLY(void* p_geo, const int32_t* pply);

/**
* Get the extent of the current polygon.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      If there are no polygons in the PLY object, returns dummies.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Extent_PLY(void* p_geo, const int32_t* pply, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Get the projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT void GetIPJ_PLY(void* p_geo, const int32_t* pply, const int32_t* ipj);

/**
* Get a polygon from the PLY
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  poly TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetPolygon_PLY(void* p_geo, const int32_t* pply, const int32_t* vv_x, const int32_t* vv_y, const int32_t* poly);

/**
* Get a polygon from the PLY
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  poly TODO
* @param[out] exclude TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetPolygonEx_PLY(void* p_geo, const int32_t* pply, const int32_t* vv_x, const int32_t* vv_y, const int32_t* poly, int32_t* exclude);

/**
* Clip a polygon to an area
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @return PLY_CLIP
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t iClipArea_PLY(void* p_geo, const int32_t* pply, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Clips a line in or out of the polygons for intersections (GS_DOUBLE).
* Intersections are returned as fiducials down the line stored in VV
* starting at the first point of the line.
* Examples:
* No intersection: PLY_LINE_CLIP_OUTSIDE, 0 intersections
* Starts outside, ends inside: PLY_LINE_CLIP_OUTSIDE, 1 intersection
* Starts outside, intersects then ends inside or outside: PLY_LINE_CLIP_OUTSIDE, 2 intersections
* Starts inside, ends inside : PLY_LINE_CLIP_INSIDE, 1 intersection (gives end-of-line)
* Starts inside, ends outside : PLY_LINE_CLIP_INSIDE, 1 intersection
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  vv TODO
* @param[in]  inc TODO
* @param[out] first TODO
* @return 0, Terminates on error (you can ignore this value)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iClipLineInt_PLY(void* p_geo, const int32_t* pply, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* vv, const double* inc, int32_t* first);

/**
* Clip one polygon against another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ppl_ya TODO
* @param[in]  ppl_yb TODO
* @param[in]  ppl_yc TODO
* @return PLY_CLIP
**
* @par Note 
*      Resulting clipped polygon only has inclusive
*      regions of the clipped area.  Exclusion polygons
*      are treated as included areas.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t iClipPLY_PLY(void* p_geo, const int32_t* ppl_ya, const int32_t* ppl_yb, const int32_t* ppl_yc);

/**
* Get the PLY description string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[out] desc TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void IGetDescription_PLY(void* p_geo, const int32_t* pply, char* desc, const int32_t* length);

/**
* Get the number of polygons.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @return Number of polygons in the PLY.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNumPoly_PLY(void* p_geo, const int32_t* pply);

/**
* Loads Polygons from a Polygon file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  table TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadTable_PLY(void* p_geo, const int32_t* pply, const char* table);

/**
* Compute the Area of a polygon
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @return Area of a polygon
**
* @par Note 
*      Excluded polygons have negative area.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT double rArea_PLY(void* p_geo, const int32_t* pply);

/**
* Creates a polygon from a rectangular area.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT void Rectangle_PLY(void* p_geo, const int32_t* pply, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Rotate a polygon about a point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  rot TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Rotate_PLY(void* p_geo, const int32_t* pply, const double* x, const double* y, const double* rot);

/**
* Save Polygons to a Polygon file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  table TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SaveTable_PLY(void* p_geo, const int32_t* pply, const char* table);

/**
* Serialize an PLY to a BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ply TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void Serial_PLY(void* p_geo, const int32_t* ply, const int32_t* bf);

/**
* Set the PLY description string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  desc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void SetDescription_PLY(void* p_geo, const int32_t* pply, const char* desc);

/**
* Set the projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  ipj TODO
**
* @par Note 
*      This changes the projection information only.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT void SetIPJ_PLY(void* p_geo, const int32_t* pply, const int32_t* ipj);

/**
* Thin polygons to a desired resolution
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pply TODO
* @param[in]  thin TODO
**
* @par Note 
*      Points on the polygon that deviate from a line drawn between
*      neighboring points by more than the thining resolution will
*      be removed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void Thin_PLY(void* p_geo, const int32_t* pply, const double* thin);

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
