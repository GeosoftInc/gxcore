//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file pdf3d_gxlib.h
* @date 2017-11-06
* @brief File containing PDF3D GX C API constant and function declarations
*/

/**
* @defgroup PDF3D_Module PDF3D
* The PDF3D class provides the ability to create 3D PDFs.
* @{
*/

#pragma once
#ifndef HPDF3D_H_DEFINED
#define HPDF3D_H_DEFINED

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
* Render a voxel, voxsurf and/or gensurf to pdf
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  file_name TODO
* @param[in]  resolution TODO
* @param[in]  no_clipping TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4.2
*/
GX_EXPORT void Render_PDF3D(void* p_geo, const int32_t* mview, const char* file_name, const int32_t* resolution, const int32_t* no_clipping);

/**
* Render a voxel, voxsurf and/or gensurf to a specified page on a pdf
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mview TODO
* @param[in]  file_name TODO
* @param[in]  page_number TODO
* @param[in]  resolution TODO
* @param[in]  no_clip TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT void RenderToPage_PDF3D(void* p_geo, const int32_t* mview, const char* file_name, const int32_t* page_number, const int32_t* resolution, const int32_t* no_clip);

/**
* Export a 2D map to a PDF file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input_map TODO
* @param[in]  output_file TODO
* @param[in]  create_layersin_pdf TODO
* @param[in]  geospatial_pdf TODO
* @param[in]  open_pdf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.5
*/
GX_EXPORT void Export2D_PDF3D(void* p_geo, const char* input_map, const char* output_file, const int32_t* create_layersin_pdf, const int32_t* geospatial_pdf, const int32_t* open_pdf);

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
