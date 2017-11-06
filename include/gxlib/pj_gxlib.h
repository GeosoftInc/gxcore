//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file pj_gxlib.h
* @date 2017-11-06
* @brief File containing PJ GX C API constant and function declarations
*/

/**
* @defgroup PJ_Module PJ
* The PJ object is created from two IPJ objects,
* and is used for converting data in an OASIS database
* or map object from one map coordinate (projection)
* system to another.
* @{
*/

#pragma once
#ifndef HPJ_H_DEFINED
#define HPJ_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name PJ_ELEVATION Definitions
* 
* Elevation correction method
*/
///@{
/** 
* PJ_ELEVATION_NONE
* 
* Elevation transform not supported.
*/
#define PJ_ELEVATION_NONE 0
/** 
* PJ_ELEVATION_GEOCENTRIC
* 
* elevation transformation uses earth-centre shift
* and is not accurate.
*/
#define PJ_ELEVATION_GEOCENTRIC 1
/** 
* PJ_ELEVATION_GEOID
* 
* elevation transformation uses a geoid model
* and is as accurate as the geoid data.
*/
#define PJ_ELEVATION_GEOID 2
///@}

/**
* @name PJ_RECT Definitions
* 
* Conversion direction
*/
///@{
/** 
* PJ_RECT_XY2LL
*/
#define PJ_RECT_XY2LL 0
/** 
* PJ_RECT_LL2XY
*/
#define PJ_RECT_LL2XY 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a clip polygon from a projected area.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  max_dev TODO
* @param[in]  pply TODO
**
* @par Note 
*      A rectangular area from (MinX, MinY) to (MaxX, MaxY)
*      is projected throught the PJ. The resulting (non-rectangular)
*      area is then digitized along its edges, then thinned to
*      remove near-collinear points. The thinning is done to any
*      point whose neighbors subtend an angle greater than
*      (180 degrees - maximum deviation).  (i.e. if max. dev = 0,
*      only co-linear points would be removed).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClipPLY_PJ(void* p_geo, const int32_t* pj, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const double* max_dev, const int32_t* pply);

/**
* Convert VVx/VVy from input projection to output projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      This function is equivalent to Project_VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ConvertVV_PJ(void* p_geo, const int32_t* pj, const int32_t* vv_x, const int32_t* vv_y);

/**
* Convert VVx/VVy/VVz projections
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      This function is equivalent to Project3D_VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ConvertVV3_PJ(void* p_geo, const int32_t* pj, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Convert X, Y from input projection to output projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ConvertXY_PJ(void* p_geo, const int32_t* pj, double* x, double* y);

/**
* Convert X, Y from input projection to output projection, taking Z into account
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[in]  z TODO
**
* @par Note 
*      This function is used (for instance) when projecting voxel model locations
*      where the user expects that the vertical position will not change. The
*      regular ConvertXYZ_PJ may result in shifts of hundreds, even a thousand
*      meters in case where you are going from the geoid to an ellipsoid.
*      The value of Z can have an important effect on the accuracy of the results, as
*      the normal ConvertXY_PJ assumes a value of Z=0 internally and calls
*      ConvertXYZ_PJ.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void ConvertXYFromXYZ_PJ(void* p_geo, const int32_t* pj, double* x, double* y, const double* z);

/**
* Convert X,Y,Z from input projection to output projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void ConvertXYZ_PJ(void* p_geo, const int32_t* pj, double* x, double* y, double* z);

/**
* This method creates a projection object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input TODO
* @param[in]  output TODO
* @return PJ Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_PJ(void* p_geo, const char* input, const char* output);

/**
* This method creates a projection object from IPJs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip_jin TODO
* @param[in]  ip_jout TODO
* @return PJ Object
**
* @par Note 
*      If converting to/from long/lat in the natural coordinate
*      system of the source/target, only the long/lat system
*      can be passed as (IPJ)0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateIPJ_PJ(void* p_geo, const int32_t* ip_jin, const int32_t* ip_jout);

/**
* Create a rectified PJ from lon,lat,rotation
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lon TODO
* @param[in]  lat TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  rot TODO
* @param[in]  scl TODO
* @param[in]  dir TODO
* @return PJ Object
**
* @par Note 
*      Given an X,Y coordinate system, the lat/lon origin and
*      angle of the coordinate system, this will create a PJ
*      to convert between X,Y coordinates and Lon,Lat.
*      The Lon/Lat is determined using a Transverse Mercator
*      projection with central meridian through the center
*      of the coordinates on a WGS 84 datum.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateRectified_PJ(void* p_geo, const double* lon, const double* lat, const double* x, const double* y, const double* rot, const double* scl, const int32_t* dir);

/**
* This method destroys a projection object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_PJ(void* p_geo, const int32_t* pj);

/**
* Get elevation correction method
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @return PJ_ELEVATION
**
* @par Note 
*      To determine the model in use, refer to the datum_trf column in the
*      user\csv\datumtrf.csv file.  The datum and geoid model are named in
*      the sqare brackets following the transform name as follows:
*      
*      name [datum_model:geoid]
*      
*      The datum_model is the name of the datum transformation model which will
*      be in a file with extension .ll2 in the \etc directory.  The geoid is the
*      name of the geoid model which will be in a grid file with extension .grd
*      in the \etc directory.  If the geoid model is missing, this method will
*      return PJ_ELEVATION_NONE and elevation coordinates will not be changed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT int32_t iElevation_PJ(void* p_geo, const int32_t* pj);

/**
* Is the input projection a lat/long.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @return 1 - Yes
* 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iIsInputLL_PJ(void* p_geo, const int32_t* pj);

/**
* Is the output projection a lat/long.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @return 1 - Yes
* 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iIsOutputLL_PJ(void* p_geo, const int32_t* pj);

/**
* Project a bounding rectangle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      A rectangular area from (dMinX, dMinY) to (dMaxX, dMaxY)
*      is projected throught the PJ. The resulting region area is
*      then digitized along its edges and a new bounding rectangle
*      is computed.  If there is a lot of curve through the
*      projection the resulting bounding region may be slightly
*      smaller than the true region.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.4
*/
GX_EXPORT void ProjectBoundingRectangle_PJ(void* p_geo, const int32_t* pj, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Project a bounding rectangle with error tolerance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[in]  err TODO
**
* @par Note 
*      This is the same as ProjectBoundingRectangle_PJ except that the bounding
*      rectangle will be limited to an area within which the projection can be
*      performed to an accuracy better than the specified error tolerance.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT void ProjectBoundingRectangle2_PJ(void* p_geo, const int32_t* pj, double* min_x, double* min_y, double* max_x, double* max_y, const double* err);

/**
* Project a bounding rectangle with resolution.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] res TODO
**
* @par Note 
*      This function behaves just like ProjBoundingRectangle_PJ
*      except that it also computes an approximate resolution
*      at the reprojected coordinate system from a given original
*      resolution.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void ProjectBoundingRectangleRes_PJ(void* p_geo, const int32_t* pj, double* min_x, double* min_y, double* max_x, double* max_y, double* res);

/**
* Project a bounding rectangle with resolution and error tolerance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] res TODO
* @param[in]  err TODO
**
* @par Note 
*      This is the same as ProjectBoundingRectangleRes_PJ except that the bounding
*      rectangle will be limited to an area within which the projection can be
*      performed to an accuracy better than the specified error tolerance.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT void ProjectBoundingRectangleRes2_PJ(void* p_geo, const int32_t* pj, double* min_x, double* min_y, double* max_x, double* max_y, double* res, const double* err);

/**
* Project a bounding rectangle with limits.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[in]  min_xl TODO
* @param[in]  min_yl TODO
* @param[in]  max_xl TODO
* @param[in]  max_yl TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      The bounding rectangle will be limited to no larger
*      than the area specified in the output projection.  This
*      is useful when projecting from limits that are unreasonable
*      in the target projection.
*
* @par See also 
*      ProjectBoundingRectangle_PJ.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void ProjectLimitedBoundingRectangle_PJ(void* p_geo, const int32_t* pj, const double* min_xl, const double* min_yl, const double* max_xl, const double* max_yl, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Setup the PJ with LDT check.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
**
* @par Note 
*      By default, a PJ on the same datum will not apply a LDT,
*      is intended for transformations between datums.  However,
*      in some instances you might want to convert between LDTs on
*      the same datum, such as when you have two sets of coordinates
*      that you KNOW came from WGS84 and were placed on this datum
*      using differnt LDT's.  If you want to combine such coordinate
*      systems, one or the other should be converted to the other's
*      LDT.  Note that a more logical way to do this would be to
*      convert both sets back to their original WGS84 coordinates
*      and combine in WGS84.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetupLDT_PJ(void* p_geo, const int32_t* pj);

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
