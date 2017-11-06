//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file fft_gxlib.h
* @date 2017-11-06
* @brief File containing FFT GX C API constant and function declarations
*/

/**
* @defgroup FFT_Module FFT
* This class allows for the application of predefined
* filters to data in an OASIS database. The system uses
* the Winograd algorithm to transform data in the spatial
* domain to the wavenumber or Fourier domain.
* @{
*/

#pragma once
#ifndef HFFT_H_DEFINED
#define HFFT_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name FFT_DETREND Definitions
* 
* Detrending option
*/
///@{
/** 
* FFT_DETREND_NONE
* 
* No trend remove
*/
#define FFT_DETREND_NONE 0
/** 
* FFT_DETREND_ENDS
* 
* Detrend order 1 using only two end points
*/
#define FFT_DETREND_ENDS 1
/** 
* FFT_DETREND_ALL
* 
* Detrend order 1 using all data points
*/
#define FFT_DETREND_ALL 2
/** 
* FFT_DETREND_MEAN
* 
* Remove mean value
*/
#define FFT_DETREND_MEAN 3
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Appparent density filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  thick TODO
* @param[in]  dens TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void AppDens_FFT(void* p_geo, const int32_t* fft, const double* thick, const double* dens);

/**
* Apparent susceptiblity filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  strength TODO
**
* @par Note 
*      Reduction to magnetic pole (RedPol_FFT) and downward continuation
*      (Contin_FFT) should be called BEFORE using AppSusc_FFT.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void AppSusc_FFT(void* p_geo, const int32_t* fft, const double* strength);

/**
* Bandpass filter (using low and high wavelength cutoffs)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  llen TODO
* @param[in]  hlen TODO
* @param[in]  pass_defined TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void BandPass_FFT(void* p_geo, const int32_t* fft, const double* llen, const double* hlen, const int32_t* pass_defined);

/**
* Butterworth filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  clen TODO
* @param[in]  degree TODO
* @param[in]  filter_type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void BWorth_FFT(void* p_geo, const int32_t* fft, const double* clen, const double* degree, const int32_t* filter_type);

/**
* RC filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  clen TODO
* @param[in]  filter_type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 8.5
*/
GX_EXPORT void RCFilter_FFT(void* p_geo, const int32_t* fft, const double* clen, const int32_t* filter_type);

/**
* Upward/Downward continuation filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  dist TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Contin_FFT(void* p_geo, const int32_t* fft, const double* dist);

/**
* Cosine roll-off filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  llen TODO
* @param[in]  hlen TODO
* @param[in]  degree TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void CosRoll_FFT(void* p_geo, const int32_t* fft, const double* llen, const double* hlen, const double* degree, const int32_t* type);

/**
* Create a New FFT with detrend options.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gvv TODO
* @param[in]  interv TODO
* @param[in]  trend TODO
* @return FFT Object
**
* @par Note 
*      The detrending options control the removal of a trend from the data
*      before the FFT is applied. The default data expansion is 10% before FFT.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_FFT(void* p_geo, const int32_t* gvv, const double* interv, const int32_t* trend);

/**
* Create a New FFT with detrend and expansion options.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gvv TODO
* @param[in]  interv TODO
* @param[in]  trend TODO
* @param[in]  expansion TODO
* @return FFT Object
**
* @par Note 
*      The detrending options control the removal of a trend from the data
*      before the FFT is applied. The expansion options control the minimum
*      data expansion before the FFT is applied.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t CreateEx_FFT(void* p_geo, const int32_t* gvv, const double* interv, const int32_t* trend, const double* expansion);

/**
* Create FFT object with detrend options from reference (original) channel,
* but no FFT process.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gvv TODO
* @param[in]  interv TODO
* @param[in]  trend TODO
* @return FFT Object
**
* @par Note 
*      This just creates an object.  It is intended to be called
*      immediately after with SetVV_FFT.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateRef_FFT(void* p_geo, const int32_t* gvv, const double* interv, const int32_t* trend);

/**
* Create FFT object with detrend and expansion options from reference (original) channel,
* but no FFT process.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gvv TODO
* @param[in]  interv TODO
* @param[in]  trend TODO
* @param[in]  expansion TODO
* @param[in]  d_cmult TODO
* @return FFT Object
**
* @par Note 
*      This just creates an object.  It is intended to be called
*      immediately after with SetVV_FFT.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t CreateRefEx_FFT(void* p_geo, const int32_t* gvv, const double* interv, const int32_t* trend, const double* expansion, const double* d_cmult);

/**
* Destroy an FFT.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_FFT(void* p_geo, const int32_t* fft);

/**
* Gaussian filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  dev TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Gaus_FFT(void* p_geo, const int32_t* fft, const double* dev, const int32_t* type);

/**
* Copies real and imaginary VV's to user VV's.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  gv_vr TODO
* @param[in]  gv_vi TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void GetVV_FFT(void* p_geo, const int32_t* fft, const int32_t* gv_vr, const int32_t* gv_vi);

/**
* Horizontal derivative
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  order TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void HDrv_FFT(void* p_geo, const int32_t* fft, const double* order);

/**
* High bandpass filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  wlen TODO
* @param[in]  fid_int TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void HighPass_FFT(void* p_geo, const int32_t* fft, const double* wlen, const double* fid_int);

/**
* Horizontal integration
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.1.4
*/
GX_EXPORT void HInt_FFT(void* p_geo, const int32_t* fft);

/**
* Inverse the FFT from wave number domain to space domain
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  gvv TODO
* @param[in]  gv_vm TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Inverse_FFT(void* p_geo, const int32_t* fft, const int32_t* gvv, const int32_t* gv_vm);

/**
* Low bandpass filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  wlen TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void LowPass_FFT(void* p_geo, const int32_t* fft, const double* wlen);

/**
* Reduction to magnetic pole
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  inc TODO
* @param[in]  dec TODO
* @param[in]  incp TODO
* @param[in]  dir TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void RedPol_FFT(void* p_geo, const int32_t* fft, const double* inc, const double* dec, const double* incp, const double* dir);

/**
* Gets the Nyquist frequency (wavenumbers/sample unit).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @return Nyquist frequency (wavenumbers/sample unit).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT double rNyquist_FFT(void* p_geo, const int32_t* fft);

/**
* Gets the original sample increment.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @return Original sample increment.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT double rSampIncr_FFT(void* p_geo, const int32_t* fft);

/**
* Get the wave number increment.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @return Wave number increment
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT double rWaveIncr_FFT(void* p_geo, const int32_t* fft);

/**
* Sets real and imaginary VVs in FFT.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  gv_vr TODO
* @param[in]  gv_vi TODO
**
* @par Note 
*      The VV must have been obtained from the same FFT
*      using the SetVV_FFT method.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetVV_FFT(void* p_geo, const int32_t* fft, const int32_t* gv_vr, const int32_t* gv_vi);

/**
* Calculates a power spectrum
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  gvv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void Spectrum_FFT(void* p_geo, const int32_t* fft, const int32_t* gvv);

/**
* Vertical derivative
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  order TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void VDrv_FFT(void* p_geo, const int32_t* fft, const double* order);

/**
* Vertical integration
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void VInt_FFT(void* p_geo, const int32_t* fft);

/**
* Writes a power spectrum to a file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  fft TODO
* @param[in]  gvv TODO
* @param[in]  out_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftExtendedDesktopLicense">Geosoft Extended End-User License</a>
* @version 5.0
*/
GX_EXPORT void WriteSpectrum_FFT(void* p_geo, const int32_t* fft, const int32_t* gvv, const char* out_file);

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
