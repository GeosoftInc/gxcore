//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file agg_gxlib.h
* @date 2017-11-06
* @brief File containing AGG GX C API constant and function declarations
*/

/**
* @defgroup AGG_Module AGG
* The AGG class is used to handle image display on maps.
* An aggregate contains one or more image layers (LAY) with
* each layer representing a grid or image file. The AGG
* will combine all the layers to form one image
* @{
*/

#pragma once
#ifndef HAGG_H_DEFINED
#define HAGG_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name AGG_LAYER_ZONE Definitions
* 
* Aggregate Layer Zone defines
*/
///@{
/** 
* AGG_LAYER_ZONE_DEFAULT
* 
* If a color table with no color transform is passed
* it will be used with the default zoning
* method of the data, which is usually
* AGG_LAYER_ZONE_EQUALAREA.
*/
#define AGG_LAYER_ZONE_DEFAULT 0
/** 
* AGG_LAYER_ZONE_LINEAR
* 
* Linear Distribution
*/
#define AGG_LAYER_ZONE_LINEAR 1
/** 
* AGG_LAYER_ZONE_NORMAL
* 
* Normal Distribution
*/
#define AGG_LAYER_ZONE_NORMAL 2
/** 
* AGG_LAYER_ZONE_EQUALAREA
* 
* Equal Area Distribution
*/
#define AGG_LAYER_ZONE_EQUALAREA 3
/** 
* AGG_LAYER_ZONE_SHADE
* 
* If AGG_LAYER_ZONE_SHADE is specified, a shaded relief
* layer is created from the specified grid.  A new grid
* file will also be created to hold the shaded relief
* image data.  This file will have the same name as the
* original grid but with "_s" added to the root name.
* It will always be located in the workspace directory
* regardless of the location of the original source image.
* If the file already exists, it will used as it is.
* Shading is always at inclination = declination = 45 deg.
* with default scaling.  If different shading is desired,
* use the LayerShadeIMG_AGG method.
*/
#define AGG_LAYER_ZONE_SHADE 4
/** 
* AGG_LAYER_ZONE_LOGLINEAR
* 
* Log Linear Distribution
*/
#define AGG_LAYER_ZONE_LOGLINEAR 5
/** 
* AGG_LAYER_ZONE_LAST
* 
* The last ITR used to display this
* data will be used if it exists.  If it
* does not exist, the behaviour is the same
* as AGG_LAYER_ZONE_DEFAULT.
*/
#define AGG_LAYER_ZONE_LAST 6
///@}

/**
* @name AGG_MODEL Definitions
* 
* Aggregation color model defines
*/
///@{
/** 
* AGG_MODEL_HSV
* 
* Hue Saturation Value
*/
#define AGG_MODEL_HSV 1
/** 
* AGG_MODEL_RGB
* 
* Red Green Blue
*/
#define AGG_MODEL_RGB 2
/** 
* AGG_MODEL_CMY
* 
* Cyan Magenta Yellow
*/
#define AGG_MODEL_CMY 3
///@}

/**
* @name AGG_RENDER Definitions
* 
* Aggregation rendering modes
*/
///@{
/** 
* AGG_RENDER_ADD
* 
* Add all the colors together
*/
#define AGG_RENDER_ADD 0
/** 
* AGG_RENDER_BLEND
* 
* Adds and divides by the number of non-dummy colors
*/
#define AGG_RENDER_BLEND 1
/** 
* AGG_RENDER_BLEND_ALL
* 
* Adds and divides by the number of colors
*/
#define AGG_RENDER_BLEND_ALL 2
/** 
* AGG_RENDER_FADE
* 
* Multiplies current colors by the input's colors over 255 (input works as the percentage of color to preserve)
*/
#define AGG_RENDER_FADE 3
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Sets the Color Model
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  model TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetModel_AGG(void* p_geo, const int32_t* agg, const int32_t* model);

/**
* Change the brightness.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  brt TODO
**
* @par Note 
*      0.0 brightness does nothing.
*      -1.0 to 0.0 makes colors darker, -1.0 is black
*      0.0 to 1.0 makes colors lighter, 1.0 is white
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ChangeBrightness_AGG(void* p_geo, const int32_t* agg, const double* brt);

/**
* Create an aggregate
*
* @param[in]  p_geo GX Context Pointer
* @return AGG object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_AGG(void* p_geo);

/**
* Create AGG from Map with Group name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  name TODO
* @return AGG object
**
* @par Note 
*      The Agg Group name must include the View name with a
*      backslash separating the view name and group name; e.g.
*      "Data\AGG_test" (when used as a string, the double slash
*      represents as single \).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT int32_t CreateMap_AGG(void* p_geo, const int32_t* map, const char* name);

/**
* Destroy the AGG handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_AGG(void* p_geo, const int32_t* agg);

/**
* Get the ITR of a layer
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  layer TODO
* @param[in]  itr TODO
**
* @par Note 
*      Layers are numbered from 0, consecutively in the order they are
*      placed in the aggregate.
*      
*      An error will occur if the layer does not exist.
*      
*      Caller must create/destroy ITR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetLayerITR_AGG(void* p_geo, const int32_t* agg, const int32_t* layer, const int32_t* itr);

/**
* Lists file names of all the IMGs inside of the AGG.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  gvv TODO
* @return The number of IMGs.
**
* @par Note 
*      The returned VV contains the file names.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.6
*/
GX_EXPORT int32_t iListImg_AGG(void* p_geo, const int32_t* agg, const int32_t* gvv);

/**
* Get the number of layers in an aggregate.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @return The number of layers in an aggregate.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNumLayers_AGG(void* p_geo, const int32_t* agg);

/**
* Add an image as a layer in an aggregate.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  name TODO
* @param[in]  zone TODO
* @param[in]  color TODO
* @param[in]  cont TODO
*
* @par See also 
*      LayerShadeIMG_AGG
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LayerIMG_AGG(void* p_geo, const int32_t* agg, const char* name, const int32_t* zone, const char* color, const double* cont);

/**
* Add an image as a layer in an aggregate.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  name TODO
* @param[in]  zone TODO
* @param[in]  color TODO
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  cont TODO
*
* @par See also 
*      LayerShadeIMG_AGG
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void LayerIMGEx_AGG(void* p_geo, const int32_t* agg, const char* name, const int32_t* zone, const char* color, const double* min, const double* max, const double* cont);

/**
* Add a shaded image as a layer in an aggregate.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  name TODO
* @param[in]  color TODO
* @param[in]  inc TODO
* @param[in]  dec TODO
* @param[out] scl TODO
**
* @par Note 
*      A new grid file will be created to hold the shaded
*      image data.  This file will have the same name as the
*      original grid but with "_s" added to the root name.
*      It will always be located in the workspace directory
*      regardless of the location of the original source image.
*      If the file already exists, it will replaced.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LayerShadeIMG_AGG(void* p_geo, const int32_t* agg, const char* name, const char* color, const double* inc, const double* dec, double* scl);

/**
* Get the brightness setting of the AGG
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
**
* @par Note 
*      Brightness can range from -1.0 (black) to 1.0 (white).
*      This brightness control is relative to the normal color
*      when the AGG is created.
*      
*      AGG brightness depends on the brightness of the ITR of each layer.
*      Calling dGetBright_AGG will poll all layers, and if all have the same
*      brightness, this is returned.  If any of the layers have a different
*      brightness, the current brightness of each layer is changed to be
*      the reference brightness (0.0)and the brightness value of 0.0 is
*      returned.
*
* @par See also 
*      ChangeBrightness_AGG, rGetBrightness_AGG, ChangeBrightness_AGG
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetBrightness_AGG(void* p_geo, const int32_t* agg);

/**
* Set the ITR of a layer
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  layer TODO
* @param[in]  itr TODO
**
* @par Note 
*      Layers are numbered from 0, consecutively in the order they are
*      placed in the aggregate.
*      
*      An error will occur if the layer does not exist.
*      
*      Caller must create/destroy ITR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLayerITR_AGG(void* p_geo, const int32_t* agg, const int32_t* layer, const int32_t* itr);

/**
* Sets the Rendering Method
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  agg TODO
* @param[in]  method TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void SetRenderMethod_AGG(void* p_geo, const int32_t* agg, const int32_t* method);

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
