//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file exp_gxlib.h
* @date 2017-11-06
* @brief File containing EXP GX C API constant and function declarations
*/

/**
* @defgroup EXP_Module EXP
* EXP objects are created from text strings that contain
* C-like math to be applied to channels in a database.
* It is used with the Math_DU function (see DU). See also
* IEXP for applying math expressions to images (grids).
* See also Math_DU applies expressions to the database
* @{
*/

#pragma once
#ifndef HEXP_H_DEFINED
#define HEXP_H_DEFINED

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
* This method creates an EXP object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  formula TODO
* @param[in]  max_len TODO
* @return EXP Object
**
* @par Note 
*      Expressions are strings that contain C-like math to be
*      applied to channels in a database.  For example, following
*      an expression:
*      
*      ::
*      
*         "@a = mag-64000; @b = gravity*100;
*          $sRatio = @a/@b;
*          MULT = @a *@b;"
*      
*      Rules:
*      
*         ;
*           terminates a sub-expression
*      
*         @
*           prefix to a temporary name, which is a double precision
*           floating point number to be used later in the same
*           expression.
*      
*         $
*           prefix to a local GX variable name.  Such names will be
*           evaluated to the variable value at the time Create_EXP
*           is called.
*      
*      All other tokens are assumed to be channel names.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_EXP(void* p_geo, const int32_t* db, const char* formula, const int32_t* max_len);

/**
* This method creates an EXP object from a file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
* @return EXP Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateFile_EXP(void* p_geo, const int32_t* db, const char* file);

/**
* This method destroys a EXP object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  exp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_EXP(void* p_geo, const int32_t* exp);

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
