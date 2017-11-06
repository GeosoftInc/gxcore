//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file eul3_gxlib.h
* @date 2017-11-06
* @brief File containing EUL3 GX C API constant and function declarations
*/

/**
* @defgroup EUL3_Module EUL3
* This is a specialized class which performs 3D Euler deconvolution
* for potential field interpretation.
* @{
*/

#pragma once
#ifndef HEUL3_H_DEFINED
#define HEUL3_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name EUL3_RESULT Definitions
* 
* Euler result types
*/
///@{
/** 
* EUL3_RESULT_X
*/
#define EUL3_RESULT_X 1
/** 
* EUL3_RESULT_Y
*/
#define EUL3_RESULT_Y 2
/** 
* EUL3_RESULT_DEPTH
*/
#define EUL3_RESULT_DEPTH 3
/** 
* EUL3_RESULT_BACKGROUND
*/
#define EUL3_RESULT_BACKGROUND 4
/** 
* EUL3_RESULT_DEPTHERROR
*/
#define EUL3_RESULT_DEPTHERROR 5
/** 
* EUL3_RESULT_LOCATIONERROR
*/
#define EUL3_RESULT_LOCATIONERROR 6
/** 
* EUL3_RESULT_WINDOWX
*/
#define EUL3_RESULT_WINDOWX 7
/** 
* EUL3_RESULT_WINDOWY
*/
#define EUL3_RESULT_WINDOWY 8
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Destroys a EUL3 object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  eul3 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void _Destr_EUL3(void* p_geo, const int32_t* eul3);

/**
* Creates an EUL3 object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  imgt TODO
* @param[in]  imgtx TODO
* @param[in]  imgty TODO
* @param[in]  imgtz TODO
* @param[in]  wnd_siz TODO
* @param[in]  gi TODO
* @param[in]  tolrnc TODO
* @param[in]  max_dis TODO
* @param[in]  obs_flg TODO
* @param[in]  obs_hght TODO
* @param[in]  obs_elev TODO
* @return EUL3 Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Creat_EUL3(void* p_geo, const int32_t* imgt, const int32_t* imgtx, const int32_t* imgty, const int32_t* imgtz, const int32_t* wnd_siz, const double* gi, const double* tolrnc, const double* max_dis, const int32_t* obs_flg, const double* obs_hght, const double* obs_elev);

/**
* Get a result field VV from EUL3 object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  eul3 TODO
* @param[in]  vv_r TODO
* @param[in]  pi_res_field TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetResult_EUL3(void* p_geo, const int32_t* eul3, const int32_t* vv_r, const int32_t* pi_res_field);

/**
* Write the results of EUL3 object to output file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  eul3 TODO
* @param[in]  out_fil TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Write_EUL3(void* p_geo, const int32_t* eul3, const char* out_fil);

/**
* Calculates gradients
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_dist TODO
* @param[in]  pr_dx TODO
* @param[in]  vv_mag TODO
* @param[in]  length TODO
* @param[in]  vv_gx TODO
* @param[in]  vv_gz TODO
* @param[in]  max_sol TODO
* @return 0 for OK, -1 for Error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.0
*/
GX_EXPORT int32_t ExEulerDerive_EUL3(void* p_geo, const int32_t* vv_dist, const double* pr_dx, const int32_t* vv_mag, const int32_t* length, const int32_t* vv_gx, const int32_t* vv_gz, const int32_t* max_sol);

/**
* Does the exeuler depth calculations
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  typ TODO
* @param[in]  p2 TODO
* @param[in]  p3 TODO
* @param[in]  p4 TODO
* @param[in]  p5 TODO
* @param[in]  p6 TODO
* @param[in]  p7 TODO
* @param[in]  p8 TODO
* @param[in]  p9 TODO
* @param[in]  p10 TODO
* @param[in]  p11 TODO
* @param[in]  p12 TODO
* @param[in]  p13 TODO
* @param[in]  p14 TODO
* @param[in]  p15 TODO
* @param[in]  p16 TODO
* @param[in]  p17 TODO
* @param[in]  p18 TODO
* @param[in]  p19 TODO
* @param[in]  p20 TODO
* @return >0 for OK, -1 for Error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 9.0
*/
GX_EXPORT int32_t ExEulerCalc_EUL3(void* p_geo, const int32_t* typ, const double* p2, const int32_t* p3, const double* p4, const double* p5, const double* p6, const double* p7, const double* p8, const double* p9, const double* p10, const int32_t* p11, const int32_t* p12, const int32_t* p13, const int32_t* p14, const int32_t* p15, const int32_t* p16, const int32_t* p17, const int32_t* p18, const int32_t* p19, const int32_t* p20);

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
