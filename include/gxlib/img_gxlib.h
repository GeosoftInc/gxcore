//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file img_gxlib.h
* @date 2017-11-06
* @brief File containing IMG GX C API constant and function declarations
*/

/**
* @defgroup IMG_Module IMG
* The IMG class performs read and write operations on grid
* file data. When efficient access along both rows and columns
* is desired the PG class is recommended (see PG and PGU);
* the IMG is first created, then the PG is obtained from
* the IMG using GetPG_IMG.
*
* Notes:
*
* The IMG methods use the XGD DATs to access grid files in different
* formats.  The characteristics of a grid can be controlled using
* decorations on a grid file name.  For example:
* 
* CreateNewFile_IMG(GS_DOUBLE,1,100,100,"mag.grd");
* -> creates a new grid file "mag.grd" with all defaults.
* 
* CreateNewFile_IMG(GS_DOUBLE,1,100,100,"mag.grd(GRD;comp=none)");
* -> creates a new grid file "mag.grd" with no compression.
* 
* CreateNewFile_IMG(GS_DOUBLE,1,100,100,"mag.grd(GRD;comp=size;type=short");
* -> creates a new grid file "mag.grd" compressed for size, numbers
* stored as 2-byte integers..
* 
* See DAT_XGD.DOC for information about file name decorations available
* for all DAT types.
* 
* Different grid types support different features.  For example, not all
* grid types support projection information.  Geosoft will always create
* a *.gi file that is used to store all such information that we require
* from a grid.  If the grid does support this information, both the grid
* and the *.gi file will contain the information.
*
* @{
*/

#pragma once
#ifndef HIMG_H_DEFINED
#define HIMG_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* IMG_NULL
*
* Image Null
*/
#define IMG_NULL 0

/**
* @name IMG_FILE Definitions
* 
* Image open modes
*/
///@{
/** 
* IMG_FILE_READONLY
* 
* Reading only
*/
#define IMG_FILE_READONLY 0
/** 
* IMG_FILE_READWRITE
* 
* Reading and writting
*/
#define IMG_FILE_READWRITE 2
/** 
* IMG_FILE_READORWRITE
* 
* Allows you to open read-only grids to change the
* projection or location information.  If you can write
* to the original grid (dat), the changed projection
* or location information will be passed on to the grid,
* otherwise changes will only occur in the .gi file.
*/
#define IMG_FILE_READORWRITE 3
///@}

/**
* @name IMG_QUERY Definitions
* 
* Information to Query
*/
///@{
/** 
* IMG_QUERY_iWRITE
*/
#define IMG_QUERY_iWRITE 0
/** 
* IMG_QUERY_iPG
*/
#define IMG_QUERY_iPG 1
/** 
* IMG_QUERY_iWRITEPG
*/
#define IMG_QUERY_iWRITEPG 2
/** 
* IMG_QUERY_iIMGTYPE
* 
* The element type used to open the IMG.
*/
#define IMG_QUERY_iIMGTYPE 3
/** 
* IMG_QUERY_iDATTYPE
* 
* DATTYPE is the native element type of the DAT.
* Types are:   0 - byte
* 1 - unsigned 16-bit short
* 2 - 16-bit short
* 3 - 32-bit long
* 4 - 32-bit float
* 5 - 64-bit double
*/
#define IMG_QUERY_iDATTYPE 4
/** 
* IMG_QUERY_iRENDER
* 
* Render modes are:    0 - interpolate
* 1 - pixelate
* 2 - color
*/
#define IMG_QUERY_iRENDER 5
/** 
* IMG_QUERY_iKX
*/
#define IMG_QUERY_iKX 6
/** 
* IMG_QUERY_iNX
*/
#define IMG_QUERY_iNX 7
/** 
* IMG_QUERY_iNY
*/
#define IMG_QUERY_iNY 8
/** 
* IMG_QUERY_iNV
*/
#define IMG_QUERY_iNV 9
/** 
* IMG_QUERY_iNE
*/
#define IMG_QUERY_iNE 10
/** 
* IMG_QUERY_rXO
*/
#define IMG_QUERY_rXO 11
/** 
* IMG_QUERY_rYO
*/
#define IMG_QUERY_rYO 12
/** 
* IMG_QUERY_rDX
*/
#define IMG_QUERY_rDX 13
/** 
* IMG_QUERY_rDY
*/
#define IMG_QUERY_rDY 14
/** 
* IMG_QUERY_rROT
*/
#define IMG_QUERY_rROT 15
/** 
* IMG_QUERY_rBASE
*/
#define IMG_QUERY_rBASE 16
/** 
* IMG_QUERY_rMULT
*/
#define IMG_QUERY_rMULT 17
/** 
* IMG_QUERY_rCOMPRESSION_RATIO
*/
#define IMG_QUERY_rCOMPRESSION_RATIO 18
///@}

/**
* @name IMG_RELOCATE Definitions
* 
* Relocation Style
*/
///@{
/** 
* IMG_RELOCATE_FIT
* 
* Will fit the image to fill the specified area
*/
#define IMG_RELOCATE_FIT 0
/** 
* IMG_RELOCATE_ASPECT
* 
* Will maintain aspect ratio
*/
#define IMG_RELOCATE_ASPECT 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Reduce the dimensions in a 2D pager by a factor of 2
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid_in TODO
* @param[in]  grid_out TODO
**
* @par Note 
*      This method is useful for reducing the dimensions in a 2D pager by a factor of 2.
*      The output pager retains the same origin, but the X and Y spacing is double that of the original. Essentially,
*      the process removes all the even-indexed rows and columns, while leaving the locations of all the remaining
*      data points in the "odd" rows and columns unchanged.
*      
*      The output values at the output data locations are created by performing an average of the original data point and
*      its valid surrounding data points; what is essentially a 3x3 smoothing filter.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Average2_IMG(void* p_geo, const char* grid_in, const char* grid_out);

/**
* Copy IMGs.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  im_go TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_IMG(void* p_geo, const int32_t* im_gi, const int32_t* im_go);

/**
* Creates an IMG not tied to a file at all
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  kx TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @return IMG object
**
* @par Note 
*      Once destroyed all the data in this IMG is lost.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.3
*/
GX_EXPORT int32_t Create_IMG(void* p_geo, const int32_t* type, const int32_t* kx, const int32_t* width, const int32_t* height);

/**
* Creates an Image object tied to a grid file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  grid TODO
* @param[in]  mode TODO
* @return IMG object
**
* @par Note 
*      When the GS_DOUBLE data type is chosen the actual on-disk
*      type of the input image will be used instead of GS_DOUBLE
*      if the on-disk values represent color data as opposed
*      to real numbers.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateFile_IMG(void* p_geo, const int32_t* type, const char* grid, const int32_t* mode);

/**
* Creates an IMG object that is backed only by memory.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  kx TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @return IMG object
**
* @par Note 
*      Once destroyed all the data is lost. This is temporary.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.6
*/
GX_EXPORT int32_t CreateMem_IMG(void* p_geo, const int32_t* type, const int32_t* kx, const int32_t* width, const int32_t* height);

/**
* Creates an output image file using User defined info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  kx TODO
* @param[in]  width TODO
* @param[in]  height TODO
* @param[in]  grid TODO
* @return IMG object
**
* @par Note 
*      Special Note for developers who use this function and
*      related functions to output ERMapper image (ERS, ECW) files:
*      
*      This function internally called ERMapper plugin to create ERS header
*      files. To find the location of ERMapper plugin library, a registry setting
*      needs to set. The key in the registry is HKEY_LOCAL_MACHINE\SOFTWARE\"MyProgram(libversion7.0)"
*      and in that key register a string BASE_PATH = D:\Oasismontaj\plugins\er_mapper.
*      MyProgram is the name of your application and D:\Oasismontaj\plugins\er_mapper
*      is the location of ERMapper library.
*      
*      It is recommended that this registry key is set during the installation
*      of your application.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateNewFile_IMG(void* p_geo, const int32_t* type, const int32_t* kx, const int32_t* width, const int32_t* height, const char* grid);

/**
* Creates an output image file using input image info.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[in]  grid TODO
* @param[in]  img TODO
* @return IMG object
**
* @par Note 
*      When the GS_DOUBLE data type is chosen the actual on-disk
*      type of the input image will be used instead of GS_DOUBLE
*      if the on-disk values represent color data as opposed
*      to real numbers.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateOutFile_IMG(void* p_geo, const int32_t* type, const char* grid, const int32_t* img);

/**
* Applies a projection to an image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ipj TODO
**
* @par Note 
*      The IMG now appears to be in the projected coordinate
*      system space.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CreateProjected_IMG(void* p_geo, const int32_t* img, const int32_t* ipj);

/**
* Applies a projection to an image, specify cell size.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ipj TODO
* @param[in]  cell_size TODO
**
* @par Note 
*      The IMG now appears to be in the projected coordinate
*      system space, with the specified cell size. If the cell
*      size is rDUMMY (GS_R8DM), one is automatically calculated,
*      as with CreateProjected_IMG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CreateProjected2_IMG(void* p_geo, const int32_t* img, const int32_t* ipj, const double* cell_size);

/**
* Same as CreateProjected2_IMG, but set expansion of bounds.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ipj TODO
* @param[in]  cell_size TODO
* @param[in]  exp_pct TODO
**
* @par Note 
*      The IMG now appears to be in the projected coordinate
*      system space, with the specified cell size. If the cell
*      size is rDUMMY (GS_R8DM), one is automatically calculated,
*      as with CreateProjected_IMG.
*      The expansion percent expands the bounds of the projected grid
*      in order to allow for the curving of bounding edges. Normally,
*      edges are sampled in order to allow for curving, but this
*      parameter is set to 1.0 (for 1 percent) in the CreateProjected_IMG
*      and CreateProjected2_IMG wrappers, and will generally create a
*      white/dummy border around the new grid. This new method allows
*      you to specify the expansion, or turn it off (by setting it to 0).
*      If the value is set to rDUMMY, then expansion is left at 1.0,
*      the legacy behaviour.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3.1
*/
GX_EXPORT void CreateProjected3_IMG(void* p_geo, const int32_t* img, const int32_t* ipj, const double* cell_size, const double* exp_pct);

/**
* This method destroys a table resource.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_IMG(void* p_geo, const int32_t* img);

/**
* Get the actual pager of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @return PG Object
*
* @par See also 
*      GetPG_IMG to get just a copy of the grid's pager.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT int32_t GethPG_IMG(void* p_geo, const int32_t* img);

/**
* Retrieves location information about this image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[out] dx TODO
* @param[out] dy TODO
* @param[out] xo TODO
* @param[out] yo TODO
* @param[out] rot TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetInfo_IMG(void* p_geo, const int32_t* img, double* dx, double* dy, double* xo, double* yo, double* rot);

/**
* Get the projection of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetIPJ_IMG(void* p_geo, const int32_t* img, const int32_t* ipj);

/**
* Get the metadata of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void GetMETA_IMG(void* p_geo, const int32_t* img, const int32_t* meta);

/**
* Get a copy of the pager of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  pg TODO
*
* @par See also 
*      GethPG_IMG to get the actual pager of the grid.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetPG_IMG(void* p_geo, const int32_t* img, const int32_t* pg);

/**
* Returns default cell size from projected image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ipj TODO
* @param[out] cell TODO
**
* @par Note 
*      Returns the cell size calculated by CreateProjected_PJIMG, or by
*      CreateProjected2_IMG when
*      GS_R8DM is entered as the optional cell size. No inheritance
*      is actually performed to the input IMG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetProjectedCellSize_IMG(void* p_geo, const int32_t* img, const int32_t* ipj, double* cell);

/**
* Get the trend information from a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  tr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetTR_IMG(void* p_geo, const int32_t* img, const int32_t* tr);

/**
* Returns the element type.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  xg_dor_img TODO
* @return Element type
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT int32_t iElementType_IMG(void* p_geo, const int32_t* img, const int32_t* xg_dor_img);

/**
* Returns the element type.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @return Element type
**
* @par Note 
*      Same as sElementType_IMG(img,1)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iEType_IMG(void* p_geo, const int32_t* img);

/**
* Get default transform, if it exists
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  itr TODO
* @return 0 - Okay
* 1 - No default possible/available
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.2
*/
GX_EXPORT int32_t iGetDefITR_IMG(void* p_geo, const int32_t* img, const int32_t* itr);

/**
* Is this a Geosoft color grid?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iIsColour_IMG(void* p_geo, const int32_t* img);

/**
* Is this a valid IMG file?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iIsValidIMGFile_IMG(void* p_geo, const char* file);

/**
* Is this a valid IMG file? Returns error message if it cannot be opened for any reason.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] err_msg TODO
* @param[in]  buff_size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0.1
*/
GX_EXPORT int32_t iIsValidIMGFileEx_IMG(void* p_geo, const char* file, char* err_msg, const int32_t* buff_size);

/**
* Gets the # of elements in the optimal KX direction.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @return # of elements in the optimal KX direction
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNE_IMG(void* p_geo, const int32_t* img);

/**
* Inherit a projection/new cell size on the IMG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ipj TODO
* @param[in]  cell TODO
**
* @par Note 
*      If cell size is GS_R8DM, then "nice" values for the cell
*      size of the new projected grid will be determined so that
*      the new grid has about the same number of cells as the old.
*      If the cell size is specified, the inheritance will always
*      work, even if the input IPJ is identical to the original
*      IPJ, and the cell boundaries will be forced to be aligned
*      with the new cell size.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Inherit_IMG(void* p_geo, const int32_t* img, const int32_t* ipj, const double* cell);

/**
* Make a grids match in size and coordinate system
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gi TODO
* @param[in]  im_gs TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void InheritIMG_IMG(void* p_geo, const int32_t* im_gi, const int32_t* im_gs);

/**
* Gets the # of vectors in the optimal KX direction.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @return # of vectors in the optimal KX direction
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNV_IMG(void* p_geo, const int32_t* img);

/**
* Gets the # of X elements.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @return # of X elements.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNX_IMG(void* p_geo, const int32_t* img);

/**
* Gets the # of Y elements.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @return # of Y elements.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNY_IMG(void* p_geo, const int32_t* img);

/**
* Query information about the IMG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  query TODO
* @return Information requested, dummy if unknown or invalid.
**
* @par Note 
*      You can call either funtion to retrieve any data,
*      int or real.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT int32_t iQuery_IMG(void* p_geo, const int32_t* img, const int32_t* query);

/**
* Asks the IMG for the most efficient way to access the data.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @return -1 by columns, 1 by rows, 0 rows and columns are equally efficient.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iQueryKX_IMG(void* p_geo, const int32_t* img);

/**
* Set default transform
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  itr TODO
* @return 0 - Okay
* 1 - No default possible/available
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.2
*/
GX_EXPORT int32_t iSetDefITR_IMG(void* p_geo, const int32_t* img, const int32_t* itr);

/**
* Returns the global setting.
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - User wishes to plot grids as regular (flat) grid
* 1 - User wishes to plot grids as color-shaded grids
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT int32_t iUserPreferenceToPlotAsColourShadedGrid_IMG(void* p_geo);

/**
* Loads an IMG into a master IMG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  im_gm TODO
* @param[in]  im_gi TODO
**
* @par Note 
*      The cell sizes and projections must be the same.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.6
*/
GX_EXPORT void LoadIMG_IMG(void* p_geo, const int32_t* im_gm, const int32_t* im_gi);

/**
* Load IMG data from file into a pager to increase
* access time.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadIntoPager_IMG(void* p_geo, const int32_t* img);

/**
* Force optimal KX as desired.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  kx TODO
**
* @par Note 
*      This will force loading an image into a PG if it is not already
*      accessible in the direction requested.
*      
*      Subsequent calls to methods that use the optimal KX will use the
*      KX set here.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void OptKX_IMG(void* p_geo, const int32_t* img, const int32_t* kx);

/**
* Read a vector in the optimal KX direction.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  v TODO
* @param[in]  be TODO
* @param[in]  ne TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadV_IMG(void* p_geo, const int32_t* img, const int32_t* v, const int32_t* be, const int32_t* ne, const int32_t* vv);

/**
* Read a column (constant X)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  bx TODO
* @param[in]  by TODO
* @param[in]  ny TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadX_IMG(void* p_geo, const int32_t* img, const int32_t* bx, const int32_t* by, const int32_t* ny, const int32_t* vv);

/**
* Read a row (constant Y)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  by TODO
* @param[in]  bx TODO
* @param[in]  nx TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadY_IMG(void* p_geo, const int32_t* img, const int32_t* by, const int32_t* bx, const int32_t* nx, const int32_t* vv);

/**
* Refresh the GI of a grid after it has moved or changed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void RefreshGI_IMG(void* p_geo, const char* grid);

/**
* Re-locate a grid image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  min_x TODO
* @param[in]  min_y TODO
* @param[in]  max_x TODO
* @param[in]  max_y TODO
* @param[in]  asp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Relocate_IMG(void* p_geo, const int32_t* img, const double* min_x, const double* min_y, const double* max_x, const double* max_y, const int32_t* asp);

/**
* Writes grid info report to a file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  wa TODO
* @param[in]  force TODO
* @param[in]  decimals TODO
* @param[in]  title TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Report_IMG(void* p_geo, const char* grid, const int32_t* wa, const int32_t* force, const int32_t* decimals, const char* title);

/**
* Writes grid info as a line to a CSV file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
* @param[in]  wa TODO
* @param[in]  force TODO
* @param[in]  decimals TODO
* @param[in]  header TODO
**
* @par Note 
*      Appends the stats as a CSV line to the input text file.
*      The header line should only be written to a new text file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4.2
*/
GX_EXPORT void ReportCSV_IMG(void* p_geo, const char* grid, const int32_t* wa, const int32_t* force, const int32_t* decimals, const int32_t* header);

/**
* Gets the grid value at a point
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  x TODO
* @param[in]  y TODO
* @return Grid value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetZ_IMG(void* p_geo, const int32_t* img, const double* x, const double* y);

/**
* Query information about the IMG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  query TODO
* @return Information requested, dummy if unknown or invalid.
**
* @par Note 
*      You can call either funtion to retrieve any data,
*      int or real.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT double rQuery_IMG(void* p_geo, const int32_t* img, const int32_t* query);

/**
* Mark the grid as unchanged so it will not output lineage
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetGridUnchanged_IMG(void* p_geo, const int32_t* img);

/**
* Sets location information about this image.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  dx TODO
* @param[in]  dy TODO
* @param[in]  xo TODO
* @param[in]  yo TODO
* @param[in]  rot TODO
**
* @par Note 
*      Calls to this function should be made BEFORE calls to SetIPJ_IMG,
*      as the latter function sets up the bounding rectangle in the metadata.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInfo_IMG(void* p_geo, const int32_t* img, const double* dx, const double* dy, const double* xo, const double* yo, const double* rot);

/**
* Set the projection of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  ipj TODO
**
* @par Note 
*      Calls to this function should be made AFTER calls to SetInfo_IMG,
*      as SetIPJ_IMG sets up the bounding rectangle in the metadata.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetIPJ_IMG(void* p_geo, const int32_t* img, const int32_t* ipj);

/**
* Set the metadata of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void SetMETA_IMG(void* p_geo, const int32_t* img, const int32_t* meta);

/**
* Copy a pager into the pager of a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  pg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetPG_IMG(void* p_geo, const int32_t* img, const int32_t* pg);

/**
* Set the trend information to a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  tr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetTR_IMG(void* p_geo, const int32_t* img, const int32_t* tr);

/**
* Syncronize the Metadata for this Grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void Sync_IMG(void* p_geo, const char* grid);

/**
* Write a vector in the optimal KX direction.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  v TODO
* @param[in]  be TODO
* @param[in]  ne TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteV_IMG(void* p_geo, const int32_t* img, const int32_t* v, const int32_t* be, const int32_t* ne, const int32_t* vv);

/**
* Write a column (constant X)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  bx TODO
* @param[in]  by TODO
* @param[in]  ny TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteX_IMG(void* p_geo, const int32_t* img, const int32_t* bx, const int32_t* by, const int32_t* ny, const int32_t* vv);

/**
* Write a row (constant Y)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  by TODO
* @param[in]  bx TODO
* @param[in]  nx TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteY_IMG(void* p_geo, const int32_t* img, const int32_t* by, const int32_t* bx, const int32_t* nx, const int32_t* vv);

/**
* Store a real parameter in an IMG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  name TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void SetRealParameter_IMG(void* p_geo, const int32_t* img, const char* name, const double* value);

/**
* Store a real parameter in an IMG object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  img TODO
* @param[in]  name TODO
* @return Parameter value, rDUMMY if not found.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT double rGetRealParameter_IMG(void* p_geo, const int32_t* img, const char* name);

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
