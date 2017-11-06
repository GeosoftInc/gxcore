//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ipj_gxlib.h
* @date 2017-11-06
* @brief File containing IPJ GX C API constant and function declarations
*/

/**
* @defgroup IPJ_Module IPJ
* The IPJ class describes a single spatial reference in the world,
* defined under a coordinate system, an orientation,
* and a warp (which can be used to distort the projected object
* to a particular shape or boundary).
*
* Notes:
*
* IPJ objects may be attached to channels or views. Two IPJs taken
* together are used to create a PJ object, which allows for the
* conversion of positions from one projection to the other.
* See also the LL2 class, which creates Datum correction lookups.
* 
* See also          PJ    Converts coordinates between projections
* LL2   Creates Datum correction lookups.
*
* @{
*/

#pragma once
#ifndef HIPJ_H_DEFINED
#define HIPJ_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name IPJ_3D_FLAG Definitions
* 
* 3D Flags
*/
///@{
/** 
* IPJ_3D_FLAG_NONE
* 
* Standard
*/
#define IPJ_3D_FLAG_NONE 0
/** 
* IPJ_3D_FLAG_INVERTANGLES
* 
* Invert angle rotation during matrix creation
*/
#define IPJ_3D_FLAG_INVERTANGLES 1
/** 
* IPJ_3D_FLAG_INVERTZ
* 
* Invert the Z plane to make up down.
*/
#define IPJ_3D_FLAG_INVERTZ 2
/** 
* IPJ_3D_FLAG_ORDER_ROTATION
* 
* Apply rotations in a specific order, determined by pdParm[7]
*/
#define IPJ_3D_FLAG_ORDER_ROTATION 4
///@}

/**
* @name IPJ_3D_ROTATE Definitions
* 
* 3D Rotation Mode
*/
///@{
/** 
* IPJ_3D_ROTATE_DEFAULT
*/
#define IPJ_3D_ROTATE_DEFAULT 0
/** 
* IPJ_3D_ROTATE_XYZ
*/
#define IPJ_3D_ROTATE_XYZ 1
/** 
* IPJ_3D_ROTATE_XZY
*/
#define IPJ_3D_ROTATE_XZY 2
/** 
* IPJ_3D_ROTATE_YXZ
*/
#define IPJ_3D_ROTATE_YXZ 3
/** 
* IPJ_3D_ROTATE_YZX
*/
#define IPJ_3D_ROTATE_YZX 4
/** 
* IPJ_3D_ROTATE_ZXY
*/
#define IPJ_3D_ROTATE_ZXY 5
/** 
* IPJ_3D_ROTATE_ZYX
*/
#define IPJ_3D_ROTATE_ZYX 6
///@}

/**
* @name IPJ_CSP Definitions
* 
* Projection Setting
*/
///@{
/** 
* IPJ_CSP_SCALE
*/
#define IPJ_CSP_SCALE 0
/** 
* IPJ_CSP_FALSEEAST
*/
#define IPJ_CSP_FALSEEAST 1
/** 
* IPJ_CSP_FALSENORTH
*/
#define IPJ_CSP_FALSENORTH 2
/** 
* IPJ_CSP_LATORIGIN
*/
#define IPJ_CSP_LATORIGIN 3
/** 
* IPJ_CSP_LONORIGIN
*/
#define IPJ_CSP_LONORIGIN 4
/** 
* IPJ_CSP_PARALLEL_1
*/
#define IPJ_CSP_PARALLEL_1 5
/** 
* IPJ_CSP_PARALLEL_2
*/
#define IPJ_CSP_PARALLEL_2 6
/** 
* IPJ_CSP_AZIMUTH
*/
#define IPJ_CSP_AZIMUTH 7
/** 
* IPJ_CSP_ANGLE
*/
#define IPJ_CSP_ANGLE 8
/** 
* IPJ_CSP_POINTLAT_1
*/
#define IPJ_CSP_POINTLAT_1 9
/** 
* IPJ_CSP_POINTLON_1
*/
#define IPJ_CSP_POINTLON_1 10
/** 
* IPJ_CSP_POINTLAT_2
*/
#define IPJ_CSP_POINTLAT_2 11
/** 
* IPJ_CSP_POINTLON_2
*/
#define IPJ_CSP_POINTLON_2 12
///@}

/**
* @name IPJ_NAME Definitions
* 
* Project Name
*/
///@{
/** 
* IPJ_NAME_PCS
* 
* Projected coordinate system name
*/
#define IPJ_NAME_PCS 0
/** 
* IPJ_NAME_PROJECTION
* 
* Projection name
*/
#define IPJ_NAME_PROJECTION 1
/** 
* IPJ_NAME_METHOD
* 
* Projection method name
*/
#define IPJ_NAME_METHOD 2
/** 
* IPJ_NAME_DATUM
* 
* Datum name
*/
#define IPJ_NAME_DATUM 3
/** 
* IPJ_NAME_ELLIPSOID
* 
* Ellipsoid name
*/
#define IPJ_NAME_ELLIPSOID 4
/** 
* IPJ_NAME_LDATUM
* 
* Local datum name
*/
#define IPJ_NAME_LDATUM 5
/** 
* IPJ_NAME_UNIT_ABBR
* 
* Unit abbreviation
*/
#define IPJ_NAME_UNIT_ABBR 6
/** 
* IPJ_NAME_UNIT_FULL
* 
* Full unit name
*/
#define IPJ_NAME_UNIT_FULL 7
/** 
* IPJ_NAME_TYPE
* 
* Projection type description
*/
#define IPJ_NAME_TYPE 8
/** 
* IPJ_NAME_LLDATUM
* 
* Datum transform table name
*/
#define IPJ_NAME_LLDATUM 9
/** 
* IPJ_NAME_METHOD_PARMS
* 
* Projection method parameters in GXF order
*/
#define IPJ_NAME_METHOD_PARMS 10
/** 
* IPJ_NAME_METHOD_LABEL
* 
* Projection method parameters labels
*/
#define IPJ_NAME_METHOD_LABEL 11
/** 
* IPJ_NAME_DATUM_PARMS
* 
* Datum parameters (major axis, flattening, prime meridian)
*/
#define IPJ_NAME_DATUM_PARMS 12
/** 
* IPJ_NAME_LDATUM_PARMS
* 
* local datum parameters (dX,dY,dZ,rX,rY,rZ,scale)
* See GXF revision 3 for parameter list order and
* specifications.
*/
#define IPJ_NAME_LDATUM_PARMS 13
/** 
* IPJ_NAME_GEOID
* 
* Geoid name if known
*/
#define IPJ_NAME_GEOID 14
/** 
* IPJ_NAME_LDATUMDESCRIPTION
* 
* Local datum description
*/
#define IPJ_NAME_LDATUMDESCRIPTION 15
/** 
* IPJ_NAME_METHOD_PARMS_NATIVE
* 
* Projection method parameters in GXF order (Native units for eastings/northings)
*/
#define IPJ_NAME_METHOD_PARMS_NATIVE 16
/** 
* IPJ_NAME_ORIENTATION_PARMS
* 
* Orientation parameters
*/
#define IPJ_NAME_ORIENTATION_PARMS 17
///@}

/**
* @name IPJ_ORIENT Definitions
* 
* Projection Orientation
*/
///@{
/** 
* IPJ_ORIENT_DEFAULT
* 
* no special orientation - plan view. All views in maps
* created before v5.1.3 will return this value.
*/
#define IPJ_ORIENT_DEFAULT 0
/** 
* IPJ_ORIENT_PLAN
* 
* A plan view with a reference elevation and
* optional rotation.
*/
#define IPJ_ORIENT_PLAN 1
/** 
* IPJ_ORIENT_SECTION
* 
* Has an azimuth and swing.
* The section view projects all plotted objects
* HORIZONTALLY onto the viewing plan in order to
* preserve elevations, even if the section has a swing.
*/
#define IPJ_ORIENT_SECTION 2
/** 
* IPJ_ORIENT_SECTION_NORMAL
* 
* Same as IPJ_ORIENT_SECTION, but the projection is perpendicular
* to the section, not horizonatl, so elevatins are not preserved
* on swung sections.
*/
#define IPJ_ORIENT_SECTION_NORMAL 5
/** 
* IPJ_ORIENT_DEPTH_SECTION
* 
* This simple section has no azimuth or swing defined;
* only the depth is of importance, and it is output as
* the Y parameter, increasing downward. Used (for instance)
* for strip logs in Wholeplot.
*/
#define IPJ_ORIENT_DEPTH_SECTION 3
/** 
* IPJ_ORIENT_3D
* 
* A 3D rotation/scaling/translation orientation
*/
#define IPJ_ORIENT_3D 4
/** 
* IPJ_ORIENT_3D_MATRIX
* 
* A 3D matrix orientation
*/
#define IPJ_ORIENT_3D_MATRIX 7
/** 
* IPJ_ORIENT_SECTION_CROOKED
* 
* This is a vertical section that follows a
* curving path, like a river or survey traverse.
* The horizontal section location is the distance along
* the path, while the vertical axis gives the elevation.
*/
#define IPJ_ORIENT_SECTION_CROOKED 6
///@}

/**
* @name IPJ_PARM_LST Definitions
* 
* Projection List
*/
///@{
/** 
* IPJ_PARM_LST_COORDINATESYSTEM
*/
#define IPJ_PARM_LST_COORDINATESYSTEM 0
/** 
* IPJ_PARM_LST_DATUM
*/
#define IPJ_PARM_LST_DATUM 1
/** 
* IPJ_PARM_LST_PROJECTION
*/
#define IPJ_PARM_LST_PROJECTION 2
/** 
* IPJ_PARM_LST_UNITS
*/
#define IPJ_PARM_LST_UNITS 3
/** 
* IPJ_PARM_LST_LOCALDATUMDESCRIPTION
*/
#define IPJ_PARM_LST_LOCALDATUMDESCRIPTION 4
/** 
* IPJ_PARM_LST_LOCALDATUMNAME
*/
#define IPJ_PARM_LST_LOCALDATUMNAME 5
/** 
* IPJ_PARM_LST_UNITSDESCRIPTION
*/
#define IPJ_PARM_LST_UNITSDESCRIPTION 6
///@}

/**
* @name IPJ_TYPE Definitions
* 
* IPJ Types
*/
///@{
/** 
* IPJ_TYPE_PRJ
* 
* Read from a PRJ file:
* string 1 - Source file name
* string 2 and 3 are not used.
*/
#define IPJ_TYPE_PRJ 0
/** 
* IPJ_TYPE_PCS
* 
* Projected coordinate system:
* string 1 - POSC PCS name
* string 2 - POSC Datum transform name
* string 3 - not used.
*/
#define IPJ_TYPE_PCS 1
/** 
* IPJ_TYPE_GCS
* 
* Geographic coordinate system:
* string 1 - POSC Datum name
* string 2 - POSC Datum transform name
* string 3 - not used.
*/
#define IPJ_TYPE_GCS 2
/** 
* IPJ_TYPE_ANY
* 
* Custom projection
* string 1 - POSC Datum name
* string 2 - POSC Datum transform name
* string 3 - POSC Transform, "" if geographic
*/
#define IPJ_TYPE_ANY 3
/** 
* IPJ_TYPE_NONE
* 
* Not used for Read_IPJ.  This is used for
* iSourceType_IPJ to indicate no projection.
*/
#define IPJ_TYPE_NONE 4
/** 
* IPJ_TYPE_WRP
*/
#define IPJ_TYPE_WRP 5
/** 
* IPJ_TYPE_TEST
* 
* tests the projection tables for internal consistency
* and creates report files in the project directory.
* string 1 - outout report file name
* string 2 - ESRI coordinate strings file.  This contains one
* ESRI coordinate string per line.  Lines that
* start with '#' are skipped.
* string 3 - not currently used
*/
#define IPJ_TYPE_TEST 6
///@}

/**
* @name IPJ_UNIT Definitions
* 
* Projection Unit Type
*/
///@{
/** 
* IPJ_UNIT_ABBREVIATION
*/
#define IPJ_UNIT_ABBREVIATION 0
/** 
* IPJ_UNIT_FULLNAME
*/
#define IPJ_UNIT_FULLNAME 1
///@}

/**
* @name IPJ_WARP Definitions
* 
* Warp (Transformation) type
*/
///@{
/** 
* IPJ_WARP_MATRIX
* 
* Matrix Warp
*/
#define IPJ_WARP_MATRIX -1
/** 
* IPJ_WARP_NONE
* 
* No warp
*/
#define IPJ_WARP_NONE 0
/** 
* IPJ_WARP_TRANS1
* 
* Translate only (needs 1 point)
*/
#define IPJ_WARP_TRANS1 1
/** 
* IPJ_WARP_TRANS2
* 
* Translate, rotate, normal scale (needs 2 pts)
*/
#define IPJ_WARP_TRANS2 2
/** 
* IPJ_WARP_TRANS3
* 
* Translate, rotate, scale X and Y (needs 3 pts or more, least-square fit)
*/
#define IPJ_WARP_TRANS3 3
/** 
* IPJ_WARP_QUAD
* 
* Quadrilateral warp (needs 4 points)
*/
#define IPJ_WARP_QUAD 4
/** 
* IPJ_WARP_MULTIPOINT
* 
* Multipoint warp (needs at least 3 points)
*/
#define IPJ_WARP_MULTIPOINT 5
/** 
* IPJ_WARP_LOG
* 
* Convert from linear to log coords in X and/or Y
*/
#define IPJ_WARP_LOG 6
/** 
* IPJ_WARP_MULTIPOINT_Y
* 
* Multipoint warp in Y only (needs at least 3 points)
*/
#define IPJ_WARP_MULTIPOINT_Y 7
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Clear warp parameters (if any) from an IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _ClearWarp_IPJ(void* p_geo, const int32_t* ipj);

/**
* Remove a projected coordinate system from an IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
**
* @par Note 
*      This function does nothing if the IPJ is not a projected coordinate system.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void _MakeGeographic_IPJ(void* p_geo, const int32_t* ipj);

/**
* Make a WGS 84 geographic projection
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void _MakeWGS84_IPJ(void* p_geo, const int32_t* ipj);

/**
* Set unit parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  scale TODO
* @param[in]  str_val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetUnits_IPJ(void* p_geo, const int32_t* ipj, const double* scale, const char* str_val);

/**
* Add a warp to IPJ to exaggerate X, Y and Z.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x_exag TODO
* @param[in]  y_exag TODO
* @param[in]  z_exag TODO
* @param[in]  x_orig TODO
* @param[in]  y_orig TODO
* @param[in]  z_orig TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddExaggWarp_IPJ(void* p_geo, const int32_t* ipj, const double* x_exag, const double* y_exag, const double* z_exag, const double* x_orig, const double* y_orig, const double* z_orig);

/**
* Add a warp to IPJ to log one or both coordinantes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x TODO
* @param[in]  y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void AddLogWarp_IPJ(void* p_geo, const int32_t* ipj, const int32_t* x, const int32_t* y);

/**
* Add a warp to IPJ using a matrix
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  v00 TODO
* @param[in]  v01 TODO
* @param[in]  v02 TODO
* @param[in]  v03 TODO
* @param[in]  v10 TODO
* @param[in]  v11 TODO
* @param[in]  v12 TODO
* @param[in]  v13 TODO
* @param[in]  v20 TODO
* @param[in]  v21 TODO
* @param[in]  v22 TODO
* @param[in]  v23 TODO
* @param[in]  v30 TODO
* @param[in]  v31 TODO
* @param[in]  v32 TODO
* @param[in]  v33 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void AddMatrixWarp_IPJ(void* p_geo, const int32_t* ipj, const double* v00, const double* v01, const double* v02, const double* v03, const double* v10, const double* v11, const double* v12, const double* v13, const double* v20, const double* v21, const double* v22, const double* v23, const double* v30, const double* v31, const double* v32, const double* v33);

/**
* Add a warp to IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  type TODO
* @param[in]  vv_x_old TODO
* @param[in]  vv_y_old TODO
* @param[in]  vv_x_new TODO
* @param[in]  vv_y_new TODO
**
* @par Note 
*      There must be at least "warp type" points in the
*      warp point VV's.
*      All point VV's must have the same number of points.
*      If there are more points than required by the warp,
*      the warp will be determined by least-square fitting
*      to the warp surface for all but the 4-point warp.
*      The 4-point ward requires exactly 4 points.
*      
*      Cannot be used with WARP_MATRIX or WARP_LOG
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddWarp_IPJ(void* p_geo, const int32_t* ipj, const int32_t* type, const int32_t* vv_x_old, const int32_t* vv_y_old, const int32_t* vv_x_new, const int32_t* vv_y_new);

/**
* Clear coordinate sytsem, except for units
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
**
* @par Note 
*      Clears the Datum, Local Datum and Projection info.
*      Leaves units, any warp or orientation warp unchanged.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void ClearCoordinateSystem_IPJ(void* p_geo, const int32_t* ipj);

/**
* Clear an orientation warp from an IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void ClearOrientation_IPJ(void* p_geo, const int32_t* ipj);

/**
* Convert X,Y and Z VVs using the orientation warp from an IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  f_forward TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void ConvertOrientationWarpVV_IPJ(void* p_geo, const int32_t* ipj, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* f_forward);

/**
* Copy IPJs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip_js TODO
* @param[in]  ip_jd TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_IPJ(void* p_geo, const int32_t* ip_js, const int32_t* ip_jd);

/**
* Copy the projection from one IPJ to another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip_js TODO
* @param[in]  ip_jd TODO
**
* @par Note 
*      Copies the projection parameters, while leaving the rest
*      (e.g. Datum, Local Datum Transform) unchanged.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void CopyProjection_IPJ(void* p_geo, const int32_t* ip_js, const int32_t* ip_jd);

/**
* This method creates a projection object.
*
* @param[in]  p_geo GX Context Pointer
* @return IPJ Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_IPJ(void* p_geo);

/**
* Create IPJ from serialized source.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return IPJ Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateS_IPJ(void* p_geo, const int32_t* bf);

/**
* Create an IPJ from serialized Geosoft MetaData XML file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return IPJ Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t CreateXML_IPJ(void* p_geo, const char* file);

/**
* This method destroys a projection object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_IPJ(void* p_geo, const int32_t* ipj);

/**
* Get 3D orientation parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] rx TODO
* @param[out] ry TODO
* @param[out] rz TODO
* @param[out] sx TODO
* @param[out] sy TODO
* @param[out] str_val TODO
**
* @par Note 
*      The view must have a 3D orientation
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Get3DView_IPJ(void* p_geo, const int32_t* ipj, double* x, double* y, double* z, double* rx, double* ry, double* rz, double* sx, double* sy, double* str_val);

/**
* Get 3D orientation parameters with new flags
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] rx TODO
* @param[out] ry TODO
* @param[out] rz TODO
* @param[out] sx TODO
* @param[out] sy TODO
* @param[out] str_val TODO
* @param[out] rotate TODO
* @param[out] flags TODO
**
* @par Note 
*      The view must have a 3D orientation
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void Get3DViewEx_IPJ(void* p_geo, const int32_t* ipj, double* x, double* y, double* z, double* rx, double* ry, double* rz, double* sx, double* sy, double* str_val, int32_t* rotate, int32_t* flags);

/**
* Get the crooked section path.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  dist_vv TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[out] log_z TODO
**
* @par Note 
*      Returns the orignal VVs used to set up the crooked section path.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void GetCrookedSectionViewVVs_IPJ(void* p_geo, const int32_t* ipj, const int32_t* dist_vv, const int32_t* xvv, const int32_t* yvv, int32_t* log_z);

/**
* Get a list of parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  parm TODO
* @param[in]  datum TODO
* @param[in]  lst TODO
**
* @par Note 
*      The datum filter string, if specified, will limit the requested
*      list to those valid for the spacified datum.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetList_IPJ(void* p_geo, const int32_t* parm, const char* datum, const int32_t* lst);

/**
* Get IPJ orientation parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] az TODO
* @param[out] swing TODO
**
* @par Note 
*      IPJ_ORIENT_TYPE:
*      IPJ_ORIENT_DEFAULT - no special orientation - plan view.
*      This is equivalent to IPJ_ORIENT_PLAN with
*      dXo = dYo = dZo = dRotation = 0.0.
*      
*      IPJ_ORIENT_PLAN      Azimuth = Rotation CCW degrees
*      The plan differs from the default view in that
*      a reference level is set, and the axes can be
*      rotated and offset from the local X,Y.
*      
*      IPJ_ORIENT_SECTION   Azimuth - CW degrees from North
*      -360 <= azimuth <= 360
*      Swing - degrees bottom towards viewer
*      -90 < swing < 90
*      The section view projects all plotted objects
*      HORIZONTALLY onto the viewing plan in order to
*      preserve elevations, even if the section has a swing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void GetOrientationInfo_IPJ(void* p_geo, const int32_t* ipj, double* x, double* y, double* z, double* az, double* swing);

/**
* Get the equation of a plane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[out] pitch TODO
* @param[out] yaw TODO
* @param[out] roll TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] sx TODO
* @param[out] sy TODO
* @param[out] str_val TODO
**
* @par Note 
*      Two opposite corners of the plane are required.
*      Because the origin of the plane does not necessarily
*      have a stable back-projection into true 3d coordinates.
*      In practice, use the current view extents, or the corners
*      of a grid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void GetPlaneEquation_IPJ(void* p_geo, const int32_t* ipj, const double* min_x, const double* min_y, const double* max_x, const double* max_y, double* pitch, double* yaw, double* roll, double* x, double* y, double* z, double* sx, double* sy, double* str_val);

/**
* Get the equation of a plane with reprojection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip_ji TODO
* @param[in]  ip_jo TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[out] pitch TODO
* @param[out] yaw TODO
* @param[out] roll TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] sx TODO
* @param[out] sy TODO
* @param[out] str_val TODO
**
* @par Note 
*      This is the same as GetPlaneEquation_IPJ, but the
*      input projected coordinate system (PCS) may
*      be different from that of the IPJ you want the
*      plane equation values described in. This may be
*      required, for instance, when a 3D view has been created
*      in one PCS, and an oriented grid from a different PCS is
*      to be displayed in that view.
*      
*      If the two input IPJs share the same PCS then the GetPlaneEquation_IPJ
*      function is called directly, using the input IPJ.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4.1
*/
GX_EXPORT void GetPlaneEquation2_IPJ(void* p_geo, const int32_t* ip_ji, const int32_t* ip_jo, const double* min_x, const double* min_y, const double* max_x, const double* max_y, double* pitch, double* yaw, double* roll, double* x, double* y, double* z, double* sx, double* sy, double* str_val);

/**
* Compare the datums of two coordinate systems?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj1 TODO
* @param[in]  ipj2 TODO
* @return 0 - Datums are different
* 1 - Datums are the same, but different LDT
* 2 - Datums and LTD are the same
**
* @par Note 
*      To transform between different datums requires the use of a local
*      datum transform.  The local datum transform can be defined when
*      a coordinate system is created, but the definition is optional.
*      This function will test that the local datum transforms are defined.
*      Note that a coordinate transformation between datums without a
*      local datum transform is still possible, but only the effect of
*      ellipsoid shape will be modelled in the transform.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t iCompareDatums_IPJ(void* p_geo, const int32_t* ipj1, const int32_t* ipj2);

/**
* Converts a point X, Y, Z to the new IPJ plane.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[in]  f_forward TODO
* @return 0 if ok - 1 otherwise
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iConvertWarp_IPJ(void* p_geo, const int32_t* ipj, double* x, double* y, double* z, const int32_t* f_forward);

/**
* Converts a set of X & Y VVs to the new IPJ plane. The Z is assumed to be 0
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  f_forward TODO
* @return 0 if ok - 1 otherwise
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iConvertWarpVV_IPJ(void* p_geo, const int32_t* ipj, const int32_t* vv_x, const int32_t* vv_y, const int32_t* f_forward);

/**
* Are these two coordinate systems the same?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj1 TODO
* @param[in]  ipj2 TODO
* @return 0 - No
* 1 - Yes
**
* @par Note 
*      This does not compare LDT information (use iCompareDatums_IPJ for that).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iCoordinateSystemsAreTheSame_IPJ(void* p_geo, const int32_t* ipj1, const int32_t* ipj2);

/**
* Same as iCoordinateSystemsAreTheSame_IPJ, but allows for small numerical differences
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj1 TODO
* @param[in]  ipj2 TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iCoordinateSystemsAreTheSameWithinASmallTolerance_IPJ(void* p_geo, const int32_t* ipj1, const int32_t* ipj2);

/**
* Get a name for display purposes from IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] str_val TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void IGetDisplayName_IPJ(void* p_geo, const int32_t* ipj, char* str_val, const int32_t* length);

/**
* Store coordinate system in an ESRI prj coordinate string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] esri TODO
* @param[in]  length TODO
**
* @par Note 
*      If the projection is not supported in ESRI, the projection
*      string will be empty.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void IGetESRI_IPJ(void* p_geo, const int32_t* ipj, char* esri, const int32_t* length);

/**
* Store coordinate system in GXF style strings.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] str1 TODO
* @param[out] str2 TODO
* @param[out] str3 TODO
* @param[out] str4 TODO
* @param[out] str5 TODO
* @param[in]  length TODO
**
* @par Note 
*      See GXF revision 3 for string descriptions
*      All strings must be the same length, 160 (STR_GXF) recommended.
*      Strings too short will be truncated.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetGXF_IPJ(void* p_geo, const int32_t* ipj, char* str1, char* str2, char* str3, char* str4, char* str5, const int32_t* length);

/**
* Store coordinate system in MapInfo coordsys pair
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] coord TODO
* @param[in]  len_coord TODO
* @param[out] units TODO
* @param[in]  len_units TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetMICoordSys_IPJ(void* p_geo, const int32_t* ipj, char* coord, const int32_t* len_coord, char* units, const int32_t* len_units);

/**
* Get an IPJ name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  type TODO
* @param[out] str_val TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetName_IPJ(void* p_geo, const int32_t* ipj, const int32_t* type, char* str_val, const int32_t* length);

/**
* Set the Vertical Coordinate System in the IPJ name string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  str_val TODO
* @return Nothing
**
* @par Note 
*      The vertical coordinate system (vcs) describes the datum used for vertical coordinates. The vcs name, if
*      known, will appear in square brackets as part of the coordinate system name.
*      
*      Examples:
*      
*      ::
*      
*          "WGS 84 [geoid]"
*          "WGS 84 / UTM zone 12S" - the vcs is not known.
*          "WGS 84 / UTM zone 12S [NAVD88]"
*      
*      Valid inputs:
*      
*           "NAVD88"          - Clears existing vcs, if any, and sets the VCS name to "NAVD88".
*           ""                - Clears the vcs
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT void SetVCS_IPJ(void* p_geo, const int32_t* ipj, const char* str_val);

/**
* Get IPJ orientation in space.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return IPJ_ORIENT
**
* @par Note 
*      Projections can be created oriented horizontally (e.g. in plan maps)
*      or vertically (in section maps - Wholeplot and IP).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.4
*/
GX_EXPORT int32_t iGetOrientation_IPJ(void* p_geo, const int32_t* ipj);

/**
* Get a name for display purposes from IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] str_val TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void IGetOrientationName_IPJ(void* p_geo, const int32_t* ipj, char* str_val, const int32_t* length);

/**
* Get unit parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] scale TODO
* @param[out] str_val TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetUnits_IPJ(void* p_geo, const int32_t* ipj, double* scale, char* str_val, const int32_t* length);

/**
* Get an Geosoft Metadata XML string from an IPJ
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] str_val TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetXML_IPJ(void* p_geo, const int32_t* ipj, char* str_val, const int32_t* size);

/**
* Does the IPJ object contain a projection?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iHasProjection_IPJ(void* p_geo, const int32_t* ipj);

/**
* Is this 3D View inverted ?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return 0 - No
* 1 - Yes (inverted)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3.1
*/
GX_EXPORT int32_t iIs3DInverted_IPJ(void* p_geo, const int32_t* ipj);

/**
* Are the angles in this 3D View inverted ?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return 0 - No
* 1 - Yes (inverted)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3.1
*/
GX_EXPORT int32_t iIs3DInvertedAngles_IPJ(void* p_geo, const int32_t* ipj);

/**
* See if this projection is geographic
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iIsGeographic_IPJ(void* p_geo, const int32_t* ipj);

/**
* Are these two orientations the same?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj1 TODO
* @param[in]  ipj2 TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iOrientationsAreTheSame_IPJ(void* p_geo, const int32_t* ipj1, const int32_t* ipj2);

/**
* Same as iOrientationsAreTheSame_IPJ, but allows for small numerical differences
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj1 TODO
* @param[in]  ipj2 TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iOrientationsAreTheSameWithinASmallTolerance_IPJ(void* p_geo, const int32_t* ipj1, const int32_t* ipj2);

/**
* Does this projection contain an orientation used by section plots?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return 0 - No
* 1 - Yes
**
* @par Note 
*      Returns     1 if there is a section orientation
*      
*      The following orientations can be used to orient sections or section views:
*      
*      IPJ_ORIENT_SECTION - Target-type sections with Z projection horizontally
*      IPJ_ORIENT_SECTION_NORMAL - Like IPJ_ORIENT_SECTION, but Z projects
*      perpendicular to the secton plane.
*      IPJ_ORIENT_SECTION_CROOKED - Crooked sections
*      IPJ_ORIENT_3D - Some Sections extracted from a voxel - e.g. VoxelToGrids,
*      as the voxel can have any orientation in 3D.
*      
*      It is sometimes important to ignore the section orientation, for instance
*      when rendering a grid in 3D where it has been located on a plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.3
*/
GX_EXPORT int32_t iHasSectionOrientation_IPJ(void* p_geo, const int32_t* ipj);

/**
* Is the projection type fully supported?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return 0 - No
* 1 - Yes
**
* @par Note 
*      This function checks only the projected coordinated system
*      in the IPJ object, so should only be used with projections
*      of type IPJ_TYPE_PCS.
*      This function does not test the validity of datums or local
*      datum transforms.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iProjectionTypeIsFullySupported_IPJ(void* p_geo, const int32_t* ipj);

/**
* Same as SetGXF_IPJ, but fails gracefully.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  str1 TODO
* @param[in]  str2 TODO
* @param[in]  str3 TODO
* @param[in]  str4 TODO
* @param[in]  str5 TODO
* @return 0 - error in setting IPJ, input IPJ unchanged.
* 1 - success: IPJ set using input values.
**
* @par Note 
*      SetGXF_IPJ will fail and terminate the GX if anything goes wrong (e.g. having a wrong
*      parameter). If this function fails, it simply returns 0 and leaves the
*      IPJ unchanged.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iSetGXF_IPJ(void* p_geo, const int32_t* ipj, const char* str1, const char* str2, const char* str3, const char* str4, const char* str5);

/**
* Get IPJ source type
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return IPJ_TYPE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iSourceType_IPJ(void* p_geo, const int32_t* ipj);

/**
* Can we transform between these two datums?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj1 TODO
* @param[in]  ipj2 TODO
* @return 0 - No
* 1 - Yes, either because both CS are on the same datum,
* or because a local datum transform is defined
* for each coordinate system.
**
* @par Note 
*      To transform between different datums requires the use of a local
*      datum transform.  The local datum transform can be defined when
*      a coordinate system is created, but the definition is optional.
*      This function will test that the local datum transforms are defined.
*      Note that a coordinate transformation between datums without a
*      local datum transform is still possible, but only the effect of
*      ellipsoid shape will be modelled in the transform.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT int32_t iSupportDatumTransform_IPJ(void* p_geo, const int32_t* ipj1, const int32_t* ipj2);

/**
* Get a unit name given a scale factor
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  val TODO
* @param[in]  type TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IUnitName_IPJ(void* p_geo, const double* val, const int32_t* type, char* name, const int32_t* length);

/**
* Does IPJ contain a warp?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iWarped_IPJ(void* p_geo, const int32_t* ipj);

/**
* Are these two warps the same?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj1 TODO
* @param[in]  ipj2 TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iWarpsAreTheSame_IPJ(void* p_geo, const int32_t* ipj1, const int32_t* ipj2);

/**
* Same as iWarpsAreTheSame_IPJ, but allows for small numerical differences
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj1 TODO
* @param[in]  ipj2 TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iWarpsAreTheSameWithinASmallTolerance_IPJ(void* p_geo, const int32_t* ipj1, const int32_t* ipj2);

/**
* Obtain the warp type of an IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @return IPJ_WARP
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iWarpType_IPJ(void* p_geo, const int32_t* ipj);

/**
* Create a default projected coordinate system from lat-long ranges.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  min_lon TODO
* @param[in]  min_lat TODO
* @param[in]  max_lon TODO
* @param[in]  max_lat TODO
**
* @par Note 
*      Terminates with invalid or unsupported ranges.
*      If the map crosses the equator, or if map is within 20 degrees of the
*      equator, uses an equatorial mercator projection centered at the central
*      longitude. Otherwise, uses a Lambert Conic Conformal (1SP) projection
*      for the map. Global maps outside of +/- 70 degrees latitude are not
*      supported.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void MakeProjected_IPJ(void* p_geo, const int32_t* ipj, const double* min_lon, const double* min_lat, const double* max_lon, const double* max_lat);

/**
* Determine a data resolution in a new coordinate system
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ip_ji TODO
* @param[in]  ip_jo TODO
* @param[in]  res TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[out] min_res TODO
* @param[out] max_res TODO
* @param[out] diag_res TODO
**
* @par Note 
*      if there are any problems reprojecting, new resolutions will
*      dummy.  The conversion to new resolution is based on measurements
*      along the four edges and two diagonals.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void NewBoxResolution_IPJ(void* p_geo, const int32_t* ip_ji, const int32_t* ip_jo, const double* res, const double* min_x, const double* min_y, const double* max_x, const double* max_y, double* min_res, double* max_res, double* diag_res);

/**
* Read and define an IPJ from a standard file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  type TODO
* @param[in]  str1 TODO
* @param[in]  str2 TODO
* @param[in]  str3 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Read_IPJ(void* p_geo, const int32_t* ipj, const int32_t* type, const char* str1, const char* str2, const char* str3);

/**
* Get projection method parameter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  parm TODO
* @return Parameter setting, rDUMMY if dot used
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetMethodParm_IPJ(void* p_geo, const int32_t* ipj, const int32_t* parm);

/**
* Return the azimuth of geographic North at a point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @return Azimuth (degrees CW) of geographic north from grid north at a location.
**
* @par Note 
*      If the IPJ is not a projected coordinate system
*      then the returned azimuth is GS_R8DM;
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT double rGetNorthAzimuth_IPJ(void* p_geo, const int32_t* ipj, const double* x, const double* y);

/**
* Get a unit scale (m/unit) given a name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  default TODO
* @return Scale factor m/unit
**
* @par Note 
*      If name cannot be found, returns default.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rUnitScale_IPJ(void* p_geo, const char* name, const double* default);

/**
* Serialize IPJ to a BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Serial_IPJ(void* p_geo, const int32_t* ipj, const int32_t* bf);

/**
* Write the IPJ as a FDGC MetaData XML object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SerialFGDCXML_IPJ(void* p_geo, const int32_t* ipj, const char* file);

/**
* Write the IPJ as a ISO MetaData XML object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SerialISOXML_IPJ(void* p_geo, const int32_t* ipj, const char* file);

/**
* Write the IPJ as a Geosoft MetaData XML object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SerialXML_IPJ(void* p_geo, const int32_t* ipj, const char* file);

/**
* Set whether a view is inverted (must be 3D already)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  inverted TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3.1
*/
GX_EXPORT void Set3DInverted_IPJ(void* p_geo, const int32_t* ipj, const int32_t* inverted);

/**
* Set whether the angles in this view are inverted (must be 3D already)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  inverted TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3.1
*/
GX_EXPORT void Set3DInvertedAngles_IPJ(void* p_geo, const int32_t* ipj, const int32_t* inverted);

/**
* Set 3D orientation parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  rx TODO
* @param[in]  ry TODO
* @param[in]  rz TODO
* @param[in]  sx TODO
* @param[in]  sy TODO
* @param[in]  str_val TODO
**
* @par Note 
*      Sets up translation, scaling and rotation in all three directions
*      for 3D objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Set3DView_IPJ(void* p_geo, const int32_t* ipj, const double* x, const double* y, const double* z, const double* rx, const double* ry, const double* rz, const double* sx, const double* sy, const double* str_val);

/**
* Set 3D orientation parameters with new flags
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  rx TODO
* @param[in]  ry TODO
* @param[in]  rz TODO
* @param[in]  sx TODO
* @param[in]  sy TODO
* @param[in]  str_val TODO
* @param[in]  rotate TODO
* @param[in]  flags TODO
**
* @par Note 
*      Sets up translation, scaling and rotation in all three directions
*      for 3D objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void Set3DViewEx_IPJ(void* p_geo, const int32_t* ipj, const double* x, const double* y, const double* z, const double* rx, const double* ry, const double* rz, const double* sx, const double* sy, const double* str_val, const int32_t* rotate, const int32_t* flags);

/**
* Set 3D orientation parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  x1 TODO
* @param[in]  x2 TODO
* @param[in]  x3 TODO
* @param[in]  y1 TODO
* @param[in]  y2 TODO
* @param[in]  y3 TODO
* @param[in]  sx TODO
* @param[in]  sy TODO
* @param[in]  str_val TODO
**
* @par Note 
*      Sets up translation, scaling and rotation in all three directions
*      for 3D objects, based on input origin and X and Y axis vectors.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void Set3DViewFromAxes_IPJ(void* p_geo, const int32_t* ipj, const double* x, const double* y, const double* z, const double* x1, const double* x2, const double* x3, const double* y1, const double* y2, const double* y3, const double* sx, const double* sy, const double* str_val);

/**
* Set up the crooked section view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  dist_vv TODO
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  log_z TODO
**
* @par Note 
*      A non-plane section. It is a vertical section which curves along a path in
*      (X, Y).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void SetCrookedSectionView_IPJ(void* p_geo, const int32_t* ipj, const int32_t* dist_vv, const int32_t* xvv, const int32_t* yvv, const int32_t* log_z);

/**
* Set depth section orientation parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  depth TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetDepthSectionView_IPJ(void* p_geo, const int32_t* ipj, const double* depth);

/**
* Set coordinate system from an ESRI prj coordinate string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  esri TODO
**
* @par Note 
*      If the projection is not supported in Geosoft, the
*      IPJ will be unknown.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void SetESRI_IPJ(void* p_geo, const int32_t* ipj, const char* esri);

/**
* Set coordinate system from GXF style strings.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  str1 TODO
* @param[in]  str2 TODO
* @param[in]  str3 TODO
* @param[in]  str4 TODO
* @param[in]  str5 TODO
**
* @par Note 
*      Simplest Usage:
*      
*      The coordinate system can be resolved from the "coordinate system name"
*      if the name is specified using an EPSG number or naming convention such as:
*      
*      "datum / projection"  (example: "Arc 1960 / UTM zone 37S")
*      
*      Where:
*      "datum" is the EPSG datum name (eg. NAD83).  All supported datums are
*      listed in ...usercsvdatum.csv.
*      "projection" is the EPSG coordinate system map projection.
*      datum name (eg. "UTM zone 10N").  All supported coordinate
*      system projections are listed in ...user/csv/transform.csv.
*      All EPSG known combined coordinate systems of the earth are
*      listed in ...user/csv/ipj_pcs.csv.
*      
*      To define a geographic (longitude, latitude) oordinate system, specify
*      the datum name alone (ie "Arc 1960").  EPSG numbers can also be used, so in
*      the example above the name can be "21037".
*      
*      The coordinate system may also be oriented arbitrarily in 3D relative to
*      the base coordinate system by specifying the orientation as a set of
*      6 comma-separated values between angled brackets after the coordinate 
*      system name, e.g:
*      
*      ::
*      
*           "datum / projection"<oX,oY,oZ,rX,rY,rZ>
*           21037<oX,oY,oZ,rX,rY,rZ>
*      
*      where:
*      
*      oX,oY,oZ    is the location of the local origin on the CS
*      
*      rX,rY,rZ    are rotations in degrees azimuth (clockwise) of
*                  the local axis frame around the X, Y and Z axis
*                  respectively.  A simple plane rotation will only have
*                  a rotation around Z.  
*      
*      For example:
*      
*      ::
*      
*           "Arc 1960 / UTM zone 37S"<525000,2500000,0,0,0,15>
*      
*      defines a local system with origin at (525000,2500000)
*      with a rotation of 15 degrees azimuth.
*      
*      Orientation parameters not defined will default to align with the
*      base CS,  Note that although allowed, it does not make sense to have
*      an orientation on a geographic coordinate system (long,lat).
*      
*      Complete usage:
*      
*      A coordinate system can also be fully described by providing an additional
*      four strings that define the datum, map projection, length units and
*      prefered local datum transform.  Refer to GXF revision 3 for further detail:
*      http://www.geosoft.com/resources/goto/GXF-Grid-eXchange-File
*      
*      Note that coordinate system reference tables sre maintained in csv files
*      located in the .../user/csv folder found with the Geosoft installation files,
*      which will usually be located here:
*      C:\Program Files (x86)\Geosoft\Oasis montaj\user\csv
*      
*      The "datum" string can use a datum name defined in the "datum.csv" file,
*      or the local datum name from datumtrf.csv, or the local datum description
*      from ldatum.csv.
*      For a non-EPSG datum, you can define your own datum parameters in the
*      Datum stringfield as follows:
*      
*      ::
*      
*           "*YourDatumName",major_axis,flattening(or eccentricity)[,prime_meridian]
*      
*      where
*      The * before "YourDatumName" indicates this is a non-EPSG name.
*      major_axis is in metres.
*      flattening less than 0 is interpreted as eccentricity (0 indicates a sphere).
*      prime_meridian is optional, specified in degrees of longitude relative to
*      Greenwich.
*      
*      The "Projection" can contain a projection system defined in the
*      "transform.csv" file, or the name of a projection type followed by projection
*      parameters.  Geographic coordinates systems (long/lat only) must leave
*      "projection" blank.
*      
*      Projection names not defined in "transform.csv" can be defined in the
*      "projection" string as follows:
*      
*      ::
*      
*           method,length_units,P1,P2,...
*      
*      where:
*      
*          method
*               is a method from the table "transform_parameters.csv".
*      
*          length_units
*               is a "Unit_length" from units.csv.
*               P1 through P8 (or fewer) are the projection parameters for the method
*               as defined in "transform_parameters.csv", and in the order defined.
*               Parameters that are blank in "transform_parameters.csv" are omitted
*               from the list so that each method will have a minimum list of
*               parameters.
*      
*      Angular parameters must always be degrees, and may be defined a
*      decimal degree fromat, or "DEG.MM.SS.ssss".
*      Distance parameters (False Northing and False Easting) must be
*      defined in the "length_units" (string 4).
*      
*      Examples:
*      
*      ::
*      
*          Geographic long,lat on datum "Arc 1960":
*          "4210","","","",""
*          "Arc 1960","","","",""
*          "","Arc 1960","","",""
*      
*          Projected Coordinate System, UTM zone 37S
*          "21037","","","",""
*          "","4210","16137","",""
*          ""Arc 1960 / UTM zone 37S"","","","",""
*          "",""Arc 1960"","UTM zone 37S","",""
*          "",""Arc 1960"","UTM zone 37S","m",""
*          "",""Arc 1960"","UTM zone 37S","m,1.0",""
*          "",""Arc 1960"","UTM zone 37S","m,1.0","");
*          "",""Arc 1960"","UTM zone 37S","m","Arc 1960 to WGS 84 (1)"
*      
*          Locally oriented coordinate system (origin at 525000,2500000, rotated 15 deg):
*          "21037<525000,2500000,0,0,0,15>","","","",""
*          "<525000,2500000,0,0,0,15>","4210","16137","",""
*          ""Arc 1960 / UTM zone 37S"<525000,2500000,0,0,0,15>","","","",""
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetGXF_IPJ(void* p_geo, const int32_t* ipj, const char* str1, const char* str2, const char* str3, const char* str4, const char* str5);

/**
* Set projection method parameter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  parm TODO
* @param[in]  parm_value TODO
**
* @par Note 
*      If parameter is not valid, nothing happens.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetMethodParm_IPJ(void* p_geo, const int32_t* ipj, const int32_t* parm, const double* parm_value);

/**
* Set coordinate system from a MapInfo coordsys command
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  coord TODO
* @param[in]  units TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.4
*/
GX_EXPORT void SetMICoordSys_IPJ(void* p_geo, const int32_t* ipj, const char* coord, const char* units);

/**
* Set normal section orientation parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  azimuth TODO
* @param[in]  swing TODO
**
* @par Note 
*      This section is the type where values are projected
*      normal to the section, and the "Y" values in a grid
*      do not necessarily correspond to the elvations for a swung section.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetNormalSectionView_IPJ(void* p_geo, const int32_t* ipj, const double* x, const double* y, const double* z, const double* azimuth, const double* swing);

/**
* Set plan orientation parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  rot TODO
**
* @par Note 
*      This sets up the orientation of an IPJ for plan view plots,
*      for instance in Wholeplot. These differ from regular plan
*      map views in that the elevation of the view plane is set, and
*      the view may be rotated. In addition, when viewed in a map,
*      a view with this IPJ will give a status bar location (X, Y, Z)
*      of the actual location in space, as opposed to just the X, Y of
*      the view plane itself.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetPlanView_IPJ(void* p_geo, const int32_t* ipj, const double* x, const double* y, const double* z, const double* rot);

/**
* Set section orientation parameters
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  azimuth TODO
* @param[in]  swing TODO
**
* @par Note 
*      This sets up the orientation of an IPJ for section view plots,
*      for instance in Wholeplot. In addition, when viewed in a map,
*      a view with this IPJ will give a status bar location (X, Y, Z)
*      of the actual location in space, as opposed to just the X, Y of
*      the view plane itself.
*      Swung sections are tricky because they are set up for section
*      plots in such a way that the vertical axis remains "true"; points
*      are projected horizontally to the viewing plane, independent of the
*      swing angle. In other words, all locations in 3D space viewed using this
*      projection will plot on the same horizontal line in the map view.
*      This function is NOT suitable for simply creating
*      an orientation for a dipping grid or view.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetSectionView_IPJ(void* p_geo, const int32_t* ipj, const double* x, const double* y, const double* z, const double* azimuth, const double* swing);

/**
* Set coordinate system from a WMS coordsys string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  coord TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
**
* @par Note 
*      WMS coordinate strings supported:
*      
*      
*      EPSG:code
*      
*      where "code" is the EPSG code number
*      "EPSG:4326"  is geographic "WGS 84" (see datum.csv)
*      "EPSG:25834" is projected "ETRS89 / UTM zone 34N"
*      (see ipj_pcs.csv)
*      
*      The bounding box for EPSG systems must be defined in the
*      EPSG coordinate system.  If a bounding box is provided,
*      it will not be changed.
*      
*      
*      AUTO:wm_id,epsg_units,lon,lat (see OGC documentation)
*      
*      for "AUTO" coordinates, the "epsg_units" is the units
*      of the bounding box.  This procedure will transform
*      the supplied bounding box from these units to the
*      units of the projection.  Normally, this is from
*      long/lat (9102) to metres (9001).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void SetWMSCoordSys_IPJ(void* p_geo, const int32_t* ipj, const char* coord, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Set an IPJ from a Geosoft Metadata XML string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  str_val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetXML_IPJ(void* p_geo, const int32_t* ipj, const char* str_val);

/**
* Gets the coefficients of a 3D matrix orientation.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[out] v00 TODO
* @param[out] v01 TODO
* @param[out] v02 TODO
* @param[out] v03 TODO
* @param[out] v10 TODO
* @param[out] v11 TODO
* @param[out] v12 TODO
* @param[out] v13 TODO
* @param[out] v20 TODO
* @param[out] v21 TODO
* @param[out] v22 TODO
* @param[out] v23 TODO
* @param[out] v30 TODO
* @param[out] v31 TODO
* @param[out] v32 TODO
* @param[out] v33 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void Get3DMatrixOrientation_IPJ(void* p_geo, const int32_t* ipj, double* v00, double* v01, double* v02, double* v03, double* v10, double* v11, double* v12, double* v13, double* v20, double* v21, double* v22, double* v23, double* v30, double* v31, double* v32, double* v33);

/**
* Apply a 3D orientation directly using matrix coefficients.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  v00 TODO
* @param[in]  v01 TODO
* @param[in]  v02 TODO
* @param[in]  v03 TODO
* @param[in]  v10 TODO
* @param[in]  v11 TODO
* @param[in]  v12 TODO
* @param[in]  v13 TODO
* @param[in]  v20 TODO
* @param[in]  v21 TODO
* @param[in]  v22 TODO
* @param[in]  v23 TODO
* @param[in]  v30 TODO
* @param[in]  v31 TODO
* @param[in]  v32 TODO
* @param[in]  v33 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void Set3DMatrixOrientation_IPJ(void* p_geo, const int32_t* ipj, const double* v00, const double* v01, const double* v02, const double* v03, const double* v10, const double* v11, const double* v12, const double* v13, const double* v20, const double* v21, const double* v22, const double* v23, const double* v30, const double* v31, const double* v32, const double* v33);

/**
* Reproject a section grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input_ipj TODO
* @param[in]  output_ipj TODO
* @param[out] x0 TODO
* @param[out] y0 TODO
* @param[out] dx TODO
* @param[out] dy TODO
* @param[out] rot TODO
**
* @par Note 
*      Reproject a section grid to a new IPJ, adjusting its orientation and registration so that
*      it remains in the same location.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void ReprojectSectionGrid_IPJ(void* p_geo, const int32_t* input_ipj, const int32_t* output_ipj, double* x0, double* y0, double* dx, double* dy, double* rot);

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
