//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file layout_gxlib.h
* @date 2017-11-06
* @brief File containing LAYOUT GX C API constant and function declarations
*/

/**
* @defgroup LAYOUT_Module LAYOUT
* Layout class for generic relative layout calculation
* 
* The relative layout algorithm allows a logical organization of layout rectangles.
* You can set constraints with English-like semantics. For example:
* 
* "Set the left side of rectangle 1 equal to the right side of rectangle 2 plus 10 pixels."
* "Set the bottom of rectangle 1 to 25 percent of the height of rectangle 2."
* "Move node 1 such that its bottom is equal to the top of rectangle 2 minus 10 pixels."
* 
* The last constraint set would enjoy priority over any others as it would be
* the last one that would influence the rectangle calculations. See the notes for iSetConstraint
* for more details.
* @{
*/

#pragma once
#ifndef HLAYOUT_H_DEFINED
#define HLAYOUT_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name LAYOUT_CONSTR Definitions
* 
* Layout constraint specifiers
*/
///@{
/** 
* LAYOUT_CONSTR_LEFT
* 
* Adjust rectangle's left side
*/
#define LAYOUT_CONSTR_LEFT 0
/** 
* LAYOUT_CONSTR_RIGHT
* 
* Adjust rectangle's right side
*/
#define LAYOUT_CONSTR_RIGHT 1
/** 
* LAYOUT_CONSTR_TOP
* 
* Adjust rectangle's top side
*/
#define LAYOUT_CONSTR_TOP 2
/** 
* LAYOUT_CONSTR_BOTTOM
* 
* Adjust rectangle's bottom side
*/
#define LAYOUT_CONSTR_BOTTOM 3
/** 
* LAYOUT_CONSTR_WIDTH
* 
* Adjust rectangle's width
*/
#define LAYOUT_CONSTR_WIDTH 4
/** 
* LAYOUT_CONSTR_HEIGHT
* 
* Adjust rectangle's height
*/
#define LAYOUT_CONSTR_HEIGHT 5
/** 
* LAYOUT_CONSTR_HCENTER
* 
* Center rectangle with respect to width
*/
#define LAYOUT_CONSTR_HCENTER 6
/** 
* LAYOUT_CONSTR_VCENTER
* 
* Center rectangle with respect to height
*/
#define LAYOUT_CONSTR_VCENTER 7
/** 
* LAYOUT_CONSTR_MOVEL
* 
* Move rectangle, with respect to left
*/
#define LAYOUT_CONSTR_MOVEL 8
/** 
* LAYOUT_CONSTR_MOVER
* 
* Move rectangle, with respect to right
*/
#define LAYOUT_CONSTR_MOVER 9
/** 
* LAYOUT_CONSTR_MOVET
* 
* Move rectangle, with respect to top
*/
#define LAYOUT_CONSTR_MOVET 10
/** 
* LAYOUT_CONSTR_MOVEB
* 
* Move rectangle, with respect to bottom
*/
#define LAYOUT_CONSTR_MOVEB 11
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Calculate new positions based on initial conditions and constraints
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      Use iGetRectangle to obtain the results for the other rectangles. Depending
*      on the constraints set the parent rectangle may also change
*      after the calculation (returned here for convenience).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void CalculateRects_LAYOUT(void* p_geo, const int32_t* layout, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Remove all children and constraints from layout
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void ClearAll_LAYOUT(void* p_geo, const int32_t* layout);

/**
* Remove all constraints from layout
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void ClearConstraints_LAYOUT(void* p_geo, const int32_t* layout);

/**
* Creates a layout calculation object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  num TODO
* @param[in]  name TODO
* @return LAYOUT object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT int32_t Create_LAYOUT(void* p_geo, const int32_t* num, const char* name);

/**
* Destroys the layout calculation object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void Destroy_LAYOUT(void* p_geo, const int32_t* layout);

/**
* Gets the current bounds for a rectangle or the parent layout
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
* @param[in]  rect TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void GetRectangle_LAYOUT(void* p_geo, const int32_t* layout, const int32_t* rect, double* min_x, double* min_y, double* max_x, double* max_y);

/**
* Gets an optional name the current info for a rectangle or the parent layout
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
* @param[in]  rect TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void GetRectName_LAYOUT(void* p_geo, const int32_t* layout, const int32_t* rect, char* name, const int32_t* size);

/**
* Add a constraint between any two rectangles or to one with absolute positioning
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
* @param[in]  rect_from TODO
* @param[in]  constr_from TODO
* @param[in]  rect_to TODO
* @param[in]  constr_to TODO
* @param[in]  o_mod TODO
* @param[in]  m_mod TODO
* @return 0 - OK
* 1 - Error
**
* @par Note 
*      Constraints can be applied between 2 rectangles in the layout, or to 1 rectangle with
*      absolute positioning. Use the constraints to control left, right, bottom, top,
*      width, height, or centering configurations. Examples:
*      
*      (ordered as rectangle from, constraint from, rectangle to, constraint to, offset modifier, multiplicative modifier)
*      
*      A, LAYOUT_CONSTR_LEFT, B, LAYOUT_CONSTR_LEFT, 0, 0, 1.0 		               Set left position of A equal to left pos of B
*      A, LAYOUT_CONSTR_LEFT, B, LAYOUT_CONSTR_RIGHT, 0, 0, 1.0		               Set left pos of A equal to right of B
*      
*      The offset modifier is used for additive manipulation of constraints
*      A, LAYOUT_CONSTR_LEFT, B, LAYOUT_CONSTR_LEFT, 10, 0, 1.0		               Set left pos of A equal to left of B, plus 10
*      A, LAYOUT_CONSTR_BOTTOM, B, LAYOUT_CONSTR_TOP, -20, 0, 1.0	               Set bottom of A equal to top of B, minus 20
*      
*      Multiplicative manipulation of constraints
*      A, LAYOUT_CONSTR_WIDTH, B, LAYOUT_CONSTR_WIDTH, 0, 0.5	                  Set the width of A equal to 0.5 times the width of B
*      A, LAYOUT_CONSTR_HEIGHT, B, LAYOUT_CONSTR_WIDTH, 0, 1.2	                  Set the height of A equal to 1.2 times the width of B
*      
*      You can use BOTH the multiplicative and offset modifiers in conjunction (multiplicative gets precedence)
*      A, LAYOUT_CONSTR_WIDTH, B, LAYOUT_CONSTR_WIDTH, 10, 0.5 	                  A(width) = (0.5 * B(width)) + 10
*      A, LAYOUT_CONSTR_LEFT, B, LAYOUT_CONSTR_WIDTH, -20, 0.1	                  A(left) = (0.1 * B(width)) + (-20)
*      
*      If second node is -2, use absolute positioning
*      A,LAYOUT_CONSTR_LEFT,-2,<ignored>,25,<ignored>,<ignored> 	               Position left of A at position 25
*      A,LAYOUT_CONSTR_WIDTH,-2,<ignored>,30,<ignored>,<ignored>	               Set width of A to 30
*      
*      Use the MOVE constraints to move an entire window without resizing
*      A, LAYOUT_CONSTR_MOVEL, B, LAYOUT_CONSTR_LEFT, 0, 0, 1.0	                  Move node A, align left with left side of B
*      A, LAYOUT_CONSTR_MOVEL, B, LAYOUT_CONSTR_RIGHT, 0, 0, 1.0	               Move node A, align left with right side of B
*      A, LAYOUT_CONSTR_MOVET, B, LAYOUT_CONSTR_WIDTH, 0, 0, 1.0	               Move node A, align bottom to position equal to width of B
*      A, LAYOUT_CONSTR_MOVER, B, LAYOUT_CONSTR_RIGHT, 10, 1.1	                  Move node A, align right to 1.1*right of B, plus 10
*      A, LAYOUT_CONSTR_MOVEL, NULL, 10, 0, 1.0	                                 Move node A, align left at position 10
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT int32_t iAddConstraint_LAYOUT(void* p_geo, const int32_t* layout, const int32_t* rect_from, const int32_t* constr_from, const int32_t* rect_to, const int32_t* constr_to, const double* o_mod, const double* m_mod);

/**
* Adds a rectangle as one of the layout's children (Higer.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @return Rectangle number, -1 on error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT int32_t iAddRectangle_LAYOUT(void* p_geo, const int32_t* layout, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Returns the number of children in the list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
* @return Number of rectangles not counting the parent
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT int32_t iNumRectangles_LAYOUT(void* p_geo, const int32_t* layout);

/**
* Sets the current bounds for a rectangle previously added to the layout
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
* @param[in]  rect TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void SetRectangle_LAYOUT(void* p_geo, const int32_t* layout, const int32_t* rect, const double* min_x, const double* min_y, const double* max_x, const double* max_y);

/**
* Sets an optional name the current info for a rectangle or the parent layout
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  layout TODO
* @param[in]  rect TODO
* @param[in]  p3 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void SetRectangleName_LAYOUT(void* p_geo, const int32_t* layout, const int32_t* rect, const char* p3);

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
