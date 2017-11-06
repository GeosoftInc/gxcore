//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file fft2_gxlib.h
* @date 2017-11-06
* @brief File containing FFT2 GX C API constant and function declarations
*/

/**
* @defgroup FFT2_Module FFT2
* 2-D Fast Fourier Transforms
* These methods now work with an IMG object, instead of creating
* their own FFT2 object.
* @{
*/

#pragma once
#ifndef HFFT2_H_DEFINED
#define HFFT2_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name FFT2_PG Definitions
* 
* Pager Direction
*/
///@{
/** 
* FFT2_PG_FORWARD
*/
#define FFT2_PG_FORWARD 0
/** 
* FFT2_PG_INVERSE
*/
#define FFT2_PG_INVERSE 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* FFT2 transform
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  trn_fil TODO
* @param[in]  spc_fil TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Fft2In_FFT2(void* p_geo, const int32_t* im_gi, const char* trn_fil, const char* spc_fil);

/**
* Apply 2D FFT filters to data in pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  con_fil TODO
* @param[in]  tr TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  rot TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void FilterPG_FFT2(void* p_geo, const int32_t* pg, const char* con_fil, const int32_t* tr, const double* dx, const double* dy, const double* rot);

/**
* FFT2 filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  out_fil TODO
* @param[in]  con_fil TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Flt_FFT2(void* p_geo, const int32_t* im_gi, const char* out_fil, const char* con_fil);

/**
* FFT2 filter and inverse
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  out_fil TODO
* @param[in]  con_fil TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void FltInv_FFT2(void* p_geo, const int32_t* im_gi, const char* out_fil, const char* con_fil);

/**
* FFT2 transform power spectrum
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  spc_fil TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void PowSpc_FFT2(void* p_geo, const int32_t* im_gi, const char* spc_fil);

/**
* FFT2 transform Radially averaged power spectrum
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  spc_fil TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void RadSpc_FFT2(void* p_geo, const int32_t* im_gi, const char* spc_fil);

/**
* FFT2 transform Radially averaged power spectrum for one IMG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void RadSpc1_FFT2(void* p_geo, const int32_t* img, const int32_t* vv);

/**
* FFT2 transform Radially averaged power spectrum for two IMGs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img1 TODO
* @param[in]  img2 TODO
* @param[in]  vv TODO
* @param[in]  v_vst TODO
* @param[in]  opt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT void RadSpc2_FFT2(void* p_geo, const int32_t* img1, const int32_t* img2, const int32_t* vv, const int32_t* v_vst, const int32_t* opt);

/**
* FFT2 filter (calculate T from the derivatives Tx and Ty)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img_tx TODO
* @param[in]  img_ty TODO
* @param[in]  out_fil TODO
* @param[in]  inv_flg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0.1
*/
GX_EXPORT void TdXdY_FFT2(void* p_geo, const int32_t* img_tx, const int32_t* img_ty, const char* out_fil, const int32_t* inv_flg);

/**
* Apply 2D FFT transform to data in pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  opt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void TransPG_FFT2(void* p_geo, const int32_t* pg, const int32_t* opt);

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
