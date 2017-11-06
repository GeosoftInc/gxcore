//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file pg_gxlib.h
* @date 2017-11-06
* @brief File containing PG GX C API constant and function declarations
*/

/**
* @defgroup PG_Module PG
* Pager methods for large 2-D arrays
* This class handles very-large 2-D arrays in which efficient
* access is required along both rows and columns.
*
* Notes:
*
* Typically a grid is accessed using the IMG class, and a PG
* is obtained from the IMG using the GetPG_IMG function.
* Following operations on the PG, it can be written back to
* the IMG using SetPG_IMG.
*
* @{
*/

#pragma once
#ifndef HPG_H_DEFINED
#define HPG_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name PG_3D_DIR Definitions
* 
* 3D Pager direction
*/
///@{
/** 
* PG_3D_DIR_XYZ
*/
#define PG_3D_DIR_XYZ 0
/** 
* PG_3D_DIR_YXZ
*/
#define PG_3D_DIR_YXZ 1
/** 
* PG_3D_DIR_XZY
*/
#define PG_3D_DIR_XZY 2
/** 
* PG_3D_DIR_YZX
*/
#define PG_3D_DIR_YZX 3
/** 
* PG_3D_DIR_ZXY
*/
#define PG_3D_DIR_ZXY 4
/** 
* PG_3D_DIR_ZYX
*/
#define PG_3D_DIR_ZYX 5
///@}

/**
* @name PG_BF_CONV Definitions
* 
* Pager binary conversions
*/
///@{
/** 
* PG_BF_CONV_NONE
* 
* The Data is in Raw form
*/
#define PG_BF_CONV_NONE 0
/** 
* PG_BF_CONV_SWAP
* 
* The data needs to be byte swapped
*/
#define PG_BF_CONV_SWAP 1
///@}


/**
* @name 2D Methods Functions 
*/
///@{

/**
* Copy the data from one pager to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pgd TODO
* @param[in]  pgs TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_PG(void* p_geo, const int32_t* pgd, const int32_t* pgs);

/**
* Copy a subset of data from one pager to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pgd TODO
* @param[in]  pgs TODO
* @param[in]  y_row_d TODO
* @param[in]  x_col_d TODO
* @param[in]  y_row_s TODO
* @param[in]  x_col_s TODO
* @param[in]  ny TODO
* @param[in]  nx TODO
**
* @par Note 
*      2D Only
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CopySubset_PG(void* p_geo, const int32_t* pgd, const int32_t* pgs, const int32_t* y_row_d, const int32_t* x_col_d, const int32_t* y_row_s, const int32_t* x_col_s, const int32_t* ny, const int32_t* nx);

/**
* Creates a Pager object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  row TODO
* @param[in]  col TODO
* @param[in]  type TODO
* @return PG Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_PG(void* p_geo, const int32_t* row, const int32_t* col, const int32_t* type);

/**
* Create a 2D PG from serialized source.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return PG Object
**
* @par Note 
*      For 3D pagers, use CreateBF_PG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateS_PG(void* p_geo, const int32_t* bf);

/**
* This method destroys a table resource.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_PG(void* p_geo, const int32_t* pg);

/**
* Sets the Entire pager to dummy.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Dummy_PG(void* p_geo, const int32_t* pg);

/**
* Gets the type of pager.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @return GS_TYPES
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iEType_PG(void* p_geo, const int32_t* pg);

/**
* Gets the # of columns in pager.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @return # of columns.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNCols_PG(void* p_geo, const int32_t* pg);

/**
* Gets the # of rows in pager.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @return # of rows.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNRows_PG(void* p_geo, const int32_t* pg);

/**
* Gets the # of slices (z) in pager.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @return # of rows.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t iNSlices_PG(void* p_geo, const int32_t* pg);

/**
* Computes the range of the entire pager.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[out] min TODO
* @param[out] max TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Range_PG(void* p_geo, const int32_t* pg, double* min, double* max);

/**
* Read a single value from a 2D PG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  col TODO
* @param[in]  row TODO
**
* @par Note 
*      This is a low-performance method.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.3
*/
GX_EXPORT double rGet_PG(void* p_geo, const int32_t* pg, const int32_t* col, const int32_t* row);

/**
* Read a set of elements in X (column) from pager into vv
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  col TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadCol_PG(void* p_geo, const int32_t* pg, const int32_t* col, const int32_t* o, const int32_t* n, const int32_t* vv);

/**
* Read a set of elements in Y (row) from pager into vv
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  row TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadRow_PG(void* p_geo, const int32_t* pg, const int32_t* row, const int32_t* o, const int32_t* n, const int32_t* vv);

/**
* Changes the size of Pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  n_row TODO
* @param[in]  n_col TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReAllocate_PG(void* p_geo, const int32_t* pg, const int32_t* n_row, const int32_t* n_col);

/**
* Serialize a 2D PG to a BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  bf TODO
**
* @par Note 
*      For 3D pagers, use WriteBF_PG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Serial_PG(void* p_geo, const int32_t* pg, const int32_t* bf);

/**
* Compute the statistics of a pager object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  st TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3.1
*/
GX_EXPORT void Statistics_PG(void* p_geo, const int32_t* pg, const int32_t* st);

/**
* Write a set of elements in X (column) from vv into pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  col TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteCol_PG(void* p_geo, const int32_t* pg, const int32_t* col, const int32_t* o, const int32_t* n, const int32_t* vv);

/**
* Write a set of elements in Y (row) from vv into pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  row TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteRow_PG(void* p_geo, const int32_t* pg, const int32_t* row, const int32_t* o, const int32_t* n, const int32_t* vv);

///@}

/**
* @name 3D Methods Functions 
*/
///@{

/**
* Copy a subset of data from one pager to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pgd TODO
* @param[in]  pgs TODO
* @param[in]  sliced TODO
* @param[in]  n TODO
* @param[in]  vv TODO
* @param[in]  slices TODO
* @param[in]  rows TODO
* @param[in]  cols TODO
* @param[in]  n_slice TODO
* @param[in]  n_row TODO
* @param[in]  n_col TODO
**
* @par Note 
*      2D Only
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 8.0
*/
GX_EXPORT void CopySubset3D_PG(void* p_geo, const int32_t* pgd, const int32_t* pgs, const int32_t* sliced, const int32_t* n, const int32_t* vv, const int32_t* slices, const int32_t* rows, const int32_t* cols, const int32_t* n_slice, const int32_t* n_row, const int32_t* n_col);

/**
* Creates a Pager object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  slice TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[in]  type TODO
* @return PG Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT int32_t Create3D_PG(void* p_geo, const int32_t* slice, const int32_t* row, const int32_t* col, const int32_t* type);

/**
* Read a set of elements in X (column) from pager into vv
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  slice TODO
* @param[in]  col TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void ReadCol3D_PG(void* p_geo, const int32_t* pg, const int32_t* slice, const int32_t* col, const int32_t* o, const int32_t* n, const int32_t* vv);

/**
* Read a set of elements in Y (row) from pager into vv
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  slice TODO
* @param[in]  row TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void ReadRow3D_PG(void* p_geo, const int32_t* pg, const int32_t* slice, const int32_t* row, const int32_t* o, const int32_t* n, const int32_t* vv);

/**
* Read a set of elements in Z (trace) from pager into vv
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  col TODO
* @param[in]  row TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void ReadTrace3D_PG(void* p_geo, const int32_t* pg, const int32_t* col, const int32_t* row, const int32_t* o, const int32_t* n, const int32_t* vv);

/**
* Changes the size of 3D Pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  n_slice TODO
* @param[in]  n_row TODO
* @param[in]  n_col TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void ReAllocate3D_PG(void* p_geo, const int32_t* pg, const int32_t* n_slice, const int32_t* n_row, const int32_t* n_col);

/**
* Write a set of elements in X (column) from vv into pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  slice TODO
* @param[in]  col TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void WriteCol3D_PG(void* p_geo, const int32_t* pg, const int32_t* slice, const int32_t* col, const int32_t* o, const int32_t* n, const int32_t* vv);

/**
* Write a set of elements in Y (row) from vv into pager
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  slice TODO
* @param[in]  row TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void WriteRow3D_PG(void* p_geo, const int32_t* pg, const int32_t* slice, const int32_t* row, const int32_t* o, const int32_t* n, const int32_t* vv);

/**
* Write a set of elements in Z (trace) from pager into vv
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  col TODO
* @param[in]  row TODO
* @param[in]  o TODO
* @param[in]  n TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.3
*/
GX_EXPORT void WriteTrace3D_PG(void* p_geo, const int32_t* pg, const int32_t* col, const int32_t* row, const int32_t* o, const int32_t* n, const int32_t* vv);

///@}

/**
* @name Utility Methods Functions 
*/
///@{

/**
* Read the contents of a 2D or 3D pager to from a BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  bf TODO
* @param[in]  dir TODO
* @param[in]  conv TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void ReadBF_PG(void* p_geo, const int32_t* pg, const int32_t* bf, const int32_t* dir, const int32_t* conv, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z);

/**
* Read the contents of a 2D or 3D pager to from an RA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  ra TODO
* @param[in]  dir TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  dummy TODO
**
* @par Note 
*      Each line must hold only 1 value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void ReadRA_PG(void* p_geo, const int32_t* pg, const int32_t* ra, const int32_t* dir, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const char* dummy);

/**
* Write the contents of a 2D or 3D pager to a BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  bf TODO
* @param[in]  dir TODO
* @param[in]  conv TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.2
*/
GX_EXPORT void WriteBF_PG(void* p_geo, const int32_t* pg, const int32_t* bf, const int32_t* dir, const int32_t* conv, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z);

/**
* Write the contents of a 2D or 3D pager to a BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  bf TODO
* @param[in]  dir TODO
* @param[in]  conv TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  p_dummy TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 9.3
*/
GX_EXPORT void WriteBFEx_PG(void* p_geo, const int32_t* pg, const int32_t* bf, const int32_t* dir, const int32_t* conv, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const double* p_dummy);

/**
* Write the contents of a 2D or 3D pager to a WA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pg TODO
* @param[in]  wa TODO
* @param[in]  dir TODO
* @param[in]  rev_x TODO
* @param[in]  rev_y TODO
* @param[in]  rev_z TODO
* @param[in]  dummy TODO
**
* @par Note 
*      Each line will hold only 1 value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void WriteWA_PG(void* p_geo, const int32_t* pg, const int32_t* wa, const int32_t* dir, const int32_t* rev_x, const int32_t* rev_y, const int32_t* rev_z, const char* dummy);

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
