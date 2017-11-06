//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file vv_gxlib.h
* @date 2017-11-06
* @brief File containing VV GX C API constant and function declarations
*/

/**
* @defgroup VV_Module VV
* The VV class stores very long vector (array) data (such
* as channel data from an OASIS database) in memory and
* performs specific actions on the data. This set of
* functions is similar to the VM functions except that
* you cannot access data directly and therefore you cannot
* use a VV to pass data to an external (non-Geosoft)
* Dynamic Link Library (DLL) object function.
* 
* If you want to pass data to a DLL, you must move a subset
* of the data stored in memory to a small vector object and
* then use the GetPtrVM_GEO function to pass a pointer to the
* data on to the external function.
* 
* See VVU for more utility methods.
* @{
*/

#pragma once
#ifndef HVV_H_DEFINED
#define HVV_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name VV_DOUBLE_CRC_BITS Definitions
* 
* Number of bits to use in double CRC's
*/
///@{
/** 
* VV_DOUBLE_CRC_BITS_EXACT
* 
* Exact CRC
*/
#define VV_DOUBLE_CRC_BITS_EXACT 0
/** 
* VV_DOUBLE_CRC_BITS_DEFAULT
* 
* Default inaccuracy in double (10 Bits)
*/
#define VV_DOUBLE_CRC_BITS_DEFAULT 10
/** 
* VV_DOUBLE_CRC_BITS_MAX
* 
* Maximum number of inaccuracy bits
*/
#define VV_DOUBLE_CRC_BITS_MAX 51
///@}

/**
* @name VV_FLOAT_CRC_BITS Definitions
* 
* Number of bits to use in float CRC's
*/
///@{
/** 
* VV_FLOAT_CRC_BITS_EXACT
* 
* Exact CRC
*/
#define VV_FLOAT_CRC_BITS_EXACT 0
/** 
* VV_FLOAT_CRC_BITS_DEFAULT
* 
* Default inaccuracy in floats (7 Bits)
*/
#define VV_FLOAT_CRC_BITS_DEFAULT 7
/** 
* VV_FLOAT_CRC_BITS_MAX
* 
* Maximum number of inaccuracy bits
*/
#define VV_FLOAT_CRC_BITS_MAX 22
///@}

/**
* @name VV_LOG_BASE Definitions
* 
* Type of log to use
*/
///@{
/** 
* VV_LOG_BASE_10
* 
* Base 10
*/
#define VV_LOG_BASE_10 0
/** 
* VV_LOG_BASE_E
* 
* Base e
*/
#define VV_LOG_BASE_E 1
///@}

/**
* @name VV_LOG_NEGATIVE Definitions
* 
* Ways to handle negatives
*/
///@{
/** 
* VV_LOG_NEGATIVE_NO
* 
* Dummies out value less than the minimum.
*/
#define VV_LOG_NEGATIVE_NO 0
/** 
* VV_LOG_NEGATIVE_YES
* 
* if the data is in the range +/- minimum,
* it is left alone.  Otherwise, the data
* is divided by the minimum, the log is
* applied, the minimum is added and the
* sign is reapplied. Use _LogLinear_VV function
* if decades in results are required.
*/
#define VV_LOG_NEGATIVE_YES 1
///@}

/**
* @name VV_LOOKUP Definitions
* 
* Lookup style
*/
///@{
/** 
* VV_LOOKUP_EXACT
* 
* Only exact matches are used
*/
#define VV_LOOKUP_EXACT 0
/** 
* VV_LOOKUP_NEAREST
* 
* Nearest match is used (regardless of sampling range)
*/
#define VV_LOOKUP_NEAREST 1
/** 
* VV_LOOKUP_INTERPOLATE
* 
* Interpolate between values (regardless of sampling range)
*/
#define VV_LOOKUP_INTERPOLATE 2
/** 
* VV_LOOKUP_NEARESTCLOSE
* 
* Use nearest match only if within sampling range
*/
#define VV_LOOKUP_NEARESTCLOSE 3
/** 
* VV_LOOKUP_INTERPCLOSE
* 
* Interpolate only if within sampling range
*/
#define VV_LOOKUP_INTERPCLOSE 4
///@}

/**
* @name VV_MASK Definitions
* 
* Where to mask
*/
///@{
/** 
* VV_MASK_INSIDE
*/
#define VV_MASK_INSIDE 0
/** 
* VV_MASK_OUTSIDE
*/
#define VV_MASK_OUTSIDE 1
///@}

/**
* @name VV_ORDER Definitions
* 
* Specify if the data is montonically increasing or decreasing.
*/
///@{
/** 
* VV_ORDER_NONE
* 
* There is no specific data size ordering in the VV.
*/
#define VV_ORDER_NONE 0
/** 
* VV_ORDER_INCREASING
* 
* Every value is greater than or equal to the previous value.
*/
#define VV_ORDER_INCREASING 1
/** 
* VV_ORDER_DECREASING
* 
* Every value is less than or equal to the previous value.
*/
#define VV_ORDER_DECREASING 2
///@}

/**
* @name VV_SORT Definitions
* 
* Sort order
*/
///@{
/** 
* VV_SORT_ASCENDING
*/
#define VV_SORT_ASCENDING 0
/** 
* VV_SORT_DESCENDING
*/
#define VV_SORT_DESCENDING 1
///@}

/**
* @name VV_WINDOW Definitions
* 
* How to handle VV limits
*/
///@{
/** 
* VV_WINDOW_DUMMY
* 
* Dummy values outside the limits
*/
#define VV_WINDOW_DUMMY 0
/** 
* VV_WINDOW_LIMIT
* 
* Set values outside the limits to the limits
*/
#define VV_WINDOW_LIMIT 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Copy data from user memory to a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
* @param[in]  elements TODO
* @param[in]  data TODO
* @param[in]  gs_type TODO
* @return Nothing
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void iGetData_VV(void* p_geo, const int32_t* vv, int32_t start, int32_t elements, void* data, int32_t gs_type);

/**
* Copy data from user memory to a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
* @param[in]  elements TODO
* @param[in]  data TODO
* @param[in]  gs_type TODO
* @return Nothing
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void iSetData_VV(void* p_geo, const int32_t* vv, int32_t start, int32_t elements, const void* data, int32_t gs_type);

/**
* Copy one VV to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_d TODO
* @param[in]  vv_s TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Copy_VV(void* p_geo, const int32_t* vv_d, const int32_t* vv_s);

/**
* Copy part of a vector into part of another vector.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_d TODO
* @param[in]  dest TODO
* @param[in]  vv_s TODO
* @param[in]  source TODO
* @param[in]  n TODO
**
* @par Note 
*      1. Unlike Copy_VV destination VV is not reallocated, nor is
*      the length changed. The caller must make any desired changes.
*      
*      2. All VV types are supported and will be converted using
*      Convert_GS if necessary.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Copy2_VV(void* p_geo, const int32_t* vv_d, const int32_t* dest, const int32_t* vv_s, const int32_t* source, const int32_t* n);

/**
* Apply log to the vv.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  log_base TODO
* @param[in]  log_neg TODO
* @param[in]  log_min TODO
**
* @par Note 
*      Minimum value will be defaulted to 1.0 if it is 0.0 or
*      less than 0.0
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Log_VV(void* p_geo, const int32_t* vv, const int32_t* log_base, const int32_t* log_neg, const double* log_min);

/**
* Take the log10 or original value of a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  log_min TODO
**
* @par Note 
*      If the data is in the range +/- minimum value,
*      it is left alone. Otherwise, the result is calculated as
*      
*      ::
*      
*           d = dMin * (log10(fabs(d)/dMin)+1.0)
*      
*      Sign is reapplied to d.
*      
*      Minimum value will be defaulted to 1.0 if it is negative
*      or 0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _LogLinear_VV(void* p_geo, const int32_t* vv, const double* log_min);

/**
* Mask one VV against another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  vv_m TODO
**
* @par Note 
*      All elements in the mask VV that are dummies will replace
*      the value in the original VV with a dummy.
*      
*      The modified VV will always be the same length as the mask
*      VV after this call.  If the mask is longer than the target,
*      the target will be lengthenned with dummies.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void _Mask_VV(void* p_geo, const int32_t* vv, const int32_t* vv_m);

/**
* Reverses the order of the data in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void _Reverse_VV(void* p_geo, const int32_t* vv);

/**
* Serialize
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gvv TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Serial_VV(void* p_geo, const int32_t* gvv, const int32_t* bf);

/**
* Translate (VV + base ) * mult
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  base TODO
* @param[in]  mult TODO
**
* @par Note 
*      All VV types now supported.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Trans_VV(void* p_geo, const int32_t* vv, const double* base, const double* mult);

/**
* Take the absolute value of values in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void Abs_VV(void* p_geo, const int32_t* vv);

/**
* Add two VVs: VV_A + VV_B = VV_C
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void Add_VV(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Add two VVs with linear factors: VV_A*f1 + VV_B*f2 = VV_C
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  f1 TODO
* @param[in]  vv_y TODO
* @param[in]  f2 TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      The multipliers must be defined and within the GS_R8MN GS_R8MX range.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void Add2_VV(void* p_geo, const int32_t* vv_x, const double* f1, const int32_t* vv_y, const double* f2, const int32_t* vv_z);

/**
* Appends VV's
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  vv_a TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Append_VV(void* p_geo, const int32_t* vv, const int32_t* vv_a);

/**
* Copy VM data to a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  vm TODO
**
* @par Note 
*      The VV will be resized to the length of the VM.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CopyVMtoVV_VV(void* p_geo, const int32_t* vv, const int32_t* vm);

/**
* Copy VV data to a VM.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vm TODO
* @param[in]  vv TODO
**
* @par Note 
*      The VM will be resized to the length of the VV.
*      The pointer to data in the VM may move.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CopyVVtoVM_VV(void* p_geo, const int32_t* vm, const int32_t* vv);

/**
* Compute the CRC value of a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  pul_crc TODO
* @return CRC Value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CRC_VV(void* p_geo, const int32_t* vv, const int32_t* pul_crc);

/**
* Compute the CRC value of a VV and allows you to specify
* number of bits of floats/doubles to drop so that the CRC
* will be same even of this are changed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  pul_crc TODO
* @param[in]  float_bits TODO
* @param[in]  double_bits TODO
* @return CRC Value
**
* @par Note 
*      Very useful for testing where the last bits of accuracy
*      are not as important.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CRCInexact_VV(void* p_geo, const int32_t* vv, const int32_t* pul_crc, const int32_t* float_bits, const int32_t* double_bits);

/**
* Create a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  elements TODO
* @return VV Object
**
* @par Note 
*      To set the fiducial start and increment for the data in the VV
*      you need to call SetFidStart_VV and SetFidIncr_VV.
*      
*      If you are basing the VV data on fiducial information from a
*      different VV, call GetFidStart_VV and GetFidIncr_VV to obtain
*      that VV's fiducial information. Do this prior to setting the
*      new VV's fiducial start and increment.
*      
*      If you do not know the required length for a VV, use 0
*      and the VV length will be adjusted as needed.  This is
*      a bit less efficient than setting the length when you
*      know it.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_VV(void* p_geo, const int32_t* type, const int32_t* elements);

/**
* Create a VV, using one of the GS_TYPES special data types.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  elements TODO
* @return VV Object
**
* @par Note 
*      See Create_VV
*      
*      Do not use data type flags: GS_INT or GS_REAL,
*      this will result in a respective data type of unsigned byte or
*      short for the VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateExt_VV(void* p_geo, const int32_t* type, const int32_t* elements);

/**
* Create a VV  from serialized source.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return VV Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateS_VV(void* p_geo, const int32_t* bf);

/**
* Destroy a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_VV(void* p_geo, const int32_t* vv);

/**
* Calculate differences.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  n TODO
**
* @par Note 
*      Differences with dummies result in dummies.
*      An even number of differences locates data accurately.
*      An odd number of differences locates result 1/2 element lower
*      in the VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Diff_VV(void* p_geo, const int32_t* vv, const int32_t* n);

/**
* Divide one VV by another: VV_A / VV_B = VV_C
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void Divide_VV(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Re-sample a pair of VV's to match each other.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv1 TODO
* @param[in]  vv2 TODO
**
* @par Note 
*      Both VV's will return with the same start
*      fid and fid increment.  The smaller start fid
*      and fid increment will be used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void FidNorm_VV(void* p_geo, const int32_t* vv1, const int32_t* vv2);

/**
* Fill a VV with an int value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  int TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FillInt_VV(void* p_geo, const int32_t* vv, const int32_t* int);

/**
* Fill a VV with a real value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FillReal_VV(void* p_geo, const int32_t* vv, const double* val);

/**
* Fill a VV with a string value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  str_val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FillString_VV(void* p_geo, const int32_t* vv, const char* str_val);

/**
* Get VV data and place it in a VM. (OBSOLETE)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  vm TODO
* @param[in]  loc TODO
**
* @par Note 
*      See CopyVVtoVM_VV, which is a prefered method to move VV data
*      into a VM.  This method is mainly provided for old compatibility.
*      
*      The VM will be lengthened if required.
*      
*      If the VM is longer than required, extra data past the end
*      of the VV will be set to dummy in the VM.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetVM_VV(void* p_geo, const int32_t* vv, const int32_t* vm, const int32_t* loc);

/**
* Count the number of dummies in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
* @param[in]  elem TODO
* @return The count
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iCountDummies_VV(void* p_geo, const int32_t* vv, const int32_t* start, const int32_t* elem);

/**
* Finds the first dummy or non-dummy value in a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
* @param[in]  end TODO
* @param[in]  yn TODO
* @param[in]  order TODO
* @return The index of the first dummy or non-dummy value.
* -1 if not found, 0 if the length of the VV is 0.
**
* @par Note 
*      If a decreasing order search is performed, it will start
*      at the highest element specified. (Conversely, an increasing
*      order starts at the lowest element specified.)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFindDum_VV(void* p_geo, const int32_t* vv, const int32_t* start, const int32_t* end, const int32_t* yn, const int32_t* order);

/**
* Gets the Fiducial expansion from a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @return Number of expanions for this VV (see ReFidVV_VV)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t iGetFidExpansion_VV(void* p_geo, const int32_t* vv);

/**
* Get an integer element from a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  element TODO
* @return Element wanted, or iDUMMY
* if the value is dummy or outside of the range of data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetInt_VV(void* p_geo, const int32_t* vv, const int32_t* element);

/**
* Get a string element from a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  element TODO
* @param[out] str_val TODO
* @param[in]  str_size TODO
**
* @par Note 
*      Returns Element wanted, or blank string
*      if the value is dummy or outside of the range of data.
*      
*      Type conversions are performed if necessary.  Dummy values
*      are converted to "*" string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetString_VV(void* p_geo, const int32_t* vv, const int32_t* element, char* str_val, const int32_t* str_size);

/**
* Get the index where the maximum value occurs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[out] max TODO
* @return Index of the maximum value, iDUMMY if no valid data.
**
* @par Note 
*      If more than one value has the same maximum value, the index of the
*      first is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT int32_t iIndexMax_VV(void* p_geo, const int32_t* vv, double* max);

/**
* Returns current VV length.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @return # of elements in the VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLength_VV(void* p_geo, const int32_t* vv);

/**
* Insert items into a VV using an index VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_o TODO
* @param[in]  vv_d TODO
* @param[in]  vv_i TODO
**
* @par Note 
*      The items in the input data VV are inserted into
*      the output VV using the indices in the index VV.
*      Values not referenced are not altered, so the output
*      VV should be pre-initialized. The output VV length
*      will NOT be changed, and index values referencing
*      beyond the end of the output VV data will return an
*      error.
*      
*      This function is useful when working with channel data that include
*      dummies, but where the dummies must be removed before processing.
*      Create and initialize an index (0, 1, 2...) VV, using the InitIndex_VV
*      function, and when you remove
*      the dummies, remove the corresponding index values as well.
*      After processing, init a VV to dummies, then use IndexInsert_VV to
*      put the processed values at the correct locations in the data VV
*      before you write it back to the channel.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void IndexInsert_VV(void* p_geo, const int32_t* vv_o, const int32_t* vv_d, const int32_t* vv_i);

/**
* Reorder a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_i TODO
* @param[in]  vv_d TODO
**
* @par Note 
*      Given an index VV (of type INT), this method reorders a
*      VV. Please make sure that the index holds valid information.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IndexOrder_VV(void* p_geo, const int32_t* vv_i, const int32_t* vv_d);

/**
* Initialize an index VV to values 0, 1, 2, etc...
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  n TODO
**
* @par Note 
*      Populates a VV with the values 0, 1, 2, 3, 4 etc., to be
*      used for various indexing functions, such as IndexInsert_VV or
*      IndexOrder_VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void InitIndex_VV(void* p_geo, const int32_t* vv, const int32_t* n);

/**
* Inverse of the _Log_VV function.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  log_base TODO
* @param[in]  log_neg TODO
* @param[in]  log_min TODO
**
* @par Note 
*      This is the inverse function for _Log_VV, with the same inputs.
*      
*      NEGATIVE_NO    - will not return values smaller than the input minimum
*      NEGATIVE_YES   - if the data is in the range +/- minimum,
*      it is left alone.  Otherwise, the sign is removed,
*      the minimum is subtracted, the log of the minimum is added,
*      and the exponential (base e or base 10) is taken of the
*      sum. The sign is then reapplied.
*      Minimum value will be defaulted to 1.0 if it is 0.0 or
*      less than 0.0
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void InvLog_VV(void* p_geo, const int32_t* vv, const int32_t* log_base, const int32_t* log_neg, const double* log_min);

/**
* Identifies the data size order of the elements.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[out] rep TODO
* @return VV_ORDER
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.4
*/
GX_EXPORT int32_t iOrder_VV(void* p_geo, const int32_t* vv, int32_t* rep);

/**
* Convert a 2D Line segment VV into X and Y VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      Some GX functions (such as GetVoronoiEdges_TIN) return
*      a special VV where each element contains the start and end
*      points of lines, (X_1, Y_1) and (X_2, Y_2).
*      This GX dumps the individual X and Y values into individual
*      X and Y VVs of type GS_DOUBLE (REAL). N lines produces 2*N
*      X and Y values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT void LinesToXY_VV(void* p_geo, const int32_t* vv, const int32_t* vv_x, const int32_t* vv_y);

/**
* Lookup a VV from another VV using an index VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vvd TODO
* @param[in]  vvi TODO
* @param[in]  vvr TODO
**
* @par Note 
*      This method assigns index values of 0.0, 1.0, 2.0 etc. to the individual
*      values in the input Data VV, and uses linear interpolation to calculate the values of
*      Result VV at the input indices contained in the Index VV.
*      
*      If the input Data VV is string type, then only values at the integral index values
*      are returned.
*      
*      See also SetupIndex_VV for an example of how this can be implemented.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void LookupIndex_VV(void* p_geo, const int32_t* vvd, const int32_t* vvi, const int32_t* vvr);

/**
* Make this VV use regular instead of virtual memory.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
**
* @par Note 
*      This function should be called immediately aftter
*      Create_VV.
*      
*      Normal VVs are optimised to prevent thrashing, and to
*      efficiently support many extremely large VVs, although
*      there is a small performance penalty.
*      This function is intended for VV's that you know can be
*      handled by the operating system virtual memory manager,
*      and will be used heavily.  By using a memory based VV, you
*      can achieve some performance improvements provided your
*      application does not cause the memory manager to "thrash".
*      
*      External programs that use the GX API may prefer to use
*      memory-based VV's because you can get direct access to
*      the VV through the GetPtrVV_GEO function (see gx_extern.h).
*
* @par See also 
*      GetPtrVV_GEO in gx_extern.h
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void MakeMemBased_VV(void* p_geo, const int32_t* vv);

/**
* Create mask from logical AND of two VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      If both values are non-dummies, then result is 1, else dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void MaskAND_VV(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Create mask from logical OR of two VVs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      If either values is non-dummy, then result is 1, else dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.2
*/
GX_EXPORT void MaskOR_VV(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Mask one VV against another using a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_d TODO
* @param[in]  vv_m TODO
* @param[in]  str_val TODO
**
* @par Note 
*      All elements in the mask VV that are same as string will replace
*      the original VV with a 1.
*      
*      The modified VV will always be expanded to the MaskVV size but
*      not shortened after this call.  If the mask is longer than the target,
*      the target will be lengthenned with dummies before applying the mask.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void MaskStr_VV(void* p_geo, const int32_t* vv_d, const int32_t* vv_m, const char* str_val);

/**
* Multiply two VVs: VV_A * VV_B = VV_C
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void Multiply_VV(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Calculate the 3D length for XYZ component VVs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_a TODO
* @param[in]  v_vx TODO
* @param[in]  v_vy TODO
* @param[in]  v_vz TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0.1
*/
GX_EXPORT void Amplitude3D_VV(void* p_geo, const int32_t* vv_a, const int32_t* v_vx, const int32_t* v_vy, const int32_t* v_vz);

/**
* Mask a VV using XY data and a polygon
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  xvv TODO
* @param[in]  yvv TODO
* @param[in]  rvv TODO
* @param[in]  pply TODO
* @param[in]  dummy TODO
**
* @par Note 
*      The VVs has to be the same length
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.3
*/
GX_EXPORT void PolygonMask_VV(void* p_geo, const int32_t* xvv, const int32_t* yvv, const int32_t* rvv, const int32_t* pply, const int32_t* dummy);

/**
* This method projects an X and Y VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
**
* @par Note 
*      This function is equivalent to ConvertVV_PJ.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Project_VV(void* p_geo, const int32_t* pj, const int32_t* vv_x, const int32_t* vv_y);

/**
* This method projects an X,Y,Z VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pj TODO
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
**
* @par Note 
*      This function is equivalent to ConvertVV3_PJ.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Project3D_VV(void* p_geo, const int32_t* pj, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Get the min. and max. values of a VV while ignoring dummies.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[out] min TODO
* @param[out] max TODO
**
* @par Note 
*      Minimum and maximum become GS_R8DM if entire VV is dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void RangeDouble_VV(void* p_geo, const int32_t* vv, double* min, double* max);

/**
* Re-sample a VV to a new fid start/icrement
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
* @param[in]  incr TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReFid_VV(void* p_geo, const int32_t* vv, const double* start, const double* incr, const int32_t* length);

/**
* Re-sample a VV to match another VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  vv_m TODO
**
* @par Note 
*      This method will honor the VV FID Expansion and will expand/contract
*      VV's based on this flag if it is used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReFidVV_VV(void* p_geo, const int32_t* vv, const int32_t* vv_m);

/**
* Resamples a VV from one fid/incr to another fid/incr.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  c_start TODO
* @param[in]  c_incr TODO
* @param[in]  n_start TODO
* @param[in]  n_incr TODO
* @param[in]  length TODO
* @param[in]  extr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void ReSample_VV(void* p_geo, const int32_t* vv, const double* c_start, const double* c_incr, const double* n_start, const double* n_incr, const int32_t* length, const int32_t* extr);

/**
* Gets the Fiducial increment from a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @return Fiducial increment of the VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetFidIncr_VV(void* p_geo, const int32_t* vv);

/**
* Gets the Fiducial start from a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @return Fiducial start of the VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetFidStart_VV(void* p_geo, const int32_t* vv);

/**
* Get a real element from a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  element TODO
* @return Element wanted, or rDUMMY
* if the value is dummy or outside of the range of data.
**
* @par Note 
*      Type conversions are performed if necessary.  Dummy values
*      are converted to "*" string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetReal_VV(void* p_geo, const int32_t* vv, const int32_t* element);

/**
* Calculate the sum of the values in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @return The sum of the elements.
**
* @par Note 
*      Dummy value is treated as Zero(0)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT double rSum_VV(void* p_geo, const int32_t* vv);

/**
* Calculate the weighted average of the values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_elements TODO
* @param[in]  vv_weights TODO
* @return The weighted average of the values.
**
* @par Note 
*      Dummy values are ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT double rWeightedMean_VV(void* p_geo, const int32_t* vv_elements, const int32_t* vv_weights);

/**
* Sets the Fiducial expansion from a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  expand TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void SetFidExpansion_VV(void* p_geo, const int32_t* vv, const int32_t* expand);

/**
* Sets the Fiducial increment of a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  incr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetFidIncr_VV(void* p_geo, const int32_t* vv, const double* incr);

/**
* Sets the Fiducial start of a VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetFidStart_VV(void* p_geo, const int32_t* vv, const double* start);

/**
* Set an integer element in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  element TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VV length, the VV length is
*      increased.
*      It is good practice to set the length ahead of time to the
*      expected maximum value, as some VV processes rely on the
*      current maximum length of the VV when you pass it in as an
*      argument, and unexpected results may occur if the length is
*      not what you expect it to be because of dynamic allocation at
*      an earlier time.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInt_VV(void* p_geo, const int32_t* vv, const int32_t* element, const int32_t* value);

/**
* Set N integer elements in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
* @param[in]  n TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VV length, the VV length is
*      increased.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetIntN_VV(void* p_geo, const int32_t* vv, const int32_t* start, const int32_t* n, const int32_t* value);

/**
* Set the length of a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  size TODO
**
* @par Note 
*      If increasing the VV size, new elements are set to dummies.
*      
*      It is good practice to set the length ahead of time to the
*      expected maximum value, as some VV processes rely on the
*      current maximum length of the VV when you pass it in as an
*      argument, and unexpected results may occur if the length is
*      not what you expect it to be because of dynamic allocation at
*      an earlier time.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLen_VV(void* p_geo, const int32_t* vv, const int32_t* size);

/**
* Set a real element in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  element TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VV length, the VV length is
*      increased.
*      It is good practice to set the length ahead of time to the
*      expected maximum value, as some VV processes rely on the
*      current maximum length of the VV when you pass it in as an
*      argument, and unexpected results may occur if the length is
*      not what you expect it to be because of dynamic allocation at
*      an earlier time.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReal_VV(void* p_geo, const int32_t* vv, const int32_t* element, const double* value);

/**
* Set N real elements in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
* @param[in]  n TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VV length, the VV length is
*      increased.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetRealN_VV(void* p_geo, const int32_t* vv, const int32_t* start, const int32_t* n, const double* value);

/**
* Set a string element in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  element TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VV length, the VV length is
*      increased.
*      It is good practice to set the length ahead of time to the
*      expected maximum value, as some VV processes rely on the
*      current maximum length of the VV when you pass it in as an
*      argument, and unexpected results may occur if the length is
*      not what you expect it to be because of dynamic allocation at
*      an earlier time.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetString_VV(void* p_geo, const int32_t* vv, const int32_t* element, const char* value);

/**
* Set N string elements in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  start TODO
* @param[in]  n TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VV length, the VV length is
*      increased.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetStringN_VV(void* p_geo, const int32_t* vv, const int32_t* start, const int32_t* n, const char* value);

/**
* Setup an index VV from VV1 to VV2.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vvd TODO
* @param[in]  vvq TODO
* @param[in]  vvi TODO
* @param[in]  mode TODO
* @param[in]  space TODO
**
* @par Note 
*      The input reference VV must be in ascending numerical order.
*      If your reference data is NOT ordered, then use the SortIndex1_VV 
*      function to create an order index, then sort both the reference and data VVs 
*      using this index VV before you call SetupIndex_VV.
*      
*      Example: You have a reference data set taken at specific times, hVVt, hVVy
*      and you want to calculate/estimate/interpolate the values hVVy2 at a second set
*      of times hVVt2
*      
*      Step 1: Create an index, hVVi, type GS_DOUBLE, and call SetupIndex_VV.
*      
*      with: hVVt2, hVVi, VV_LOOKUP_XXX, rSpacing
*      
*      Internally, this assigns index values of 0.0, 1.0, 2.0 etc. to the individual
*      values in hVVt, then, depending on the lookup method chosen, assigns
*      fractional index values to the input values in hVVt2.
*      
*      Step 2: To determine what the lookup values hVVy2 should be at times hVVt2,
*      call the LookupIndex_VV function for hVVy with hVVi, hVVy2
*      
*      Internally, this assigns index values of 0.0, 1.0, 2.0 etc. to the individual
*      values in hVVy, and uses linear interpolation to calculate the values of
*      hVVy2 at the input indices contained in hVVi.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetupIndex_VV(void* p_geo, const int32_t* vvd, const int32_t* vvq, const int32_t* vvi, const int32_t* mode, const double* space);

/**
* Set VV data from a VM. (OBSOLETE)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  vm TODO
* @param[in]  loc TODO
**
* @par Note 
*      See CopyVMtoVV_VV, which is a prefered method to move VM data
*      into a VV.  This method is mainly provided for old compatibility.
*      
*      The VM will be lengthened if required to hold the entire VV.
*      
*      If the VM is longer than required, extra data past the end
*      of the VV will be set to dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetVM_VV(void* p_geo, const int32_t* vv, const int32_t* vm, const int32_t* loc);

/**
* Sort a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dvv TODO
* @param[in]  order TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.5
*/
GX_EXPORT void Sort_VV(void* p_geo, const int32_t* dvv, const int32_t* order);

/**
* Sort index VV based on a data VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dvv TODO
* @param[in]  ivv TODO
**
* @par Note 
*      Create an Index VV (of type GS_LONG) based on a data VV.
*      This index vv can then be used by the IndexOrder method
*      to order a group of VV's.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SortIndex_VV(void* p_geo, const int32_t* dvv, const int32_t* ivv);

/**
* Sort index VV based on 1 data VV - set orders.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dvv TODO
* @param[in]  ivv TODO
* @param[in]  ord1 TODO
**
* @par Note 
*      Create an Index VV (of type GS_LONG) based on a data VV.
*      This index vv can then be used by the IndexOrder method
*      to order a group of VV's. The individual VVs may be ordered
*      in ascending or descending order.
*      If the primary VV values of two indices are the same, then
*      the secondary VV values are compared. If the secondary values
*      are the same, the ternary values are compared, etc.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.2
*/
GX_EXPORT void SortIndex1_VV(void* p_geo, const int32_t* dvv, const int32_t* ivv, const int32_t* ord1);

/**
* Sort index VV based on 2 data VVs - set orders.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  d1_vv TODO
* @param[in]  d2_vv TODO
* @param[in]  ivv TODO
* @param[in]  ord1 TODO
* @param[in]  ord2 TODO
**
* @par Note 
*      Create an Index VV (of type GS_LONG) based on a data VV.
*      This index vv can then be used by the IndexOrder method
*      to order a group of VV's. The individual VVs may be ordered
*      in ascending or descending order.
*      If the primary VV values of two indices are the same, then
*      the secondary VV values are compared. If the secondary values
*      are the same, the ternary values are compared, etc
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.2
*/
GX_EXPORT void SortIndex2_VV(void* p_geo, const int32_t* d1_vv, const int32_t* d2_vv, const int32_t* ivv, const int32_t* ord1, const int32_t* ord2);

/**
* Sort index VV based on 3 data VVs - set orders.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  d1_vv TODO
* @param[in]  d2_vv TODO
* @param[in]  d3_vv TODO
* @param[in]  ivv TODO
* @param[in]  ord1 TODO
* @param[in]  ord2 TODO
* @param[in]  ord3 TODO
**
* @par Note 
*      Create an Index VV (of type GS_LONG) based on a data VV.
*      This index vv can then be used by the IndexOrder method
*      to order a group of VV's. The individual VVs may be ordered
*      in ascending or descending order.
*      If the primary VV values of two indices are the same, then
*      the secondary VV values are compared. If the secondary values
*      are the same, the third values are compared, etc
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.2
*/
GX_EXPORT void SortIndex3_VV(void* p_geo, const int32_t* d1_vv, const int32_t* d2_vv, const int32_t* d3_vv, const int32_t* ivv, const int32_t* ord1, const int32_t* ord2, const int32_t* ord3);

/**
* Sort index VV based on 4 data VVs - set orders.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  d1_vv TODO
* @param[in]  d2_vv TODO
* @param[in]  d3_vv TODO
* @param[in]  d4_vv TODO
* @param[in]  ivv TODO
* @param[in]  ord1 TODO
* @param[in]  ord2 TODO
* @param[in]  ord3 TODO
* @param[in]  ord4 TODO
**
* @par Note 
*      Create an Index VV (of type GS_LONG) based on a data VV.
*      This index vv can then be used by the IndexOrder method
*      to order a group of VV's. The individual VVs may be ordered
*      in ascending or descending order.
*      If the primary VV values of two indices are the same, then
*      the secondary VV values are compared. If the secondary values
*      are the same, the third values are compared, etc
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0.2
*/
GX_EXPORT void SortIndex4_VV(void* p_geo, const int32_t* d1_vv, const int32_t* d2_vv, const int32_t* d3_vv, const int32_t* d4_vv, const int32_t* ivv, const int32_t* ord1, const int32_t* ord2, const int32_t* ord3, const int32_t* ord4);

/**
* Add a VV to a ST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Statistics_VV(void* p_geo, const int32_t* st, const int32_t* vv);

/**
* Subtract one VV from another: VV_A - VV_B = VV_C
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv_x TODO
* @param[in]  vv_y TODO
* @param[in]  vv_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void Subtract_VV(void* p_geo, const int32_t* vv_x, const int32_t* vv_y, const int32_t* vv_z);

/**
* Swaps the bytes of the SHORT, USHORT, LONG, FLOAT and DOUBLE vv's.
* Other vv's are not affected by this method. This is used
* primarily with changing the order of bytes for other machine
* created data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Swap_VV(void* p_geo, const int32_t* vv);

/**
* Limit the elements of a vv to a range.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void Window_VV(void* p_geo, const int32_t* vv, const double* min, const double* max, const int32_t* mode);

/**
* Write the VV data as an XML object with bytes and formating.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  file TODO
* @param[in]  format TODO
* @param[in]  decimal TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT void WriteXML_VV(void* p_geo, const int32_t* vv, const char* file, const int32_t* format, const int32_t* decimal);

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
