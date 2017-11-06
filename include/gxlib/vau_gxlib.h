//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file vau_gxlib.h
* @date 2017-11-06
* @brief File containing VAU GX C API constant and function declarations
*/

/**
* @defgroup VAU_Module VAU
* This is not a class. These are methods that work on
* data stored in VA objects
* @{
*/

#pragma once
#ifndef HVAU_H_DEFINED
#define HVAU_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name VAU_PRUNE Definitions
* 
* Prune Options
*/
///@{
/** 
* VAU_PRUNE_DUMMY
*/
#define VAU_PRUNE_DUMMY 0
/** 
* VAU_PRUNE_VALID
*/
#define VAU_PRUNE_VALID 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Prune values from a VA based on reference VA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  v_ap TODO
* @param[in]  vv_r TODO
* @param[in]  o TODO
**
* @par Note 
*      Pruning will shorten the VA by removing values
*      that are either dummy or non-dummy in the reference
*      VA
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Prune_VAU(void* p_geo, const int32_t* v_ap, const int32_t* vv_r, const int32_t* o);

/**
* Calculate total vector for X,Y and Z components
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  xva TODO
* @param[in]  yva TODO
* @param[in]  zva TODO
* @param[in]  tva TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void TotalVector_VAU(void* p_geo, const int32_t* xva, const int32_t* yva, const int32_t* zva, const int32_t* tva);

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
