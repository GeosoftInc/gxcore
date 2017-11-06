//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file va_gxlib.h
* @date 2017-11-06
* @brief File containing VA GX C API constant and function declarations
*/

/**
* @defgroup VA_Module VA
* The VA class is the 2-Dimensional analogue to the VV class.
* When displayed in a database, VA objects are displayed graphically
* as profiles, one to a cell, and can also be displayed one column of
* data at a time by specifying an index; e.g. CH[0]. A VA object is
* declared with a fixed number of columns, which cannot be altered.
* The number of rows, however can be changed, in the same way that
* the length of a VV can be changed. Data can be added or extracted
* using VVs, either by row or column.
* 
* A VA is used to store an array of data in which each element may have
* multiple elements.  For example, 256-channel radiometric data can
* be stored in a VA that is 256 elements wide.
* @{
*/

#pragma once
#ifndef HVA_H_DEFINED
#define HVA_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name VA_AVERAGE Definitions
* 
* VA Object to average
*/
///@{
/** 
* VA_AVERAGE_ROWS
* 
* Average the Rows
*/
#define VA_AVERAGE_ROWS 0
/** 
* VA_AVERAGE_COLUMNS
* 
* Average the Columns
*/
#define VA_AVERAGE_COLUMNS 1
///@}

/**
* @name VA_OBJECT Definitions
* 
* VA Object to select
*/
///@{
/** 
* VA_ROW
* 
* Row
*/
#define VA_ROW 0
/** 
* VA_COL
* 
* Column
*/
#define VA_COL 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Get an array of data from a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  start_row TODO
* @param[in]  start_col TODO
* @param[in]  rows TODO
* @param[in]  cols TODO
* @param[in]  data TODO
* @param[in]  gs_type TODO
* @return Nothing
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void iGetArray_VA(void* p_geo, const int32_t* va, int32_t start_row, int32_t start_col, int32_t rows, int32_t cols, void* data, int32_t gs_type);

/**
* Set a range of data in an array
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  start_row TODO
* @param[in]  start_col TODO
* @param[in]  rows TODO
* @param[in]  cols TODO
* @param[in]  data TODO
* @param[in]  gs_type TODO
* @return Nothing
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void iSetArray_VA(void* p_geo, const int32_t* va, int32_t start_row, int32_t start_col, int32_t rows, int32_t cols, const void* data, int32_t gs_type);

/**
* Add one VV value to each row of the VA, output true elevation.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  vv TODO
* @param[in]  negative_depths TODO
**
* @par Note 
*      Adds each value in an input elevation VV to all the values at
*      the same fid in a depths VA. Includes an option for negative depths down
*      (e.g. a relative level).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT void AddElevationsVVToDepths_VA(void* p_geo, const int32_t* va, const int32_t* vv, const int32_t* negative_depths);

/**
* Appends VAs
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  v_aa TODO
**
* @par Note 
*      If the VAs have different numbers of columns, the smaller number
*      is used in the copy operation.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void Append_VA(void* p_geo, const int32_t* va, const int32_t* v_aa);

/**
* Average elements in a VA by row or column
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  vv TODO
* @param[in]  rc TODO
**
* @par Note 
*      The output VV will be dimensioned by the number of
*      rows or columns in the input VV depending on the
*      VA_AVERAGE setting.
*      
*      Dummies are not included in the average.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Average_VA(void* p_geo, const int32_t* va, const int32_t* vv, const int32_t* rc);

/**
* Copy one VA to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  v_ad TODO
* @param[in]  v_as TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_VA(void* p_geo, const int32_t* v_ad, const int32_t* v_as);

/**
* Copy part of a vector into part of another vector.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  v_ad TODO
* @param[in]  d_row TODO
* @param[in]  d_col TODO
* @param[in]  v_as TODO
* @param[in]  s_row TODO
* @param[in]  s_col TODO
* @param[in]  rows TODO
* @param[in]  cols TODO
**
* @par Note 
*      1. Unlike Copy_VA destination VA is not reallocated, nor are
*      the dimensions changed. The caller must make any desired changes.
*      
*      2. All VA types are supported and will be converted using
*      Convert_GS if necessary.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy2_VA(void* p_geo, const int32_t* v_ad, const int32_t* d_row, const int32_t* d_col, const int32_t* v_as, const int32_t* s_row, const int32_t* s_col, const int32_t* rows, const int32_t* cols);

/**
* Create a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  rows TODO
* @param[in]  cols TODO
* @return VA Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_VA(void* p_geo, const int32_t* type, const int32_t* rows, const int32_t* cols);

/**
* Create a VA, using one of the GS_TYPES special data types.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  rows TODO
* @param[in]  cols TODO
* @return VA, aborts if creation fails
**
* @par Note 
*      See Create_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateExt_VA(void* p_geo, const int32_t* type, const int32_t* rows, const int32_t* cols);

/**
* Create a VA using the data in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  rows TODO
* @param[in]  columns TODO
* @return VA, aborts if creation fails
**
* @par Note 
*      See Create_VV
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2.1
*/
GX_EXPORT int32_t CreateVV_VA(void* p_geo, const int32_t* vv, const int32_t* rows, const int32_t* columns);

/**
* Destroy a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_VA(void* p_geo, const int32_t* va);

/**
* Get the full VV from the VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @return VV Object
**
* @par Note 
*      No data is copied, this is the handle to the data VV in the VA.
*      The fid start/increment of the VA is passed to the VV at the time
*      of the call.  If a new VA is read, you must call GetFull_VV_VA
*      to get the new fid in the VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetFullVV_VA(void* p_geo, const int32_t* va);

/**
* Get a row or column of data as a VV from an array.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  no TODO
* @param[in]  row_col TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetVV_VA(void* p_geo, const int32_t* va, const int32_t* no, const int32_t* row_col, const int32_t* vv);

/**
* Return number of columns in VA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @return Columns in VA
**
* @par Note 
*      iLen_VA returns the number of rows.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iCol_VA(void* p_geo, const int32_t* va);

/**
* Get an integer element from a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @return Element wanted, rDUMMY, iDUMMY or blank string
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
GX_EXPORT int32_t iGetInt_VA(void* p_geo, const int32_t* va, const int32_t* row, const int32_t* col);

/**
* Get a string element from a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[out] str_val TODO
* @param[in]  str_size TODO
**
* @par Note 
*      Returns element wanted, rDUMMY, iDUMMY or blank string
*      if the value is dummy or outside of the range of data.
*      
*      Type conversions are performed if necessary.  Dummy values
*      are converted to "*" string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetString_VA(void* p_geo, const int32_t* va, const int32_t* row, const int32_t* col, char* str_val, const int32_t* str_size);

/**
* Return length (number of rows) in a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @return Length of VA
**
* @par Note 
*      iCol_VA returns the number of columns.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLen_VA(void* p_geo, const int32_t* va);

/**
* Reorder a VA based on an index VV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  va TODO
**
* @par Note 
*      Given a row index VV (of type INT), this method reorders a
*      VA. Please make sure that the index holds valid information.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void IndexOrder_VA(void* p_geo, const int32_t* vv, const int32_t* va);

/**
* Lookup a VA from another VA using an index VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vad TODO
* @param[in]  vvi TODO
* @param[in]  var TODO
**
* @par Note 
*      Fractional values in the VV will interpolate between the value
*      at the whole integer value and the next whole integer, dummy
*      if outside the VA.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.4.2
*/
GX_EXPORT void LookupIndex_VA(void* p_geo, const int32_t* vad, const int32_t* vvi, const int32_t* var);

/**
* Computes the minimum and maximum range of the data, in doubles,
* in a vector while ignoring dummies.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[out] min TODO
* @param[out] max TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void RangeDouble_VA(void* p_geo, const int32_t* va, double* min, double* max);

/**
* Re-sample a VA to a new fid start/icrement
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  start TODO
* @param[in]  incr TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReFid_VA(void* p_geo, const int32_t* va, const double* start, const double* incr, const int32_t* length);

/**
* Reverses the order of the rows in a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void Reverse_VA(void* p_geo, const int32_t* va);

/**
* Gets the Fiducial increment from a VA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @return Fiducial increment of the VA.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetFidIncr_VA(void* p_geo, const int32_t* va);

/**
* Gets the Fiducial start from a VA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @return Fiducial start of the VA.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetFidStart_VA(void* p_geo, const int32_t* va);

/**
* Get a real element from a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @return Element wanted, rDUMMY, iDUMMY or blank string
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
GX_EXPORT double rGetReal_VA(void* p_geo, const int32_t* va, const int32_t* row, const int32_t* col);

/**
* Sets the Fiducial increment of a VA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  incr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetFidIncr_VA(void* p_geo, const int32_t* va, const double* incr);

/**
* Sets the Fiducial start of a VA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  start TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetFidStart_VA(void* p_geo, const int32_t* va, const double* start);

/**
* Set an integer element in a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VA length, the VA length is
*      increased.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInt_VA(void* p_geo, const int32_t* va, const int32_t* row, const int32_t* col, const int32_t* value);

/**
* Set the length (number of rows) of the VA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  rows TODO
**
* @par Note 
*      The number of columns in a VA is fixed, and cannot be
*      altered once the VA is created.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLn_VA(void* p_geo, const int32_t* va, const int32_t* rows);

/**
* Set a real element in a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VA length, the VA length is
*      increased.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReal_VA(void* p_geo, const int32_t* va, const int32_t* row, const int32_t* col, const double* value);

/**
* Set a string element in a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[in]  value TODO
**
* @par Note 
*      Element being set cannot be < 0.
*      If the element is > current VA length, the VA length is
*      increased.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetString_VA(void* p_geo, const int32_t* va, const int32_t* row, const int32_t* col, const char* value);

/**
* Set a row or column of data in an array from a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  no TODO
* @param[in]  row_col TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetVV_VA(void* p_geo, const int32_t* va, const int32_t* no, const int32_t* row_col, const int32_t* vv);

/**
* Translate (VA + base ) * mult
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  base TODO
* @param[in]  mult TODO
**
* @par Note 
*      Supports all VA types using an internal double VV.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.2
*/
GX_EXPORT void Trans_VA(void* p_geo, const int32_t* va, const double* base, const double* mult);

/**
* Window a VA to a VV based in intergral frame
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  start TODO
* @param[in]  count TODO
* @param[in]  vv TODO
**
* @par Note 
*      The defined window must be within the VA element dimensions.
*      The windowed result will be the simple sum of all
*      values in the window.
*      If any values are dummy, the result will be dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Window_VA(void* p_geo, const int32_t* va, const int32_t* start, const int32_t* count, const int32_t* vv);

/**
* Window a VA to a VV based on fractional frame
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  start TODO
* @param[in]  end TODO
* @param[in]  vv TODO
**
* @par Note 
*      The defined window must be within the VA element dimensions.
*      The windowed result will be the simple sum of all
*      values in the window.
*      If any values are dummy, the result will be dummy.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Window2_VA(void* p_geo, const int32_t* va, const double* start, const double* end, const int32_t* vv);

/**
* Window a VA to a VV based on fractional frame
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  vv_t TODO
* @param[in]  subtract_vv TODO
* @param[in]  vv_sub TODO
* @param[in]  tol TODO
* @return 1 if rows repeat, 0 if not.
**
* @par Note 
*      Returns 1 if all rows contain values which match the input values.
*      Optionally, row values can be offset by amounts specified with a secondary VV.
*      This function was designed to detect "depth" array channels, including those which might
*      have been offset with topography on each row.
*      An absolute tolerance can be specified to ignore numerical noise.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.2
*/
GX_EXPORT int32_t iCheckForRepeating_VA(void* p_geo, const int32_t* va, const int32_t* vv_t, const int32_t* subtract_vv, const int32_t* vv_sub, const double* tol);

/**
* Window a VA to a VV based on fractional frame
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  va TODO
* @param[in]  vv_t TODO
* @param[in]  subtract_vv TODO
* @param[in]  vv_sub TODO
* @param[in]  tol TODO
* @param[out] bad_row TODO
* @param[out] bad_col TODO
* @return 1 if rows repeat, 0 if not.
**
* @par Note 
*      Returns 1 if all rows contain values which match the input values.
*      Optionally, row values can be offset by amounts specified with a secondary VV.
*      This function was designed to detect "depth" array channels, including those which might
*      have been offset with topography on each row.
*      An absolute tolerance can be specified to ignore numerical noise.
*      This version returns the row and column index of first mismatch.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.2
*/
GX_EXPORT int32_t iCheckForRepeating2_VA(void* p_geo, const int32_t* va, const int32_t* vv_t, const int32_t* subtract_vv, const int32_t* vv_sub, const double* tol, int32_t* bad_row, int32_t* bad_col);

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
