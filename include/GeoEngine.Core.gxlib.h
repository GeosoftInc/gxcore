
#pragma once
/*

=====================================================================
Geosoft GX Wapper Function Headers
=====================================================================

*/

#ifdef _MSC_VER

#include <windows.h>

#define GX_WRAPPER_FUNC  __declspec(dllexport)
#define GX_STANDARD_FUNC 
#define GX_WRAPPER_CALL  _cdecl
#define GX_STANDARD_CALL _stdcall

#define GX_OBJECT_PTR    void*

#define GX_VAR           
#define GX_CONST         const

#define GX_VOID          void
#define GX_LONG          long
#define GX_DOUBLE        double
#define GX_HANDLE        long

#define GX_LONG_PTR      long*
#define GX_DOUBLE_PTR    double*
#define GX_HANDLE_PTR    long*
#define GX_ASTR_PTR      char*
#define GX_WSTR_PTR      wchar_t*
#if GEO_UTF8
   #define GX_STR_PTR       GX_ASTR_PTR
#elif _UNICODE
   #define GX_STR_PTR       GX_WSTR_PTR
#else
   #define GX_STR_PTR       GX_ASTR_PTR
#endif

#endif


#ifdef __cplusplus
   extern "C" {
#endif



/*---------------- Copy_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_3DN(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_3DN(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Create_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_3DN(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_3DN(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_3DN(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_3DN(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetPointOfView_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPointOfView_3DN(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPointOfView_3DN(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetScale_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetScale_3DN(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetScale_3DN(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetAxisColor_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetAxisColor_3DN(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetAxisColor_3DN(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- IGetAxisFont_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetAxisFont_3DN(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetAxisFont_3DN(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iGetBackgroundColor_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetBackgroundColor_3DN(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetBackgroundColor_3DN(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- IGetRenderControls_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetRenderControls_3DN(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetRenderControls_3DN(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- iGetShading_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetShading_3DN(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetShading_3DN(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SetAxisColor_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAxisColor_3DN(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAxisColor_3DN(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SetAxisFont_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAxisFont_3DN(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAxisFont_3DN(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- SetBackgroundColor_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetBackgroundColor_3DN(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetBackgroundColor_3DN(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- SetPointOfView_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPointOfView_3DN(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPointOfView_3DN(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- SetRenderControls_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRenderControls_3DN(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRenderControls_3DN(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- SetScale_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetScale_3DN(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetScale_3DN(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- SetShading_3DN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetShading_3DN(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetShading_3DN(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- OpenMVIEW_3DV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
OpenMVIEW_3DV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_OpenMVIEW_3DV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ICopyToMAP_3DV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ICopyToMAP_3DV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ICopyToMAP_3DV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- CreateNew_3DV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateNew_3DV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateNew_3DV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Open_3DV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Open_3DV(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Open_3DV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- FromMap_3DV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
FromMap_3DV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_FromMap_3DV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- CRC3DV_3DV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRC3DV_3DV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_VAR   GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRC3DV_3DV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- _SetModel_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetModel_AGG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetModel_AGG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ChangeBrightness_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ChangeBrightness_AGG(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ChangeBrightness_AGG(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- Create_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_AGG(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_AGG(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateMap_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateMap_AGG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateMap_AGG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Destroy_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_AGG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_AGG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetLayerITR_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLayerITR_AGG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLayerITR_AGG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- iListImg_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iListImg_AGG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iListImg_AGG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iNumLayers_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumLayers_AGG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumLayers_AGG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- LayerIMG_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LayerIMG_AGG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LayerIMG_AGG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- LayerIMGEx_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LayerIMGEx_AGG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LayerIMGEx_AGG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- LayerShadeIMG_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LayerShadeIMG_AGG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LayerShadeIMG_AGG(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- rGetBrightness_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetBrightness_AGG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetBrightness_AGG(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- SetLayerITR_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLayerITR_AGG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLayerITR_AGG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SetRenderMethod_AGG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRenderMethod_AGG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRenderMethod_AGG(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- ReadBuff_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadBuff_BF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_OBJECT_PTR,
            GX_LONG);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadBuff_BF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_OBJECT_PTR,
                GX_LONG);

/*---------------- WriteBuff_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteBuff_BF(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_OBJECT_PTR,
             GX_LONG);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteBuff_BF(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_OBJECT_PTR,
                 GX_LONG);

/*---------------- _ChSize_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_ChSize_BF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__ChSize_BF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- _Seek_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Seek_BF(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Seek_BF(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- Copy_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_BF(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_BF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- CRC_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRC_BF(GX_VAR   GX_OBJECT_PTR,
       GX_CONST GX_HANDLE_PTR,
       GX_CONST GX_LONG_PTR,
       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRC_BF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);

/*---------------- Create_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_BF(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_BF(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- CreateSBF_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateSBF_BF(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateSBF_BF(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Destroy_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_BF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_BF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- DestroyEx_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DestroyEx_BF(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DestroyEx_BF(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iEOF_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEOF_BF(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEOF_BF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- iQueryWrite_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iQueryWrite_BF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iQueryWrite_BF(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- IReadBinaryString_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IReadBinaryString_BF(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IReadBinaryString_BF(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- iSize_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSize_BF(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSize_BF(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- iTell_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTell_BF(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTell_BF(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- ReadInt_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadInt_BF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadInt_BF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_LONG_PTR);

/*---------------- ReadReal_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadReal_BF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadReal_BF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- ReadVM_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadVM_BF(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadVM_BF(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- ReadVV_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadVV_BF(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadVV_BF(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- SetDestroyStatus_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDestroyStatus_BF(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDestroyStatus_BF(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- WriteBinaryString_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteBinaryString_BF(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteBinaryString_BF(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- WriteDataNull_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteDataNull_BF(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteDataNull_BF(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- WriteInt_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteInt_BF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteInt_BF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- WriteReal_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteReal_BF(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteReal_BF(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- WriteVM_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteVM_BF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteVM_BF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- WriteVV_BF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteVV_BF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteVV_BF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- CreateDB_DAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateDB_DAT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateDB_DAT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- CreateXGD_DAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateXGD_DAT(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateXGD_DAT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Destroy_DAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DAT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DAT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetLST_DAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLST_DAT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLST_DAT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- RangeXYZ_DAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeXYZ_DAT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeXYZ_DAT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_LONG_PTR);

/*---------------- CreateArcLYR_DATALINKD[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateArcLYR_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateArcLYR_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- CreateArcLYREx_DATALINKD[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateArcLYREx_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateArcLYREx_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- CreateArcLYRFromTMP_DATALINKD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateArcLYRFromTMP_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateArcLYRFromTMP_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR);

/*---------------- CreateArcLYRFromTMPEx_DATALINKD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateArcLYRFromTMPEx_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateArcLYRFromTMPEx_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_LONG_PTR);

/*---------------- CreateBING_DATALINKD[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateBING_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateBING_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- Destroy_DATALINKD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GetExtents_DATALINKD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExtents_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExtents_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetIPJ_DATALINKD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_DATALINKD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- CreateVoxel_DATAMINE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateVoxel_DATAMINE(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateVoxel_DATAMINE(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- NumericFieldLST_DATAMINE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NumericFieldLST_DATAMINE(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NumericFieldLST_DATAMINE(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- CreateDup_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateDup_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateDup_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- CreateDupComp_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateDupComp_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateDupComp_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- DupSymbAcross_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DupSymbAcross_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DupSymbAcross_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- EasyMakerSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EasyMakerSymb_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EasyMakerSymb_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- GetChanStr_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetChanStr_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetChanStr_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- GetChanVV_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetChanVV_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetChanVV_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetChanVVExpanded_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetChanVVExpanded_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetChanVVExpanded_DB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- GetIPJ_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- GetITR_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetITR_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetITR_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- GetRegSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetRegSymb_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetRegSymb_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetRegSymbSetting_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetRegSymbSetting_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetRegSymbSetting_DB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- GetVaChanVV_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVaChanVV_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVaChanVV_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- iBlobsMax_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iBlobsMax_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iBlobsMax_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iChansMax_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iChansMax_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iChansMax_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- IFormatChan_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFormatChan_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFormatChan_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- iGetChanArraySize_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanArraySize_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanArraySize_DB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- IGetChanClass_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetChanClass_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetChanClass_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iGetChanDecimal_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanDecimal_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanDecimal_DB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iGetChanFormat_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanFormat_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanFormat_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iGetChanInt_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanInt_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanInt_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- IGetChanLabel_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetChanLabel_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetChanLabel_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- IGetChanName_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetChanName_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetChanName_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iGetChanProtect_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanProtect_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanProtect_DB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iGetChanType_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanType_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanType_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IGetChanUnit_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetChanUnit_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetChanUnit_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iGetChanWidth_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanWidth_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanWidth_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- IGetName_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetName_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetName_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iGetRegSymbSetting_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetRegSymbSetting_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetRegSymbSetting_DB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- IGetSymbName_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetSymbName_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetSymbName_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iHaveITR_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHaveITR_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHaveITR_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IiCoordPair_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiCoordPair_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiCoordPair_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- iLinesMax_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLinesMax_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLinesMax_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iUsersMax_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iUsersMax_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iUsersMax_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- MakerSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MakerSymb_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MakerSymb_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- PutChanVV_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PutChanVV_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PutChanVV_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- PutVaChanVV_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PutVaChanVV_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PutVaChanVV_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ReadBlobBF_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadBlobBF_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadBlobBF_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- rGetChanReal_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetChanReal_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetChanReal_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- rGetRegSymbSetting_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetRegSymbSetting_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetRegSymbSetting_DB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- SetAllChanProtect_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAllChanProtect_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAllChanProtect_DB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- SetChanClass_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanClass_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanClass_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- SetChanDecimal_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanDecimal_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanDecimal_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetChanFormat_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanFormat_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanFormat_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SetChanInt_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanInt_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanInt_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SetChanLabel_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanLabel_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanLabel_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- SetChanName_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanName_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanName_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- SetChanProtect_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanProtect_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanProtect_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetChanReal_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanReal_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanReal_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- SetChanStr_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanStr_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanStr_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- SetChanUnit_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanUnit_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanUnit_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- SetChanWidth_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanWidth_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanWidth_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SetIPJ_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- SetITR_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetITR_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetITR_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- SetRegSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRegSymb_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRegSymb_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- SetRegSymbSetting_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRegSymbSetting_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRegSymbSetting_DB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- WriteBlobBF_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteBlobBF_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteBlobBF_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Commit_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Commit_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Commit_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Compact_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Compact_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Compact_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Create_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Create_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Create_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- CreateComp_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateComp_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateComp_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- CreateEx_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateEx_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateEx_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- DelLine0_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DelLine0_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DelLine0_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Discard_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Discard_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Discard_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Grow_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Grow_DB(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_STR_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Grow_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- iCanOpen_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCanOpen_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCanOpen_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- iCanOpenReadOnly_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCanOpenReadOnly_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCanOpenReadOnly_DB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- iCheck_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheck_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheck_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- iIsEmpty_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsEmpty_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsEmpty_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- iIsLineEmpty_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsLineEmpty_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsLineEmpty_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Open_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Open_DB(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_STR_PTR,
        GX_CONST GX_STR_PTR,
        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Open_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);

/*---------------- OpenReadOnly_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
OpenReadOnly_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_OpenReadOnly_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- Repair_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Repair_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Repair_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- Sync_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sync_DB(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sync_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- CopyData_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyData_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyData_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iGetColVA_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetColVA_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetColVA_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- iGetChannelLength_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChannelLength_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChannelLength_DB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- rGetFidIncr_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetFidIncr_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetFidIncr_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- rGetFidStart_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetFidStart_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetFidStart_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SetFid_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFid_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFid_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- WindowVACh_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WindowVACh_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WindowVACh_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- WindowVACh2_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WindowVACh2_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WindowVACh2_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- SetLineSelection_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineSelection_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineSelection_DB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- iGetLineSelection_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetLineSelection_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetLineSelection_DB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- FirstSelLine_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FirstSelLine_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FirstSelLine_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GetLineMapFid_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLineMapFid_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLineMapFid_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetSelect_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSelect_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSelect_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iCountSelLines_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCountSelLines_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCountSelLines_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iIsChanName_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsChanName_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsChanName_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- iIsChanValid_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsChanValid_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsChanValid_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iIsLineName_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsLineName_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsLineName_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- iIsLineValid_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsLineValid_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsLineValid_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iLineCategory_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLineCategory_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLineCategory_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iLineFlight_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLineFlight_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLineFlight_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ILineLabel_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ILineLabel_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ILineLabel_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iLineNumber_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLineNumber_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLineNumber_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ILineNumber2_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ILineNumber2_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ILineNumber2_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iLineType_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLineType_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLineType_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- iLineVersion_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLineVersion_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLineVersion_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- ISetLineName_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ISetLineName_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ISetLineName_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- ISetLineName2_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ISetLineName2_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ISetLineName2_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- LoadSelect_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadSelect_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadSelect_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- NextSelLine_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NextSelLine_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NextSelLine_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- rLineBearing_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLineBearing_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLineBearing_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- rLineDate_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLineDate_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLineDate_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- SaveSelect_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveSelect_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveSelect_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Select_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Select_DB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Select_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SetLineBearing_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineBearing_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineBearing_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- SetLineDate_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineDate_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineDate_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- SetLineFlight_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineFlight_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineFlight_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SetLineMapFid_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineMapFid_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineMapFid_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- SetLineNum_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineNum_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineNum_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SetLineType_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineType_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineType_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- SetLineVer_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineVer_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineVer_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SetSelect_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetSelect_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetSelect_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GetMETA_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMETA_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMETA_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetMETA_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMETA_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMETA_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- ArrayLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ArrayLST_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ArrayLST_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- ArraySizeLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ArraySizeLST_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ArraySizeLST_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ChanLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ChanLST_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ChanLST_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- NormalChanLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NormalChanLST_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NormalChanLST_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- ClassChanLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClassChanLST_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClassChanLST_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- ClassGroupLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClassGroupLST_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClassGroupLST_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- CreateSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateSymb_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateSymb_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- CreateSymbEx_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateSymbEx_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateSymbEx_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- CSVChanLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CSVChanLST_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CSVChanLST_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- DeleteSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteSymb_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteSymb_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- DupLineSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DupLineSymb_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DupLineSymb_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- DupSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DupSymb_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DupSymb_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- DupSymbNoLock_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DupSymbNoLock_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DupSymbNoLock_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- FindChan_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FindChan_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FindChan_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- FindSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FindSymb_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FindSymb_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- GetChanOrderLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetChanOrderLST_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetChanOrderLST_DB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- GetXYZChanSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetXYZChanSymb_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetXYZChanSymb_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iClassChanList_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iClassChanList_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iClassChanList_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- iExistChan_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistChan_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistChan_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iExistSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistSymb_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistSymb_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iValidSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iValidSymb_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iValidSymb_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iGetSymbLock_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetSymbLock_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetSymbLock_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IGetXYZChan_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetXYZChan_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetXYZChan_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- iSymbList_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSymbList_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSymbList_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- LineLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LineLST_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LineLST_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- LockSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LockSymb_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LockSymb_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- MaskChanLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaskChanLST_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaskChanLST_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- SelectedLineLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectedLineLST_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectedLineLST_DB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- SetChanOrderLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChanOrderLST_DB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChanOrderLST_DB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- SetXYZChan_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetXYZChan_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetXYZChan_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- StringChanLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StringChanLST_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StringChanLST_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- SymbLST_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbLST_DB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbLST_DB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- UnLockAllSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UnLockAllSymb_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UnLockAllSymb_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- UnLockSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UnLockSymb_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UnLockSymb_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- AddAssociatedLoad_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddAssociatedLoad_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddAssociatedLoad_DB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- AddComment_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddComment_DB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddComment_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- AddIntComment_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddIntComment_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddIntComment_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- AddRealComment_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddRealComment_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddRealComment_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- AddTimeComment_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddTimeComment_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddTimeComment_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- Associate_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Associate_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Associate_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- AssociateAll_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AssociateAll_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AssociateAll_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- AssociateClass_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AssociateClass_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AssociateClass_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- GenValidChanSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenValidChanSymb_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenValidChanSymb_DB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- GenValidLineSymb_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenValidLineSymb_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenValidLineSymb_DB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- GetChanVA_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetChanVA_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetChanVA_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetVAScaling_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVAScaling_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVAScaling_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetVAWindows_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVAWindows_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVAWindows_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR);

/*---------------- SetVABaseCoordinateInfo_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVABaseCoordinateInfo_DB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVABaseCoordinateInfo_DB(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- GetVABaseCoordinateInfo_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVABaseCoordinateInfo_DB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVABaseCoordinateInfo_DB(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- IGetGroupClass_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetGroupClass_DB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetGroupClass_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iGetInfo_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetInfo_DB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetInfo_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IGetVAProfColorFile_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetVAProfColorFile_DB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetVAProfColorFile_DB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- IGetVAProfSectOption_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetVAProfSectOption_DB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetVAProfSectOption_DB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- IGetVASectColorFile_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetVASectColorFile_DB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetVASectColorFile_DB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- iIsAssociated_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsAssociated_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsAssociated_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iIsWholeplot_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsWholeplot_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsWholeplot_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- PutChanVA_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PutChanVA_DB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PutChanVA_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SetGroupClass_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGroupClass_DB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGroupClass_DB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- SetVAProfColorFile_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVAProfColorFile_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVAProfColorFile_DB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- SetVAProfSectOption_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVAProfSectOption_DB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVAProfSectOption_DB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- SetVAScaling_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVAScaling_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVAScaling_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- SetVASectColorFile_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVASectColorFile_DB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVASectColorFile_DB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- SetVAWindows_DB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVAWindows_DB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVAWindows_DB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Create_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_DBREAD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_DBREAD(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- CreateXY_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateXY_DBREAD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateXY_DBREAD(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- CreateXYZ_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateXYZ_DBREAD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateXYZ_DBREAD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DBREAD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DBREAD(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iAddChannel_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddChannel_DBREAD(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddChannel_DBREAD(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- GetVV_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVV_DBREAD(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVV_DBREAD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GetVA_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVA_DBREAD(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVA_DBREAD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GetVVx_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVVx_DBREAD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVVx_DBREAD(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetVVy_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVVy_DBREAD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVVy_DBREAD(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetVVz_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVVz_DBREAD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVVz_DBREAD(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iGetChanArraySize_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanArraySize_DBREAD(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanArraySize_DBREAD(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- iGetNumberOfBlocksToProcess_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetNumberOfBlocksToProcess_DBREAD(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetNumberOfBlocksToProcess_DBREAD(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR);

/*---------------- iGetNextBlock_DBREAD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetNextBlock_DBREAD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetNextBlock_DBREAD(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR);

/*---------------- Create_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_DBWRITE(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- CreateXY_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateXY_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateXY_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- CreateXYZ_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateXYZ_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateXYZ_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- iAddChannel_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddChannel_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddChannel_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- GetDB_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetDB_DBWRITE(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetDB_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetVV_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVV_DBWRITE(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVV_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- GetVA_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVA_DBWRITE(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVA_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- GetVVx_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVVx_DBWRITE(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVVx_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GetVVy_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVVy_DBWRITE(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVVy_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GetVVz_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVVz_DBWRITE(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVVz_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iGetChanArraySize_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanArraySize_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanArraySize_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- AddBlock_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddBlock_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddBlock_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- Commit_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Commit_DBWRITE(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Commit_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- TestFunc_DBWRITE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TestFunc_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TestFunc_DBWRITE(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Create_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_DSEL(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_DSEL(GX_VAR   GX_OBJECT_PTR);

/*---------------- DataSignificantFigures_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DataSignificantFigures_DSEL(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DataSignificantFigures_DSEL(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_DOUBLE_PTR);

/*---------------- Destroy_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DSEL(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DSEL(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- MetaQuery_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MetaQuery_DSEL(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MetaQuery_DSEL(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- PictureQuality_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PictureQuality_DSEL(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PictureQuality_DSEL(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- RequestAllInfo_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RequestAllInfo_DSEL(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RequestAllInfo_DSEL(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- SelectArea_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectArea_DSEL(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectArea_DSEL(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SelectRect_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectRect_DSEL(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectRect_DSEL(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- SelectResolution_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectResolution_DSEL(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectResolution_DSEL(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- SelectSize_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectSize_DSEL(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectSize_DSEL(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SetExtractAsDocument_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetExtractAsDocument_DSEL(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetExtractAsDocument_DSEL(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- SetIPJ_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_DSEL(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_DSEL(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- SpatialAccuracy_DSEL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SpatialAccuracy_DSEL(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SpatialAccuracy_DSEL(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- GetDataView_E3DV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetDataView_E3DV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetDataView_E3DV(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetBaseView_E3DV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetBaseView_E3DV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetBaseView_E3DV(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetInfo_EXT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetInfo_EXT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetInfo_EXT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- iCheckError_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheckError_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheckError_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- iCheckTerminate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheckTerminate_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheckTerminate_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_VAR   GX_LONG_PTR);

/*---------------- ShowError_GEO[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ShowError_GEO(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ShowError_GEO(GX_VAR   GX_OBJECT_PTR);

/*---------------- sGetError_GEO[_public] ----------------*/

#if defined(_UNICODE) && !defined(GEO_UTF8)
GX_WRAPPER_FUNC short GX_WRAPPER_CALL
sGetError_GEOW(GX_VAR   GX_OBJECT_PTR,
              GX_VAR   GX_STR_PTR,
              GX_LONG,
              GX_VAR   GX_STR_PTR,
              GX_LONG,
              GX_VAR   GX_LONG_PTR);
#define Std_sGetError_GEO Std_sGetError_GEOW
GX_STANDARD_FUNC short GX_STANDARD_CALL
Std_sGetError_GEOW(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_LONG,
                  GX_VAR   GX_STR_PTR,
                  GX_LONG,
                  GX_VAR   GX_LONG_PTR);
#define sGetError_GEO sGetError_GEOW
#else
GX_WRAPPER_FUNC short GX_WRAPPER_CALL
sGetError_GEO(GX_VAR   GX_OBJECT_PTR,
              GX_VAR   GX_STR_PTR,
              GX_LONG,
              GX_VAR   GX_STR_PTR,
              GX_LONG,
              GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC short GX_STANDARD_CALL
Std_sGetError_GEO(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_LONG,
                  GX_VAR   GX_STR_PTR,
                  GX_LONG,
                  GX_VAR   GX_LONG_PTR);
#endif

/*---------------- GetPtrVM_GEO[_public] ----------------*/

GX_WRAPPER_FUNC GX_OBJECT_PTR GX_WRAPPER_CALL
GetPtrVM_GEO(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_OBJECT_PTR GX_STANDARD_CALL
Std_GetPtrVM_GEO(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetPtrVV_GEO[_public] ----------------*/

GX_WRAPPER_FUNC GX_OBJECT_PTR GX_WRAPPER_CALL
GetPtrVV_GEO(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_OBJECT_PTR GX_STANDARD_CALL
Std_GetPtrVV_GEO(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- pGetInternalGXXPointer_GEO[_public] ----------------*/

GX_WRAPPER_FUNC GX_OBJECT_PTR GX_WRAPPER_CALL
pGetInternalGXXPointer_GEO(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_OBJECT_PTR GX_STANDARD_CALL
Std_pGetInternalGXXPointer_GEO(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- sCheckTerminate_GEO[_public] ----------------*/

GX_WRAPPER_FUNC short GX_WRAPPER_CALL
sCheckTerminate_GEO(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC short GX_STANDARD_CALL
Std_sCheckTerminate_GEO(GX_VAR   GX_OBJECT_PTR);

/*---------------- RegisterResourceTracking_GEO[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RegisterResourceTracking_GEO(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_OBJECT_PTR,
                             void (_stdcall *param3)(void*));
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RegisterResourceTracking_GEO(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_OBJECT_PTR,
                                 void (_stdcall *param3)(void*));

/*---------------- UnregisterResourceTracking_GEO[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UnregisterResourceTracking_GEO(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_OBJECT_PTR,
                               void (_stdcall *param3)(void*));
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UnregisterResourceTracking_GEO(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_OBJECT_PTR,
                                   void (_stdcall *param3)(void*));

/*---------------- Open_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Open_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Open_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- Destroy_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GetIPJ_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetFeatures_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetFeatures_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetFeatures_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetSections_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSections_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSections_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetAllShapes_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAllShapes_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAllShapes_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- GetShapesForFeature_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetShapesForFeature_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetShapesForFeature_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetShapesForSection_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetShapesForSection_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetShapesForSection_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetShapesForFeatureAndSection_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetShapesForFeatureAndSection_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetShapesForFeatureAndSection_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                                            GX_CONST GX_HANDLE_PTR,
                                            GX_CONST GX_STR_PTR,
                                            GX_CONST GX_STR_PTR,
                                            GX_CONST GX_HANDLE_PTR);

/*---------------- GetFeatureProperties_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetFeatureProperties_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetFeatureProperties_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_LONG_PTR);

/*---------------- GetSectionProperties_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSectionProperties_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSectionProperties_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetShapeProperties_GEOSTRING[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetShapeProperties_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetShapeProperties_GEOSTRING(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_VAR   GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_VAR   GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR);

/*---------------- Create_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_GIS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_GIS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- CreateMap2D_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateMap2D_GIS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateMap2D_GIS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Destroy_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_GIS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_GIS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetBPRModelsLST_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetBPRModelsLST_GIS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetBPRModelsLST_GIS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- GetIPJ_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetIPJ_GIS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetIPJ_GIS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetMETA_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMETA_GIS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMETA_GIS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetRange_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetRange_GIS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetRange_GIS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- iDatamineType_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDatamineType_GIS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDatamineType_GIS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- IGetFileName_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetFileName_GIS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetFileName_GIS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iIsMIMapFile_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsMIMapFile_GIS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsMIMapFile_GIS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- iIsMIRasterTabFile_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsMIRasterTabFile_GIS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsMIRasterTabFile_GIS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- iIsMIRotatedRasterTabFile_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsMIRotatedRasterTabFile_GIS(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsMIRotatedRasterTabFile_GIS(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR);

/*---------------- iIsSHPFile3D_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsSHPFile3D_GIS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsSHPFile3D_GIS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- iIsSHPFilePoint_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsSHPFilePoint_GIS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsSHPFilePoint_GIS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- iNumAttribs_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumAttribs_GIS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumAttribs_GIS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- iNumShapes_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumShapes_GIS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumShapes_GIS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- IScanMIRasterTabFile_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IScanMIRasterTabFile_GIS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IScanMIRasterTabFile_GIS(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- LoadASCII_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadASCII_GIS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadASCII_GIS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- LoadGDB_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadGDB_GIS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadGDB_GIS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- LoadMAP_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadMAP_GIS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadMAP_GIS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- LoadMAPEx_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadMAPEx_GIS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadMAPEx_GIS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- LoadMetaGroupsMAP_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadMetaGroupsMAP_GIS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadMetaGroupsMAP_GIS(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- LoadPLY_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadPLY_GIS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadPLY_GIS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- LoadShapesGDB_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadShapesGDB_GIS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadShapesGDB_GIS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- SetDmWireframePtFile_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDmWireframePtFile_GIS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDmWireframePtFile_GIS(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- SetIPJ_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_GIS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_GIS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetLST_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLST_GIS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLST_GIS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetMETA_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMETA_GIS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMETA_GIS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SetTriangulationObjectIndex_GIS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetTriangulationObjectIndex_GIS(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetTriangulationObjectIndex_GIS(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR);

/*---------------- Create_HGD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_HGD(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_HGD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- Destroy_HGD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_HGD(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_HGD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- ExportIMG_HGD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportIMG_HGD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportIMG_HGD(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- GetMETA_HGD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMETA_HGD(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMETA_HGD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- hCreateIMG_HGD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
hCreateIMG_HGD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_hCreateIMG_HGD(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- SetMETA_HGD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMETA_HGD(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMETA_HGD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Create_HXYZ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_HXYZ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_HXYZ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Destroy_HXYZ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_HXYZ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_HXYZ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetMETA_HXYZ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMETA_HXYZ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMETA_HXYZ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- hCreateDB_HXYZ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
hCreateDB_HXYZ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_hCreateDB_HXYZ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- hCreateSQL_HXYZ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
hCreateSQL_HXYZ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_hCreateSQL_HXYZ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- SetMETA_HXYZ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMETA_HXYZ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMETA_HXYZ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Calc_IGRF[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Calc_IGRF(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_VAR   GX_DOUBLE_PTR,
          GX_VAR   GX_DOUBLE_PTR,
          GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Calc_IGRF(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR);

/*---------------- CalcVV_IGRF[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CalcVV_IGRF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CalcVV_IGRF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Create_IGRF[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_IGRF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_IGRF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- DateRange_IGRF[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DateRange_IGRF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DateRange_IGRF(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);

/*---------------- Destroy_IGRF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_IGRF(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_IGRF(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Average2_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Average2_IMG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Average2_IMG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- Copy_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_IMG(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_IMG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Create_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- CreateFile_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateFile_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateFile_IMG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- CreateMem_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateMem_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateMem_IMG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- CreateNewFile_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateNewFile_IMG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateNewFile_IMG(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- CreateOutFile_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateOutFile_IMG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateOutFile_IMG(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- CreateProjected_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateProjected_IMG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateProjected_IMG(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- CreateProjected2_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateProjected2_IMG(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateProjected2_IMG(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- CreateProjected3_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateProjected3_IMG(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateProjected3_IMG(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- Destroy_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_IMG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GethPG_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GethPG_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GethPG_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetInfo_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetInfo_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetInfo_IMG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetIPJ_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetMETA_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMETA_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMETA_IMG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetPG_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPG_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPG_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- GetProjectedCellSize_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetProjectedCellSize_IMG(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetProjectedCellSize_IMG(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetTR_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTR_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTR_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- iElementType_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iElementType_IMG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iElementType_IMG(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iEType_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEType_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEType_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- iGetDefITR_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetDefITR_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetDefITR_IMG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iIsColour_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsColour_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsColour_IMG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iIsValidIMGFile_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsValidIMGFile_IMG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsValidIMGFile_IMG(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- iIsValidIMGFileEx_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsValidIMGFileEx_IMG(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsValidIMGFileEx_IMG(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iNE_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNE_IMG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNE_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- Inherit_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Inherit_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Inherit_IMG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- InheritIMG_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InheritIMG_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InheritIMG_IMG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iNV_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNV_IMG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNV_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- iNX_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNX_IMG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNX_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- iNY_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNY_IMG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNY_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- iQuery_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iQuery_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iQuery_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- iQueryKX_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iQueryKX_IMG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iQueryKX_IMG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iSetDefITR_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSetDefITR_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSetDefITR_IMG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iUserPreferenceToPlotAsColourShadedGrid_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iUserPreferenceToPlotAsColourShadedGrid_IMG(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iUserPreferenceToPlotAsColourShadedGrid_IMG(GX_VAR   GX_OBJECT_PTR);

/*---------------- LoadIMG_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadIMG_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadIMG_IMG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- LoadIntoPager_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadIntoPager_IMG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadIntoPager_IMG(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- OptKX_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OptKX_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OptKX_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- ReadV_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadV_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadV_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- ReadX_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadX_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadX_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- ReadY_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadY_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadY_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- RefreshGI_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RefreshGI_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RefreshGI_IMG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Relocate_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Relocate_IMG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Relocate_IMG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Report_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Report_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Report_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ReportCSV_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReportCSV_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReportCSV_IMG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- rGetZ_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetZ_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetZ_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- rQuery_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rQuery_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rQuery_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SetGridUnchanged_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGridUnchanged_IMG(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGridUnchanged_IMG(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- SetInfo_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInfo_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInfo_IMG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- SetIPJ_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetMETA_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMETA_IMG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMETA_IMG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SetPG_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPG_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPG_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- SetTR_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetTR_IMG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetTR_IMG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Sync_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sync_IMG(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sync_IMG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- WriteV_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteV_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteV_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- WriteX_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteX_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteX_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- WriteY_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteY_IMG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteY_IMG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetRealParameter_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRealParameter_IMG(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRealParameter_IMG(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- rGetRealParameter_IMG[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetRealParameter_IMG(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetRealParameter_IMG(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- AggToGeoColor_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AggToGeoColor_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AggToGeoColor_IMU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- CRC_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRC_IMU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRC_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- CRCGrid_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCGrid_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCGrid_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- CRCGridInexact_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCGridInexact_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCGridInexact_IMU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- CRCInexact_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCInexact_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCInexact_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ExportGridWithoutDataSectionXML_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportGridWithoutDataSectionXML_IMU(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportGridWithoutDataSectionXML_IMU(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_VAR   GX_LONG_PTR,
                                        GX_CONST GX_STR_PTR);

/*---------------- ExportGridXML_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportGridXML_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportGridXML_IMU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- ExportRawXML_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportRawXML_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportRawXML_IMU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- ExportXML_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportXML_IMU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportXML_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- GetZVV_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetZVV_IMU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetZVV_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetZPeaksVV_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetZPeaksVV_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetZPeaksVV_IMU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GridAdd_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridAdd_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridAdd_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GridAGC_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridAGC_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridAGC_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- GridBool_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridBool_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridBool_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GridEdge_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridEdge_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridEdge_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GridEdgePLY_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridEdgePLY_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridEdgePLY_IMU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- GridExpand_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridExpand_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridExpand_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- GridExpFill_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridExpFill_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridExpFill_IMU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- GridFill_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridFill_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridFill_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GridFilt_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridFilt_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridFilt_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GridHead_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridHead_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridHead_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- GridInFill_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridInFill_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridInFill_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- GridMask_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridMask_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridMask_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GridPeak_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridPeak_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridPeak_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GridPLY_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridPLY_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridPLY_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- GridPLYEx_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridPLYEx_IMU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridPLYEx_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- GridReprojectAndWindow_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridReprojectAndWindow_IMU(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridReprojectAndWindow_IMU(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR);

/*---------------- GridResample_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridResample_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridResample_IMU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- GridResize_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridResize_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridResize_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- GridShad_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridShad_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridShad_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- GridST_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridST_IMU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridST_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GridStat_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridStat_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_VAR   GX_LONG_PTR,
             GX_VAR   GX_LONG_PTR,
             GX_VAR   GX_LONG_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_LONG_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridStat_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- GridStatComp_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridStatComp_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridStatComp_IMU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- GridStatExt_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridStatExt_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridStatExt_IMU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);

/*---------------- GridStatTrend_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridStatTrend_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridStatTrend_IMU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- GridStatTrendExt_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridStatTrendExt_IMU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridStatTrendExt_IMU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- rSlopeStandardDeviation_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rSlopeStandardDeviation_IMU(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rSlopeStandardDeviation_IMU(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- GridStitch_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridStitch_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridStitch_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- GridStitchCtl_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridStitchCtl_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridStitchCtl_IMU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- GridTiff_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridTiff_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridTiff_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- GridTrnd_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridTrnd_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridTrnd_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GridTrns_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridTrns_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridTrns_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GridVD_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridVD_IMU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridVD_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GridVol_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridVol_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridVol_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- GridWind_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridWind_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridWind_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- GridWind2_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridWind2_IMU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridWind2_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- GridXYZ_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridXYZ_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridXYZ_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iGridType_IMU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGridType_IMU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGridType_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- MakeMITabFile_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MakeMITabFile_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MakeMITabFile_IMU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- MakeMITabfromGrid_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MakeMITabfromGrid_IMU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MakeMITabfromGrid_IMU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- MakeMITabfromMap_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MakeMITabfromMap_IMU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MakeMITabfromMap_IMU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- Mosaic_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Mosaic_IMU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Mosaic_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- PeakSize_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PeakSize_IMU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PeakSize_IMU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- PeakSize2_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PeakSize2_IMU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PeakSize2_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- PigeonHole_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PigeonHole_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PigeonHole_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_LONG_PTR);

/*---------------- Profile_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Profile_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Profile_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- ProfileVV_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProfileVV_IMU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProfileVV_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- RangeGrids_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeGrids_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeGrids_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);

/*---------------- RangeLL_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeLL_IMU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeLL_IMU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- StatWindow_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StatWindow_IMU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StatWindow_IMU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- UpdatePLY_IMU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UpdatePLY_IMU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UpdatePLY_IMU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- _ClearWarp_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_ClearWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__ClearWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- _MakeGeographic_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_MakeGeographic_IPJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__MakeGeographic_IPJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- _MakeWGS84_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_MakeWGS84_IPJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__MakeWGS84_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- _SetUnits_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetUnits_IPJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetUnits_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- AddExaggWarp_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddExaggWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddExaggWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- AddLogWarp_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddLogWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddLogWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- AddMatrixWarp_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddMatrixWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddMatrixWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- AddWarp_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- ClearCoordinateSystem_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearCoordinateSystem_IPJ(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearCoordinateSystem_IPJ(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- ClearOrientation_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- ConvertOrientationWarpVV_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertOrientationWarpVV_IPJ(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertOrientationWarpVV_IPJ(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR);

/*---------------- Copy_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_IPJ(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_IPJ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- CopyProjection_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyProjection_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyProjection_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- Create_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_IPJ(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_IPJ(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateS_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- CreateXML_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateXML_IPJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateXML_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Destroy_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Get3DView_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Get3DView_IPJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Get3DView_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);

/*---------------- Get3DViewEx_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Get3DViewEx_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Get3DViewEx_IPJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR);

/*---------------- GetCrookedSectionViewVVs_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetCrookedSectionViewVVs_IPJ(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetCrookedSectionViewVVs_IPJ(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_VAR   GX_LONG_PTR);

/*---------------- GetList_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetList_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetList_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetOrientationInfo_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetOrientationInfo_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetOrientationInfo_IPJ(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetPlaneEquation_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPlaneEquation_IPJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPlaneEquation_IPJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetPlaneEquation2_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPlaneEquation2_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPlaneEquation2_IPJ(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);

/*---------------- iCompareDatums_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCompareDatums_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCompareDatums_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- iConvertWarp_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iConvertWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iConvertWarp_IPJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iConvertWarpVV_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iConvertWarpVV_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iConvertWarpVV_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iCoordinateSystemsAreTheSame_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCoordinateSystemsAreTheSame_IPJ(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCoordinateSystemsAreTheSame_IPJ(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_HANDLE_PTR);

/*---------------- iCoordinateSystemsAreTheSameWithinASmallTolerance_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCoordinateSystemsAreTheSameWithinASmallTolerance_IPJ(GX_VAR   GX_OBJECT_PTR,
                                                      GX_CONST GX_HANDLE_PTR,
                                                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCoordinateSystemsAreTheSameWithinASmallTolerance_IPJ(GX_VAR   GX_OBJECT_PTR,
                                                          GX_CONST GX_HANDLE_PTR,
                                                          GX_CONST GX_HANDLE_PTR);

/*---------------- IGetDisplayName_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetDisplayName_IPJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetDisplayName_IPJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- IGetESRI_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetESRI_IPJ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetESRI_IPJ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IGetGXF_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetGXF_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_STR_PTR,
            GX_VAR   GX_STR_PTR,
            GX_VAR   GX_STR_PTR,
            GX_VAR   GX_STR_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetGXF_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_VAR   GX_STR_PTR,
                GX_VAR   GX_STR_PTR,
                GX_VAR   GX_STR_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IGetMICoordSys_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetMICoordSys_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetMICoordSys_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- IGetName_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetName_IPJ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetName_IPJ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- SetVCS_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVCS_IPJ(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVCS_IPJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- iGetOrientation_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- IGetOrientationName_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetOrientationName_IPJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetOrientationName_IPJ(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- IGetUnits_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetUnits_IPJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetUnits_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- IGetXML_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetXML_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetXML_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iHasProjection_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHasProjection_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHasProjection_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- iIs3DInverted_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIs3DInverted_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIs3DInverted_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iIs3DInvertedAngles_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIs3DInvertedAngles_IPJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIs3DInvertedAngles_IPJ(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- iIsGeographic_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsGeographic_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsGeographic_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iOrientationsAreTheSame_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iOrientationsAreTheSame_IPJ(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iOrientationsAreTheSame_IPJ(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- iOrientationsAreTheSameWithinASmallTolerance_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iOrientationsAreTheSameWithinASmallTolerance_IPJ(GX_VAR   GX_OBJECT_PTR,
                                                 GX_CONST GX_HANDLE_PTR,
                                                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iOrientationsAreTheSameWithinASmallTolerance_IPJ(GX_VAR   GX_OBJECT_PTR,
                                                     GX_CONST GX_HANDLE_PTR,
                                                     GX_CONST GX_HANDLE_PTR);

/*---------------- iHasSectionOrientation_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHasSectionOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHasSectionOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- iProjectionTypeIsFullySupported_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iProjectionTypeIsFullySupported_IPJ(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iProjectionTypeIsFullySupported_IPJ(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_HANDLE_PTR);

/*---------------- iSetGXF_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSetGXF_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSetGXF_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- iSourceType_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSourceType_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSourceType_IPJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- iSupportDatumTransform_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSupportDatumTransform_IPJ(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSupportDatumTransform_IPJ(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- IUnitName_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IUnitName_IPJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IUnitName_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iWarped_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iWarped_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iWarped_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- iWarpsAreTheSame_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iWarpsAreTheSame_IPJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iWarpsAreTheSame_IPJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- iWarpsAreTheSameWithinASmallTolerance_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iWarpsAreTheSameWithinASmallTolerance_IPJ(GX_VAR   GX_OBJECT_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iWarpsAreTheSameWithinASmallTolerance_IPJ(GX_VAR   GX_OBJECT_PTR,
                                              GX_CONST GX_HANDLE_PTR,
                                              GX_CONST GX_HANDLE_PTR);

/*---------------- iWarpType_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iWarpType_IPJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iWarpType_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- MakeProjected_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MakeProjected_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MakeProjected_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- NewBoxResolution_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NewBoxResolution_IPJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NewBoxResolution_IPJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- Read_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Read_IPJ(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Read_IPJ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- rGetMethodParm_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetMethodParm_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetMethodParm_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- rGetNorthAzimuth_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetNorthAzimuth_IPJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetNorthAzimuth_IPJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- rUnitScale_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rUnitScale_IPJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rUnitScale_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- Serial_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_IPJ(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_IPJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SerialFGDCXML_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SerialFGDCXML_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SerialFGDCXML_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- SerialISOXML_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SerialISOXML_IPJ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SerialISOXML_IPJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- SerialXML_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SerialXML_IPJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SerialXML_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Set3DInverted_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set3DInverted_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set3DInverted_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- Set3DInvertedAngles_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set3DInvertedAngles_IPJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set3DInvertedAngles_IPJ(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- Set3DView_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set3DView_IPJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set3DView_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- Set3DViewEx_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set3DViewEx_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set3DViewEx_IPJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Set3DViewFromAxes_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set3DViewFromAxes_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set3DViewFromAxes_IPJ(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- SetCrookedSectionView_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetCrookedSectionView_IPJ(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetCrookedSectionView_IPJ(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- SetDepthSectionView_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDepthSectionView_IPJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDepthSectionView_IPJ(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR);

/*---------------- SetESRI_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetESRI_IPJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetESRI_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- SetGXF_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGXF_IPJ(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGXF_IPJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- SetMethodParm_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMethodParm_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMethodParm_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- SetMICoordSys_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMICoordSys_IPJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMICoordSys_IPJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- SetNormalSectionView_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetNormalSectionView_IPJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetNormalSectionView_IPJ(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);

/*---------------- SetPlanView_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPlanView_IPJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPlanView_IPJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- SetSectionView_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetSectionView_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetSectionView_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- SetWMSCoordSys_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetWMSCoordSys_IPJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetWMSCoordSys_IPJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- SetXML_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetXML_IPJ(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetXML_IPJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- Get3DMatrixOrientation_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Get3DMatrixOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Get3DMatrixOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR);

/*---------------- Set3DMatrixOrientation_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set3DMatrixOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set3DMatrixOrientation_IPJ(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR);

/*---------------- ReprojectSectionGrid_IPJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReprojectSectionGrid_IPJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReprojectSectionGrid_IPJ(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);

/*---------------- ChangeBrightness_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ChangeBrightness_ITR(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ChangeBrightness_ITR(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- ColorVV_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorVV_ITR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorVV_ITR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Copy_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_ITR(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_ITR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Create_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_ITR(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_ITR(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateFile_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateFile_ITR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateFile_ITR(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- CreateIMG_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateIMG_ITR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateIMG_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- CreateMap_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateMap_ITR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateMap_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- CreateS_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_ITR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_ITR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_ITR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_ITR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- EqualArea_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EqualArea_ITR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EqualArea_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- GetDataLimits_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDataLimits_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDataLimits_ITR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetREG_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetREG_ITR(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetREG_ITR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetZoneColor_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetZoneColor_ITR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetZoneColor_ITR(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR);

/*---------------- iColorValue_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iColorValue_ITR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iColorValue_ITR(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- iGetSize_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetSize_ITR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetSize_ITR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iGetZoneModelType_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetZoneModelType_ITR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetZoneModelType_ITR(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- Linear_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Linear_ITR(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Linear_ITR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- LoadA_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadA_ITR(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadA_ITR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- LogLinear_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LogLinear_ITR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LogLinear_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- Normal_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Normal_ITR(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Normal_ITR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- PowerZone_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PowerZone_ITR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PowerZone_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- rGetBrightness_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetBrightness_ITR(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetBrightness_ITR(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- rGetZoneValue_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetZoneValue_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetZoneValue_ITR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SaveA_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveA_ITR(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveA_ITR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- SaveFile_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveFile_ITR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveFile_ITR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- Serial_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_ITR(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_ITR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetAggMap_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAggMap_ITR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAggMap_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- SetBrightContrast_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetBrightContrast_ITR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetBrightContrast_ITR(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- SetColorModel_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetColorModel_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetColorModel_ITR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetDataLimits_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDataLimits_ITR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDataLimits_ITR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- SetSize_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetSize_ITR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetSize_ITR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- SetZoneColor_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetZoneColor_ITR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetZoneColor_ITR(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SetZoneValue_ITR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetZoneValue_ITR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetZoneValue_ITR(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- CalculateRects_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CalculateRects_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CalculateRects_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);

/*---------------- ClearAll_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearAll_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearAll_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ClearConstraints_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearConstraints_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearConstraints_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- Create_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_LAYOUT(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Destroy_LAYOUT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_LAYOUT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GetRectangle_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetRectangle_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetRectangle_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetRectName_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetRectName_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetRectName_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iAddConstraint_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddConstraint_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddConstraint_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- iAddRectangle_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddRectangle_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddRectangle_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- iNumRectangles_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumRectangles_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumRectangles_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- SetRectangle_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRectangle_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRectangle_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- SetRectangleName_LAYOUT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRectangleName_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRectangleName_LAYOUT(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- Create_LL2[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_LL2(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_LL2(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_LL2[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_LL2(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_LL2(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Save_LL2[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Save_LL2(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Save_LL2(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- SetRow_LL2[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRow_LL2(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRow_LL2(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Create_LPT[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_LPT(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_LPT(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_LPT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_LPT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_LPT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetLST_LPT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLST_LPT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLST_LPT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetStandardLST_LPT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetStandardLST_LPT(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetStandardLST_LPT(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- AddItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddItem_LST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddItem_LST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- AddSymbItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddSymbItem_LST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddSymbItem_LST(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- AddUniqueItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddUniqueItem_LST(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddUniqueItem_LST(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- Append_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Append_LST(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Append_LST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- AssayChannel_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
AssayChannel_LST(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_AssayChannel_LST(GX_VAR   GX_OBJECT_PTR);

/*---------------- Clear_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Clear_LST(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Clear_LST(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- ConvertFromCSVString_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertFromCSVString_LST(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertFromCSVString_LST(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- Copy_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_LST(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_LST(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Create_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_LST(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_LST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- CreateS_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_LST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_LST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- DelItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DelItem_LST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DelItem_LST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Destroy_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_LST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_LST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- FindItems_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FindItems_LST(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FindItems_LST(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GtItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GtItem_LST(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_VAR   GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GtItem_LST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- GtSymbItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GtSymbItem_LST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GtSymbItem_LST(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR);

/*---------------- IConvertToCSVString_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IConvertToCSVString_LST(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IConvertToCSVString_LST(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- iFindItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindItem_LST(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindItem_LST(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iFindItemMask_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindItemMask_LST(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindItemMask_LST(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- iGetInt_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetInt_LST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetInt_LST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- InsertItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InsertItem_LST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InsertItem_LST(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- iSize_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSize_LST(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSize_LST(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- LoadCSV_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadCSV_LST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadCSV_LST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- LoadFile_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadFile_LST(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadFile_LST(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- Resource_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Resource_LST(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Resource_LST(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- rGetReal_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetReal_LST(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetReal_LST(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- SaveFile_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveFile_LST(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveFile_LST(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- SelectCSVStringItems_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectCSVStringItems_LST(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectCSVStringItems_LST(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- Serial_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_LST(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_LST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetItem_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetItem_LST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetItem_LST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Sort_LST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sort_LST(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sort_LST(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- AddRecord_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddRecord_LTB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddRecord_LTB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR);

/*---------------- Contract_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Contract_LTB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Contract_LTB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Create_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_LTB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_LTB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- CreateCrypt_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateCrypt_LTB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateCrypt_LTB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- CreateEx_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateEx_LTB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateEx_LTB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- DeleteRecord_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteRecord_LTB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteRecord_LTB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- Destroy_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_LTB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_LTB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetConLST_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetConLST_LTB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetConLST_LTB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetLST_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLST_LTB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLST_LTB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetLST2_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLST2_LTB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLST2_LTB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- iFields_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFields_LTB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFields_LTB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- iFindField_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindField_LTB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindField_LTB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- iFindKey_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindKey_LTB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindKey_LTB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- IGetField_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetField_LTB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetField_LTB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iGetInt_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetInt_LTB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetInt_LTB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IGetString_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetString_LTB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetString_LTB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- IGetEnglishString_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetEnglishString_LTB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetEnglishString_LTB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iRecords_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRecords_LTB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRecords_LTB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iSearch_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSearch_LTB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSearch_LTB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Merge_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Merge_LTB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Merge_LTB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- rGetReal_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetReal_LTB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetReal_LTB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Save_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Save_LTB(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Save_LTB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- SaveCrypt_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveCrypt_LTB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveCrypt_LTB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- SetInt_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_LTB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_LTB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SetReal_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_LTB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_LTB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- SetString_LTB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetString_LTB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetString_LTB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- ExportAllInView_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportAllInView_MAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportAllInView_MAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- ExportAllRaster_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportAllRaster_MAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportAllRaster_MAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- ExportAreaInView_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportAreaInView_MAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportAreaInView_MAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- ExportAreaRaster_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportAreaRaster_MAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportAreaRaster_MAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- RenderBitmap_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RenderBitmap_MAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RenderBitmap_MAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- CreateLinked3DView_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateLinked3DView_MAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateLinked3DView_MAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);

/*---------------- AGGList_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AGGList_MAP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AGGList_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- AGGListEx_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AGGListEx_MAP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AGGListEx_MAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Clean_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Clean_MAP(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Clean_MAP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Commit_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Commit_MAP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Commit_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- CopyMapToView_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyMapToView_MAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyMapToView_MAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- CRCMap_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCMap_MAP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_VAR   GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCMap_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- Create_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_MAP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Current_MAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Current_MAP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Current_MAP(GX_VAR   GX_OBJECT_PTR);

/*---------------- DeleteView_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteView_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteView_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- Destroy_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_MAP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Discard_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Discard_MAP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Discard_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- DupMap_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DupMap_MAP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DupMap_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- GetLPT_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetLPT_MAP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetLPT_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetMapSize_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMapSize_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMapSize_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetMETA_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetMETA_MAP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetMETA_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetREG_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetREG_MAP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetREG_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GroupList_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GroupList_MAP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GroupList_MAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GroupListEx_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GroupListEx_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GroupListEx_MAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IDuplicateView_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDuplicateView_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDuplicateView_MAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iExistView_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistView_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistView_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- IGetClassName_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetClassName_MAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetClassName_MAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- IGetFileName_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetFileName_MAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetFileName_MAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- IGetMapName_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetMapName_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetMapName_MAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iPackedFiles_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iPackedFiles_MAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iPackedFiles_MAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- IUnPackFilesEx_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IUnPackFilesEx_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IUnPackFilesEx_MAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- IUnPackFilesToFolder_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IUnPackFilesToFolder_MAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IUnPackFilesToFolder_MAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- PackFiles_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PackFiles_MAP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PackFiles_MAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Render_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Render_MAP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Render_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ResizeAll_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ResizeAll_MAP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ResizeAll_MAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ResizeAllEx_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ResizeAllEx_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ResizeAllEx_MAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- rGetMapScale_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetMapScale_MAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetMapScale_MAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- SaveAsMXD_MAP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveAsMXD_MAP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveAsMXD_MAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- SetClassName_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetClassName_MAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetClassName_MAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- SetCurrent_MAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetCurrent_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetCurrent_MAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- SetMapName_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMapName_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMapName_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- SetMapScale_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMapScale_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMapScale_MAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- SetMapSize_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMapSize_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMapSize_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- SetMETA_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMETA_MAP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMETA_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SetREG_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetREG_MAP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetREG_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Sync_MAP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sync_MAP(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sync_MAP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- UnPackFiles_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UnPackFiles_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UnPackFiles_MAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ViewList_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ViewList_MAP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ViewList_MAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- ViewListEx_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ViewListEx_MAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ViewListEx_MAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- GetDataProj_MAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDataProj_MAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDataProj_MAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- Create_MAPL[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_MAPL(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_MAPL(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- CreateREG_MAPL[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateREG_MAPL(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateREG_MAPL(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_MAPL[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_MAPL(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_MAPL(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Process_MAPL[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Process_MAPL(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Process_MAPL(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- ReplaceString_MAPL[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReplaceString_MAPL(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReplaceString_MAPL(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- GetTmpCopy_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTmpCopy_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTmpCopy_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- UpdateFromTmpCopy_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UpdateFromTmpCopy_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UpdateFromTmpCopy_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_STR_PTR);

/*---------------- Commit_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Commit_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Commit_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- Create_MAPTEMPLATE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- Destroy_MAPTEMPLATE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- Discard_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Discard_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Discard_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- GetFileName_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetFileName_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetFileName_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- CreateMap_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateMap_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateMap_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- Refresh_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Refresh_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Refresh_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- RenderPreview_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RenderPreview_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          HDC,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RenderPreview_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              HDC,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- RenderPreviewMapProduction_MAPTEMPLATE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RenderPreviewMapProduction_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       HDC,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RenderPreviewMapProduction_MAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           HDC,
                                           GX_VAR   GX_LONG_PTR,
                                           GX_VAR   GX_LONG_PTR,
                                           GX_VAR   GX_LONG_PTR,
                                           GX_VAR   GX_LONG_PTR);

/*---------------- CrossProduct_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CrossProduct_MATH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CrossProduct_MATH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- iAbs_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAbs_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAbs_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- iAnd_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAnd_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAnd_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- iMod_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iMod_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iMod_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- iOr_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iOr_MATH(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iOr_MATH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- iRound_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRound_MATH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRound_MATH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- iXor_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iXor_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iXor_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- NicerLogScale_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NicerLogScale_MATH(GX_VAR   GX_OBJECT_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NicerLogScale_MATH(GX_VAR   GX_OBJECT_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- NicerScale_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NicerScale_MATH(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NicerScale_MATH(GX_VAR   GX_OBJECT_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_LONG_PTR);

/*---------------- Normalise3D_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Normalise3D_MATH(GX_VAR   GX_OBJECT_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Normalise3D_MATH(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- rAbs_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rAbs_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rAbs_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- rArcCos_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rArcCos_MATH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rArcCos_MATH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- rArcSin_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rArcSin_MATH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rArcSin_MATH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- rArcTan_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rArcTan_MATH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rArcTan_MATH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- rArcTan2_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rArcTan2_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rArcTan2_MATH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- rCeil_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rCeil_MATH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rCeil_MATH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- rCos_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rCos_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rCos_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- rDotProduct3D_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rDotProduct3D_MATH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rDotProduct3D_MATH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- rExp_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rExp_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rExp_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- rFloor_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rFloor_MATH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rFloor_MATH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- rHypot_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rHypot_MATH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rHypot_MATH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- rLambdaTrans_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLambdaTrans_MATH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLambdaTrans_MATH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- rLambdaTransRev_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLambdaTransRev_MATH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLambdaTransRev_MATH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- rLog_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLog_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLog_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- rLog10_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLog10_MATH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLog10_MATH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- rLogZ_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLogZ_MATH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLogZ_MATH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- rMod_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rMod_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rMod_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- RotateVector_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RotateVector_MATH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RotateVector_MATH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- rPow_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rPow_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rPow_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- rRand_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rRand_MATH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rRand_MATH(GX_VAR   GX_OBJECT_PTR);

/*---------------- rRound_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rRound_MATH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rRound_MATH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- rSign_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rSign_MATH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rSign_MATH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- rSin_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rSin_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rSin_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- rSqrt_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rSqrt_MATH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rSqrt_MATH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- rTan_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rTan_MATH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rTan_MATH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- rUnLogZ_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rUnLogZ_MATH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rUnLogZ_MATH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- SRand_MATH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SRand_MATH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SRand_MATH(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateAttrib_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateAttrib_META(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateAttrib_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- DeleteAttrib_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteAttrib_META(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteAttrib_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetAttributeEditable_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAttributeEditable_META(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAttributeEditable_META(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- SetAttributeVisible_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAttributeVisible_META(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAttributeVisible_META(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- CreateClass_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateClass_META(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateClass_META(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- DeleteClass_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteClass_META(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteClass_META(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- Copy_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_META(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_META(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Create_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_META(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_META(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateS_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_META(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_META(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_META(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_META(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Serial_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_META(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_META(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- FindData_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FindData_META(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FindData_META(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- GetAttribBool_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAttribBool_META(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAttribBool_META(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_LONG_PTR);

/*---------------- GetAttribEnum_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAttribEnum_META(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAttribEnum_META(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_LONG_PTR);

/*---------------- GetAttribInt_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAttribInt_META(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAttribInt_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR);

/*---------------- GetAttribReal_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAttribReal_META(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAttribReal_META(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR);

/*---------------- IGetAttribString_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetAttribString_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetAttribString_META(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iHasValue_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHasValue_META(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHasValue_META(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ExportTableCSV_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportTableCSV_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportTableCSV_META(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- ImportTableCSV_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportTableCSV_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportTableCSV_META(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- WriteText_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteText_META(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteText_META(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- DeleteAllItems_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteAllItems_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteAllItems_META(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- DeleteItem_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteItem_META(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteItem_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- hCreatItem_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
hCreatItem_META(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_hCreatItem_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- hGetNextItem_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
hGetNextItem_META(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_hGetNextItem_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- GetAttribOBJ_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAttribOBJ_META(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAttribOBJ_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetAttribOBJ_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAttribOBJ_META(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAttribOBJ_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetAttribBool_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAttribBool_META(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAttribBool_META(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- SetAttribEnum_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAttribEnum_META(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAttribEnum_META(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- SetAttribInt_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAttribInt_META(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAttribInt_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetAttribReal_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAttribReal_META(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAttribReal_META(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- SetAttribString_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAttribString_META(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAttribString_META(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- SetEmptyAttrib_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetEmptyAttrib_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetEmptyAttrib_META(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- hCopyAcrossAttribute_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
hCopyAcrossAttribute_META(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_hCopyAcrossAttribute_META(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- hCopyAcrossClass_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
hCopyAcrossClass_META(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_hCopyAcrossClass_META(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- hCopyAcrossData_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
hCopyAcrossData_META(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_hCopyAcrossData_META(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- hCopyAcrossItem_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
hCopyAcrossItem_META(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_hCopyAcrossItem_META(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- hCopyAcrossType_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
hCopyAcrossType_META(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_hCopyAcrossType_META(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- MoveDatasAcross_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MoveDatasAcross_META(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MoveDatasAcross_META(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- CreateType_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateType_META(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateType_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- DeleteData_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteData_META(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteData_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- DeleteType_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteType_META(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteType_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IGetObjName_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetObjName_META(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetObjName_META(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- ResolveUMN_META[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ResolveUMN_META(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ResolveUMN_META(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- ImportFromXYZ_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportFromXYZ_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportFromXYZ_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- ExportToXYZ_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToXYZ_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToXYZ_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- ExportToBinary_MULTIVOXSET[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToBinary_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToBinary_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- ExportToXML_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToXML_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToXML_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- CheckEqualToLegacyVoxel_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CheckEqualToLegacyVoxel_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CheckEqualToLegacyVoxel_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR);

/*---------------- ImportFromUBC_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportFromUBC_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportFromUBC_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- ImportFromGOCAD_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportFromGOCAD_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportFromGOCAD_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR);

/*---------------- ListPropertiesGOCAD_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ListPropertiesGOCAD_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ListPropertiesGOCAD_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_HANDLE_PTR);

/*---------------- ImportFromGDB_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportFromGDB_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportFromGDB_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- ImportFromVectorGDB_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportFromVectorGDB_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportFromVectorGDB_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR);

/*---------------- ExportToSEGY_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToSEGY_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToSEGY_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_DOUBLE_PTR);

/*---------------- ExportToGDB_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToGDB_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToGDB_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- ExportToWA_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToWA_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToWA_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- ConvertDoubleToVector_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertDoubleToVector_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertDoubleToVector_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_LONG_PTR);

/*---------------- ConvertVectorToDouble_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertVectorToDouble_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertVectorToDouble_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_STR_PTR);

/*---------------- CreateDoubleConstant_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateDoubleConstant_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateDoubleConstant_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_HANDLE_PTR);

/*---------------- CreateThematicConstant_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateThematicConstant_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateThematicConstant_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_HANDLE_PTR);

/*---------------- CreateVectorConstant_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateVectorConstant_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateVectorConstant_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_HANDLE_PTR);

/*---------------- CreateDoubleConstantVV_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateDoubleConstantVV_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateDoubleConstantVV_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR);

/*---------------- CreateThematicConstantVV_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateThematicConstantVV_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateThematicConstantVV_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                         GX_CONST GX_STR_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_CONST GX_DOUBLE_PTR,
                                         GX_CONST GX_DOUBLE_PTR,
                                         GX_CONST GX_DOUBLE_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_HANDLE_PTR);

/*---------------- CreateVectorConstantVV_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateVectorConstantVV_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateVectorConstantVV_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR);

/*---------------- ExportToVoxel_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToVoxel_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToVoxel_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR);

/*---------------- ImportFromVoxel_MULTIVOXSET[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportFromVoxel_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportFromVoxel_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR);

/*---------------- ImportFromDATAMINE_MULTIVOXSET[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportFromDATAMINE_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportFromDATAMINE_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_STR_PTR);

/*---------------- rComputeDefaultCellSize_MULTIVOXSET[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rComputeDefaultCellSize_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rComputeDefaultCellSize_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR);

/*---------------- Filter_MULTIVOXSET[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Filter_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Filter_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- GridDirectFromGDB_MULTIVOXSET[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridDirectFromGDB_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridDirectFromGDB_MULTIVOXSET(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR);

/*---------------- Box3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Box3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Box3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- CRCView_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCView_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- CRCViewGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCViewGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCViewGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- Cylinder3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Cylinder3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Cylinder3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- DrawObject3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DrawObject3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DrawObject3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- DrawSurface3DEx_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DrawSurface3DEx_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DrawSurface3DEx_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- DrawSurface3DFromFile_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DrawSurface3DFromFile_MVIEW(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DrawSurface3DFromFile_MVIEW(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR);

/*---------------- FontWeightLST_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FontWeightLST_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FontWeightLST_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- GetAGGFileNames_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAGGFileNames_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAGGFileNames_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- IGetMeta_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
IGetMeta_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_IGetMeta_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- MeasureText_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MeasureText_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MeasureText_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- Point3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Point3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Point3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- PolyLine3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyLine3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyLine3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- RelocateGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RelocateGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RelocateGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- SetMeta_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMeta_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMeta_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Sphere3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sphere3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sphere3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- UpdateMETAfromGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UpdateMETAfromGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UpdateMETAfromGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- DeletePlane_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeletePlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeletePlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- GetPlaneClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPlaneClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPlaneClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetPlaneEquation_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPlaneEquation_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPlaneEquation_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetViewPlaneEquation_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetViewPlaneEquation_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetViewPlaneEquation_MVIEW(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR);

/*---------------- iCreatePlane_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCreatePlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCreatePlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- iFindPlane_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- IGetDefPlane_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetDefPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetDefPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iIsView3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsView3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsView3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- iIsSection_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsSection_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsSection_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- ListPlaneGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ListPlaneGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ListPlaneGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- ListPlanes_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ListPlanes_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ListPlanes_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- SetAllGroupsToPlane_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAllGroupsToPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAllGroupsToPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- SetAllNewGroupsToPlane_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAllNewGroupsToPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAllNewGroupsToPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR);

/*---------------- SetDefPlane_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDefPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDefPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- SetGroupToPlane_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGroupToPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGroupToPlane_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- SetH3DN_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetH3DN_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetH3DN_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Get3DPointOfView_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Get3DPointOfView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Get3DPointOfView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);

/*---------------- Set3DPointOfView_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set3DPointOfView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set3DPointOfView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);

/*---------------- SetPlaneClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPlaneClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPlaneClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- SetPlaneEquation_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPlaneEquation_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPlaneEquation_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);

/*---------------- SetPlaneSurface_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPlaneSurface_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPlaneSurface_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- SetPlaneSurfInfo_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPlaneSurfInfo_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPlaneSurfInfo_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);

/*---------------- DefinePlane3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DefinePlane3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DefinePlane3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- DefineViewerAxis3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DefineViewerAxis3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DefineViewerAxis3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);

/*---------------- DefineViewerPlane3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DefineViewerPlane3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DefineViewerPlane3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR);

/*---------------- _ClipPolyEx_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_ClipPolyEx_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__ClipPolyEx_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- _ClipRectEx_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_ClipRectEx_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__ClipRectEx_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- ClipClear_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipClear_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipClear_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ClipGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- ClipMarkedGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- ClipPoly_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipPoly_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipPoly_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ClipRect_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipRect_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipRect_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- DeleteExtClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- ExtClipPLYList_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExtClipPLYList_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExtClipPLYList_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- GetClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetExtClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- GetGroupExtClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGroupExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGroupExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_LONG_PTR);

/*---------------- GetPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GroupClipMode_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GroupClipMode_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GroupClipMode_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- IGetNameExtClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetNameExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetNameExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- iNumExtClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- iSetExtClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSetExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSetExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- SetClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- SetGroupExtClipPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGroupExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGroupExtClipPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- Color2RGB_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Color2RGB_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Color2RGB_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR);

/*---------------- ColorDescr_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorDescr_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorDescr_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iColor_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- iColorCMY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iColorCMY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iColorCMY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iColorHSV_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iColorHSV_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iColorHSV_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iColorRGB_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iColorRGB_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iColorRGB_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- ClipMode_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipMode_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipMode_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- FillColor_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FillColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FillColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- LineColor_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LineColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LineColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- LineSmooth_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LineSmooth_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LineSmooth_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- LineStyle_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LineStyle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LineStyle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- LineThick_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LineThick_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LineThick_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- PatAngle_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PatAngle_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PatAngle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- PatDensity_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PatDensity_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PatDensity_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- PatNumber_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PatNumber_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PatNumber_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- PatSize_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PatSize_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PatSize_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- PatStyle_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PatStyle_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PatStyle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- PatThick_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PatThick_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PatThick_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- SymbAngle_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbAngle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbAngle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- SymbColor_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SymbFillColor_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbFillColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbFillColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- SymbFont_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbFont_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbFont_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- SymbNumber_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbNumber_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbNumber_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SymbSize_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbSize_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbSize_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- TextAngle_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TextAngle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TextAngle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- TextColor_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TextColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TextColor_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- TextFont_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TextFont_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TextFont_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- TextRef_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TextRef_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TextRef_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- TextSize_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TextSize_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TextSize_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- Transparency_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Transparency_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Transparency_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- ZValue_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ZValue_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ZValue_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- Arc_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Arc_MVIEW(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Arc_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- Chord_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Chord_MVIEW(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Chord_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- ClassifiedSymbols_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClassifiedSymbols_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClassifiedSymbols_MVIEW(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- ComplexPolygon_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ComplexPolygon_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ComplexPolygon_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- Ellipse_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Ellipse_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Ellipse_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- Line_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Line_MVIEW(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Line_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- LineVV_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LineVV_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LineVV_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- PolygonDm_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolygonDm_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolygonDm_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- PolygonPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolygonPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolygonPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- PolyLine_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyLine_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyLine_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- PolyLineDm_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyLineDm_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyLineDm_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- PolyWrap_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyWrap_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyWrap_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Rectangle_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Rectangle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Rectangle_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- Segment_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Segment_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Segment_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- SizeSymbols_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SizeSymbols_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SizeSymbols_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- Symbol_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Symbol_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Symbol_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- Symbols_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Symbols_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Symbols_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- SymbolsITR_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbolsITR_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbolsITR_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Text_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Text_MVIEW(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Text_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- Aggregate_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Aggregate_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Aggregate_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- GetAggregate_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetAggregate_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetAggregate_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- ChangeLineMessage_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ChangeLineMessage_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ChangeLineMessage_MVIEW(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- ColSymbol_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColSymbol_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColSymbol_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- GetColSymbol_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetColSymbol_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetColSymbol_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- DATALINKD_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DATALINKD_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DATALINKD_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- GetDATALINKD_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetDATALINKD_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetDATALINKD_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- EasyMaker_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EasyMaker_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EasyMaker_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- EMFObject_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EMFObject_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EMFObject_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- ExternalStringObject_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExternalStringObject_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExternalStringObject_MVIEW(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- Link_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Link_MVIEW(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Link_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- Maker_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Maker_MVIEW(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Maker_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Meta_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Meta_MVIEW(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Meta_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- VOXD_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
VOXD_MVIEW(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_VOXD_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- GetVOXD_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVOXD_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVOXD_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- DrawVectorVoxelVectors_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DrawVectorVoxelVectors_MVIEW(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DrawVectorVoxelVectors_MVIEW(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_LONG_PTR);

/*---------------- GetVECTOR3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetVECTOR3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetVECTOR3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- DrawVectors3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DrawVectors3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DrawVectors3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- SetGroupITR_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGroupITR_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGroupITR_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GetGroupITR_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetGroupITR_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetGroupITR_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iGroupITRExists_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGroupITRExists_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGroupITRExists_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- DeleteGroupITR_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteGroupITR_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteGroupITR_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- SetGroupTPAT_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGroupTPAT_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGroupTPAT_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- GetGroupTPAT_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetGroupTPAT_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetGroupTPAT_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iGroupTPATExists_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGroupTPATExists_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGroupTPATExists_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- DeleteGroupTPAT_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteGroupTPAT_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteGroupTPAT_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iGroupStorageExists_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGroupStorageExists_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGroupStorageExists_MVIEW(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_STR_PTR);

/*---------------- ReadGroupStorage_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
ReadGroupStorage_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_ReadGroupStorage_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- DeleteGroupStorage_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteGroupStorage_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteGroupStorage_MVIEW(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- WriteGroupStorage_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteGroupStorage_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteGroupStorage_MVIEW(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- CopyMarkedGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- CopyRawMarkedGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyRawMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyRawMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- CRCGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- DeleteGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- DelMarkedGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DelMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DelMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetGroupExtent_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGroupExtent_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGroupExtent_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- GetGroupTransparency_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGroupTransparency_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGroupTransparency_MVIEW(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_DOUBLE_PTR);

/*---------------- GroupToPLY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GroupToPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GroupToPLY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- HideMarkedGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
HideMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_HideMarkedGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- HideShadow2DInterpretations_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
HideShadow2DInterpretations_MVIEW(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_HideShadow2DInterpretations_MVIEW(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_LONG_PTR);

/*---------------- iExistGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- IGenNewGroupName_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGenNewGroupName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGenNewGroupName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- iIsGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- iIsGroupEmpty_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsGroupEmpty_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsGroupEmpty_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- iIsMovable_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsMovable_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsMovable_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- iIsVisible_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsVisible_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsVisible_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- iListGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iListGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iListGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iRenderOrder_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRenderOrder_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRenderOrder_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- MarkAllGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MarkAllGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MarkAllGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- MarkEmptyGroups_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MarkEmptyGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MarkEmptyGroups_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- MarkGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MarkGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MarkGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- MoveGroupBackward_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MoveGroupBackward_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MoveGroupBackward_MVIEW(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- MoveGroupForward_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MoveGroupForward_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MoveGroupForward_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- MoveGroupToBack_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MoveGroupToBack_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MoveGroupToBack_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- MoveGroupToFront_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MoveGroupToFront_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MoveGroupToFront_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- RenameGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RenameGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RenameGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- SetGroupMoveable_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGroupMoveable_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGroupMoveable_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- SetGroupTransparency_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGroupTransparency_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGroupTransparency_MVIEW(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_DOUBLE_PTR);

/*---------------- SetMarkMoveable_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMarkMoveable_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMarkMoveable_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- SetMovability_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMovability_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMovability_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- SetRenderOrder_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRenderOrder_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRenderOrder_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- SetVisibility_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVisibility_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVisibility_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- StartGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StartGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StartGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- GetGroupGUID_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGroupGUID_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGroupGUID_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iFindGroupByGUID_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindGroupByGUID_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindGroupByGUID_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- _SetWorkingIPJ_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetWorkingIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetWorkingIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- ClearESRILDTs_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearESRILDTs_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearESRILDTs_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- iIsProjectionEmpty_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsProjectionEmpty_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsProjectionEmpty_MVIEW(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- GetIPJ_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetUserIPJ_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetUserIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetUserIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- ModePJ_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ModePJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ModePJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- rNorth_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rNorth_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rNorth_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SetIPJ_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SetUserIPJ_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetUserIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetUserIPJ_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- iGet3DGroupFlags_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGet3DGroupFlags_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGet3DGroupFlags_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- Set3DGroupFlags_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set3DGroupFlags_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set3DGroupFlags_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- _GetGroupFreezeScale_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_GetGroupFreezeScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__GetGroupFreezeScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_DOUBLE_PTR);

/*---------------- _SetFreezeScale_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetFreezeScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetFreezeScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- _SetGroupFreezeScale_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetGroupFreezeScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetGroupFreezeScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_DOUBLE_PTR);

/*---------------- iFindGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- IGroupName_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGroupName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGroupName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- Render_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Render_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             HDC,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Render_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 HDC,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- _SetUFac_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetUFac_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetUFac_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- AxisX_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AxisX_MVIEW(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AxisX_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- AxisY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AxisY_MVIEW(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AxisY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- Grid_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Grid_MVIEW(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Grid_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- LabelFid_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LabelFid_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LabelFid_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- LabelX_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LabelX_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LabelX_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- LabelY_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LabelY_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LabelY_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- OptimumTick_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OptimumTick_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OptimumTick_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- Create_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- CreateCrookedSection_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateCrookedSection_MVIEW(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateCrookedSection_MVIEW(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- CreateCrookedSectionDataProfile_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateCrookedSectionDataProfile_MVIEW(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateCrookedSectionDataProfile_MVIEW(GX_VAR   GX_OBJECT_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_STR_PTR,
                                          GX_CONST GX_DOUBLE_PTR,
                                          GX_CONST GX_DOUBLE_PTR,
                                          GX_CONST GX_DOUBLE_PTR,
                                          GX_CONST GX_DOUBLE_PTR,
                                          GX_CONST GX_DOUBLE_PTR,
                                          GX_CONST GX_DOUBLE_PTR,
                                          GX_CONST GX_DOUBLE_PTR,
                                          GX_CONST GX_DOUBLE_PTR,
                                          GX_CONST GX_LONG_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Extent_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Extent_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Extent_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetMAP_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetMAP_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetMAP_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetREG_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetREG_MVIEW(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetREG_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- IGetName_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetName_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- GetGUID_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGUID_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGUID_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- _PlotToView_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_PlotToView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__PlotToView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- _SetThinRes_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetThinRes_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetThinRes_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- _ViewToPlot_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_ViewToPlot_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__ViewToPlot_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- BestFitWindow_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BestFitWindow_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BestFitWindow_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- FitMapWindow3D_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FitMapWindow3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FitMapWindow3D_MVIEW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- FitWindow_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FitWindow_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FitWindow_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- IGetClassName_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetClassName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetClassName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- MapOrigin_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MapOrigin_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MapOrigin_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);

/*---------------- ReScale_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- rGetMapScale_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetMapScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetMapScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- rScaleMM_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rScaleMM_MVIEW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rScaleMM_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- rScalePjMM_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rScalePjMM_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rScalePjMM_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- rScaleYMM_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rScaleYMM_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rScaleYMM_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ScaleAllGroup_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ScaleAllGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ScaleAllGroup_MVIEW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- ScaleWindow_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ScaleWindow_MVIEW(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ScaleWindow_MVIEW(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- SetClassName_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetClassName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetClassName_MVIEW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- SetWindow_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetWindow_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetWindow_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- TranScale_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TranScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TranScale_MVIEW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- UserToView_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UserToView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UserToView_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- ViewToUser_MVIEW[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ViewToUser_MVIEW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ViewToUser_MVIEW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- Arrow_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Arrow_MVU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Arrow_MVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- ArrowVectorVV_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ArrowVectorVV_MVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ArrowVectorVV_MVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- BarChart_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BarChart_MVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BarChart_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- CDIPixelPlot_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CDIPixelPlot_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CDIPixelPlot_MVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- CDIPixelPlot3D_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CDIPixelPlot3D_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CDIPixelPlot3D_MVU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- ColorBar_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBar_MVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBar_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- ColorBar2_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBar2_MVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBar2_MVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- ColorBar2Style_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBar2Style_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBar2Style_MVU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- ColorBarHor_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBarHor_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBarHor_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- ColorBarHor2_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBarHor2_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBarHor2_MVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- ColorBarHor2Style_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBarHor2Style_MVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBarHor2Style_MVU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- ColorBarHorStyle_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBarHorStyle_MVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBarHorStyle_MVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- ColorBarStyle_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBarStyle_MVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBarStyle_MVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- ColorBarREG_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ColorBarREG_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ColorBarREG_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- Contour_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Contour_MVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Contour_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- ContourPLY_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ContourPLY_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ContourPLY_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- CSymbLegend_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CSymbLegend_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CSymbLegend_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- DecayCurve_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DecayCurve_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DecayCurve_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- DirectionPlot_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DirectionPlot_MVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DirectionPlot_MVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- EMForward_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EMForward_MVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EMForward_MVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ExportDatamineString_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportDatamineString_MVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportDatamineString_MVU(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- ExportDXF3D_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportDXF3D_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportDXF3D_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ExportSurpacSTR_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportSurpacSTR_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportSurpacSTR_MVU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- FlightPlot_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FlightPlot_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FlightPlot_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- GenAreas_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenAreas_MVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenAreas_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- GetRangeGOCADSurface_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetRangeGOCADSurface_MVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetRangeGOCADSurface_MVU(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);

/*---------------- Histogram_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Histogram_MVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Histogram_MVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Histogram2_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Histogram2_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Histogram2_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- Histogram3_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Histogram3_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Histogram3_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Histogram4_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Histogram4_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Histogram4_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Histogram5_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Histogram5_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Histogram5_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iExportableDXF3DGroupsLST_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExportableDXF3DGroupsLST_MVU(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExportableDXF3DGroupsLST_MVU(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_HANDLE_PTR);

/*---------------- iMapsetTest_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iMapsetTest_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iMapsetTest_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- iMapset2Test_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iMapset2Test_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iMapset2Test_MVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- ImportGOCADSurface_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportGOCADSurface_MVU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportGOCADSurface_MVU(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- LoadPlot_MVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadPlot_MVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadPlot_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- MapFromPLT_MVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MapFromPLT_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MapFromPLT_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- MapMDF_MVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MapMDF_MVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MapMDF_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- Mapset_MVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Mapset_MVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Mapset_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- Mapset2_MVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Mapset2_MVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Mapset2_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- MDF_MVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MDF_MVU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_STR_PTR,
        GX_CONST GX_STR_PTR,
        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MDF_MVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);

/*---------------- PathPlot_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PathPlot_MVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PathPlot_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- PathPlotEx_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PathPlotEx_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PathPlotEx_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- PathPlotEx2_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PathPlotEx2_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PathPlotEx2_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- PlotVoxelSurface_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PlotVoxelSurface_MVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PlotVoxelSurface_MVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- PlotVoxelSurface2_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PlotVoxelSurface2_MVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PlotVoxelSurface2_MVU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- GenerateSurfaceFromVoxel_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenerateSurfaceFromVoxel_MVU(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenerateSurfaceFromVoxel_MVU(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- Post_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Post_MVU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Post_MVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);

/*---------------- PostEx_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PostEx_MVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PostEx_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Probability_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Probability_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Probability_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ProfilePlot_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProfilePlot_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProfilePlot_MVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- ProfilePlotEx_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProfilePlotEx_MVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProfilePlotEx_MVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- PropSymbLegend_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PropSymbLegend_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PropSymbLegend_MVU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- ReGenAreas_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReGenAreas_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReGenAreas_MVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- SymbOff_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SymbOff_MVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SymbOff_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- TextBox_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TextBox_MVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TextBox_MVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Tick_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Tick_MVU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Tick_MVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);

/*---------------- TickEx_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TickEx_MVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TickEx_MVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- TrndPath_MVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TrndPath_MVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TrndPath_MVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- CreateMetadata_MXD[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateMetadata_MXD(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateMetadata_MXD(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- ConvertToMap_MXD[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertToMap_MXD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertToMap_MXD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- Sync_MXD[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sync_MXD(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sync_MXD(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- Create_PAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_PAT(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_PAT(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_PAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_PAT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_PAT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetLST_PAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLST_PAT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLST_PAT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Math_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Math_PG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_OBJECT_PTR,
        void (_cdecl *param4)(void*,short,long,void*,void*,void*),
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Math_PG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_OBJECT_PTR,
            void (_cdecl *param4)(void*,short,long,void*,void*,void*),
            GX_CONST GX_LONG_PTR);

/*---------------- ReadColMem_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadColMem_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadColMem_PG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_OBJECT_PTR);

/*---------------- WriteColMem_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteColMem_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteColMem_PG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_OBJECT_PTR);

/*---------------- ReadRowMem_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadRowMem_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadRowMem_PG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_OBJECT_PTR);

/*---------------- WriteRowMem_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteRowMem_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteRowMem_PG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_OBJECT_PTR);

/*---------------- Copy_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_PG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_PG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- CopySubset_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopySubset_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopySubset_PG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Create_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_PG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- CreateS_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_PG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_PG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Dummy_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Dummy_PG(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Dummy_PG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- iEType_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEType_PG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEType_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- iNCols_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNCols_PG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNCols_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- iNRows_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNRows_PG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNRows_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- iNSlices_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNSlices_PG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNSlices_PG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Range_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Range_PG(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_VAR   GX_DOUBLE_PTR,
         GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Range_PG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR);

/*---------------- rGet_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGet_PG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGet_PG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- ReadCol_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadCol_PG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadCol_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- ReadRow_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadRow_PG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadRow_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- ReAllocate_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReAllocate_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReAllocate_PG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Serial_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_PG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Statistics_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Statistics_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Statistics_PG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- WriteCol_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteCol_PG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteCol_PG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- WriteRow_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteRow_PG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteRow_PG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- CopySubset3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopySubset3D_PG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopySubset3D_PG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Create3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create3D_PG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create3D_PG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- ReadCol3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadCol3D_PG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadCol3D_PG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- ReadRow3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadRow3D_PG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadRow3D_PG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- ReadTrace3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadTrace3D_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadTrace3D_PG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- ReAllocate3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReAllocate3D_PG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReAllocate3D_PG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- WriteCol3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteCol3D_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteCol3D_PG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- WriteRow3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteRow3D_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteRow3D_PG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- WriteTrace3D_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteTrace3D_PG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteTrace3D_PG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ReadBF_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadBF_PG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadBF_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- ReadRA_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadRA_PG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadRA_PG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- WriteBF_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteBF_PG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteBF_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- WriteBFEx_PG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteBFEx_PG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteBFEx_PG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- WriteWA_PG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteWA_PG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteWA_PG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ClipPLY_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipPLY_PJ(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipPLY_PJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- ConvertVV_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertVV_PJ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertVV_PJ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- ConvertVV3_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertVV3_PJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertVV3_PJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ConvertXY_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertXY_PJ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_VAR   GX_DOUBLE_PTR,
             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertXY_PJ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- ConvertXYFromXYZ_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertXYFromXYZ_PJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertXYFromXYZ_PJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- ConvertXYZ_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertXYZ_PJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertXYZ_PJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);

/*---------------- Create_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_PJ(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_PJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- CreateIPJ_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateIPJ_PJ(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateIPJ_PJ(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- CreateRectified_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateRectified_PJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateRectified_PJ(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- Destroy_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_PJ(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_PJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- iElevation_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iElevation_PJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iElevation_PJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iIsInputLL_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsInputLL_PJ(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsInputLL_PJ(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iIsOutputLL_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsOutputLL_PJ(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsOutputLL_PJ(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- ProjectBoundingRectangle_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjectBoundingRectangle_PJ(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProjectBoundingRectangle_PJ(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR);

/*---------------- ProjectBoundingRectangle2_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjectBoundingRectangle2_PJ(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProjectBoundingRectangle2_PJ(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR);

/*---------------- ProjectBoundingRectangleRes_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjectBoundingRectangleRes_PJ(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProjectBoundingRectangleRes_PJ(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR);

/*---------------- ProjectBoundingRectangleRes2_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjectBoundingRectangleRes2_PJ(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProjectBoundingRectangleRes2_PJ(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR);

/*---------------- ProjectLimitedBoundingRectangle_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjectLimitedBoundingRectangle_PJ(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR,
                                   GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProjectLimitedBoundingRectangle_PJ(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_VAR   GX_DOUBLE_PTR,
                                       GX_VAR   GX_DOUBLE_PTR,
                                       GX_VAR   GX_DOUBLE_PTR,
                                       GX_VAR   GX_DOUBLE_PTR);

/*---------------- SetupLDT_PJ[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetupLDT_PJ(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetupLDT_PJ(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- AddPolygon_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddPolygon_PLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddPolygon_PLY(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- AddPolygonEx_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddPolygonEx_PLY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddPolygonEx_PLY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- ChangeIPJ_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ChangeIPJ_PLY(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ChangeIPJ_PLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Clear_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Clear_PLY(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Clear_PLY(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Copy_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_PLY(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_PLY(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Create_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_PLY(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_PLY(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateS_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_PLY(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_PLY(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_PLY(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_PLY(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Extent_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Extent_PLY(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_VAR   GX_DOUBLE_PTR,
           GX_VAR   GX_DOUBLE_PTR,
           GX_VAR   GX_DOUBLE_PTR,
           GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Extent_PLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetIPJ_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_PLY(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_PLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetPolygon_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPolygon_PLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPolygon_PLY(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- GetPolygonEx_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPolygonEx_PLY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPolygonEx_PLY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR);

/*---------------- iClipArea_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iClipArea_PLY(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iClipArea_PLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- iClipLineInt_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iClipLineInt_PLY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iClipLineInt_PLY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_VAR   GX_LONG_PTR);

/*---------------- iClipPLY_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iClipPLY_PLY(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iClipPLY_PLY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- IGetDescription_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetDescription_PLY(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetDescription_PLY(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- iNumPoly_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumPoly_PLY(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumPoly_PLY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- LoadTable_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadTable_PLY(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadTable_PLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- rArea_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rArea_PLY(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rArea_PLY(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Rectangle_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Rectangle_PLY(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Rectangle_PLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- Rotate_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Rotate_PLY(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Rotate_PLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- SaveTable_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveTable_PLY(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveTable_PLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Serial_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_PLY(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_PLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetDescription_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDescription_PLY(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDescription_PLY(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- SetIPJ_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_PLY(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_PLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Thin_PLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Thin_PLY(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Thin_PLY(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR);

/*---------------- Create_RA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_RA(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_RA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- CreateSBF_RA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateSBF_RA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateSBF_RA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- Destroy_RA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_RA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_RA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- IiGets_RA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiGets_RA(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_VAR   GX_STR_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiGets_RA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- iLen_RA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLen_RA(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLen_RA(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- iLine_RA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLine_RA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLine_RA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- iSeek_RA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSeek_RA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSeek_RA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- Clear_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Clear_REG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Clear_REG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Copy_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_REG(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_REG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Create_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_REG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_REG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- CreateS_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_REG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_REG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_REG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_REG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Get_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Get_REG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_STR_PTR,
        GX_VAR   GX_STR_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Get_REG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- GetInt_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetInt_REG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetInt_REG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_VAR   GX_LONG_PTR);

/*---------------- GetOne_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetOne_REG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_VAR   GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_VAR   GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetOne_REG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- GetReal_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetReal_REG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetReal_REG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- iEntries_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEntries_REG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEntries_REG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- LoadINI_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadINI_REG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadINI_REG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- MatchString_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MatchString_REG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MatchString_REG(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Merge_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Merge_REG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Merge_REG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SaveINI_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveINI_REG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveINI_REG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Serial_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_REG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_REG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Set_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Set_REG(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_STR_PTR,
        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Set_REG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);

/*---------------- SetInt_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_REG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_REG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SetReal_REG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_REG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_REG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- Create_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_SBF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_SBF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- CreateObjList_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateObjList_SBF(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateObjList_SBF(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- DelDir_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DelDir_SBF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DelDir_SBF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- DelFile_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DelFile_SBF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DelFile_SBF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Destroy_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_SBF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_SBF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- hGetDB_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
hGetDB_SBF(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_hGetDB_SBF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- hGetMAP_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
hGetMAP_SBF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_hGetMAP_SBF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- hGetSYS_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
hGetSYS_SBF(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_hGetSYS_SBF(GX_VAR   GX_OBJECT_PTR);

/*---------------- iExistDir_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistDir_SBF(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistDir_SBF(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iExistFile_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistFile_SBF(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistFile_SBF(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- SaveLog_SBF[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveLog_SBF(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveLog_SBF(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Create_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_ST(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_ST(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateExact_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateExact_ST(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateExact_ST(GX_VAR   GX_OBJECT_PTR);

/*---------------- Data_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Data_ST(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Data_ST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR);

/*---------------- DataVV_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DataVV_ST(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DataVV_ST(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_ST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_ST(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_ST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetHistogramBins_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetHistogramBins_ST(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetHistogramBins_ST(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- GetHistogramInfo_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetHistogramInfo_ST(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetHistogramInfo_ST(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_LONG_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- Histogram_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Histogram_ST(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Histogram_ST(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Histogram2_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Histogram2_ST(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Histogram2_ST(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- rEquivalentPercentile_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rEquivalentPercentile_ST(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rEquivalentPercentile_ST(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);

/*---------------- rEquivalentValue_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rEquivalentValue_ST(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rEquivalentValue_ST(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- Reset_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Reset_ST(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Reset_ST(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- rGetInfo_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetInfo_ST(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetInfo_ST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- rGetNormProb_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetNormProb_ST(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetNormProb_ST(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- rGetNormProbX_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetNormProbX_ST(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetNormProbX_ST(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- rNormalTest_ST[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rNormalTest_ST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rNormalTest_ST(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Create_ST2[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_ST2(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_ST2(GX_VAR   GX_OBJECT_PTR);

/*---------------- DataVV_ST2[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DataVV_ST2(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DataVV_ST2(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_ST2[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_ST2(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_ST2(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- iItems_ST2[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iItems_ST2(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iItems_ST2(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Reset_ST2[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Reset_ST2(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Reset_ST2(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- rGet_ST2[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGet_ST2(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGet_ST2(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- iScanI_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iScanI_STR(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iScanI_STR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- rScanDate_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rScanDate_STR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rScanDate_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- rScanForm_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rScanForm_STR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rScanForm_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- rScanR_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rScanR_STR(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rScanR_STR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- rScanTime_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rScanTime_STR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rScanTime_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- IFileCombineParts_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFileCombineParts_STR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFileCombineParts_STR(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- IFileExt_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFileExt_STR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFileExt_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IFileNamePart_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFileNamePart_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFileNamePart_STR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- IGetMFile_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetMFile_STR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetMFile_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- IRemoveQualifiers_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IRemoveQualifiers_STR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IRemoveQualifiers_STR(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- IFormatCRC_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFormatCRC_STR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFormatCRC_STR(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- IFormatDate_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFormatDate_STR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFormatDate_STR(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IFormatI_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFormatI_STR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_LONG_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFormatI_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IFormatR_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFormatR_STR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFormatR_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IFormatR2_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFormatR2_STR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFormatR2_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- IFormatReal_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFormatReal_STR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFormatReal_STR(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IFormatTime_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFormatTime_STR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFormatTime_STR(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- _Escape_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Escape_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Escape_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iChar_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iChar_STR(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iChar_STR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- IiCharN_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiCharN_STR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiCharN_STR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IJustify_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IJustify_STR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IJustify_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IReplaceiMatchString_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IReplaceiMatchString_STR(GX_VAR   GX_OBJECT_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IReplaceiMatchString_STR(GX_VAR   GX_OBJECT_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- IReplaceMatchString_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IReplaceMatchString_STR(GX_VAR   GX_OBJECT_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IReplaceMatchString_STR(GX_VAR   GX_OBJECT_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- ISetCharN_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ISetCharN_STR(GX_VAR   GX_OBJECT_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ISetCharN_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ISplitString_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ISplitString_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ISplitString_STR(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- IStrcat_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IStrcat_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IStrcat_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iStrcmp_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iStrcmp_STR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iStrcmp_STR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IStrcpy_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IStrcpy_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IStrcpy_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iStriMask_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iStriMask_STR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iStriMask_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- IStrins_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IStrins_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IStrins_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iStrlen_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iStrlen_STR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iStrlen_STR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- iStrMask_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iStrMask_STR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iStrMask_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- iStrMin_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iStrMin_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iStrMin_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR);

/*---------------- iStrMin2_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iStrMin2_STR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iStrMin2_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- iStrncmp_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iStrncmp_STR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iStrncmp_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- iStrStr_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iStrStr_STR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iStrStr_STR(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- ISubstr_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ISubstr_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ISubstr_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IToLower_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IToLower_STR(GX_VAR   GX_OBJECT_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IToLower_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IToUpper_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IToUpper_STR(GX_VAR   GX_OBJECT_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IToUpper_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IXYZLine_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IXYZLine_STR(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IXYZLine_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- MakeAlpha_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MakeAlpha_STR(GX_VAR   GX_OBJECT_PTR,
              GX_VAR   GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MakeAlpha_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR);

/*---------------- Printf_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Printf_STR(GX_VAR   GX_OBJECT_PTR,
           GX_VAR   GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Printf_STR(GX_VAR   GX_OBJECT_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ReplaceChar_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReplaceChar_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReplaceChar_STR(GX_VAR   GX_OBJECT_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- ReplaceChar2_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReplaceChar2_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReplaceChar2_STR(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- ReplaceMultiChar_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReplaceMultiChar_STR(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReplaceMultiChar_STR(GX_VAR   GX_OBJECT_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- ReplaceNonASCII_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReplaceNonASCII_STR(GX_VAR   GX_OBJECT_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReplaceNonASCII_STR(GX_VAR   GX_OBJECT_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- SetChar_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChar_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChar_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- TrimQuotes_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TrimQuotes_STR(GX_VAR   GX_OBJECT_PTR,
               GX_VAR   GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TrimQuotes_STR(GX_VAR   GX_OBJECT_PTR,
                   GX_VAR   GX_STR_PTR);

/*---------------- TrimSpace_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TrimSpace_STR(GX_VAR   GX_OBJECT_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TrimSpace_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- UnQuote_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UnQuote_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UnQuote_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR);

/*---------------- IGenGroupName_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGenGroupName_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGenGroupName_STR(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iCountTokens_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCountTokens_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCountTokens_STR(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- IGetToken_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetToken_STR(GX_VAR   GX_OBJECT_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetToken_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iTokenize_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTokenize_STR(GX_VAR   GX_OBJECT_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTokenize_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iTokens_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTokens_STR(GX_VAR   GX_OBJECT_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTokens_STR(GX_VAR   GX_OBJECT_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- iTokens2_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTokens2_STR(GX_VAR   GX_OBJECT_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTokens2_STR(GX_VAR   GX_OBJECT_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ParseList_STR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ParseList_STR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ParseList_STR(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Create_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_SURFACE(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_SURFACE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Open_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Open_SURFACE(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Open_SURFACE(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Destroy_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_SURFACE(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_SURFACE(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GetIPJ_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_SURFACE(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_SURFACE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- SetIPJ_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_SURFACE(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_SURFACE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GetSurfaceItems_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSurfaceItems_SURFACE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSurfaceItems_SURFACE(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- GetSurfaceItem_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetSurfaceItem_SURFACE(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetSurfaceItem_SURFACE(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- AddSurfaceItem_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddSurfaceItem_SURFACE(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddSurfaceItem_SURFACE(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- GetSurfaceNames_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSurfaceNames_SURFACE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSurfaceNames_SURFACE(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- GetClosedSurfaceNames_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetClosedSurfaceNames_SURFACE(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetClosedSurfaceNames_SURFACE(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetExtents_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExtents_SURFACE(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExtents_SURFACE(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);

/*---------------- CRC_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRC_SURFACE(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRC_SURFACE(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_VAR   GX_LONG_PTR);

/*---------------- Sync_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sync_SURFACE(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sync_SURFACE(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- CreateFromDXF_SURFACE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateFromDXF_SURFACE(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateFromDXF_SURFACE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- CreateFromVulcanTriangulation_SURFACE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateFromVulcanTriangulation_SURFACE(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateFromVulcanTriangulation_SURFACE(GX_VAR   GX_OBJECT_PTR,
                                          GX_CONST GX_STR_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_STR_PTR);

/*---------------- AppendVulcanTriangulation_SURFACE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AppendVulcanTriangulation_SURFACE(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AppendVulcanTriangulation_SURFACE(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_STR_PTR);

/*---------------- Create_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- Destroy_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- GetGUID_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGUID_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGUID_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- SetProperties_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetProperties_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetProperties_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_DOUBLE_PTR);

/*---------------- SetPropertiesEx_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPropertiesEx_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPropertiesEx_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR);

/*---------------- GetProperties_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetProperties_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetProperties_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetPropertiesEx_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPropertiesEx_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPropertiesEx_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR);

/*---------------- SetDefaultRenderProperties_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDefaultRenderProperties_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDefaultRenderProperties_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           GX_CONST GX_LONG_PTR,
                                           GX_CONST GX_DOUBLE_PTR,
                                           GX_CONST GX_LONG_PTR);

/*---------------- GetDefaultRenderProperties_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDefaultRenderProperties_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_DOUBLE_PTR,
                                       GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDefaultRenderProperties_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           GX_VAR   GX_LONG_PTR,
                                           GX_VAR   GX_DOUBLE_PTR,
                                           GX_VAR   GX_LONG_PTR);

/*---------------- iNumComponents_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumComponents_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumComponents_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- iAddMesh_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddMesh_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddMesh_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- GetMesh_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMesh_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMesh_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- GetExtents_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExtents_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExtents_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetMeshInfo_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMeshInfo_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_LONG_PTR,
                        GX_VAR   GX_LONG_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMeshInfo_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetInfo_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetInfo_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetInfo_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_LONG_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetGeometryInfo_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGeometryInfo_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGeometryInfo_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR);

/*---------------- ComputeExtendedInfo_SURFACEITEM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ComputeExtendedInfo_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ComputeExtendedInfo_SURFACEITEM(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_VAR   GX_LONG_PTR);

/*---------------- BreakDate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BreakDate_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BreakDate_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR);

/*---------------- iDatetoLong_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDatetoLong_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDatetoLong_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- iTimetoLong_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTimetoLong_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTimetoLong_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- rDate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rDate_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rDate_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- rLongtoDate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLongtoDate_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLongtoDate_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- rLongtoTime_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rLongtoTime_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rLongtoTime_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- rMakeDate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rMakeDate_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rMakeDate_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- rSecondstoTime_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rSecondstoTime_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rSecondstoTime_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- rTime_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rTime_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rTime_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- rTimetoSeconds_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rTimetoSeconds_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rTimetoSeconds_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- rUTCDate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rUTCDate_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rUTCDate_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- rUTCTime_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rUTCTime_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rUTCTime_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- iExistEnv_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistEnv_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistEnv_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- IGetEnv_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetEnv_SYS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetEnv_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- SetEnv_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetEnv_SYS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetEnv_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- iClearErrAP_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iClearErrAP_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iClearErrAP_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- iGetTopErrorAP_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetTopErrorAP_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetTopErrorAP_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- IGetErrorMessageAP_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetErrorMessageAP_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetErrorMessageAP_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- iNumErrorsAP_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumErrorsAP_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumErrorsAP_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- SetServerMessagesAP_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetServerMessagesAP_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetServerMessagesAP_SYS(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- iRun_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRun_SYS(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRun_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- iRunGS_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRunGS_SYS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRunGS_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- iRunGX_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRunGX_SYS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRunGX_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- iRunGXEx_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRunGXEx_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRunGXEx_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_LONG_PTR);

/*---------------- iRunPDF_SYS[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iRunPDF_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iRunPDF_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- iShellExecute_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iShellExecute_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iShellExecute_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetReturn_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReturn_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReturn_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- DoCommand_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DoCommand_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DoCommand_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- Error_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Error_SYS(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Error_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- ErrorTag_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ErrorTag_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ErrorTag_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- iAssertGX_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAssertGX_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAssertGX_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iOLEAutomation_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iOLEAutomation_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iOLEAutomation_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- SaveLog_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SaveLog_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SaveLog_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- ShowError_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ShowError_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ShowError_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- Terminate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Terminate_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Terminate_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- CRCFile_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCFile_SYS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCFile_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- CRCFileOffset_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCFileOffset_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCFileOffset_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- FileRen_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FileRen_SYS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FileRen_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- FindFilesVV_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FindFilesVV_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FindFilesVV_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- IAbsoluteFileName_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IAbsoluteFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IAbsoluteFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iCopyFile_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCopyFile_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCopyFile_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iDeleteFile_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDeleteFile_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDeleteFile_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- iDeleteGIFile_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDeleteGIFile_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDeleteGIFile_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- iDeleteGridFile_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDeleteGridFile_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDeleteGridFile_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- iDirExist_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDirExist_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDirExist_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iFileExist_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFileExist_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFileExist_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- iFileSize_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFileSize_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFileSize_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iFileWritable_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFileWritable_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFileWritable_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- iFindPath_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindPath_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindPath_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iFindPathEx_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindPathEx_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindPathEx_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IGetDirectory_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetDirectory_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetDirectory_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- IGetPath_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetPath_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_LONG_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetPath_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IGetWindowsDir_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetWindowsDir_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetWindowsDir_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iMakeDir_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iMakeDir_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iMakeDir_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- iMakeFileReadonly_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iMakeFileReadonly_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iMakeFileReadonly_SYS(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- iMakeFileWritable_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iMakeFileWritable_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iMakeFileWritable_SYS(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- IRelativeFileName_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IRelativeFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IRelativeFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- IShortPathFileName_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IShortPathFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IShortPathFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- ITempFileExt_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ITempFileExt_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ITempFileExt_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- ITempFileName_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ITempFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ITempFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- ITransferPath_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ITransferPath_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ITransferPath_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iValidFileName_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iValidFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iValidFileName_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- iWriteInDir_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iWriteInDir_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iWriteInDir_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- rFileDate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rFileDate_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rFileDate_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- rFileTime_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rFileTime_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rFileTime_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- rUTCFileDate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rUTCFileDate_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rUTCFileDate_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- rUTCFileTime_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rUTCFileTime_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rUTCFileTime_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- GetSettingsMETA_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSettingsMETA_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSettingsMETA_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- GlobalReset_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GlobalReset_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GlobalReset_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- GlobalSet_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GlobalSet_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GlobalSet_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- GlobalWrite_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GlobalWrite_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GlobalWrite_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- IiGlobal_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiGlobal_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiGlobal_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- ResetSettings_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ResetSettings_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ResetSettings_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- SetSettingsMETA_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetSettingsMETA_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetSettingsMETA_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- iCheckArcLicense_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheckArcLicense_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheckArcLicense_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- iCheckArcLicenseEx_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheckArcLicenseEx_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheckArcLicenseEx_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- iCheckIntrinsic_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheckIntrinsic_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheckIntrinsic_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- iGetGeodist_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetGeodist_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetGeodist_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- IGetLicenseClass_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetLicenseClass_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetLicenseClass_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- IGetLicensedUser_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetLicensedUser_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetLicensedUser_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- AddLineageParameter_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddLineageParameter_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddLineageParameter_SYS(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- AddLineageSource_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddLineageSource_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddLineageSource_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- ClearLineageParameters_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearLineageParameters_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearLineageParameters_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- ClearLineageSources_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearLineageSources_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearLineageSources_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- CopyGeoFile_SYS[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyGeoFile_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyGeoFile_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- IBackupGeoFile_SYS[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IBackupGeoFile_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IBackupGeoFile_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- RemoveLineageOutput_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveLineageOutput_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveLineageOutput_SYS(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- RemoveLineageParameter_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveLineageParameter_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveLineageParameter_SYS(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- RemoveLineageSource_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveLineageSource_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveLineageSource_SYS(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- RestoreGeoFile_SYS[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RestoreGeoFile_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RestoreGeoFile_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- SetLineageDescription_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineageDescription_SYS(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineageDescription_SYS(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR);

/*---------------- SetLineageDisplayName_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineageDisplayName_SYS(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineageDisplayName_SYS(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR);

/*---------------- SetLineageName_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineageName_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineageName_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- ClearMenus_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ClearMenus_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ClearMenus_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- GetLoadedMenus_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetLoadedMenus_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetLoadedMenus_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- SetLoadedMenus_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetLoadedMenus_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetLoadedMenus_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- GetEntitlementRights_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetEntitlementRights_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetEntitlementRights_SYS(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- GenerateGUID_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenerateGUID_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenerateGUID_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- ClipboardToFile_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipboardToFile_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipboardToFile_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- CreateClipboardRA_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateClipboardRA_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateClipboardRA_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateClipboardWA_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateClipboardWA_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateClipboardWA_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destr_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destr_SYS(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destr_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- EMFObjectSize_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EMFObjectSize_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EMFObjectSize_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- FileToClipboard_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FileToClipboard_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FileToClipboard_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- FontLST_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FontLST_SYS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FontLST_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IiGetDotNetGXEntries_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiGetDotNetGXEntries_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiGetDotNetGXEntries_SYS(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- SendGeneralMessage_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SendGeneralMessage_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SendGeneralMessage_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- WriteDebugLog_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteDebugLog_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteDebugLog_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- LogScriptRun_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LogScriptRun_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LogScriptRun_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- iGetThreadID_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetThreadID_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetThreadID_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- RunMultiUserScript_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RunMultiUserScript_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RunMultiUserScript_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- ClearGroup_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearGroup_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearGroup_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- ClearGroupParm_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearGroupParm_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearGroupParm_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- ClearParm_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClearParm_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClearParm_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- DefaultInt_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DefaultInt_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DefaultInt_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- DefaultReal_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DefaultReal_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DefaultReal_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- DefaultString_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DefaultString_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DefaultString_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- GetPattern_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPattern_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_VAR   GX_LONG_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_LONG_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_LONG_PTR,
               GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPattern_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR);

/*---------------- GetREG_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetREG_SYS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetREG_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- GtString_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GtString_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GtString_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- iExistInt_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistInt_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistInt_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iExistReal_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistReal_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistReal_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- iExistString_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistString_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistString_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- iGetInt_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetInt_SYS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetInt_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- iGetYesNo_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetYesNo_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetYesNo_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- IReplaceString_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IReplaceString_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IReplaceString_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- LoadParm_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadParm_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadParm_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- rGetReal_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetReal_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetReal_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- SaveParm_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveParm_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveParm_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- FilterParmGroup_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FilterParmGroup_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FilterParmGroup_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- SetInt_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_SYS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SetPattern_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPattern_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPattern_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- SetReal_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_SYS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- SetREG_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetREG_SYS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetREG_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetString_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetString_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetString_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- iCheckStop_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheckStop_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheckStop_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- iProgState_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iProgState_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iProgState_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- ProgName_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProgName_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProgName_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Progress_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Progress_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Progress_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- ProgUpdate_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProgUpdate_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProgUpdate_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ProgUpdateL_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProgUpdateL_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProgUpdateL_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IGetSysInfo_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetSysInfo_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetSysInfo_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- IiRegistryGetVal_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiRegistryGetVal_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiRegistryGetVal_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- iRegistryDeleteKey_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRegistryDeleteKey_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRegistryDeleteKey_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- iRegistryDeleteVal_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRegistryDeleteVal_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRegistryDeleteVal_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- RegistrySetVal_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RegistrySetVal_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RegistrySetVal_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- DestroyPTMP_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DestroyPTMP_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DestroyPTMP_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- GetPTMP_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPTMP_SYS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPTMP_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- SavePTMP_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SavePTMP_SYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SavePTMP_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- _Abort_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Abort_SYS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Abort_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- _Assert_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Assert_SYS(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Assert_SYS(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- _Exit_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Exit_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Exit_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- Cancel_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Cancel_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Cancel_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- iDelay_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDelay_SYS(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDelay_SYS(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- iGetTimer_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetTimer_SYS(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetTimer_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);

/*---------------- DisplayHelp_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DisplayHelp_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DisplayHelp_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- DisplayHelpTopic_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DisplayHelpTopic_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DisplayHelpTopic_SYS(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- DisplayInt_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DisplayInt_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DisplayInt_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- DisplayMessage_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DisplayMessage_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DisplayMessage_SYS(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- DisplayReal_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DisplayReal_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DisplayReal_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- iDisplayQuestion_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDisplayQuestion_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDisplayQuestion_SYS(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- iDisplayQuestionWithCancel_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDisplayQuestionWithCancel_SYS(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDisplayQuestionWithCancel_SYS(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_STR_PTR);

/*---------------- iDisplayTaskDialogUI_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDisplayTaskDialogUI_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDisplayTaskDialogUI_SYS(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- iInteractive_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iInteractive_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iInteractive_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- IiPrompt_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiPrompt_SYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiPrompt_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iScript_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iScript_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iScript_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- iScriptRecord_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iScriptRecord_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iScriptRecord_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- SetCursor_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetCursor_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetCursor_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- SetInfoLine_SYS[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetInfoLine_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetInfoLine_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- SetInteractive_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInteractive_SYS(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInteractive_SYS(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- GetWorkspaceREG_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetWorkspaceREG_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetWorkspaceREG_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- SetWorkspaceREG_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetWorkspaceREG_SYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetWorkspaceREG_SYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- EncryptString_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EncryptString_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EncryptString_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- DecryptString_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DecryptString_SYS(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DecryptString_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- IsEncryptedString_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IsEncryptedString_SYS(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IsEncryptedString_SYS(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- DisableGXDebugger_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DisableGXDebugger_SYS(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DisableGXDebugger_SYS(GX_VAR   GX_OBJECT_PTR);

/*---------------- EnableGXDebugger_SYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EnableGXDebugger_SYS(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EnableGXDebugger_SYS(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- _SetSearchMode_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetSearchMode_TB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetSearchMode_TB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- Create_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_TB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_TB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- CreateDB_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateDB_TB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateDB_TB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- CreateLTB_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateLTB_TB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateLTB_TB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_TB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_TB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Field_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Field_TB(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Field_TB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- GetString_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetString_TB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetString_TB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- iDataType_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDataType_TB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDataType_TB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IFindColByIndex_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFindColByIndex_TB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFindColByIndex_TB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iFindColByName_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindColByName_TB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindColByName_TB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- iFormat_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFormat_TB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFormat_TB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- iGetInt_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetInt_TB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetInt_TB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- iNumColumns_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumColumns_TB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumColumns_TB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iNumRows_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumRows_TB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumRows_TB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- LoadDB_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadDB_TB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadDB_TB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- rGetReal_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetReal_TB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetReal_TB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Save_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Save_TB(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Save_TB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);

/*---------------- SaveDB_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveDB_TB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveDB_TB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SaveToAscii_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveToAscii_TB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveToAscii_TB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- SetInt_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_TB(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_TB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SetReal_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_TB(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_TB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- SetString_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetString_TB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetString_TB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- Sort_TB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sort_TB(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sort_TB(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- AddColor_TPAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddColor_TPAT(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddColor_TPAT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Create_TPAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_TPAT(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_TPAT(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_TPAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_TPAT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_TPAT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iCode_TPAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCode_TPAT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCode_TPAT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- IGetSolidPattern_TPAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetSolidPattern_TPAT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetSolidPattern_TPAT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR);

/*---------------- iSize_TPAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSize_TPAT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSize_TPAT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- LoadCSV_TPAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadCSV_TPAT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadCSV_TPAT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- SetupTranslationVV_TPAT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetupTranslationVV_TPAT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetupTranslationVV_TPAT(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- Create_TR[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_TR(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_TR(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- Destroy_TR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_TR(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_TR(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Copy_TR[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_TR(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_TR(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- Create_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_USERMETA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_USERMETA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- CreateS_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_USERMETA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_USERMETA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- Destroy_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_USERMETA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_USERMETA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetDataCreationDate_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDataCreationDate_USERMETA(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDataCreationDate_USERMETA(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetExtents2d_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExtents2d_USERMETA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExtents2d_USERMETA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetExtents3d_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExtents3d_USERMETA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExtents3d_USERMETA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetIPJ_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_USERMETA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_USERMETA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GetMetaCreationDate_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMetaCreationDate_USERMETA(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMetaCreationDate_USERMETA(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetXMLFormat_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetXMLFormat_USERMETA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetXMLFormat_USERMETA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_LONG_PTR);

/*---------------- iCompare_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCompare_USERMETA(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCompare_USERMETA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- IGetDataCreator_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetDataCreator_USERMETA(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetDataCreator_USERMETA(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- IGetFormat_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetFormat_USERMETA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetFormat_USERMETA(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- IGetMetaCreator_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetMetaCreator_USERMETA(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetMetaCreator_USERMETA(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- IGetProject_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetProject_USERMETA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetProject_USERMETA(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- IGetTitle_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetTitle_USERMETA(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetTitle_USERMETA(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- Serial_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_USERMETA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_USERMETA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- SetDataCreationDate_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDataCreationDate_USERMETA(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDataCreationDate_USERMETA(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR);

/*---------------- SetDataCreator_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDataCreator_USERMETA(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDataCreator_USERMETA(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- SetExtents2d_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetExtents2d_USERMETA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetExtents2d_USERMETA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- SetExtents3d_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetExtents3d_USERMETA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetExtents3d_USERMETA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- SetFormat_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFormat_USERMETA(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFormat_USERMETA(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- SetIPJ_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_USERMETA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_USERMETA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SetMetaCreationDate_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMetaCreationDate_USERMETA(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMetaCreationDate_USERMETA(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR);

/*---------------- SetMetaCreator_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMetaCreator_USERMETA(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMetaCreator_USERMETA(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- SetProject_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetProject_USERMETA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetProject_USERMETA(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- SetTitle_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetTitle_USERMETA(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetTitle_USERMETA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- UpdateExtents2D_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UpdateExtents2D_USERMETA(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UpdateExtents2D_USERMETA(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);

/*---------------- UpdateFileType_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UpdateFileType_USERMETA(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UpdateFileType_USERMETA(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- SaveFileLineage_USERMETA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveFileLineage_USERMETA(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveFileLineage_USERMETA(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- iGetArray_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetArray_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_LONG,
             GX_LONG,
             GX_LONG,
             GX_LONG,
             GX_OBJECT_PTR,
             GX_LONG);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetArray_VA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_LONG,
                 GX_LONG,
                 GX_LONG,
                 GX_LONG,
                 GX_OBJECT_PTR,
                 GX_LONG);

/*---------------- iSetArray_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSetArray_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_LONG,
             GX_LONG,
             GX_LONG,
             GX_LONG,
             GX_CONST GX_OBJECT_PTR,
             GX_LONG);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSetArray_VA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_LONG,
                 GX_LONG,
                 GX_LONG,
                 GX_LONG,
                 GX_CONST GX_OBJECT_PTR,
                 GX_LONG);

/*---------------- AddElevationsVVToDepths_VA[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddElevationsVVToDepths_VA(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddElevationsVVToDepths_VA(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- Append_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Append_VA(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Append_VA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Average_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Average_VA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Average_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Copy_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_VA(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_VA(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- Copy2_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy2_VA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy2_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- Create_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_VA(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_VA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- CreateExt_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateExt_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateExt_VA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- CreateVV_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateVV_VA(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateVV_VA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Destroy_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_VA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetFullVV_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetFullVV_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetFullVV_VA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetVV_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVV_VA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVV_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- iCol_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCol_VA(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCol_VA(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- iGetInt_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetInt_VA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetInt_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- IGetString_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetString_VA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetString_VA(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iLen_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLen_VA(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLen_VA(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- IndexOrder_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IndexOrder_VA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IndexOrder_VA(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- LookupIndex_VA[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LookupIndex_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LookupIndex_VA(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- RangeDouble_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeDouble_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeDouble_VA(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);

/*---------------- ReFid_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReFid_VA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReFid_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- Reverse_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Reverse_VA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Reverse_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- rGetFidIncr_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetFidIncr_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetFidIncr_VA(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- rGetFidStart_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetFidStart_VA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetFidStart_VA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- rGetReal_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetReal_VA(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetReal_VA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- SetFidIncr_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFidIncr_VA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFidIncr_VA(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- SetFidStart_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFidStart_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFidStart_VA(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- SetInt_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_VA(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_VA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SetLn_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLn_VA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLn_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- SetReal_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_VA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- SetString_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetString_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetString_VA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- SetVV_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVV_VA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVV_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Trans_VA[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Trans_VA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Trans_VA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);

/*---------------- Window_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Window_VA(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Window_VA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Window2_VA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Window2_VA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Window2_VA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- iCheckForRepeating_VA[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheckForRepeating_VA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheckForRepeating_VA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- iCheckForRepeating2_VA[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCheckForRepeating2_VA(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCheckForRepeating2_VA(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR);

/*---------------- Destroy_VECTOR3D[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_VECTOR3D(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_VECTOR3D(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetITR_VECTOR3D[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetITR_VECTOR3D(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetITR_VECTOR3D(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SetITR_VECTOR3D[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetITR_VECTOR3D(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetITR_VECTOR3D(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- Create_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_VM(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_VM(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- CreateExt_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateExt_VM(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateExt_VM(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Destroy_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_VM(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_VM(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- iGetInt_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetInt_VM(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetInt_VM(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- IGetString_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetString_VM(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetString_VM(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iLength_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLength_VM(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLength_VM(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- ReSize_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReSize_VM(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReSize_VM(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- rGetReal_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetReal_VM(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetReal_VM(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- SetInt_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_VM(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_VM(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SetReal_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_VM(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_VM(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- SetString_VM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetString_VM(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetString_VM(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- CalcStats_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CalcStats_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CalcStats_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Create_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_VOX(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- CreatePG_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreatePG_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreatePG_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- CreateTypePG_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateTypePG_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateTypePG_VOX(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- Destroy_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_VOX(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Dump_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Dump_VOX(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Dump_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- ExportIMG_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportIMG_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportIMG_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ExportToGrids_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToGrids_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToGrids_VOX(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- ExportXML_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportXML_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportXML_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- ExportSegY_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportSegY_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportSegY_VOX(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- ExportJIGsXML_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportJIGsXML_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportJIGsXML_VOX(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- ExportXYZ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportXYZ_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportXYZ_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Filter_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Filter_VOX(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Filter_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- GenerateDB_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenerateDB_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenerateDB_VOX(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- GenerateVectorVoxelFromDB_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenerateVectorVoxelFromDB_VOX(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenerateVectorVoxelFromDB_VOX(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR);

/*---------------- GeneratePG_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GeneratePG_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GeneratePG_VOX(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GenerateConstantValue_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GenerateConstantValue_VOX(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GenerateConstantValue_VOX(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- GeneratePGVV_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GeneratePGVV_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GeneratePGVV_VOX(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GenerateConstantValueVV_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GenerateConstantValueVV_VOX(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GenerateConstantValueVV_VOX(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- InitGenerateBySubsetPG_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
InitGenerateBySubsetPG_VOX(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_InitGenerateBySubsetPG_VOX(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- AddGenerateBySubsetPG_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddGenerateBySubsetPG_VOX(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddGenerateBySubsetPG_VOX(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- EndGenerateBySubsetPG_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EndGenerateBySubsetPG_VOX(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EndGenerateBySubsetPG_VOX(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- GetArea_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetArea_VOX(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetArea_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetGOCADLocation_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGOCADLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGOCADLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetGridSectionCellSizes_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGridSectionCellSizes_VOX(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGridSectionCellSizes_VOX(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetInfo_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetInfo_VOX(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_LONG_PTR,
            GX_VAR   GX_LONG_PTR,
            GX_VAR   GX_LONG_PTR,
            GX_VAR   GX_LONG_PTR,
            GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetInfo_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR);

/*---------------- GetIPJ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_VOX(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetLimits_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLimits_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLimits_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR);

/*---------------- GetLimitsXYZ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLimitsXYZ_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLimitsXYZ_VOX(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetLocation_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GetLocationPoints_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLocationPoints_VOX(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLocationPoints_VOX(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetMETA_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMETA_VOX(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMETA_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetRealLocation_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetRealLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetRealLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetSimpleLocation_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSimpleLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSimpleLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetStats_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetStats_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetStats_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetTPAT_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTPAT_VOX(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTPAT_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GridPoints_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GridPoints_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GridPoints_VOX(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GridPointsZ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GridPointsZ_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GridPointsZ_VOX(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GridPointsZEx_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GridPointsZEx_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GridPointsZEx_VOX(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iCanAppendTo_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCanAppendTo_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCanAppendTo_VOX(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- IGetCellSizeStrings_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetCellSizeStrings_VOX(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetCellSizeStrings_VOX(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR);

/*---------------- iIsThematic_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsThematic_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsThematic_VOX(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- iIsVectorVoxel_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsVectorVoxel_VOX(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsVectorVoxel_VOX(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- iSetCellSizeStrings_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSetCellSizeStrings_VOX(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSetCellSizeStrings_VOX(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- LogGridPointsZEx_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
LogGridPointsZEx_VOX(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_LogGridPointsZEx_VOX(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- Krig_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Krig_VOX(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Krig_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Math_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Math_VOX(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Math_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Merge_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Merge_VOX(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Merge_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- NearestNeighbourGrid_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
NearestNeighbourGrid_VOX(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_NearestNeighbourGrid_VOX(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- rComputeCellSize_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rComputeCellSize_VOX(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rComputeCellSize_VOX(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- ReGrid_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReGrid_VOX(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReGrid_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ResamplePG_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
ResamplePG_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_ResamplePG_VOX(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- RescaleCellSizes_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RescaleCellSizes_VOX(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RescaleCellSizes_VOX(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- SampleCDI_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SampleCDI_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SampleCDI_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- SampleCDIToTopography_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SampleCDIToTopography_VOX(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SampleCDIToTopography_VOX(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR);

/*---------------- SampleVV_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SampleVV_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SampleVV_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SetIPJ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_VOX(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_VOX(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetLocation_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SetMETA_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMETA_VOX(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMETA_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SetOrigin_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetOrigin_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetOrigin_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- SetSimpleLocation_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetSimpleLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetSimpleLocation_VOX(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- SetTPAT_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetTPAT_VOX(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetTPAT_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SliceIPJ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SliceIPJ_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SliceIPJ_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- SliceMultiLayerIPJ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SliceMultiLayerIPJ_VOX(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SliceMultiLayerIPJ_VOX(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);

/*---------------- SubsetToRealExtents_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SubsetToRealExtents_VOX(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SubsetToRealExtents_VOX(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- Sync_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sync_VOX(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sync_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- WindowPLY_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WindowPLY_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WindowPLY_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- WindowXYZ_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WindowXYZ_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WindowXYZ_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- WriteXML_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteXML_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteXML_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ConvertNumericToThematic_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertNumericToThematic_VOX(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertNumericToThematic_VOX(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- ConvertThematicToNumeric_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertThematicToNumeric_VOX(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertThematicToNumeric_VOX(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- ConvertVelocityToDensity_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertVelocityToDensity_VOX(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertVelocityToDensity_VOX(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- ConvertVelocityInRangeToDensity_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertVelocityInRangeToDensity_VOX(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertVelocityInRangeToDensity_VOX(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_STR_PTR);

/*---------------- ConvertDensityToVelocity_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertDensityToVelocity_VOX(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertDensityToVelocity_VOX(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- InvertZ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InvertZ_VOX(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InvertZ_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- IDWGridDB_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDWGridDB_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDWGridDB_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- TINGridDB_VOX[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TINGridDB_VOX(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TINGridDB_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- IGetMultiVoxsetGUID_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetMultiVoxsetGUID_VOX(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetMultiVoxsetGUID_VOX(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- GenerateGOCAD_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GenerateGOCAD_VOX(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GenerateGOCAD_VOX(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GenerateOrientedGOCAD_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GenerateOrientedGOCAD_VOX(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GenerateOrientedGOCAD_VOX(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- GenerateUBC_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GenerateUBC_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GenerateUBC_VOX(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GenerateXYZ_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenerateXYZ_VOX(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenerateXYZ_VOX(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ListGOCADProperties_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ListGOCADProperties_VOX(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ListGOCADProperties_VOX(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- ExportDB_VOX[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportDB_VOX(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportDB_VOX(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Create_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_VOXD(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_VOXD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- CreateITR_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateITR_VOXD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateITR_VOXD(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- CreateThematic_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateThematic_VOXD(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateThematic_VOXD(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- iIsThematic_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsThematic_VOXD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsThematic_VOXD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetThematicInfo_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetThematicInfo_VOXD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetThematicInfo_VOXD(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- SetThematicSelection_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetThematicSelection_VOXD(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetThematicSelection_VOXD(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_VOXD(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_VOXD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetDrawControls_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDrawControls_VOXD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDrawControls_VOXD(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- IGetName_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetName_VOXD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetName_VOXD(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- GetITR_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetITR_VOXD(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetITR_VOXD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetShellControls_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetShellControls_VOXD(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetShellControls_VOXD(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);

/*---------------- SetDrawControls_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetDrawControls_VOXD(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetDrawControls_VOXD(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);

/*---------------- SetITR_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetITR_VOXD(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetITR_VOXD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SetShellControls_VOXD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetShellControls_VOXD(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetShellControls_VOXD(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- Create_VOXE[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_VOXE(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_VOXE(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_VOXE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_VOXE(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_VOXE(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Profile_VOXE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Profile_VOXE(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Profile_VOXE(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- rValue_VOXE[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rValue_VOXE(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rValue_VOXE(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Vector_VOXE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Vector_VOXE(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Vector_VOXE(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IsValidTriangulationFile_VULCAN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IsValidTriangulationFile_VULCAN(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IsValidTriangulationFile_VULCAN(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR);

/*---------------- IsValidBlockModelFile_VULCAN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IsValidBlockModelFile_VULCAN(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IsValidBlockModelFile_VULCAN(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- TriangulationToView_VULCAN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TriangulationToView_VULCAN(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TriangulationToView_VULCAN(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- GetBlockModelVariableInfo_VULCAN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetBlockModelVariableInfo_VULCAN(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetBlockModelVariableInfo_VULCAN(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetBlockModelStringVariableValues_VULCAN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetBlockModelStringVariableValues_VULCAN(GX_VAR   GX_OBJECT_PTR,
                                         GX_CONST GX_STR_PTR,
                                         GX_CONST GX_STR_PTR,
                                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetBlockModelStringVariableValues_VULCAN(GX_VAR   GX_OBJECT_PTR,
                                             GX_CONST GX_STR_PTR,
                                             GX_CONST GX_STR_PTR,
                                             GX_CONST GX_HANDLE_PTR);

/*---------------- BlockModelToVoxel_VULCAN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BlockModelToVoxel_VULCAN(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BlockModelToVoxel_VULCAN(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- iGetData_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetData_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_LONG,
            GX_LONG,
            GX_OBJECT_PTR,
            GX_LONG);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetData_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_LONG,
                GX_LONG,
                GX_OBJECT_PTR,
                GX_LONG);

/*---------------- iSetData_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSetData_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_LONG,
            GX_LONG,
            GX_CONST GX_OBJECT_PTR,
            GX_LONG);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSetData_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_LONG,
                GX_LONG,
                GX_CONST GX_OBJECT_PTR,
                GX_LONG);

/*---------------- _Copy_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Copy_VV(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Copy_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- _Copy2_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Copy2_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Copy2_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- _Log_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Log_VV(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Log_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR);

/*---------------- _LogLinear_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_LogLinear_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__LogLinear_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- _Mask_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Mask_VV(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Mask_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- _Reverse_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Reverse_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Reverse_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- _Serial_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Serial_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Serial_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- _Trans_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Trans_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Trans_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- Abs_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Abs_VV(GX_VAR   GX_OBJECT_PTR,
       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Abs_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);

/*---------------- Add_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Add_VV(GX_VAR   GX_OBJECT_PTR,
       GX_CONST GX_HANDLE_PTR,
       GX_CONST GX_HANDLE_PTR,
       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Add_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);

/*---------------- Add2_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Add2_VV(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_DOUBLE_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_DOUBLE_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Add2_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- Append_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Append_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Append_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- CopyVMtoVV_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyVMtoVV_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyVMtoVV_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- CopyVVtoVM_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyVVtoVM_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyVVtoVM_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- CRC_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRC_VV(GX_VAR   GX_OBJECT_PTR,
       GX_CONST GX_HANDLE_PTR,
       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRC_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);

/*---------------- CRCInexact_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CRCInexact_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CRCInexact_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Create_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- CreateExt_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateExt_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateExt_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- CreateS_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Diff_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Diff_VV(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Diff_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- Divide_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Divide_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Divide_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- FidNorm_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FidNorm_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FidNorm_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- FillInt_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FillInt_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FillInt_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- FillReal_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FillReal_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FillReal_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- FillString_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FillString_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FillString_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- GetVM_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVM_VV(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVM_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- iCountDummies_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCountDummies_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCountDummies_VV(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iFindDum_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindDum_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindDum_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iGetFidExpansion_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetFidExpansion_VV(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetFidExpansion_VV(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- iGetInt_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetInt_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetInt_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- IGetString_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetString_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetString_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iIndexMax_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIndexMax_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIndexMax_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- iLength_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLength_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLength_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- IndexInsert_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IndexInsert_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IndexInsert_VV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- IndexOrder_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IndexOrder_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IndexOrder_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- InitIndex_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InitIndex_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InitIndex_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- InvLog_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InvLog_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InvLog_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- iOrder_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iOrder_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iOrder_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_LONG_PTR);

/*---------------- LinesToXY_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LinesToXY_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LinesToXY_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- LookupIndex_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LookupIndex_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LookupIndex_VV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- MakeMemBased_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MakeMemBased_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MakeMemBased_VV(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- MaskAND_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaskAND_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaskAND_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- MaskOR_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaskOR_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaskOR_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- MaskStr_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaskStr_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaskStr_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- Multiply_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Multiply_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Multiply_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Amplitude3D_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Amplitude3D_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Amplitude3D_VV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- PolygonMask_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolygonMask_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolygonMask_VV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- Project_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Project_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Project_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Project3D_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Project3D_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Project3D_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- RangeDouble_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeDouble_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeDouble_VV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);

/*---------------- ReFid_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReFid_VV(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReFid_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- ReFidVV_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReFidVV_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReFidVV_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- ReSample_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReSample_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReSample_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- rGetFidIncr_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetFidIncr_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetFidIncr_VV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- rGetFidStart_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetFidStart_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetFidStart_VV(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- rGetReal_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rGetReal_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rGetReal_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- rSum_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rSum_VV(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rSum_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- rWeightedMean_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rWeightedMean_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rWeightedMean_VV(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- SetFidExpansion_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFidExpansion_VV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFidExpansion_VV(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- SetFidIncr_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFidIncr_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFidIncr_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- SetFidStart_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFidStart_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFidStart_VV(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- SetInt_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SetIntN_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIntN_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIntN_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SetLen_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLen_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLen_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SetReal_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_VV(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_VV(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- SetRealN_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetRealN_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetRealN_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- SetString_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetString_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetString_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- SetStringN_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetStringN_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetStringN_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- SetupIndex_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetupIndex_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetupIndex_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- SetVM_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVM_VV(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVM_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- Sort_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sort_VV(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sort_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- SortIndex_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SortIndex_VV(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SortIndex_VV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SortIndex1_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SortIndex1_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SortIndex1_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SortIndex2_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SortIndex2_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SortIndex2_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SortIndex3_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SortIndex3_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SortIndex3_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SortIndex4_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SortIndex4_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SortIndex4_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Statistics_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Statistics_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Statistics_VV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Subtract_VV[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Subtract_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Subtract_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Swap_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Swap_VV(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Swap_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- Window_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Window_VV(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Window_VV(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- WriteXML_VV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteXML_VV(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteXML_VV(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- _Puts_WA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Puts_WA(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Puts_WA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- Create_WA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_WA(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_WA(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- CreateEx_WA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateEx_WA(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateEx_WA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- CreateSBF_WA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateSBF_WA(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateSBF_WA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- CreateSBFEx_WA[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateSBFEx_WA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateSBFEx_WA(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- Destroy_WA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_WA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_WA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- NewLine_WA[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NewLine_WA(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NewLine_WA(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);


#ifdef __cplusplus
   }
#endif
