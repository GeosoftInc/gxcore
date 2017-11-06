//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file dat_gxlib.h
* @date 2017-11-06
* @brief File containing DAT GX C API constant and function declarations
*/

/**
* @defgroup DAT_Module DAT
* The DAT object is used to access data from an variety of data sources
* using the same access functions. The DAT interface supports data access
* on a point-by-point, of line-by-line basis.  For example,
* the Run_BIGRID function uses 2 DAT objects - one DAT associated with the
* input data source, which is read line-by-line, and a second associated with
* the output grid file output grid file.
* 
* Use a specific DAT creation method for an associated
* information source in order to make a DAT as required
* by a specific processing function.  The gridding methods all use DATs.
* @{
*/

#pragma once
#ifndef HDAT_H_DEFINED
#define HDAT_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DAT_FILE Definitions
* 
* Type of grid
*/
///@{
/** 
* DAT_FILE_GRID
*/
#define DAT_FILE_GRID 1
/** 
* DAT_FILE_IMAGE
*/
#define DAT_FILE_IMAGE 2
///@}

/**
* @name DAT_FILE_FORM Definitions
* 
* Type of form
*/
///@{
/** 
* DAT_FILE_FORM_OPEN
*/
#define DAT_FILE_FORM_OPEN 0
/** 
* DAT_FILE_FORM_SAVE
*/
#define DAT_FILE_FORM_SAVE 1
///@}

/**
* @name DAT_XGD Definitions
* 
* DAT Open modes
*/
///@{
/** 
* DAT_XGD_READ
*/
#define DAT_XGD_READ 0
/** 
* DAT_XGD_NEW
*/
#define DAT_XGD_NEW 1
/** 
* DAT_XGD_WRITE
*/
#define DAT_XGD_WRITE 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a handle to a database DAT object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  x_ch TODO
* @param[in]  y_ch TODO
* @param[in]  z_ch TODO
* @return DAT Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateDB_DAT(void* p_geo, const int32_t* db, const char* x_ch, const char* y_ch, const char* z_ch);

/**
* Create a handle to a grid file DAT object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  mode TODO
* @return DAT Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateXGD_DAT(void* p_geo, const char* name, const int32_t* mode);

/**
* Destroy a DAT.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dat TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_DAT(void* p_geo, const int32_t* dat);

/**
* Put available DAT filters and qualifiers in a LST
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  interface TODO
* @param[in]  flags TODO
* @param[in]  mode TODO
**
* @par Note 
*      The filters displayed in the Grid/Image file browse dialog are put
*      in the "Name" of the LST, while the file qualifiers are stored in
*      the "Value".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void GetLST_DAT(void* p_geo, const int32_t* lst, const char* interface, const int32_t* flags, const int32_t* mode);

/**
* Determine the range in X, Y and Z in the DAT source
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dat TODO
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
* @param[out] num_non_dummy TODO
**
* @par Note 
*      Terminates if unable to open an RPT DAT interface.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void RangeXYZ_DAT(void* p_geo, const int32_t* dat, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z, int32_t* num_non_dummy);

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
