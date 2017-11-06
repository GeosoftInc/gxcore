//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file shp_gxlib.h
* @date 2017-11-06
* @brief File containing SHP GX C API constant and function declarations
*/

/**
* @defgroup SHP_Module SHP
* The SHP class is used to create ESRI shape files.
*
* Notes:
*
* Shape files contain a single "geometry" type, e.g.
* points, arcs or polygons. They may be accompanied by
* a DBF file containing attribute data.
*
* @{
*/

#pragma once
#ifndef HSHP_H_DEFINED
#define HSHP_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name SHP_GEOM_TYPE Definitions
* 
* Shape file geometry types
*/
///@{
/** 
* SHP_GEOM_TYPE_POINT
* 
* Single (X, Y) point
*/
#define SHP_GEOM_TYPE_POINT 1
/** 
* SHP_GEOM_TYPE_ARC
* 
* Arc (polyline) multiple (X, Y) points.
*/
#define SHP_GEOM_TYPE_ARC 3
/** 
* SHP_GEOM_TYPE_POLYGON
* 
* Polygon. Multiple (X, Y) points.
*/
#define SHP_GEOM_TYPE_POLYGON 5
/** 
* SHP_GEOM_TYPE_POINTZ
* 
* Single (X, Y, Z) point
*/
#define SHP_GEOM_TYPE_POINTZ 11
/** 
* SHP_GEOM_TYPE_ARCZ
* 
* Arc (polyline) multiple (X, Y, Z) points.
*/
#define SHP_GEOM_TYPE_ARCZ 13
/** 
* SHP_GEOM_TYPE_POLYGONZ
* 
* Polygon. Multiple (X, Y, Z) points.
*/
#define SHP_GEOM_TYPE_POLYGONZ 15
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Append the current item and data to an old SHP object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
**
* @par Note 
*      The currently stored SHP item and data are written to the
*      SHP geometry and data files. (If no data fields have been
*      defined, then the data file is not written).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void AppendItem_SHP(void* p_geo, const int32_t* shp);

/**
* Create a new SHP object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  type TODO
* @return SHP object
**
* @par Note 
*      The file name is used to create the various files. The
*      file type and extension are added:
*      
*      e.g. "filename.shp",
*           "filename.dbf"
*      
*      The following geometry types are currently supported:
*      
*      Type                    Required geometry function.
*      
*      SHP_GEOM_TYPE_POINT     SetPoint_SHP
*      SHP_GEOM_TYPE_ARC       SetArc_SHP
*      SHP_GEOM_TYPE_POLYGON   SetPolygon_SHP
*      
*      SHP_GEOM_TYPE_POINTZ    SetPointZ_SHP
*      SHP_GEOM_TYPE_ARCZ      SetArcZ_SHP
*      SHP_GEOM_TYPE_POLYGONZ  SetPolygonZ_SHP
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t Create_SHP(void* p_geo, const char* name, const int32_t* type);

/**
* Destroy SHP object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Destroy_SHP(void* p_geo, const int32_t* shp);

/**
* Add an INT type data field to a shape file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  field TODO
* @return Index of the new field
**
* @par Note 
*      The returned field index should be used with the SetXXX_SHP
*      functions to set individual data values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iAddIntField_SHP(void* p_geo, const int32_t* shp, const char* field);

/**
* Add a REAL type data field to a shape file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  field TODO
* @param[in]  dec TODO
* @return Index of the new field
**
* @par Note 
*      The returned field index should be used with the SetXXX_SHP
*      functions to set individual data values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iAddRealField_SHP(void* p_geo, const int32_t* shp, const char* field, const int32_t* dec);

/**
* Add a string type data field to a shape file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  field TODO
* @param[in]  width TODO
* @return Index of the new field
**
* @par Note 
*      The returned field index should be used with the SetXXX_SHP
*      functions to set individual data values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iAddStringField_SHP(void* p_geo, const int32_t* shp, const char* field, const int32_t* width);

/**
* Find the index for a data field.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  field TODO
* @return The index, -1 if not found.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iFindField_SHP(void* p_geo, const int32_t* shp, const char* field);

/**
* Get the max ID number.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @return The max ID number.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iMaxIDNum_SHP(void* p_geo, const int32_t* shp);

/**
* Get the field number.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @return The field number.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iNumFields_SHP(void* p_geo, const int32_t* shp);

/**
* Get the record number.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @return The record number.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iNumRecords_SHP(void* p_geo, const int32_t* shp);

/**
* Get the SHP object's geometry type.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @return The SHP object's geometry type (SHP_GEOM_TYPE)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iType_SHP(void* p_geo, const int32_t* shp);

/**
* Open an old SHP object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return SHP object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t Open_SHP(void* p_geo, const char* name);

/**
* Write an XY arc (polyline) item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      Can ONLY be used for SHP_GEOM_TYPE_ARC files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetArc_SHP(void* p_geo, const int32_t* shp, const int32_t* vv_x, const int32_t* vv_y);

/**
* Write an XYZ arc (polyline) item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Can ONLY be used for SHP_GEOM_TYPE_ARCZ files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetArcZ_SHP(void* p_geo, const int32_t* shp, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Set a data value to a int.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  index TODO
* @param[in]  val TODO
**
* @par Note 
*      The input value is converted to the field's data type.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetInt_SHP(void* p_geo, const int32_t* shp, const int32_t* index, const int32_t* val);

/**
* Set a SHP object's projection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  ipj TODO
**
* @par Note 
*      If the SHP object has a projection, and it
*      is not IPJ_TYPE_NONE, then it will be output
*      to a file with the .prj extension when the
*      first object is output.
*      This function should be called BEFORE the first
*      object is written.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetIPJ_SHP(void* p_geo, const int32_t* shp, const int32_t* ipj);

/**
* Write an XY point item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  x TODO
* @param[in]  y TODO
**
* @par Note 
*      Can ONLY be used for SHP_GEOM_TYPE_POINT files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetPoint_SHP(void* p_geo, const int32_t* shp, const double* x, const double* y);

/**
* Write an XYZ point item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
**
* @par Note 
*      Can ONLY be used for SHP_GEOM_TYPE_POINTZ files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetPointZ_SHP(void* p_geo, const int32_t* shp, const double* x, const double* y, const double* z);

/**
* Write an XY polygon item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  inclusive TODO
**
* @par Note 
*      Can ONLY be used for SHP_GEOM_TYPE_POLYGON files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetPolygon_SHP(void* p_geo, const int32_t* shp, const int32_t* vv_x, const int32_t* vv_y, const int32_t* inclusive);

/**
* Write an XYZ polygon item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  inclusive TODO
**
* @par Note 
*      Can ONLY be used for SHP_GEOM_TYPE_POLYGONZ files.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetPolygonZ_SHP(void* p_geo, const int32_t* shp, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* inclusive);

/**
* Set a data value to a real.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  index TODO
* @param[in]  val TODO
**
* @par Note 
*      The input value is converted to the field's data type.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetReal_SHP(void* p_geo, const int32_t* shp, const int32_t* index, const double* val);

/**
* Set a data value to a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
* @param[in]  index TODO
* @param[in]  str_val TODO
**
* @par Note 
*      The input string is converted to the field's data type.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetString_SHP(void* p_geo, const int32_t* shp, const int32_t* index, const char* str_val);

/**
* Output the current item and data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  shp TODO
**
* @par Note 
*      The currently stored SHP item and data are written to the
*      SHP geometry and data files. (If no data fields have been
*      defined, then the data file is not written).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void WriteItem_SHP(void* p_geo, const int32_t* shp);

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
