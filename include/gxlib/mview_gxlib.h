//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file mview_gxlib.h
* @date 2017-11-06
* @brief File containing MVIEW GX C API constant and function declarations
*/

/**
* @defgroup MVIEW_Module MVIEW
* A view (MVIEW class) has a 2-D/3-D translation matrix, a map
* projection and a clip region.  A view contains any number of
* "groups", and each "group" contains one or more graphics
* elements (entities).  Different types of groups will contain
* different types of entities:
*
* Notes:
*
* CSYMB groups (color symbols) contain data and rules for
* presenting the data as color symbols.  See ColSymbol_MVIEW
* and the CSYMB class.
* 
* AGG groups (aggregates) contain images.  See Aggregate_MVIEW
* and the AGG class.
* 
* Standard groups contain symbols, lines, polylines, and polygons.
* See StartGroup_MVIEW.
*
* @{
*/

#pragma once
#ifndef HMVIEW_H_DEFINED
#define HMVIEW_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name MAKER Definitions
* 
* Maker defines
*/
///@{
/** 
* MAKER_GX
* 
* GX
*/
#define MAKER_GX 0
///@}

/**
* @name MVIEW_CLIP Definitions
* 
* Boolean clipping defines
*/
///@{
/** 
* CLIP_ON
* 
* Turn ON clipping
*/
#define CLIP_ON 1
/** 
* CLIP_OFF
* 
* Turn OFF clipping
*/
#define CLIP_OFF 0
///@}

/**
* @name MVIEW_COLOR Definitions
* 
* 24-bit color defines
* The iColor_MVIEW function can be used to create a color int from a
* color string description.
* The iColorXXX_MVIEW macros can be used to create colors from component
* intensities.
*/
///@{
/** 
* C_BLACK
* 
* Black
*/
#define C_BLACK 33554432
/** 
* C_RED
* 
* Red
*/
#define C_RED 33554687
/** 
* C_GREEN
* 
* Green
*/
#define C_GREEN 33619712
/** 
* C_BLUE
* 
* Blue
*/
#define C_BLUE 50266112
/** 
* C_CYAN
* 
* Cyan
*/
#define C_CYAN 50331903
/** 
* C_MAGENTA
* 
* Magenta
*/
#define C_MAGENTA 50396928
/** 
* C_YELLOW
* 
* Yellow
*/
#define C_YELLOW 67043328
/** 
* C_GREY
* 
* Grey
*/
#define C_GREY 41975936
/** 
* C_LT_RED
* 
* Light Red
*/
#define C_LT_RED 54542336
/** 
* C_LT_GREEN
* 
* Light Green
*/
#define C_LT_GREEN 54526016
/** 
* C_LT_BLUE
* 
* Light Blue
*/
#define C_LT_BLUE 50348096
/** 
* C_LT_CYAN
* 
* Light Cyan
*/
#define C_LT_CYAN 50331712
/** 
* C_LT_MAGENTA
* 
* Light Magenta
*/
#define C_LT_MAGENTA 50348032
/** 
* C_LT_YELLOW
* 
* Light Yellow
*/
#define C_LT_YELLOW 54525952
/** 
* C_LT_GREY
* 
* Light Grey
*/
#define C_LT_GREY 54542400
/** 
* C_GREY10
* 
* Grey 10%
*/
#define C_GREY10 51910680
/** 
* C_GREY25
* 
* Grey 25%
*/
#define C_GREY25 54542400
/** 
* C_GREY50
* 
* Grey 50%
*/
#define C_GREY50 41975936
/** 
* C_WHITE
* 
* White
*/
#define C_WHITE 50331648
/** 
* C_TRANSPARENT
* 
* Transparent or no-draw
*/
#define C_TRANSPARENT 0
///@}

/**
* @name MVIEW_CYLINDER3D Definitions
* 
* What parts of the cylinder are closed
*/
///@{
/** 
* MVIEW_CYLINDER3D_OPEN
*/
#define MVIEW_CYLINDER3D_OPEN 0
/** 
* MVIEW_CYLINDER3D_CLOSESTART
*/
#define MVIEW_CYLINDER3D_CLOSESTART 1
/** 
* MVIEW_CYLINDER3D_CLOSEEND
*/
#define MVIEW_CYLINDER3D_CLOSEEND 2
/** 
* MVIEW_CYLINDER3D_CLOSEALL
*/
#define MVIEW_CYLINDER3D_CLOSEALL 3
///@}

/**
* @name MVIEW_DRAW Definitions
* 
* Polygon drawing defines
*/
///@{
/** 
* MVIEW_DRAW_POLYLINE
* 
* Draw Polylines
*/
#define MVIEW_DRAW_POLYLINE 0
/** 
* MVIEW_DRAW_POLYGON
* 
* Draw Polygons
*/
#define MVIEW_DRAW_POLYGON 1
///@}

/**
* @name MVIEW_DRAWOBJ3D_ENTITY Definitions
* 
* What types of entities to draw
*/
///@{
/** 
* MVIEW_DRAWOBJ3D_ENTITY_POINTS
* 
* Draw 3D Points (no normals) [1 verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_POINTS 0
/** 
* MVIEW_DRAWOBJ3D_ENTITY_LINES
* 
* Draw 3D Lines (no normals) [2 verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_LINES 1
/** 
* MVIEW_DRAWOBJ3D_ENTITY_LINE_STRIPS
* 
* Draw 3D Line strip (no normals) [2+x verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_LINE_STRIPS 2
/** 
* MVIEW_DRAWOBJ3D_ENTITY_LINE_LOOPS
* 
* Draw 3D Line loop (no normals, closes loop with first point) [2+x verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_LINE_LOOPS 3
/** 
* MVIEW_DRAWOBJ3D_ENTITY_TRIANGLES
* 
* Draw 3D Triangles [3 verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_TRIANGLES 4
/** 
* MVIEW_DRAWOBJ3D_ENTITY_TRIANGLE_STRIPS
* 
* Draw 3D Triangle strips [3+x verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_TRIANGLE_STRIPS 5
/** 
* MVIEW_DRAWOBJ3D_ENTITY_TRIANGLE_FANS
* 
* Draw 3D Triangle fans [3+x verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_TRIANGLE_FANS 6
/** 
* MVIEW_DRAWOBJ3D_ENTITY_QUADS
* 
* Draw 3D Quads (Must be in the same plane) [4 verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_QUADS 7
/** 
* MVIEW_DRAWOBJ3D_ENTITY_QUADS_STRIPS
* 
* Draw 3D Quad Strips (Must be in the same plane) [4+2x verticies per object]
*/
#define MVIEW_DRAWOBJ3D_ENTITY_QUADS_STRIPS 8
/** 
* MVIEW_DRAWOBJ3D_ENTITY_POLYGONS
* 
* Draw 3D Quad Polygones (Must be in the same plane, must be convex and cannot intersect itself)
*/
#define MVIEW_DRAWOBJ3D_ENTITY_POLYGONS 9
///@}

/**
* @name MVIEW_DRAWOBJ3D_MODE Definitions
* 
* What types of entities to draw
*/
///@{
/** 
* MVIEW_DRAWOBJ3D_MODE_FLAT
* 
* Draw flat shaded faces (one normal and color per object)
*/
#define MVIEW_DRAWOBJ3D_MODE_FLAT 0
/** 
* MVIEW_DRAWOBJ3D_MODE_SMOOTH
* 
* Draw smooth shaded faces (one normal and color per vertex)
*/
#define MVIEW_DRAWOBJ3D_MODE_SMOOTH 1
///@}

/**
* @name MVIEW_EXTENT Definitions
* 
* Types of extents defines
*/
///@{
/** 
* MVIEW_EXTENT_ALL
* 
* All objects
*/
#define MVIEW_EXTENT_ALL 0
/** 
* MVIEW_EXTENT_CLIP
* 
* Clipping regions
*/
#define MVIEW_EXTENT_CLIP 1
/** 
* MVIEW_EXTENT_MAP
* 
* Map extents
*/
#define MVIEW_EXTENT_MAP 2
/** 
* MVIEW_EXTENT_VISIBLE
* 
* Visible objects
*/
#define MVIEW_EXTENT_VISIBLE 3
///@}

/**
* @name MVIEW_FIT Definitions
* 
* Fit area defines
*/
///@{
/** 
* MVIEW_FIT_MAP
* 
* Fit it to the map area
*/
#define MVIEW_FIT_MAP 0
/** 
* MVIEW_FIT_VIEW
* 
* Fit it to the view area
*/
#define MVIEW_FIT_VIEW 1
///@}

/**
* @name MVIEW_FONT_WEIGHT Definitions
* 
* Font weight defines
*/
///@{
/** 
* MVIEW_FONT_WEIGHT_NORMAL
*/
#define MVIEW_FONT_WEIGHT_NORMAL 0
/** 
* MVIEW_FONT_WEIGHT_ULTRALIGHT
*/
#define MVIEW_FONT_WEIGHT_ULTRALIGHT 1
/** 
* MVIEW_FONT_WEIGHT_LIGHT
*/
#define MVIEW_FONT_WEIGHT_LIGHT 2
/** 
* MVIEW_FONT_WEIGHT_MEDIUM
*/
#define MVIEW_FONT_WEIGHT_MEDIUM 3
/** 
* MVIEW_FONT_WEIGHT_BOLD
*/
#define MVIEW_FONT_WEIGHT_BOLD 4
/** 
* MVIEW_FONT_WEIGHT_XBOLD
*/
#define MVIEW_FONT_WEIGHT_XBOLD 5
/** 
* MVIEW_FONT_WEIGHT_XXBOLD
*/
#define MVIEW_FONT_WEIGHT_XXBOLD 6
///@}

/**
* @name MVIEW_GRID Definitions
* 
* Grid Drawing defines
*/
///@{
/** 
* MVIEW_GRID_DOT
*/
#define MVIEW_GRID_DOT 0
/** 
* MVIEW_GRID_LINE
*/
#define MVIEW_GRID_LINE 1
/** 
* MVIEW_GRID_CROSS
*/
#define MVIEW_GRID_CROSS 2
///@}

/**
* @name MVIEW_GROUP Definitions
* 
* Open Group defines
*/
///@{
/** 
* MVIEW_GROUP_NEW
* 
* New Group (destroy any existing group)
*/
#define MVIEW_GROUP_NEW 1
/** 
* MVIEW_GROUP_APPEND
* 
* Append to an existing Group
*/
#define MVIEW_GROUP_APPEND 0
///@}

/**
* @name MVIEW_GROUP_LIST Definitions
* 
* What groups to list
*/
///@{
/** 
* MVIEW_GROUP_LIST_ALL
* 
* All the groups.
*/
#define MVIEW_GROUP_LIST_ALL 0
/** 
* MVIEW_GROUP_LIST_MARKED
* 
* Those groups marked using the various mark functions.
*/
#define MVIEW_GROUP_LIST_MARKED 1
/** 
* MVIEW_GROUP_LIST_VISIBLE
* 
* Those groups checked as visible in the view/group manager.
*/
#define MVIEW_GROUP_LIST_VISIBLE 2
///@}

/**
* @name MVIEW_HIDE Definitions
* 
* Boolean hidding defines
*/
///@{
/** 
* HIDE_ON
* 
* Turn ON hidding
*/
#define HIDE_ON 1
/** 
* HIDE_OFF
* 
* Turn OFF hidding
*/
#define HIDE_OFF 0
///@}

/**
* @name MVIEW_IS Definitions
* 
* Defines for mview types
*/
///@{
/** 
* MVIEW_IS_AGG
*/
#define MVIEW_IS_AGG 0
/** 
* MVIEW_IS_MOVABLE
*/
#define MVIEW_IS_MOVABLE 3
/** 
* MVIEW_IS_CSYMB
*/
#define MVIEW_IS_CSYMB 4
/** 
* MVIEW_IS_LINKED
*/
#define MVIEW_IS_LINKED 5
/** 
* MVIEW_IS_MADE
*/
#define MVIEW_IS_MADE 6
/** 
* MVIEW_IS_HIDDEN
*/
#define MVIEW_IS_HIDDEN 7
/** 
* MVIEW_IS_CLIPPED
*/
#define MVIEW_IS_CLIPPED 8
/** 
* MVIEW_IS_META
*/
#define MVIEW_IS_META 9
/** 
* MVIEW_IS_VOXD
*/
#define MVIEW_IS_VOXD 10
/** 
* MVIEW_IS_SHADOW_2D_INTERPRETATION
*/
#define MVIEW_IS_SHADOW_2D_INTERPRETATION 11
/** 
* MVIEW_IS_VECTOR3D
*/
#define MVIEW_IS_VECTOR3D 12
///@}

/**
* @name MVIEW_LABEL_BOUND Definitions
* 
* Label Binding Defines
*/
///@{
/** 
* MVIEW_LABEL_BOUND_NO
* 
* Label Not Bound
*/
#define MVIEW_LABEL_BOUND_NO 0
/** 
* MVIEW_LABEL_BOUND_YES
* 
* Label Bound
*/
#define MVIEW_LABEL_BOUND_YES 1
///@}

/**
* @name MVIEW_LABEL_JUST Definitions
* 
* Label Justification Defines
*/
///@{
/** 
* MVIEW_LABEL_JUST_TOP
*/
#define MVIEW_LABEL_JUST_TOP 0
/** 
* MVIEW_LABEL_JUST_BOTTOM
*/
#define MVIEW_LABEL_JUST_BOTTOM 1
/** 
* MVIEW_LABEL_JUST_LEFT
*/
#define MVIEW_LABEL_JUST_LEFT 2
/** 
* MVIEW_LABEL_JUST_RIGHT
*/
#define MVIEW_LABEL_JUST_RIGHT 3
///@}

/**
* @name MVIEW_LABEL_ORIENT Definitions
* 
* Label Orientation Defines
*/
///@{
/** 
* MVIEW_LABEL_ORIENT_HORIZONTAL
*/
#define MVIEW_LABEL_ORIENT_HORIZONTAL 0
/** 
* MVIEW_LABEL_ORIENT_TOP_RIGHT
*/
#define MVIEW_LABEL_ORIENT_TOP_RIGHT 1
/** 
* MVIEW_LABEL_ORIENT_TOP_LEFT
*/
#define MVIEW_LABEL_ORIENT_TOP_LEFT 2
///@}

/**
* @name MVIEW_NAME_LENGTH Definitions
* 
* Maximum length for view and group names
*/
///@{
/** 
* MVIEW_NAME_LENGTH
* 
* Maximum Length (1040)
*/
#define MVIEW_NAME_LENGTH 1040
///@}

/**
* @name MVIEW_OPEN Definitions
* 
* Open MVIEW define
*/
///@{
/** 
* MVIEW_READ
* 
* Read Only - No changes
*/
#define MVIEW_READ 0
/** 
* MVIEW_WRITENEW
* 
* Create new MVIEW - destroys any existing MVIEW
*/
#define MVIEW_WRITENEW 1
/** 
* MVIEW_WRITEOLD
* 
* Open existing MVIEW for read/write (must exist)
*/
#define MVIEW_WRITEOLD 2
///@}

/**
* @name MVIEW_PJ Definitions
* 
* Projection modes
*/
///@{
/** 
* MVIEW_PJ_OFF
* 
* No reprojection is used and all locations and
* attributes are assumed to be in the view coordinate
* system.
*/
#define MVIEW_PJ_OFF 0
/** 
* MVIEW_PJ_LOCATION
* 
* Only locations will be transformed to the view
* coordinate system.
*/
#define MVIEW_PJ_LOCATION 1
/** 
* MVIEW_PJ_ALL
* 
* Locations and attributes (sizes, thicknesses, angles)
* will be transformed to the view coordinate system.
*/
#define MVIEW_PJ_ALL 2
/** 
* MVIEW_PJ_ON
* 
* Mode before the last MVIEW_PJ_OFF.
*/
#define MVIEW_PJ_ON 3
///@}

/**
* @name MVIEW_RELOCATE Definitions
* 
* Relocation Defines
*/
///@{
/** 
* MVIEW_RELOCATE_FIT
* 
* Will fit the image to fill the specified area
*/
#define MVIEW_RELOCATE_FIT 0
/** 
* MVIEW_RELOCATE_ASPECT
* 
* Will maintain aspect ratio
*/
#define MVIEW_RELOCATE_ASPECT 1
/** 
* MVIEW_RELOCATE_ASPECT_CENTER
* 
* Will maintain aspect ratio and center in specified area
*/
#define MVIEW_RELOCATE_ASPECT_CENTER 2
///@}

/**
* @name MVIEW_SMOOTH Definitions
* 
* Interpolation method to use for drawing line and polygon edges
*/
///@{
/** 
* MVIEW_SMOOTH_NEAREST
* 
* Nearest neighbour
*/
#define MVIEW_SMOOTH_NEAREST 0
/** 
* MVIEW_SMOOTH_CUBIC
* 
* Cubic Spline
*/
#define MVIEW_SMOOTH_CUBIC 1
/** 
* MVIEW_SMOOTH_AKIMA
* 
* Akima
*/
#define MVIEW_SMOOTH_AKIMA 2
///@}

/**
* @name MVIEW_TILE Definitions
* 
* Tiling defines
*/
///@{
/** 
* MVIEW_TILE_RECTANGULAR
*/
#define MVIEW_TILE_RECTANGULAR 0
/** 
* MVIEW_TILE_DIAGONAL
*/
#define MVIEW_TILE_DIAGONAL 1
/** 
* MVIEW_TILE_TRIANGULAR
*/
#define MVIEW_TILE_TRIANGULAR 2
/** 
* MVIEW_TILE_RANDOM
*/
#define MVIEW_TILE_RANDOM 3
///@}

/**
* @name MVIEW_UNIT Definitions
* 
* Coordinate systems defines
*/
///@{
/** 
* MVIEW_UNIT_VIEW
* 
* View coordinates
*/
#define MVIEW_UNIT_VIEW 0
/** 
* MVIEW_UNIT_PLOT
* 
* Plot hi-metric (mm*100) on the map.
*/
#define MVIEW_UNIT_PLOT 1
/** 
* MVIEW_UNIT_MM
* 
* Plot mm on the map.
*/
#define MVIEW_UNIT_MM 2
/** 
* MVIEW_UNIT_VIEW_UNWARPED
* 
* View coordinates without a warp if there is one
*/
#define MVIEW_UNIT_VIEW_UNWARPED 3
///@}

/**
* @name MVIEW_EXTENT_UNIT Definitions
* 
* Types of units for extents (these map to the
* MVIEW_UNIT defines directly)
*/
///@{
/** 
* MVIEW_EXTENT_UNIT_VIEW
* 
* MVIEW_UNIT_VIEW
*/
#define MVIEW_EXTENT_UNIT_VIEW MVIEW_UNIT_VIEW
/** 
* MVIEW_EXTENT_UNIT_PLOT
* 
* MVIEW_UNIT_PLOT
*/
#define MVIEW_EXTENT_UNIT_PLOT MVIEW_UNIT_PLOT
/** 
* MVIEW_EXTENT_UNIT_MM
* 
* MVIEW_UNIT_MM
*/
#define MVIEW_EXTENT_UNIT_MM MVIEW_UNIT_MM
/** 
* MVIEW_EXTENT_UNIT_VIEW_UNWARPED
* 
* MVIEW_UNIT_VIEW_UNWARPED
*/
#define MVIEW_EXTENT_UNIT_VIEW_UNWARPED MVIEW_UNIT_VIEW_UNWARPED
///@}

/**
* @name TEXT_REF Definitions
* 
* Text reference locations
*/
///@{
/** 
* TEXT_REF_BOTTOM_LEFT
*/
#define TEXT_REF_BOTTOM_LEFT 0
/** 
* TEXT_REF_BOTTOM_CENTER
*/
#define TEXT_REF_BOTTOM_CENTER 1
/** 
* TEXT_REF_BOTTOM_RIGHT
*/
#define TEXT_REF_BOTTOM_RIGHT 2
/** 
* TEXT_REF_MIDDLE_LEFT
*/
#define TEXT_REF_MIDDLE_LEFT 3
/** 
* TEXT_REF_MIDDLE_CENTER
*/
#define TEXT_REF_MIDDLE_CENTER 4
/** 
* TEXT_REF_MIDDLE_RIGHT
*/
#define TEXT_REF_MIDDLE_RIGHT 5
/** 
* TEXT_REF_TOP_LEFT
*/
#define TEXT_REF_TOP_LEFT 6
/** 
* TEXT_REF_TOP_CENTER
*/
#define TEXT_REF_TOP_CENTER 7
/** 
* TEXT_REF_TOP_RIGHT
*/
#define TEXT_REF_TOP_RIGHT 8
///@}

/**
* @name MVIEW_3D_RENDER Definitions
* 
* 3D Geometry rendering defines. These flags only affect mixed geometry groups and not the data
* specific groups (e.g. voxels, vector voxels surfaces etc.). Each of those groups 
* has predefined optimum behaviour and any changes to these flags are ignored.
*/
///@{
/** 
* MVIEW_3D_RENDER_BACKFACES
* 
* This flag is enabled if the backfaces of geometry should be rendered
*/
#define MVIEW_3D_RENDER_BACKFACES 1
/** 
* MVIEW_3D_DONT_SCALE_GEOMETRY
* 
* If the exaggeration scales of the 3D view in X, Y and/or Z is set to anything other than 1.0
* any geometric objects (spheres, cubes etc.) for 3D groups with the following flags 
* will render untransformed while only the centers of the objects are changed.
* This ensures the objects appear in the correct place with respect to other data being rendered (and scaled).
*/
#define MVIEW_3D_DONT_SCALE_GEOMETRY 2
///@}


/**
* @name 3D Entity Functions 
*/
///@{

/**
* Draw a 3D box
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  min_z TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  max_z TODO
**
* @par Note 
*      The Fill color is used to color the box.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void Box3D_MVIEW(void* p_geo, const int32_t* mview, const double* min_x, const double* min_y, const double* min_z, const double* max_x, const double* max_y, const double* max_z);

/**
* Generate an XML CRC of a View
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void CRCView_MVIEW(void* p_geo, const int32_t* mview, int32_t* crc, const char* file);

/**
* Generate an XML CRC of a Group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[out] crc TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void CRCViewGroup_MVIEW(void* p_geo, const int32_t* mview, const char* group, int32_t* crc, const char* file);

/**
* Draw a 3D cylinder
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  start_x TODO
* @param[in]  start_y TODO
* @param[in]  start_z TODO
* @param[in]  end_x TODO
* @param[in]  end_y TODO
* @param[in]  end_z TODO
* @param[in]  start_radius TODO
* @param[in]  end_radius TODO
* @param[in]  flags TODO
**
* @par Note 
*      The Fill color is used to color the cylinder.
*      The flags determine if the cylinder is open and what
*      end are closed. Note that you can create cones by
*      specifying a 0 radius for one of the ends.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void Cylinder3D_MVIEW(void* p_geo, const int32_t* mview, const double* start_x, const double* start_y, const double* start_z, const double* end_x, const double* end_y, const double* end_z, const double* start_radius, const double* end_radius, const int32_t* flags);

/**
* Draw a 3D object optimized for rendering
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  type TODO
* @param[in]  mode TODO
* @param[in]  objects TODO
* @param[in]  default_count TODO
* @param[in]  vert_v_vx TODO
* @param[in]  vert_v_vy TODO
* @param[in]  vert_v_vz TODO
* @param[in]  norm_v_vx TODO
* @param[in]  norm_v_vy TODO
* @param[in]  norm_v_vz TODO
* @param[in]  color_vv TODO
* @param[in]  index_vv TODO
* @param[in]  count_vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void DrawObject3D_MVIEW(void* p_geo, const int32_t* mview, const int32_t* type, const int32_t* mode, const int32_t* objects, const int32_t* default_count, const int32_t* vert_v_vx, const int32_t* vert_v_vy, const int32_t* vert_v_vz, const int32_t* norm_v_vx, const int32_t* norm_v_vy, const int32_t* norm_v_vz, const int32_t* color_vv, const int32_t* index_vv, const int32_t* count_vv);

/**
* Draw a 3D object built from triangles
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_name TODO
* @param[in]  vert_v_vx TODO
* @param[in]  vert_v_vy TODO
* @param[in]  vert_v_vz TODO
* @param[in]  norm_v_vx TODO
* @param[in]  norm_v_vy TODO
* @param[in]  norm_v_vz TODO
* @param[in]  color_vv TODO
* @param[in]  color TODO
* @param[in]  tri_vv_pt1 TODO
* @param[in]  tri_vv_pt2 TODO
* @param[in]  tri_vv_pt3 TODO
* @param[in]  ipj TODO
**
* @par Note 
*      Provide one normal per vertex.
*      Triangles are defined by indices into the set of vertices.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void DrawSurface3DEx_MVIEW(void* p_geo, const int32_t* mview, const char* group_name, const int32_t* vert_v_vx, const int32_t* vert_v_vy, const int32_t* vert_v_vz, const int32_t* norm_v_vx, const int32_t* norm_v_vy, const int32_t* norm_v_vz, const int32_t* color_vv, const int32_t* color, const int32_t* tri_vv_pt1, const int32_t* tri_vv_pt2, const int32_t* tri_vv_pt3, const int32_t* ipj);

/**
* Draw a 3D object from a surface file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_name TODO
* @param[in]  surface_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void DrawSurface3DFromFile_MVIEW(void* p_geo, const int32_t* mview, const char* group_name, const char* surface_file);

/**
* Fill a LST with the different font weights.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void FontWeightLST_MVIEW(void* p_geo, const int32_t* lst);

/**
* Get the names of grid files stored in an AGG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  vv TODO
**
* @par Note 
*      The group must be an AGG group. Check this using
*      iIsGroup_MVIEW and MVIEW_IS_AGG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void GetAGGFileNames_MVIEW(void* p_geo, const int32_t* mview, const char* group, const int32_t* vv);

/**
* Retrieves Metadata from a group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[out] meta TODO
* @param[in]  length TODO
* @return META Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t IGetMeta_MVIEW(void* p_geo, const int32_t* mview, const char* group, char* meta, const int32_t* length);

/**
* Compute the bounding rectangle in view units of the text using the current attributes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  text TODO
* @param[out] x_min TODO
* @param[out] y_min TODO
* @param[out] x_max TODO
* @param[out] y_max TODO
**
* @par Note 
*      Area will be 0 if error occurred (does not fail).
*      This will return the bounding rectangle as if the text was placed at 0,0 and adjusted according to
*      the current text alignment and angle set for the view. Also see notes for TextSize_MVIEW.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void MeasureText_MVIEW(void* p_geo, const int32_t* mview, const char* text, double* x_min, double* y_min, double* x_max, double* y_max);

/**
* Draw a 3D point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
**
* @par Note 
*      The Line color and line thickness will affect rendering.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void Point3D_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y, const double* z);

/**
* Draw a 3D polyline.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      Dummies are not allowed in the line.
*      Line Color, Thickness is supported on rendering
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void PolyLine3D_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Re-locate a group in a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  asp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void RelocateGroup_MVIEW(void* p_geo, const int32_t* mview, const char* group, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* asp);

/**
* Update the META in this group with the new meta object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  meta TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetMeta_MVIEW(void* p_geo, const int32_t* mview, const char* group, const int32_t* meta, const char* name);

/**
* Draw a 3D sphere
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  radius TODO
**
* @par Note 
*      The Fill color is used to color the sphere.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void Sphere3D_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y, const double* z, const double* radius);

/**
* Fill the META with group dataset information
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void UpdateMETAfromGroup_MVIEW(void* p_geo, const int32_t* mview, const char* group, const int32_t* meta);

///@}

/**
* @name 3D Plane Functions 
*/
///@{

/**
* Delete a plane in a view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[in]  del_grp TODO
**
* @par Note 
*      If the groups on the plane are not deleted, they will remain in the
*      3D view as "New" groups but will be unassigned to a plane.  The
*      SetAllNewGroupsToPlane  function can be used to assign these groups
*      to a different plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void DeletePlane_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, const int32_t* del_grp);

/**
* Get the Plane Clip Region
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[in]  pply TODO
**
* @par Note 
*      By default it is the View's Clip Region
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetPlaneClipPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, const int32_t* pply);

/**
* Get the equation of a plane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[out] pitch TODO
* @param[out] yaw TODO
* @param[out] roll TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] sx TODO
* @param[out] sy TODO
* @param[out] str_val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void GetPlaneEquation_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, double* pitch, double* yaw, double* roll, double* x, double* y, double* z, double* sx, double* sy, double* str_val);

/**
* Get the View's Plane Equation
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] pitch TODO
* @param[out] yaw TODO
* @param[out] roll TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] sx TODO
* @param[out] sy TODO
* @param[out] str_val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void GetViewPlaneEquation_MVIEW(void* p_geo, const int32_t* mview, double* pitch, double* yaw, double* roll, double* x, double* y, double* z, double* sx, double* sy, double* str_val);

/**
* Create a 3D Plane for 2D Groups
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @return x - Index of plane
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iCreatePlane_MVIEW(void* p_geo, const int32_t* mview, const char* plane);

/**
* Find a plane in a view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @return Plane number, -1 if not found
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iFindPlane_MVIEW(void* p_geo, const int32_t* mview, const char* plane);

/**
* Get the default drawing plane.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] name TODO
* @param[in]  length TODO
**
* @par Note 
*      2D drawing to a 3D View will always be placed on the
*      default drawing plane.  If no default drawing plane
*      has been set, the first valid plane in the view is
*      used as the default drawing plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void IGetDefPlane_MVIEW(void* p_geo, const int32_t* mview, char* name, const int32_t* length);

/**
* Is the view 3D?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return TRUE if view is 3D
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iIsView3D_MVIEW(void* p_geo, const int32_t* mview);

/**
* Is the view a section view?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return TRUE if view is a section view.
**
* @par Note 
*      Section views are recognized because their projection contains one of the following orientations:
*      
*      IPJ_ORIENT_SECTION - Target-type sections with Z projection horizontally
*      IPJ_ORIENT_SECTION_NORMAL - Like IPJ_ORIENT_SECTION, but Z projects
*      perpendicular to the secton plane.
*      IPJ_ORIENT_SECTION_CROOKED - Crooked sections
*      IPJ_ORIENT_3D - Some Sections extracted from a voxel - e.g. VoxelToGrids,
*      as the voxel can have any orientation in 3D.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT int32_t iIsSection_MVIEW(void* p_geo, const int32_t* mview);

/**
* List all groups in a specific plane of a 3D view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[in]  lst TODO
**
* @par Note 
*      The group names are placed in the list names, group
*      numbers are placed in the list values.
*      
*      Groups are added to the end of the LST.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void ListPlaneGroups_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, const int32_t* lst);

/**
* List all planes in a 3D view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lst TODO
**
* @par Note 
*      The plane names are placed in the list names, plane
*      numbers are placed in the list values.
*      
*      Planes are added to the end of the LST.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void ListPlanes_MVIEW(void* p_geo, const int32_t* mview, const int32_t* lst);

/**
* Set all groups to be within one plane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetAllGroupsToPlane_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane);

/**
* Set all groups that are not in any plane to this plane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetAllNewGroupsToPlane_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane);

/**
* Set the default drawing plane.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  name TODO
**
* @par Note 
*      2D drawing to a 3D View will always be placed on the
*      default drawing plane.  If no default drawing plane
*      has been set, the first valid plane in the view is
*      used as the default drawing plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetDefPlane_MVIEW(void* p_geo, const int32_t* mview, const char* name);

/**
* Set a group to a plane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetGroupToPlane_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, const char* group);

/**
* Set the 3DN object for this view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  o3dn TODO
**
* @par Note 
*      To make the view a 2D view, set a 3DN of NULL.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetH3DN_MVIEW(void* p_geo, const int32_t* mview, const int32_t* o3dn);

/**
* Get 3D point of view (values are will be rDUMMY if view for 2D views)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] x TODO
* @param[out] y TODO
* @param[out] z TODO
* @param[out] distance TODO
* @param[out] declination TODO
* @param[out] inclination TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT void Get3DPointOfView_MVIEW(void* p_geo, const int32_t* mview, double* x, double* y, double* z, double* distance, double* declination, double* inclination);

/**
* Set 3D point of view (no effect on 2D views)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  distance TODO
* @param[in]  declination TODO
* @param[in]  inclination TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT void Set3DPointOfView_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y, const double* z, const double* distance, const double* declination, const double* inclination);

/**
* Set the Plane Clip Region
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[in]  pply TODO
**
* @par Note 
*      By default it is the View's Clip Region
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.4
*/
GX_EXPORT void SetPlaneClipPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, const int32_t* pply);

/**
* Set the equation of a plane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[in]  pitch TODO
* @param[in]  yaw TODO
* @param[in]  roll TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  z TODO
* @param[in]  sx TODO
* @param[in]  sy TODO
* @param[in]  str_val TODO
**
* @par Note 
*      For a grid with the "Y" axis giving elevation:
*      use rotations = (-90, 0, 0) for a section with azimuth 90 (E-W)
*      use rotations = (-90, 0, -90) for a section with azimuth 0 (N-S)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetPlaneEquation_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, const double* pitch, const double* yaw, const double* roll, const double* x, const double* y, const double* z, const double* sx, const double* sy, const double* str_val);

/**
* Set the surface image of a plane
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[in]  surface TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetPlaneSurface_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, const char* surface);

/**
* Set the surface information
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  plane TODO
* @param[in]  sample TODO
* @param[in]  base TODO
* @param[in]  scale TODO
* @param[in]  min TODO
* @param[in]  max TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetPlaneSurfInfo_MVIEW(void* p_geo, const int32_t* mview, const int32_t* plane, const int32_t* sample, const double* base, const double* scale, const double* min, const double* max);

///@}

/**
* @name 3D Rendering 2D Functions 
*/
///@{

/**
* Define a 2D drawing plane based on point and normal
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  center_x TODO
* @param[in]  center_y TODO
* @param[in]  center_z TODO
* @param[in]  x_vector_x TODO
* @param[in]  x_vector_y TODO
* @param[in]  x_vector_z TODO
* @param[in]  y_vector_x TODO
* @param[in]  y_vector_y TODO
* @param[in]  y_vector_z TODO
**
* @par Note 
*      2D rendering commands are translated to 3D commands
*      based on the plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DefinePlane3D_MVIEW(void* p_geo, const int32_t* mview, const double* center_x, const double* center_y, const double* center_z, const double* x_vector_x, const double* x_vector_y, const double* x_vector_z, const double* y_vector_x, const double* y_vector_y, const double* y_vector_z);

/**
* Define a 2D drawing plane based on the user's view that
* oriented around the vector.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  center_x TODO
* @param[in]  center_y TODO
* @param[in]  center_z TODO
* @param[in]  dir_point_x TODO
* @param[in]  dir_point_y TODO
* @param[in]  dir_point_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DefineViewerAxis3D_MVIEW(void* p_geo, const int32_t* mview, const double* center_x, const double* center_y, const double* center_z, const double* dir_point_x, const double* dir_point_y, const double* dir_point_z);

/**
* Define a 2D drawing plane based on the user's view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  center_x TODO
* @param[in]  center_y TODO
* @param[in]  center_z TODO
**
* @par Note 
*      The plane is always facing the viewer. Otherwise the
*      this is identical to the previous
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DefineViewerPlane3D_MVIEW(void* p_geo, const int32_t* mview, const double* center_x, const double* center_y, const double* center_z);

///@}

/**
* @name Clipping Functions 
*/
///@{

/**
* Add a polygon to the clip region.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  unit TODO
* @param[in]  exclude TODO
**
* @par Note 
*      The polygon will be added to the current clip region.
*      The VV's cannot have any dummy elements.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _ClipPolyEx_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* unit, const int32_t* exclude);

/**
* Add a rectangle to the clip region.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  unit TODO
* @param[in]  exclude TODO
**
* @par Note 
*      The rectangle will be added to the current clip region.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _ClipRectEx_MVIEW(void* p_geo, const int32_t* mview, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* unit, const int32_t* exclude);

/**
* Remove/clear the view clip region.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClipClear_MVIEW(void* p_geo, const int32_t* mview);

/**
* Set the Clipping mode on/off for all groups.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClipGroups_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mode);

/**
* Set the Clipping mode on/off for marked groups.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClipMarkedGroups_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mode);

/**
* Add a polygon to the clip region.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  unit TODO
**
* @par Note 
*      The polygon will be added to the current clip region.
*      The VV's cannot have any dummy elements.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClipPoly_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* unit);

/**
* Add a rectangle to the clip region.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  unit TODO
**
* @par Note 
*      The rectangle will be added to the current clip region.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClipRect_MVIEW(void* p_geo, const int32_t* mview, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* unit);

/**
* Deletes an extended clip PLY object used by this view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ext_ply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void DeleteExtClipPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ext_ply);

/**
* Get the names of existing extended clip PLY objects in this view as list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void ExtClipPLYList_MVIEW(void* p_geo, const int32_t* mview, const int32_t* lst);

/**
* Get clipping polygons, in the user projection
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  poly TODO
**
* @par Note 
*      The returned PLY is recast into the User projection.
*      For oriented views (especially sections), use
*      GetPLY_MVIEW, which returns the Clip PLY in the view's native
*      projection (e.g. the one set using SetIPJ_MVIEW).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetClipPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* poly);

/**
* Get an extended clip PLY object used by this view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ext_ply TODO
* @param[in]  ply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetExtClipPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ext_ply, const int32_t* ply);

/**
* Gets extended clip information for group in view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[out] ext_ply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetGroupExtClipPLY_MVIEW(void* p_geo, const int32_t* mview, const char* group, int32_t* ext_ply);

/**
* Get clipping polygons, in the base projection
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  poly TODO
**
* @par Note 
*      This should be used to get the clipping polygon for
*      oriented views (especially sections).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* poly);

/**
* Set the Clipping mode on or off for new groups.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mode TODO
**
* @par Note 
*      All new groups will be clipped.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GroupClipMode_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mode);

/**
* Get the name of the extended clip PLY object in this view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ext_ply TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void IGetNameExtClipPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ext_ply, char* name, const int32_t* length);

/**
* Get the number of extended clip PLY objects in this view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return Number of PLYs
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT int32_t iNumExtClipPLY_MVIEW(void* p_geo, const int32_t* mview);

/**
* Set an extended clip PLY object used by this view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ext_ply TODO
* @param[in]  name TODO
* @param[in]  ply TODO
* @return Index of new or changed PLY, -1 on error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT int32_t iSetExtClipPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ext_ply, const char* name, const int32_t* ply);

/**
* Set clipping region to a PLY
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  poly TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetClipPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* poly);

/**
* Sets extended clip information for group in view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  ext_ply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void SetGroupExtClipPLY_MVIEW(void* p_geo, const int32_t* mview, const char* group, const int32_t* ext_ply);

///@}

/**
* @name Color Functions 
*/
///@{

/**
* Convert to RGB values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  color TODO
* @param[out] r TODO
* @param[out] g TODO
* @param[out] b TODO
**
* @par Note 
*      Color component intensities will be in the range 0-255.
*
* @par See also 
*      iColor_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Color2RGB_MVIEW(void* p_geo, const int32_t* color, int32_t* r, int32_t* g, int32_t* b);

/**
* Convert a color to a color string label
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  color TODO
* @param[out] color_descr TODO
* @param[in]  length TODO
**
* @par Note 
*      See iColor_MVIEW.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ColorDescr_MVIEW(void* p_geo, const int32_t* color, char* color_descr, const int32_t* length);

/**
* Get a color from a color string label
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  color TODO
* @return Color int
**
* @par Note 
*      Color strings may be "R","G","B","C","M","Y",
*      "H","S","V", or "K" or a combination of these
*      characters, each followed by up to three digits
*      specifying a number between 0 and 255.
*      An empty string produce C_ANY_NONE.
*      
*      You must stay in the same color model, RGB, CMY,
*      HSV or K.
*      
*      For example "R", "R127G22", "H255S127V32"
*      
*      Characters are not case sensitive.
*
* @par See also 
*      iColorXXX_MVIEW macros
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iColor_MVIEW(void* p_geo, const char* color);

/**
* Return CMY color.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  c TODO
* @param[in]  m TODO
* @param[in]  y TODO
* @return Color int based on color model.
**
* @par Note 
*      Color component intensities must be in the range 0-255.
*
* @par See also 
*      iColor_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iColorCMY_MVIEW(void* p_geo, const int32_t* c, const int32_t* m, const int32_t* y);

/**
* Return HSV color.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  h TODO
* @param[in]  s TODO
* @param[in]  v TODO
* @return Color int based on color model.
**
* @par Note 
*      Color component intensities must be in the range 0-255.
*
* @par See also 
*      iColor_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iColorHSV_MVIEW(void* p_geo, const int32_t* h, const int32_t* s, const int32_t* v);

/**
* Return RGB color.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  r TODO
* @param[in]  g TODO
* @param[in]  b TODO
* @return Color int based on color model.
**
* @par Note 
*      Color component intensities must be in the range 0-255.
*
* @par See also 
*      iColor_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iColorRGB_MVIEW(void* p_geo, const int32_t* r, const int32_t* g, const int32_t* b);

///@}

/**
* @name Drawing Attribute Functions 
*/
///@{

/**
* Set the view clipping mode on or off.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mode TODO
**
* @par Note 
*      Entitles that follow in this group will be clipped
*      or not clipped depending on this mode.
*      
*      The montaj editor cannot change the clip mode of
*      embedded clipped/unclipped enties that are controlled
*      by this call.  Use the Group clipping functions
*      instead.
*      
*      It is highly recommended that you use the GroupClipMode_MVIEW
*      function to control clipping on a group-by-group basis, instead
*      of using ClipMode_MVIEW when inside a group, as it is impossible
*      to determine the  true visible extents of a group. In such cases, the
*      "zoom to full map extents" command may give incorrect results.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClipMode_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mode);

/**
* Set the fill color.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FillColor_MVIEW(void* p_geo, const int32_t* mview, const int32_t* color);

/**
* Set the line color.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LineColor_MVIEW(void* p_geo, const int32_t* mview, const int32_t* color);

/**
* Set the line edge smoothing.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  smooth TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void LineSmooth_MVIEW(void* p_geo, const int32_t* mview, const int32_t* smooth);

/**
* Set the style of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  style TODO
* @param[in]  pitch TODO
**
* @par Note 
*      Line styles are selected by ordinal value (line style #)
*      from those defined in default.lpt.  If default.lpt does
*      not have a the style specified, the file user.lpt is
*      searched.  If this file does not contain the line style
*      solid is assumed.
*      
*      Note that line styles from default.lpt and user.lpt are
*      read into the map at the time the map is created, not
*      at display time.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LineStyle_MVIEW(void* p_geo, const int32_t* mview, const int32_t* style, const double* pitch);

/**
* Set the line thickness.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  thick TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LineThick_MVIEW(void* p_geo, const int32_t* mview, const double* thick);

/**
* Sets the pattern angle
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  angle TODO
**
* @par Note 
*      Allows the user to apply a rotation to the basic
*      pattern. Care should be taken to ensure that the
*      tiling remains continuous; i.e. if the pattern
*      consists of horizontal lines, only angles of
*      -90, 0, 90, 180 (etc.) would give seamless tiling.
*      However, simple, closed figure, such as a star,
*      could be given any angle.
*      Rotations about the center point (0.5, 0.5) of the
*      unit cell are performed prior to applying PatSize.
*      The default value is 0.0.
*      Setting an angle of -999 inititates the random angle
*      feature, and each pattern tile is rotated to a different
*      angle. Using this along with PatStyle(View, MVIEW_TILE_RANDOM)
*      can give a "hand-drawn" effect to geological fills.
*      
*      See the IMPORTANT note for sPatNumber_MVIEW().
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PatAngle_MVIEW(void* p_geo, const int32_t* mview, const double* angle);

/**
* Sets the tiling density.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  density TODO
**
* @par Note 
*      This number is the ratio between the plotted unit cell size and the
*      distance between the plotted tile centers. The default value is 1.
*      A value larger than 1 increases the density of the pattern, while
*      values less than 1 make the pattern more "spread out".
*      This can be used along with sPatStyleMethod to create more complicated
*      fills from simple patterns.
*      
*      See the IMPORTANT note for sPatNumber_MVIEW().
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PatDensity_MVIEW(void* p_geo, const int32_t* mview, const double* density);

/**
* Sets the pattern number
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  number TODO
**
* @par Note 
*      Pattern 0 is solid fill.(default)
*      Set the pattern color using FillColor_MVIEW.
*      
*      Patterns are selected by ordinal value (pattern number)
*      from those defined in default.pat.  If default.pat does
*      not have a the pattern specified, the file user.pat is
*      searched.  If this file does not contain the pattern
*      solid is assumed.
*      
*      Note that patterns from default.pat and user.pat are
*      read into the map at the time the map is created, not
*      at display time.
*      
*      IMPORTANT: A call to this function resets all the various
*      pattern attributes to those defined for the selected pattern.
*      If you want to modify any attributes, call that function (e.g.
*      sPatSize_MVIEW(), AFTER you call sPatNumber_MVIEW().
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PatNumber_MVIEW(void* p_geo, const int32_t* mview, const int32_t* number);

/**
* Sets the pattern unit cell size (X)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  size TODO
**
* @par Note 
*      See the IMPORTANT note for sPatNumber_MVIEW().
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PatSize_MVIEW(void* p_geo, const int32_t* mview, const double* size);

/**
* Sets the tiling method (i.e. rectangle, triangle)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  style TODO
**
* @par Note 
*      Normally, the unit cell is duplicated across the fill area
*      like floor tiles (MVIEW_TILE_RECTANGULAR).
*      DIAGONAL tiling rotates the tiling positions (but not the tiles)
*      by 45 degrees.
*      TRIANGULAR tiling
*      Offsets each succeeding row by half the unit cell size, and
*      lessens the vertical offset, so that the unit cell centers
*      form a triangular grid pattern.
*      RANDOM tiling adds small random offsets in both directions to give
*      the diffuse effect seen on many geological maps.
*      
*      NOTE: Some patterns are designed to be interlocking and may only
*      work "correctly" with one tiling method.
*      
*      See the IMPORTANT note for sPatNumber_MVIEW().
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PatStyle_MVIEW(void* p_geo, const int32_t* mview, const int32_t* style);

/**
* Sets the pattern line thickness
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  thick TODO
**
* @par Note 
*      See the IMPORTANT note for sPatNumber_MVIEW().
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PatThick_MVIEW(void* p_geo, const int32_t* mview, const double* thick);

/**
* Set the Symb angle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  angle TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SymbAngle_MVIEW(void* p_geo, const int32_t* mview, const double* angle);

/**
* Set the Symbol color.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SymbColor_MVIEW(void* p_geo, const int32_t* mview, const int32_t* color);

/**
* Set the Symbol color fill.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SymbFillColor_MVIEW(void* p_geo, const int32_t* mview, const int32_t* color);

/**
* Set the symbol font and style.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  face TODO
* @param[in]  geofont TODO
* @param[in]  weight TODO
* @param[in]  italic TODO
**
* @par Note 
*      If the font cannot be found, the DEFAULT_SYMBOL_FONT
*      specified in the [MONTAJ] section of GEOSOFT.INI
*      will be used.
*      
*      See TextFont_MVIEW for the font name syntax.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SymbFont_MVIEW(void* p_geo, const int32_t* mview, const char* face, const int32_t* geofont, const int32_t* weight, const int32_t* italic);

/**
* Set the Symbol number.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  number TODO
**
* @par Note 
*      The lower 16 bits of the number is interpreted as UTF-16 with a valid Unicode character
*      code point. GFN fonts wil produce valid symbols depending on the font for 0x01-0x7f and the degree,
*      plus-minus and diameter symbol(latin small letter o with stroke) for 0xB0, 0xB1 and 0xF8 respectively.
*      
*      It is possible to check if a character is valid using iIsValidUTF16Char_UNC. The high 16-bits are reserved
*      for future use. Also see: iValidSymbol_UNC and ValidateSymbols_UNC.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SymbNumber_MVIEW(void* p_geo, const int32_t* mview, const int32_t* number);

/**
* Set the Symb size.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SymbSize_MVIEW(void* p_geo, const int32_t* mview, const double* size);

/**
* Set the text angle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  angle TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void TextAngle_MVIEW(void* p_geo, const int32_t* mview, const double* angle);

/**
* Set the Text color.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  color TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void TextColor_MVIEW(void* p_geo, const int32_t* mview, const int32_t* color);

/**
* Set the text font.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  face TODO
* @param[in]  geo_font TODO
* @param[in]  weight TODO
* @param[in]  italic TODO
**
* @par Note 
*      Font characteristics can be defined using the function parameters,
*      or may be defined as decorations in the font name.  A decorated font
*      name has the following format:
*      
*      font_name(type,weight,italics,charset)
*      
*      where
*      type     - "TT" or "GFN"
*      weight   - last word from MVIEW_FONT_WEIGHT_ (ie. "LIGHT")
*      italics  - "ITALICS" for for italics
*      charset  - Before version 6.2. this decoration was honoured and it affected the display
*      of characters above ASCII 127. 6.2. introduced Unicode in the core
*      montaj engine that eliminated the need for such a setting. All strings
*      on the GX API level are encoded in UTF8 during runtime which makes it possible
*      to represent all possible characters without using character sets. This decoration
*      will now be ignored.
*      
*      Qualifiers take precidence over passed parameters.
*      The order of qualifiers is not relevant.
*      
*      examples:
*      
*      "sr(GFN,ITALICS)"  - geosoft GFN font, normal weight, italics
*      "Arial(TT,XBOLD)"  - TrueType font, bold
*      "Times(TT,ITALICS,_EastEurope)"
*      - TrueType font, italics, Eastern Europe charcters
*      
*      Decorated name qualifiers take precedence over passed parameters.
*      
*      If the font cannot be found, or if "Default" is used, the DEFAULT_MAP_FONT
*      specified in the [MONTAJ] section of GEOSOFT.INI
*      will be used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void TextFont_MVIEW(void* p_geo, const int32_t* mview, const char* face, const int32_t* geo_font, const int32_t* weight, const int32_t* italic);

/**
* Set the text plot reference point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ref TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void TextRef_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ref);

/**
* Set the text size.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  size TODO
**
* @par Note 
*      Because views may have differing X and Y scales this size can only make sense in one of these directions
*      otherwise text would appear warped on these kinds of views. The X direction was chosen to represent the
*      font size. For instance if the X scale is 1 unit/mm and my Y scale is 2 units/mm a font size of 3.0 view
*      units will result in un-rotated text that appears 6 view units or 3mm high in the Y direction.
*      
*      Another important thing to keep in mind that this size represents what is known as the "ascent" height
*      of the font. The full height of the text may be higher if characters with accents or lower extension
*      (e.g. the lowercase y) appear in the text. For TrueType fonts the mapping system will do a best effort
*      positioning and sizing of the text using the alignment set and information about the font that it queries
*      from the operating system. For instance; if Arial text "Blog" is placed at (0,0) and the alignment
*      setting is Left-Bottom the left side of the B should be aligned at 0 in the X direction and the
*      bottom of all the letters except y will be at 0 in the Y direction. The lower part of the y will extend
*      below 0 in the Y (this is known as the "descent" height of the font at this size). The letters B and l
*      should be very close to the size set here (this may differ slightly for different fonts).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void TextSize_MVIEW(void* p_geo, const int32_t* mview, const double* size);

/**
* Sets the transparency for new objects.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  trans TODO
**
* @par Note 
*      1.0 Renders completely opaque objects while 0.0 will be transparent.
*      Objects written after this will have a combined transparency value with the
*      group transparency if it is set (e.g. 0.5 for group and 0.8 stream will result in 0.4).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void Transparency_MVIEW(void* p_geo, const int32_t* mview, const double* trans);

/**
* Sets Z-value info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  val TODO
**
* @par Note 
*      This number is stored in map mainly for exports to other vector formats (e.g ShapeFiles)
*      A contour map that's exported to a shape file will use this value as a Z-value attributes for its shapes.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void ZValue_MVIEW(void* p_geo, const int32_t* mview, const double* val);

///@}

/**
* @name Drawing Entity Functions 
*/
///@{

/**
* Draw an arc.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  radius TODO
* @param[in]  ratio TODO
* @param[in]  angle TODO
* @param[in]  start TODO
* @param[in]  end TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Arc_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y, const double* radius, const double* ratio, const double* angle, const double* start, const double* end);

/**
* Draw a filled arc.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  radius TODO
* @param[in]  ratio TODO
* @param[in]  angle TODO
* @param[in]  start TODO
* @param[in]  end TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Chord_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y, const double* radius, const double* ratio, const double* angle, const double* start, const double* end);

/**
* Plot classified symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  scal_mm TODO
* @param[in]  zmin TODO
* @param[in]  zval TODO
* @param[in]  size TODO
* @param[in]  fcol TODO
**
* @par Note 
*      For example, to plot three levels <95, 95-100 and
*      100-120, three string arguments would be:
*      
*      "95,100,120"      maximums of each class
*      "2.0,2.5,3.0"     sizes in mm
*      "y,g,r"           fill colors
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClassifiedSymbols_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const double* scal_mm, const double* zmin, const char* zval, const char* size, const char* fcol);

/**
* Draw a polygon with holes in it.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_i TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      You pass a VV with polygon sizes and 2 point vvs.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ComplexPolygon_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_i, const int32_t* vv_x, const int32_t* vv_y);

/**
* Draw an ellipse
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  radius TODO
* @param[in]  ratio TODO
* @param[in]  angle TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Ellipse_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y, const double* radius, const double* ratio, const double* angle);

/**
* Draw a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x0 TODO
* @param[in]  y0 TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Line_MVIEW(void* p_geo, const int32_t* mview, const double* x0, const double* y0, const double* x1, const double* y1);

/**
* Draw line segments stored in a GS_D2LINE VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  gvv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LineVV_MVIEW(void* p_geo, const int32_t* mview, const int32_t* gvv);

/**
* Like PolyLineDm, but draw polygons.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.6
*/
GX_EXPORT void PolygonDm_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y);

/**
* Draw a complex polygon from PLY.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ply TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void PolygonPLY_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ply);

/**
* Draw a polyline or polygon (dummies deleted).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  type TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      Dummies in X and/or Y VV are deleted and it results
*      in 'solid' line. Using PolyLineDm_MVIEW (below) function
*      if gaps from dummies are to be kept.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PolyLine_MVIEW(void* p_geo, const int32_t* mview, const int32_t* type, const int32_t* vv_x, const int32_t* vv_y);

/**
* Draw a polyline with gaps defined by dummies in X/Y VVs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PolyLineDm_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y);

/**
* Draw wrapped polylines from X and Y VV's.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      Convert a given VVy into a wrapped VVy using
*      the current view window as the wrap region.
*      Then draw polylines from it.
*
* @par See also 
*      PolyLine_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PolyWrap_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y);

/**
* Draw a rectangle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x0 TODO
* @param[in]  y0 TODO
* @param[in]  x1 TODO
* @param[in]  y1 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Rectangle_MVIEW(void* p_geo, const int32_t* mview, const double* x0, const double* y0, const double* x1, const double* y1);

/**
* Draw a filled segment of an ellipse.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  radius TODO
* @param[in]  ratio TODO
* @param[in]  angle TODO
* @param[in]  start TODO
* @param[in]  end TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.7
*/
GX_EXPORT void Segment_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y, const double* radius, const double* ratio, const double* angle, const double* start, const double* end);

/**
* Plot sized symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SizeSymbols_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Plot a symbol
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Symbol_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y);

/**
* Plot symbols
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Symbols_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const int32_t* vv_y);

/**
* Plot symbols using an ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  itr TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SymbolsITR_MVIEW(void* p_geo, const int32_t* mview, const char* itr, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Draw text.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  text TODO
* @param[in]  x TODO
* @param[in]  y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Text_MVIEW(void* p_geo, const int32_t* mview, const char* text, const double* x, const double* y);

///@}

/**
* @name Drawing Object Functions 
*/
///@{

/**
* Add an aggregate to a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  agg TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Aggregate_MVIEW(void* p_geo, const int32_t* mview, const int32_t* agg, const char* name);

/**
* Get an existing Aggregate object from the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @return AGG object
**
* @par Note 
*      This method returns a cached object owned by the MVIEW and will be destroyed automatically when the MVIEW is disposed
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT int32_t GetAggregate_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Change the specified line in a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  line TODO
**
* @par Note 
*      The line name can be created by calling LineLabel_DB using
*      DB_LINE_LABEL_FORMAT_LINK. This insures that the label is
*      created is the same way as used in the database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ChangeLineMessage_MVIEW(void* p_geo, const int32_t* mview, const char* line);

/**
* Add a colored symbol object to a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  name TODO
* @param[in]  csymb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ColSymbol_MVIEW(void* p_geo, const int32_t* mview, const char* name, const int32_t* csymb);

/**
* Get an existing colored symbol object from the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @return CSYMB object
**
* @par Note 
*      This method returns a cached object owned by the MVIEW and will be destroyed automatically when the MVIEW is disposed
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT int32_t GetColSymbol_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Add a Data Link Display (DATALINKD) object to the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  datalinkd TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void DATALINKD_MVIEW(void* p_geo, const int32_t* mview, const int32_t* datalinkd, const char* name);

/**
* Get an existing Data Link Display (DATALINKD) object from the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @return DATALINKD object
**
* @par Note 
*      This method returns a cached object owned by the MVIEW and will be destroyed automatically when the MVIEW is disposed
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT int32_t GetDATALINKD_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Used for GX makers which use both maps and databases.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  name TODO
* @param[in]  groups TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void EasyMaker_MVIEW(void* p_geo, const int32_t* mview, const char* name, const char* groups);

/**
* Add an EMF file data object to the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void EMFObject_MVIEW(void* p_geo, const int32_t* mview, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const char* file);

/**
* Add an external string data object to the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  name TODO
* @param[in]  cl TODO
* @param[in]  data TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ExternalStringObject_MVIEW(void* p_geo, const int32_t* mview, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const char* name, const char* cl, const char* data);

/**
* Make a link to a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  db TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Link_MVIEW(void* p_geo, const int32_t* mview, const int32_t* db, const char* name);

/**
* Generates a Maker for the database and/or map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  db TODO
* @param[in]  map TODO
* @param[in]  prog TODO
* @param[in]  type TODO
* @param[in]  name TODO
* @param[in]  groups TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Maker_MVIEW(void* p_geo, const int32_t* mview, const int32_t* db, const int32_t* map, const char* prog, const int32_t* type, const char* name, const char* groups);

/**
* Store Metadata in a group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  meta TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void Meta_MVIEW(void* p_geo, const int32_t* mview, const int32_t* meta, const char* name);

/**
* Add a Voxel Display (VOXD) object to the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  voxd TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void VOXD_MVIEW(void* p_geo, const int32_t* mview, const int32_t* voxd, const char* name);

/**
* Get an existing VOXD object from the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @return VOXD object
**
* @par Note 
*      This method returns a cached object owned by the MVIEW and will be destroyed automatically when the MVIEW is disposed
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT int32_t GetVOXD_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Display vectors from a vector voxel in the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vox TODO
* @param[in]  group TODO
* @param[in]  itr TODO
* @param[in]  scale_factor TODO
* @param[in]  height_base_ratio TODO
* @param[in]  max_base_size_ratio TODO
* @param[in]  cutoff_value TODO
* @param[in]  max_vectors TODO
* @return Each data value in a vector voxel contains X, Y and Z components of a vector. The amplitudes do NOT necessarily correspond to the spatial size of the voxel.
**
* @par Note 
*      This will result in a VECTOR3D group object within the view
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.6
*/
GX_EXPORT void DrawVectorVoxelVectors_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vox, const char* group, const int32_t* itr, const double* scale_factor, const double* height_base_ratio, const double* max_base_size_ratio, const double* cutoff_value, const int32_t* max_vectors);

/**
* Get an existing VECTOR3D object from the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @return VECTOR3D object
**
* @par Note 
*      This method returns a cached object owned by the MVIEW and will be destroyed automatically when the MVIEW is disposed
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t GetVECTOR3D_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Display vectors in the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
* @param[in]  vv_vx TODO
* @param[in]  vv_vy TODO
* @param[in]  vv_vz TODO
* @param[in]  itr TODO
* @param[in]  scale_for_max_vector TODO
* @param[in]  height_base_ratio TODO
* @param[in]  max_base_size_ratio TODO
* @return Plot vectors as cones scaled in area to the maximum amplitude
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0.1
*/
GX_EXPORT void DrawVectors3D_MVIEW(void* p_geo, const int32_t* mview, const char* group, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z, const int32_t* vv_vx, const int32_t* vv_vy, const int32_t* vv_vz, const int32_t* itr, const double* scale_for_max_vector, const double* height_base_ratio, const double* max_base_size_ratio);

///@}

/**
* @name Group Methods Functions 
*/
///@{

/**
* Set group ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  itr TODO
**
* @par Note 
*      A group ITR associate a color distribution with mixed vector groups (e.g. Drillhole Lithology tubes) groups. Used by legend UI support in 3D.
*      Note that modifying this information does not currently change the group contents and a group needs to be regenerated (e.g. with maker) 
*      to refresh the objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void SetGroupITR_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group, const int32_t* itr);

/**
* Get group ITR
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
**
* @par Note 
*      A group ITR associate a color distribution with mixed vector groups (e.g. Drillhole Lithology tubes) groups. Used by legend UI support in 3D.
*      Note that modifying this information does not currently change the group contents and a group needs to be regenerated (e.g. with maker) 
*      to refresh the objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t GetGroupITR_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Determine if group ITR exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @return 1 - ITR exists, 0 - ITR does not exist
**
* @par Note 
*      A group ITR associate a color distribution with mixed vector groups (e.g. Drillhole Lithology tubes) groups. Used by legend UI support in 3D.
*      Note that modifying this information does not currently change the group contents and a group needs to be regenerated (e.g. with maker) 
*      to refresh the objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t iGroupITRExists_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Deletes existing ITR associated with a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
**
* @par Note 
*      A group ITR associate a color distribution with mixed vector groups (e.g. Drillhole Lithology tubes) groups. Used by legend UI support in 3D.
*      Note that modifying this information does not currently change the group contents and a group needs to be regenerated (e.g. with maker) 
*      to refresh the objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void DeleteGroupITR_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Set group TPAT
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  tpat TODO
**
* @par Note 
*      A group TPAT associate a thematic color map with mixed vector groups (e.g. Drillhole Lithology tubes) groups. Used by legend UI support in 3D.
*      Note that modifying this information does not currently change the group contents and a group needs to be regenerated (e.g. with maker) 
*      to refresh the objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void SetGroupTPAT_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group, const int32_t* tpat);

/**
* Get group TPAT
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
**
* @par Note 
*      A group TPAT associate a thematic color map with mixed vector groups (e.g. Drillhole Lithology tubes) groups. Used by legend UI support in 3D.
*      Note that modifying this information does not currently change the group contents and a group needs to be regenerated (e.g. with maker) 
*      to refresh the objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t GetGroupTPAT_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Determine if group TPAT exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @return 1 - TPAT exists, 0 - TPAT does not exist
**
* @par Note 
*      A group TPAT associate a thematic color map with mixed vector groups (e.g. Drillhole Lithology tubes) groups. Used by legend UI support in 3D.
*      Note that modifying this information does not currently change the group contents and a group needs to be regenerated (e.g. with maker) 
*      to refresh the objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t iGroupTPATExists_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Deletes existing TPAT associated with a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
**
* @par Note 
*      A group TPAT associate a thematic color map with mixed vector groups (e.g. Drillhole Lithology tubes) groups. Used by legend UI support in 3D.
*      Note that modifying this information does not currently change the group contents and a group needs to be regenerated (e.g. with maker) 
*      to refresh the objects.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void DeleteGroupTPAT_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group);

/**
* Determine if generic storage associated with a group exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  storage_name TODO
* @return 1 - storage exists, 0 - storage does not exist
**
* @par Note 
*      External API users should not use storage names starting with "Geosoft"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t iGroupStorageExists_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group, const char* storage_name);

/**
* Reads existing generic storage associated with a group into an in-memory BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  storage_name TODO
* @return BF Object
**
* @par Note 
*      External API users should not use storage names starting with "Geosoft"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t ReadGroupStorage_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group, const char* storage_name);

/**
* Deletes existing generic storage associated with a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  storage_name TODO
**
* @par Note 
*      External API users should not use storage names starting with "Geosoft"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void DeleteGroupStorage_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group, const char* storage_name);

/**
* Open generic existing storage associated with a group for reading.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  storage_name TODO
* @param[in]  bf TODO
**
* @par Note 
*      External API users should not use storage names starting with "Geosoft"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void WriteGroupStorage_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group, const char* storage_name, const int32_t* bf);

/**
* Copies all marked groups from one view into another view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvie_ws TODO
* @param[in]  mvie_wd TODO
**
* @par Note 
*      Projections in source and destination views are used to copy the
*      entities. Entities are clipped by the destination view's clipping
*      region.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CopyMarkedGroups_MVIEW(void* p_geo, const int32_t* mvie_ws, const int32_t* mvie_wd);

/**
* Copies all marked groups raw from one view into another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mvie_ws TODO
* @param[in]  mvie_wd TODO
**
* @par Note 
*      The projections, and clipping is completly ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void CopyRawMarkedGroups_MVIEW(void* p_geo, const int32_t* mvie_ws, const int32_t* mvie_wd);

/**
* Compute CRC for a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  name TODO
* @param[in]  crc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CRCGroup_MVIEW(void* p_geo, const int32_t* mview, const char* name, const int32_t* crc);

/**
* Delete a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
**
* @par Note 
*      Does nothing if the group does not already exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void DeleteGroup_MVIEW(void* p_geo, const int32_t* mview, const char* group);

/**
* Delete marked groups.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DelMarkedGroups_MVIEW(void* p_geo, const int32_t* mview);

/**
* Get extent of a group in a view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_name TODO
* @param[out] xmin TODO
* @param[out] ymin TODO
* @param[out] xmax TODO
* @param[out] ymax TODO
* @param[in]  unit TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetGroupExtent_MVIEW(void* p_geo, const int32_t* mview, const char* group_name, double* xmin, double* ymin, double* xmax, double* ymax, const int32_t* unit);

/**
* Gets the transparency value of group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_name TODO
* @param[out] trans TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetGroupTransparency_MVIEW(void* p_geo, const int32_t* mview, const char* group_name, double* trans);

/**
* Save all polygons in group into PLY obj.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  name TODO
* @param[in]  pply TODO
**
* @par Note 
*      The coordinates will be in the working coordinate system
*      of the view.  The SetWorkingIPJ_MVIEW method can be used
*      to change the working coordinate system. This function will
*      return an empty PLY if the group is hidden.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GroupToPLY_MVIEW(void* p_geo, const int32_t* mview, const char* name, const int32_t* pply);

/**
* Hide/Show marked groups.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void HideMarkedGroups_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mode);

/**
* Hide/Show 2d shadow interpretations.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void HideShadow2DInterpretations_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mode);

/**
* Checks to see if a group exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  name TODO
* @return 0  - group does not exist.
* 1  - group exists.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iExistGroup_MVIEW(void* p_geo, const int32_t* mview, const char* name);

/**
* Generate the name of a group from a base name that
* is new. (always unique and won't overwrite existing
* objects).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[out] new_name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void IGenNewGroupName_MVIEW(void* p_geo, const int32_t* mview, const char* group, char* new_name, const int32_t* length);

/**
* Query a status or characteristic of a group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  what TODO
* @return TRUE or FALSE (1 or 0)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT int32_t iIsGroup_MVIEW(void* p_geo, const int32_t* mview, const char* group, const int32_t* what);

/**
* Is the group empty?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @return TRUE or FALSE (1 or 0)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iIsGroupEmpty_MVIEW(void* p_geo, const int32_t* mview, const char* group);

/**
* Is this view movable?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
**
* @par Note 
*      Views are always physically movable in the API, this
*      flag is for preventing accidental moving in the GUI.
*      By default views are not movable.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t iIsMovable_MVIEW(void* p_geo, const int32_t* mview);

/**
* Is this view visible?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iIsVisible_MVIEW(void* p_geo, const int32_t* mview);

/**
* Get a list of the groups in a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  lst TODO
* @param[in]  flag TODO
* @return Number of groups in the list
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iListGroups_MVIEW(void* p_geo, const int32_t* mview, const int32_t* lst, const int32_t* flag);

/**
* Query the view render order
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return Render order
**
* @par Note 
*      Views with lower numbers should render first, iDUMMY is undefined
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iRenderOrder_MVIEW(void* p_geo, const int32_t* mview);

/**
* Mark or unmark all groups.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mark TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MarkAllGroups_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mark);

/**
* Mark/unmark all empty groups.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mark TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void MarkEmptyGroups_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mark);

/**
* Mark or unmark a specific group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  name TODO
* @param[in]  mark TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MarkGroup_MVIEW(void* p_geo, const int32_t* mview, const char* name, const int32_t* mark);

/**
* Move the group backward one position (render sooner).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void MoveGroupBackward_MVIEW(void* p_geo, const int32_t* mview, const char* group);

/**
* Move the group forward one position (render later).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void MoveGroupForward_MVIEW(void* p_geo, const int32_t* mview, const char* group);

/**
* Move the group to the back (render first).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void MoveGroupToBack_MVIEW(void* p_geo, const int32_t* mview, const char* group);

/**
* Move the group to the front (render last).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void MoveGroupToFront_MVIEW(void* p_geo, const int32_t* mview, const char* group);

/**
* Rename a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  old TODO
* @param[in]  new TODO
**
* @par Note 
*      Does nothing if the group does not already exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void RenameGroup_MVIEW(void* p_geo, const int32_t* mview, const char* old, const char* new);

/**
* Set the movable attribute of a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[in]  move TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT void SetGroupMoveable_MVIEW(void* p_geo, const int32_t* mview, const char* group, const int32_t* move);

/**
* Sets the transparency value of group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_name TODO
* @param[in]  trans TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void SetGroupTransparency_MVIEW(void* p_geo, const int32_t* mview, const char* group_name, const double* trans);

/**
* Set the movable attribute of marked groups.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  move TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT void SetMarkMoveable_MVIEW(void* p_geo, const int32_t* mview, const int32_t* move);

/**
* Set the view movability
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  movable TODO
**
* @par Note 
*      Views are always physically movable in the API, this
*      flag is for preventing accidental moving in the GUI.
*      By default views are not movable.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void SetMovability_MVIEW(void* p_geo, const int32_t* mview, const int32_t* movable);

/**
* Set the view render order
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  order TODO
**
* @par Note 
*      Views with lower numbers should render first, iDUMMY is undefined
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetRenderOrder_MVIEW(void* p_geo, const int32_t* mview, const int32_t* order);

/**
* Set the view visibility
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  visible TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetVisibility_MVIEW(void* p_geo, const int32_t* mview, const int32_t* visible);

/**
* Start a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  name TODO
* @param[in]  mode TODO
**
* @par Note 
*      Line and fill colors and thickness must be set
*      before drawing to a group.
*      
*      If the group name is NULL, output will be sent to
*      the primary group stream and the MVIEW_GROUP is
*      ignored.
*      
*      Group names must be different from view names.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void StartGroup_MVIEW(void* p_geo, const int32_t* mview, const char* name, const int32_t* mode);

/**
* Gets a GUID of a group in the MVIEW.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group TODO
* @param[out] guid TODO
* @param[in]  guid_size TODO
**
* @par Note 
*      If a GUID was never queried a new one will be assigned and the map will be modified. Only if the map is saved will this value then persist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void GetGroupGUID_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group, char* guid, const int32_t* guid_size);

/**
* Find a Group by name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  guid TODO
* @return Group Number.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t iFindGroupByGUID_MVIEW(void* p_geo, const int32_t* mview, const char* guid);

///@}

/**
* @name Projection Functions 
*/
///@{

/**
* Set the working projection of the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ipj TODO
**
* @par Note 
*      The working projection is the coordinate system of coordinates drawn to
*      the view.  The working coordinate system can be different than the view
*      coordinate system, in which case the coordinates are re-projected to the
*      view coordinate system before they are placed in the view.
*
* @par See also 
*      ModePJ_MVIEW to control use of the working projection.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetWorkingIPJ_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ipj);

/**
* Clear ESRI local datum transformations currently in use.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void ClearESRILDTs_MVIEW(void* p_geo, const int32_t* mview);

/**
* Returns 1 if the view projection and view user projection are both empty (undefined).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return 1 if the view projection and view user projection are both empty.
**
* @par Note 
*      Use, for instance, to see if the map view contains projection information. The first time you add data that
*      has projection information you should set up an empty view projection so that subsequent data added with a different
*      projection is properly displayed in relation to the initial data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t iIsProjectionEmpty_MVIEW(void* p_geo, const int32_t* mview);

/**
* Get the projection of the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetIPJ_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ipj);

/**
* Get the user projection of the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetUserIPJ_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ipj);

/**
* Set the working projection mode
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  mode TODO
**
* @par Note 
*      This controls how your coordinates and attributes will be interpreted.
*      A working projection must be set useing SetWorkingIPJ_MVIEW for this
*      method to have any effect.
*
* @par See also 
*      SetWorkingIPJ
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ModePJ_MVIEW(void* p_geo, const int32_t* mview, const int32_t* mode);

/**
* Returns North direction at center of view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return North direction id deg. azimuth relative to view Y.
**
* @par Note 
*      North is calculated from the IPJ North direction.
*      It will be rDUMMY if IPJ is unknown.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rNorth_MVIEW(void* p_geo, const int32_t* mview);

/**
* Set the projection of the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ipj TODO
**
* @par Note 
*      This function also sets the User IPJ,
*      and automatically clears the WARP before doing so.
*      This would be equivalent to calling :func:`_ClearWarp_IPJ'
*      followed by SetUserIPJ_MVIEW on the view.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetIPJ_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ipj);

/**
* Set the user projection of the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetUserIPJ_MVIEW(void* p_geo, const int32_t* mview, const int32_t* ipj);

///@}

/**
* @name Render Functions 
*/
///@{

/**
* Get a 3D geometry group's 3D rendering flags.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_num TODO
* @return Combination of MVIEW_3D_RENDER flags or 0
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.1
*/
GX_EXPORT int32_t iGet3DGroupFlags_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group_num);

/**
* Set a 3D geometry group's 3D rendering flags.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_num TODO
* @param[in]  flags TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.1
*/
GX_EXPORT void Set3DGroupFlags_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group_num, const int32_t* flags);

/**
* Get a scale freezing value for the group (rDUMMY for disabled).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_num TODO
* @param[out] scale TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void _GetGroupFreezeScale_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group_num, double* scale);

/**
* Set a scale freezing value into stream (rDUMMY for disabled).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  scale TODO
**
* @par Note 
*      Objects written after this will override any scale freezing set for the group
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void _SetFreezeScale_MVIEW(void* p_geo, const int32_t* mview, const double* scale);

/**
* Set a scale freezing value for the group (rDUMMY for disabled).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_num TODO
* @param[in]  scale TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void _SetGroupFreezeScale_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group_num, const double* scale);

/**
* Find a Group by name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_name TODO
* @return Group Number.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iFindGroup_MVIEW(void* p_geo, const int32_t* mview, const char* group_name);

/**
* Get a group name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  group_num TODO
* @param[out] group_name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void IGroupName_MVIEW(void* p_geo, const int32_t* mview, const int32_t* group_num, char* group_name, const int32_t* length);

/**
* Render a specified area of view onto a Windows DC handle
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  hdc TODO
* @param[in]  left TODO
* @param[in]  bottom TODO
* @param[in]  right TODO
* @param[in]  top TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void Render_MVIEW(void* p_geo, const int32_t* mview, HDC hdc, const int32_t* left, const int32_t* bottom, const int32_t* right, const int32_t* top, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

///@}

/**
* @name Utility Drawing Functions 
*/
///@{

/**
* Set the unit conversion of a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  hdc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetUFac_MVIEW(void* p_geo, const int32_t* mview, const double* hdc);

/**
* Draw an X axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  y_loc TODO
* @param[in]  left TODO
* @param[in]  right TODO
* @param[in]  major_tick TODO
* @param[in]  minor_tick TODO
* @param[in]  tick_size TODO
**
* @par Note 
*      All coordinates are in view units.
*
* @par See also 
*      rOptimumTick_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AxisX_MVIEW(void* p_geo, const int32_t* mview, const double* y_loc, const double* left, const double* right, const double* major_tick, const double* minor_tick, const double* tick_size);

/**
* Draw a  Y axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x_loc TODO
* @param[in]  bottom TODO
* @param[in]  top TODO
* @param[in]  major_tick TODO
* @param[in]  minor_tick TODO
* @param[in]  tick_size TODO
**
* @par Note 
*      All coordinates are in view units.
*
* @par See also 
*      rOptimumTick_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AxisY_MVIEW(void* p_geo, const int32_t* mview, const double* x_loc, const double* bottom, const double* top, const double* major_tick, const double* minor_tick, const double* tick_size);

/**
* Draw a grid in the current window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x_inc TODO
* @param[in]  y_inc TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  grid_type TODO
**
* @par Note 
*      The grid will be drawn in the current window specified
*      by the last SetWindow call.
*
* @par See also 
*      AxisX_MVIEW, AxisY_MVIEW, OptimumTick_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Grid_MVIEW(void* p_geo, const int32_t* mview, const double* x_inc, const double* y_inc, const double* dx, const double* dy, const int32_t* grid_type);

/**
* Label fiducials on a profile
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  vv_x TODO
* @param[in]  fid_start TODO
* @param[in]  fid_incr TODO
* @param[in]  interval TODO
* @param[in]  y_loc TODO
* @param[in]  y_scale TODO
**
* @par Note 
*      A 1mm long vertical tick is drawn at the place
*      where a label is present. The label is drawn
*      below the tick.
*      
*      The incoming X VV is used to define the place for
*      label.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LabelFid_MVIEW(void* p_geo, const int32_t* mview, const int32_t* vv_x, const double* fid_start, const double* fid_incr, const double* interval, const double* y_loc, const double* y_scale);

/**
* Label annotations on the X axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  l_loc TODO
* @param[in]  left TODO
* @param[in]  right TODO
* @param[in]  lable_int TODO
* @param[in]  just TODO
* @param[in]  bound TODO
* @param[in]  orient TODO
**
* @par Note 
*      Label bounding will justify edge labels to be inside
*      the bar limits. But bounding does not apply if
*      labels are drawn vertically (top right or top left)
*
* @par See also 
*      AxisX_MVIEW, AxisY_MVIEW, OptimumTick_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LabelX_MVIEW(void* p_geo, const int32_t* mview, const double* l_loc, const double* left, const double* right, const double* lable_int, const int32_t* just, const int32_t* bound, const int32_t* orient);

/**
* Label annotations on the Y axis
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  bottom TODO
* @param[in]  top TODO
* @param[in]  lable_int TODO
* @param[in]  just TODO
* @param[in]  bound TODO
* @param[in]  orient TODO
**
* @par Note 
*      Label bounding will justify edge labels to be inside
*      the bar limits. But bounding does not apply if
*      labels are drawn vertically (top right or top left)
*
* @par See also 
*      AxisX_MVIEW, AxisY_MVIEW, OptimumTick_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LabelY_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* bottom, const double* top, const double* lable_int, const int32_t* just, const int32_t* bound, const int32_t* orient);

/**
* Return a default optimum tick interval
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  min TODO
* @param[in]  max TODO
* @param[out] sep TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void OptimumTick_MVIEW(void* p_geo, const double* min, const double* max, double* sep);

///@}

/**
* @name View Functions 
*/
///@{

/**
* Create MVIEW.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @param[in]  mode TODO
* @return MVIEW, aborts if creation fails
**
* @par Note 
*      View scaling is set to mm on the map and the view
*      origin is set to the map origin.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_MVIEW(void* p_geo, const int32_t* map, const char* name, const int32_t* mode);

/**
* Creates a new crooked section view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  ipj TODO
* @param[in]  name TODO
* @param[in]  x0 TODO
* @param[in]  y0 TODO
* @param[in]  xs TODO
* @param[in]  ys TODO
* @param[in]  scale TODO
* @param[in]  v_ex TODO
* @param[in]  dist0 TODO
* @param[in]  elev TODO
* @param[in]  v_vxs TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @return MVIEW, aborts if creation fails
**
* @par Note 
*      A crooked section is a section running vertically beneath
*      a path of (X, Y) locations, like a river. This view supports
*      linking to other plan, section, or 3D views.
*      The data view coordinates are set up so that vertical coordinate
*      corresponds to elevation, and the X coordinate is the distance along
*      the crooked feature, beginning at zero on the left, but the
*      status bar will show the true (X, Y, Z) location.
*      
*      If the scale is set to rDUMMY, then it will be calculated so that
*      the points will all fit horizontally.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t CreateCrookedSection_MVIEW(void* p_geo, const int32_t* map, const int32_t* ipj, const char* name, const double* x0, const double* y0, const double* xs, const double* ys, const double* scale, const double* v_ex, const double* dist0, const double* elev, const int32_t* v_vxs, const int32_t* v_vx, const int32_t* v_vy);

/**
* Creates a new crooked section data profile view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  ipj TODO
* @param[in]  name TODO
* @param[in]  x0 TODO
* @param[in]  y0 TODO
* @param[in]  xs TODO
* @param[in]  ys TODO
* @param[in]  scale TODO
* @param[in]  dist0 TODO
* @param[in]  min_z TODO
* @param[in]  max_z TODO
* @param[in]  log_z TODO
* @param[in]  v_vxs TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @return MVIEW, aborts if creation fails
**
* @par Note 
*      This is the same as CreateCrookedSection_MVIEW, except that the
*      vertical axis plots a data value, not elevation, and allows for
*      logarithmic scaling.
*      
*      See Also: CreateCrookedSection_MVIEW.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t CreateCrookedSectionDataProfile_MVIEW(void* p_geo, const int32_t* map, const int32_t* ipj, const char* name, const double* x0, const double* y0, const double* xs, const double* ys, const double* scale, const double* dist0, const double* min_z, const double* max_z, const int32_t* log_z, const int32_t* v_vxs, const int32_t* v_vx, const int32_t* v_vy);

/**
* Destroy the MVIEW handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_MVIEW(void* p_geo, const int32_t* mview);

/**
* Get the view extents
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  what TODO
* @param[in]  unit TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      The CLIP region is the current view window or the limits
*      of the current clip polygon.
*      
*      If MVIEW_EXTENT_ALL is requested and the view has no groups, the
*      clip extents are returned.
*      
*      If clip extents are requested and there are no clip extents, an
*      area 0.0,0.0 1.0,1.0 is returned.
*      
*      The MVIEW_EXTENT_VISIBLE flag will return the union of the MVIEW_EXTENT_CLIP area and the
*      extents of all non-masked visible groups in the view.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Extent_MVIEW(void* p_geo, const int32_t* mview, const int32_t* what, const int32_t* unit, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Get the MAP of the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return The MAP of the View.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t GetMAP_MVIEW(void* p_geo, const int32_t* mview);

/**
* Get the REG of the view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return The REG of the View.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT int32_t GetREG_MVIEW(void* p_geo, const int32_t* mview);

/**
* Gets the name of a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetName_MVIEW(void* p_geo, const int32_t* mview, char* name, const int32_t* length);

/**
* Gets the GUID of the MVIEW.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] guid TODO
* @param[in]  guid_size TODO
**
* @par Note 
*      If a GUID was never queried a new one will be assigned and the map will be modified. Only if the map is saved will this value then persist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT void GetGUID_MVIEW(void* p_geo, const int32_t* mview, char* guid, const int32_t* guid_size);

///@}

/**
* @name View Control Functions 
*/
///@{

/**
* Convert a plot coordinate in mm to a VIEW coordinate.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _PlotToView_MVIEW(void* p_geo, const int32_t* mview, double* x, double* y);

/**
* Set polyline/polygon thinning resolution
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  thin TODO
**
* @par Note 
*      The thinning resolution controls the removal of
*      redundant points from polylines and polygons.  Points
*      that deviate from a straight line by less than the
*      thinning resolution are removed.  This can significantly
*      reduce the size of a MAP file.
*      We recommend that you set the thinning resolution to
*      0.02 mm.
*      
*      By default, the thinning resolution is set to 0.05mm.
*      
*      Set resolution to 0.0 to remove colinear points only.
*      
*      To turn off thinning after turning it on, call
*      SetThinRes_MVIEW with a resolution of -1.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetThinRes_MVIEW(void* p_geo, const int32_t* mview, const double* thin);

/**
* Convert a VIEW coordinate to a plot coordinate in mm.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _ViewToPlot_MVIEW(void* p_geo, const int32_t* mview, double* x, double* y);

/**
* Fit an area in ground coordinates centered to an area in mm on map or vise versa
* keeping X and Y scales the same.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] m_min_x TODO
* @param[out] m_min_y TODO
* @param[out] m_max_x TODO
* @param[out] m_max_y TODO
* @param[out] v_min_x TODO
* @param[out] v_min_y TODO
* @param[out] v_max_x TODO
* @param[out] v_max_y TODO
* @param[in]  fit_view TODO
**
* @par Note 
*      X and Y scales will be redefined and units will remain unchanged.
*      The final X and Y ranges (if changed) are returned.
*
* @par See also 
*      FitWindow_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void BestFitWindow_MVIEW(void* p_geo, const int32_t* mview, double* m_min_x, double* m_min_y, double* m_max_x, double* m_max_y, double* v_min_x, double* v_min_y, double* v_max_x, double* v_max_y, const int32_t* fit_view);

/**
* Set the 2D view window for a 3D view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  m_min_x TODO
* @param[in]  m_min_y TODO
* @param[in]  m_max_x TODO
* @param[in]  m_max_y TODO
* @param[in]  v_min_x TODO
* @param[in]  v_min_y TODO
* @param[in]  v_max_x TODO
* @param[in]  v_max_y TODO
**
* @par Note 
*      3D views are placed in 2D maps within a 2D mapping window
*      that is analgous to a 2D View.  This allows all 2D functions
*      (such as changing a view location and size) to treat a 3D
*      view just like a 2D view.
*      
*      The FitMapWindow3D_MVIEW function allows you to
*      locate and set the "apparent" 2D mapping of a 3D view on
*      the map. An intial map window is established
*      as specified on the map, and the view scaling is
*      established to fit the specified area within that
*      map area.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void FitMapWindow3D_MVIEW(void* p_geo, const int32_t* mview, const double* m_min_x, const double* m_min_y, const double* m_max_x, const double* m_max_y, const double* v_min_x, const double* v_min_y, const double* v_max_x, const double* v_max_y);

/**
* Fit an area in ground coordinates to an area in mm on map.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  m_min_x TODO
* @param[in]  m_min_y TODO
* @param[in]  m_max_x TODO
* @param[in]  m_max_y TODO
* @param[in]  v_min_x TODO
* @param[in]  v_min_y TODO
* @param[in]  v_max_x TODO
* @param[in]  v_max_y TODO
**
* @par Note 
*      X and Y scales will be redefined and the units will be set to <unknown>.
*      Coordinate ranges must be greater than 0.0.
*
* @par See also 
*      SetWindow_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FitWindow_MVIEW(void* p_geo, const int32_t* mview, const double* m_min_x, const double* m_min_y, const double* m_max_x, const double* m_max_y, const double* v_min_x, const double* v_min_y, const double* v_max_x, const double* v_max_y);

/**
* Get a class name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  cl TODO
* @param[out] name TODO
* @param[in]  length TODO
**
* @par Note 
*      MVIEW class names are intended to be used to record the
*      names of certain classes in the view, such as "Plane"
*      for the default drawing plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void IGetClassName_MVIEW(void* p_geo, const int32_t* mview, const char* cl, char* name, const int32_t* length);

/**
* Get the map origin from a view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] x_origin TODO
* @param[out] y_origin TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MapOrigin_MVIEW(void* p_geo, const int32_t* mview, double* x_origin, double* y_origin);

/**
* Change the scale of a view.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  scale TODO
**
* @par Note 
*      The view size is multiplied by the scale factor.
*      The view location will move relative to the map origin
*      by the scale factor.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReScale_MVIEW(void* p_geo, const int32_t* mview, const double* scale);

/**
* Get the current map scale of the view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return The current map scale to 6 significant digits
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetMapScale_MVIEW(void* p_geo, const int32_t* mview);

/**
* Get the horizontal scale in view X units/mm
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return Returns horizontal scale in view X units/mm
**
* @par Note 
*      The scale factor is intended to be used by methods
*      that would like to specify sizes in mm.  Examples
*      would be text sizes, line thicknesses and line
*      pitch.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rScaleMM_MVIEW(void* p_geo, const int32_t* mview);

/**
* Get horizontal scale in projected user units/mm
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return Returns horizontal scale in projected user units/mm
**
* @par Note 
*      The scale factor is intended to be used by methods
*      that would like to specify sizes in mm.  Examples
*      would be text sizes, line thicknesses and line
*      pitch.
*      Same as rScaleMM if working projection not defined
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rScalePjMM_MVIEW(void* p_geo, const int32_t* mview);

/**
* Get the vertical scale in Y units/mm
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @return Returns vertical scale in view Y units/mm
**
* @par Note 
*      The scale factor is intended to be used by methods
*      that would like to specify sizes in mm.  Examples
*      would be text sizes, line thicknesses and line
*      pitch.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rScaleYMM_MVIEW(void* p_geo, const int32_t* mview);

/**
* Scale all groups (except for GRID) in a view
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  xs TODO
* @param[in]  ys TODO
**
* @par Note 
*      X (and Y) scale is the ratio of the new dimension over
*      the old dimension of a reference object. For example, if a horizontal
*      straight line of 10m long becomes 20m, X scale should be 2.
*      
*      The view is then scaled back so that the view occupies the same
*      area size as before.  The view's clip area is updated as well.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ScaleAllGroup_MVIEW(void* p_geo, const int32_t* mview, const double* xs, const double* ys);

/**
* Assign view coordinates to define a window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  bot_x TODO
* @param[in]  bot_y TODO
* @param[in]  x_scal TODO
* @param[in]  y_scal TODO
**
* @par Note 
*      The provided coordinates are converted to map mm
*      using the current view translation and scaling.
*      SetWindow is effectively called.
*
* @par See also 
*      SetWindow_MVIEW, ScaleWindow_MVIEW, TranScale_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ScaleWindow_MVIEW(void* p_geo, const int32_t* mview, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const double* bot_x, const double* bot_y, const double* x_scal, const double* y_scal);

/**
* Set a class name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  cl TODO
* @param[in]  name TODO
**
* @par Note 
*      MVIEW class names are intended to be used to record the
*      names of certain classes in the view, such as "Plane"
*      for the default drawing plane.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SetClassName_MVIEW(void* p_geo, const int32_t* mview, const char* cl, const char* name);

/**
* Set the view window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  unit TODO
**
* @par Note 
*      The current clip region will be set to the clip
*      window.
*
* @par See also 
*      FitWindow_MVIEW, ScaleWindow_MVIEW, Extent_MVIEW.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetWindow_MVIEW(void* p_geo, const int32_t* mview, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* unit);

/**
* Set the view translation and scaling
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @param[in]  xs TODO
* @param[in]  ys TODO
**
* @par Note 
*      Warning. For reasons unknown (and maybe a bug), this
*      function resets the view IPJ units. It is a good idea
*      to call the SetUnits_IPJ function after calling this
*      function in order to restore them. This will be addressed
*      in v6.4.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void TranScale_MVIEW(void* p_geo, const int32_t* mview, const double* x, const double* y, const double* xs, const double* ys);

/**
* Convert a USERplot in mm to a VIEW coordinate
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par See also 
*      SetUserIPJ_MVIEW
*      GetUserIPJ_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void UserToView_MVIEW(void* p_geo, const int32_t* mview, double* x, double* y);

/**
* Convert a VIEW coordinate to a USER coordinate.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[out] x TODO
* @param[out] y TODO
*
* @par See also 
*      SetUserIPJ_MVIEW
*      GetUserIPJ_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ViewToUser_MVIEW(void* p_geo, const int32_t* mview, double* x, double* y);

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
