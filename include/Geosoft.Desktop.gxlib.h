//*** extends 'gxlib_empty.h'

//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

#pragma once
/*

=====================================================================
Geosoft GX Wapper Function Headers
=====================================================================

*/

#include <windows.h>

#ifdef C_MICROSOFT

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

//*** endblock Header

//*** block WapperDeclare
//** NOTICE: Do not edit anything here, it is generated code

/*---------------- Create_ACQUIRE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_ACQUIRE(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_ACQUIRE(GX_VAR   GX_OBJECT_PTR);

/*---------------- DeleteEmptyChan_ACQUIRE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteEmptyChan_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteEmptyChan_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_ACQUIRE[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- iImportHole_ACQUIRE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iImportHole_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iImportHole_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- iImportPoint_ACQUIRE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iImportPoint_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iImportPoint_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- iSelectionTool_ACQUIRE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSelectionTool_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSelectionTool_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- iSelectionToolForceGridSelection_ACQUIRE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSelectionToolForceGridSelection_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_STR_PTR,
                                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSelectionToolForceGridSelection_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                                             GX_CONST GX_HANDLE_PTR,
                                             GX_CONST GX_STR_PTR,
                                             GX_CONST GX_LONG_PTR);

/*---------------- GetSelectionInfo_ACQUIRE[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSelectionInfo_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSelectionInfo_ACQUIRE(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_LONG_PTR,
                             GX_VAR   GX_LONG_PTR);

/*---------------- CreateDAT_ARCDB[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateDAT_ARCDB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateDAT_ARCDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- CreateDAT3D_ARCDB[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateDAT3D_ARCDB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateDAT3D_ARCDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- Current_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Current_ARCDB(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Current_ARCDB(GX_VAR   GX_OBJECT_PTR);

/*---------------- ExportToDB_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportToDB_ARCDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportToDB_ARCDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- FieldLST_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FieldLST_ARCDB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FieldLST_ARCDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- FromIUnknown_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
FromIUnknown_ARCDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_FromIUnknown_ARCDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- GetIPJ_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_ARCDB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_ARCDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iExistField_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iExistField_ARCDB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iExistField_ARCDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- iGetIUnknown_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetIUnknown_ARCDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetIUnknown_ARCDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- iImportChemDatabaseWizard_ARCDB[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iImportChemDatabaseWizard_ARCDB(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iImportChemDatabaseWizard_ARCDB(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_LONG_PTR);

/*---------------- SelTblExGUI_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
SelTblExGUI_ARCDB(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_SelTblExGUI_ARCDB(GX_VAR   GX_OBJECT_PTR,
                      GX_VAR   GX_LONG_PTR);

/*---------------- SelTblGUI_ARCDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
SelTblGUI_ARCDB(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_SelTblGUI_ARCDB(GX_VAR   GX_OBJECT_PTR);

/*---------------- CloseProject_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CloseProject_ARCDH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CloseProject_ARCDH(GX_VAR   GX_OBJECT_PTR);

/*---------------- SetProject_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetProject_ARCDH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetProject_ARCDH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- SetStringFileGDB_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetStringFileGDB_ARCDH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetStringFileGDB_ARCDH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- StopEditingStringFileGDB_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StopEditingStringFileGDB_ARCDH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StopEditingStringFileGDB_ARCDH(GX_VAR   GX_OBJECT_PTR);

/*---------------- iHasStringFileGDBEdits_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHasStringFileGDBEdits_ARCDH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHasStringFileGDBEdits_ARCDH(GX_VAR   GX_OBJECT_PTR);

/*---------------- iGeostringsExtensionAvailable_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGeostringsExtensionAvailable_ARCDH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGeostringsExtensionAvailable_ARCDH(GX_VAR   GX_OBJECT_PTR);

/*---------------- GetCurrentStringFileGDB_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetCurrentStringFileGDB_ARCDH(GX_VAR   GX_OBJECT_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetCurrentStringFileGDB_ARCDH(GX_VAR   GX_OBJECT_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR);

/*---------------- iIsValidFGDBFileName_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsValidFGDBFileName_ARCDH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsValidFGDBFileName_ARCDH(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- iIsValidFeatureClassName_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsValidFeatureClassName_ARCDH(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsValidFeatureClassName_ARCDH(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR);

/*---------------- sPromptForESRISymbol_ARCDH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
sPromptForESRISymbol_ARCDH(GX_VAR   GX_OBJECT_PTR,
                           HWND,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_sPromptForESRISymbol_ARCDH(GX_VAR   GX_OBJECT_PTR,
                               HWND,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR);

/*---------------- ChangeSize_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ChangeSize_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ChangeSize_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- DisplayIn3DView_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DisplayIn3DView_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DisplayIn3DView_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- ExportFeatureLayerByNameTo3DFile_ARCMAP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportFeatureLayerByNameTo3DFile_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportFeatureLayerByNameTo3DFile_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                            GX_CONST GX_STR_PTR,
                                            GX_CONST GX_STR_PTR,
                                            GX_CONST GX_STR_PTR,
                                            GX_CONST GX_STR_PTR);

/*---------------- ExportSelectedFeatureLayerTo3DFile_ARCMAP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportSelectedFeatureLayerTo3DFile_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportSelectedFeatureLayerTo3DFile_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                              GX_CONST GX_STR_PTR);

/*---------------- GetCurrentDocumentInfo_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetCurrentDocumentInfo_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetCurrentDocumentInfo_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR);

/*---------------- GetSelectedLayerInfo_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSelectedLayerInfo_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSelectedLayerInfo_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR);

/*---------------- iGetNumberOfSelectedLayers_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetNumberOfSelectedLayers_ARCMAP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetNumberOfSelectedLayers_ARCMAP(GX_VAR   GX_OBJECT_PTR);

/*---------------- iLoadMAP_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLoadMAP_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLoadMAP_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- iLoadMAPEx_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLoadMAPEx_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLoadMAPEx_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iLoadShape_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLoadShape_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLoadShape_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iLoadSPF_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLoadSPF_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLoadSPF_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- LoadLYR_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadLYR_ARCMAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadLYR_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- LoadMap_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadMap_ARCMAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadMap_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- LoadMapView_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadMapView_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadMapView_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- LoadRaster_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadRaster_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadRaster_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- LoadRasterEx_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadRasterEx_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadRasterEx_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- LoadShape_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadShape_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadShape_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- MapViewToShape_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MapViewToShape_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MapViewToShape_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- QuerySize_ARCMAP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QuerySize_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QuerySize_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- ShowLayerByNameIn3D_ARCMAP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ShowLayerByNameIn3D_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ShowLayerByNameIn3D_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- ShowSelectedLayersIn3D_ARCMAP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ShowSelectedLayersIn3D_ARCMAP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ShowSelectedLayersIn3D_ARCMAP(GX_VAR   GX_OBJECT_PTR);

/*---------------- GetIPJForPredefinedEsriGCS_ARCMAP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJForPredefinedEsriGCS_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJForPredefinedEsriGCS_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_LONG_PTR);

/*---------------- GetIPJForPredefinedEsriPCS_ARCMAP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJForPredefinedEsriPCS_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJForPredefinedEsriPCS_ARCMAP(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_LONG_PTR);

/*---------------- AddMessage_ARCPY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddMessage_ARCPY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddMessage_ARCPY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- AddWarning_ARCPY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddWarning_ARCPY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddWarning_ARCPY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- AddError_ARCPY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddError_ARCPY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddError_ARCPY(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- IGetBrowseLoc_ARCSYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetBrowseLoc_ARCSYS(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetBrowseLoc_ARCSYS(GX_VAR   GX_OBJECT_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- IGetCurrentDoc_ARCSYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetCurrentDoc_ARCSYS(GX_VAR   GX_OBJECT_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetCurrentDoc_ARCSYS(GX_VAR   GX_OBJECT_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- SetBrowseLoc_ARCSYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetBrowseLoc_ARCSYS(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetBrowseLoc_ARCSYS(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- _Clear_BIGRID[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Clear_BIGRID(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Clear_BIGRID(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Create_BIGRID[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_BIGRID(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_BIGRID(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_BIGRID[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_BIGRID(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_BIGRID(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iLoadParms_BIGRID[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLoadParms_BIGRID(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLoadParms_BIGRID(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- iLoadWarp_BIGRID[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLoadWarp_BIGRID(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLoadWarp_BIGRID(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- Run_BIGRID[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Run_BIGRID(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Run_BIGRID(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Run2_BIGRID[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Run2_BIGRID(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Run2_BIGRID(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SaveParms_BIGRID[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveParms_BIGRID(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveParms_BIGRID(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- BarPlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BarPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BarPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- CategorizeByValue_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CategorizeByValue_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CategorizeByValue_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- CategorizeByValueDetLimit_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CategorizeByValueDetLimit_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CategorizeByValueDetLimit_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_HANDLE_PTR);

/*---------------- ClipToDetectLimit_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipToDetectLimit_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipToDetectLimit_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- DrawCircleOffsetMarkers_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DrawCircleOffsetMarkers_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DrawCircleOffsetMarkers_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR);

/*---------------- DrawRectangleOffsetMarkers_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DrawRectangleOffsetMarkers_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DrawRectangleOffsetMarkers_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR,
                                       GX_CONST GX_DOUBLE_PTR);

/*---------------- DuplicateChem_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DuplicateChem_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DuplicateChem_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- DuplicateChemView_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DuplicateChemView_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DuplicateChemView_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetExpressionDataVV_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExpressionDataVV_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExpressionDataVV_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- GetLithogeochemData_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetLithogeochemData_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetLithogeochemData_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- GetTransform_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTransform_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTransform_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- iIsAcquireChan_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsAcquireChan_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsAcquireChan_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_LONG_PTR);

/*---------------- iIsElement_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsElement_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsElement_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- LaunchHistogram_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchHistogram_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchHistogram_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- LaunchProbability_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchProbability_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchProbability_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR);

/*---------------- LaunchScatter_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchScatter_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchScatter_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- LaunchTriplot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchTriplot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchTriplot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- MaskChanLST_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaskChanLST_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaskChanLST_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- OrderedChannelLST_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OrderedChannelLST_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OrderedChannelLST_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- PiePlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PiePlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PiePlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- PiePlot2_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PiePlot2_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PiePlot2_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- PlotStringClassifiedSymbolsLegendFromClassFile_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PlotStringClassifiedSymbolsLegendFromClassFile_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                                       GX_CONST GX_HANDLE_PTR,
                                                       GX_CONST GX_STR_PTR,
                                                       GX_CONST GX_DOUBLE_PTR,
                                                       GX_CONST GX_DOUBLE_PTR,
                                                       GX_CONST GX_DOUBLE_PTR,
                                                       GX_CONST GX_STR_PTR,
                                                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PlotStringClassifiedSymbolsLegendFromClassFile_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                                           GX_CONST GX_HANDLE_PTR,
                                                           GX_CONST GX_STR_PTR,
                                                           GX_CONST GX_DOUBLE_PTR,
                                                           GX_CONST GX_DOUBLE_PTR,
                                                           GX_CONST GX_DOUBLE_PTR,
                                                           GX_CONST GX_STR_PTR,
                                                           GX_CONST GX_HANDLE_PTR);

/*---------------- rAtomicWeight_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rAtomicWeight_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rAtomicWeight_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- RosePlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RosePlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RosePlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- RosePlot2_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RosePlot2_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RosePlot2_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- Scatter2_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Scatter2_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
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
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Scatter2_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
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
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- FixedSymbolScatterPlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FixedSymbolScatterPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FixedSymbolScatterPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_DOUBLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_STR_PTR);

/*---------------- ZoneColouredScatterPlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ZoneColouredScatterPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ZoneColouredScatterPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_STR_PTR);

/*---------------- StringClassifiedScatterPlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StringClassifiedScatterPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StringClassifiedScatterPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_STR_PTR);

/*---------------- SetLithogeochemData_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLithogeochemData_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
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
Std_SetLithogeochemData_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- StackedBarPlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StackedBarPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StackedBarPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);

/*---------------- Standard_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Standard_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Standard_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- StandardView_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StandardView_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StandardView_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- TriPlot2_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TriPlot2_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
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
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TriPlot2_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
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
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- FixedSymbolTriPlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FixedSymbolTriPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FixedSymbolTriPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- ZoneColouredTriPlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ZoneColouredTriPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ZoneColouredTriPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_STR_PTR);

/*---------------- StringClassifiedTriPlot_CHIMERA[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StringClassifiedTriPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StringClassifiedTriPlot_CHIMERA(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_STR_PTR);

/*---------------- Create_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_COM(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_COM(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- CreateNoTerminate_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateNoTerminate_COM(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateNoTerminate_COM(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- Destroy_COM[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_COM(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_COM(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- IiReadLineNoTerminate_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiReadLineNoTerminate_COM(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiReadLineNoTerminate_COM(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- iReadCharsNoTerminate_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iReadCharsNoTerminate_COM(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iReadCharsNoTerminate_COM(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- IReadLine_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IReadLine_COM(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IReadLine_COM(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iWriteCharsNoTerminate_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iWriteCharsNoTerminate_COM(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iWriteCharsNoTerminate_COM(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- PurgeComm_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PurgeComm_COM(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PurgeComm_COM(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ReadChars_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadChars_COM(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadChars_COM(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ReadEM61LinesWA_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadEM61LinesWA_COM(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadEM61LinesWA_COM(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- ReadFile2WA_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadFile2WA_COM(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadFile2WA_COM(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ReadLinesWA_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadLinesWA_COM(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadLinesWA_COM(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SetTimeOut_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetTimeOut_COM(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetTimeOut_COM(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- WriteChars_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteChars_COM(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteChars_COM(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- WriteLine_COM[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteLine_COM(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteLine_COM(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- _SetAngle_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetAngle_CSYMB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetAngle_CSYMB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- _SetBase_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetBase_CSYMB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetBase_CSYMB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- _SetDynamicCol_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetDynamicCol_CSYMB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetDynamicCol_CSYMB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- _SetFixed_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetFixed_CSYMB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetFixed_CSYMB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- _SetNumber_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetNumber_CSYMB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetNumber_CSYMB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- _SetScale_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_SetScale_CSYMB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__SetScale_CSYMB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- AddData_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddData_CSYMB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddData_CSYMB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Create_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_CSYMB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_CSYMB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- Destroy_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_CSYMB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_CSYMB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetITR_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetITR_CSYMB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetITR_CSYMB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SetFont_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFont_CSYMB(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFont_CSYMB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SetStaticCol_CSYMB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetStaticCol_CSYMB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetStaticCol_CSYMB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- Create_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Create_DGW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Create_DGW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- Destroy_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Destroy_DGW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Destroy_DGW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GetInfoMETA_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetInfoMETA_DGW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetInfoMETA_DGW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- GetInfoSYS_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetInfoSYS_DGW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetInfoSYS_DGW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- GetList_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_GetList_DGW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_GetList_DGW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- GtInfo_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GtInfo_DGW(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GtInfo_DGW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- iRunDialogue_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iRunDialogue_DGW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iRunDialogue_DGW(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- SetInfo_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetInfo_DGW(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetInfo_DGW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- SetInfoMETA_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetInfoMETA_DGW(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetInfoMETA_DGW(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- SetInfoSYS_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetInfoSYS_DGW(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetInfoSYS_DGW(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- SetTitle_DGW[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetTitle_DGW(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetTitle_DGW(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- iIsESRI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsESRI_DH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsESRI_DH(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreatChanLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreatChanLST_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreatChanLST_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- DepthDataLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DepthDataLST_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DepthDataLST_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- FromToDataLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FromToDataLST_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FromToDataLST_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetGeologyContacts_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGeologyContacts_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGeologyContacts_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetOrientedCoreDipDir_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetOrientedCoreDipDir_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetOrientedCoreDipDir_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- GetUniqueChannelItems_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetUniqueChannelItems_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetUniqueChannelItems_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- GetUniqueChannelItemsFromCollar_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetUniqueChannelItemsFromCollar_DH(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetUniqueChannelItemsFromCollar_DH(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_HANDLE_PTR);

/*---------------- iChanType_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iChanType_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iChanType_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- iFindHoleIntersection_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindHoleIntersection_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindHoleIntersection_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);

/*---------------- IGetChanCodeInfo_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetChanCodeInfo_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetChanCodeInfo_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- iGridIntersection_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGridIntersection_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGridIntersection_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- LithoGrid3D_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LithoGrid3D_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LithoGrid3D_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- NumericChanLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NumericChanLST_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NumericChanLST_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- NumericFromToDataLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NumericFromToDataLST_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NumericFromToDataLST_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- PunchGridHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PunchGridHoles_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PunchGridHoles_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- StringChanLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StringChanLST_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StringChanLST_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- StringFromToDataLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
StringFromToDataLST_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_StringFromToDataLST_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- _hAssayDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
_hAssayDB_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std__hAssayDB_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- _hAssaySymb_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_hAssaySymb_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__hAssaySymb_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- _hCollarDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
_hCollarDB_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std__hCollarDB_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- _hCollarSymb_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_hCollarSymb_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__hCollarSymb_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- _hDipAzSurveyDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
_hDipAzSurveyDB_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std__hDipAzSurveyDB_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- _hDipAzSurveySymb_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_hDipAzSurveySymb_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__hDipAzSurveySymb_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- _hENSurveyDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
_hENSurveyDB_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std__hENSurveyDB_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- _hENSurveySymb_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_hENSurveySymb_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__hENSurveySymb_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- AddSurveyTable_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddSurveyTable_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddSurveyTable_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- AssayHoleLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AssayHoleLST_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AssayHoleLST_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- AssayLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AssayLST_DH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AssayLST_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- AutoSelectHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AutoSelectHoles_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AutoSelectHoles_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- Clean_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Clean_DH(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Clean_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- CompositeDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CompositeDB_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CompositeDB_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- ComputeHoleXYZ_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ComputeHoleXYZ_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ComputeHoleXYZ_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- ComputeSelExtent_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ComputeSelExtent_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ComputeSelExtent_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- ComputeXYZ_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ComputeXYZ_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ComputeXYZ_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ConvertOldLineNames_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertOldLineNames_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertOldLineNames_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- Create_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_DH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- CreateDefaultJob_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateDefaultJob_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateDefaultJob_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- CreateExternal_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateExternal_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateExternal_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- Current_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Current_DH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Current_DH(GX_VAR   GX_OBJECT_PTR);

/*---------------- DatamineToCSV_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DatamineToCSV_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DatamineToCSV_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- DeleteHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DeleteHoles_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DeleteHoles_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_DH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Export_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Export_DH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Export_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- ExportGeodatabaseLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportGeodatabaseLST_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportGeodatabaseLST_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- ExportLAS_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportLAS_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportLAS_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ExportLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportLST_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportLST_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- FlushSelect_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FlushSelect_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FlushSelect_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GetDatabasesVV_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDatabasesVV_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDatabasesVV_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GetDatabasesSortedVV_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDatabasesSortedVV_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDatabasesSortedVV_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- GetDataType_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDataType_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDataType_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_LONG_PTR);

/*---------------- GetDefaultSection_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetDefaultSection_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetDefaultSection_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetHoleGroup_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetHoleGroup_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetHoleGroup_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- GetHoleSurvey_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetHoleSurvey_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetHoleSurvey_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetHoleSurveyEx_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetHoleSurveyEx_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetHoleSurveyEx_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- GetHoleSurveyFromTo_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetHoleSurveyFromTo_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetHoleSurveyFromTo_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- GetIPJ_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_DH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- GetMapNamesVV_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMapNamesVV_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMapNamesVV_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetMap_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetMap_DH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetMap_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- GetNumMaps_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetNumMaps_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetNumMaps_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetREG_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetREG_DH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetREG_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- GetSelectedHolesVV_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSelectedHolesVV_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSelectedHolesVV_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetTableDefaultChanLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTableDefaultChanLST_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTableDefaultChanLST_DH(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- HoleLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
HoleLST_DH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_HoleLST_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- HoleLST2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
HoleLST2_DH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_HoleLST2_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- iAddHole_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddHole_DH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddHole_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- iCleanWillDeleteDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCleanWillDeleteDB_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCleanWillDeleteDB_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- iCompositingToolGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCompositingToolGUI_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCompositingToolGUI_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR);

/*---------------- ICreateCollarTable_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ICreateCollarTable_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ICreateCollarTable_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- ICreateCollarTableDir_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ICreateCollarTableDir_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ICreateCollarTableDir_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- iDeleteWillDeleteDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDeleteWillDeleteDB_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDeleteWillDeleteDB_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- iFindHole_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindHole_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindHole_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- IGetCollarTableDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetCollarTableDB_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetCollarTableDB_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- IGetInfo_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetInfo_DH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR,
            GX_VAR   GX_STR_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetInfo_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IGetProjectName_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetProjectName_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetProjectName_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- IGetSectionID_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetSectionID_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetSectionID_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iGetTemplateBlob_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetTemplateBlob_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetTemplateBlob_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_LONG_PTR);

/*---------------- IGetTemplateInfo_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetTemplateInfo_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetTemplateInfo_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- IGetTemplateInfoEx_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetTemplateInfoEx_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetTemplateInfoEx_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- IGetUnits_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetUnits_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_VAR   GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetUnits_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- iHaveCurrent_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHaveCurrent_DH(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHaveCurrent_DH(GX_VAR   GX_OBJECT_PTR);

/*---------------- IiHaveCurrent2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiHaveCurrent2_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiHaveCurrent2_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHoles_DH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHoles_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- iHoleSelectFromListGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHoleSelectFromListGUI_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHoleSelectFromListGUI_DH(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- iHoleSelectionToolGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHoleSelectionToolGUI_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHoleSelectionToolGUI_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- iModify3dGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModify3dGUI_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModify3dGUI_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_LONG_PTR);

/*---------------- iEditClassificationTableFileGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEditClassificationTableFileGUI_DH(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEditClassificationTableFileGUI_DH(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_VAR   GX_STR_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR);

/*---------------- iModifyCrookedSectionHolesGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyCrookedSectionHolesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyCrookedSectionHolesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_VAR   GX_LONG_PTR);

/*---------------- iModifyFenceGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyFenceGUI_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyFenceGUI_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_LONG_PTR);

/*---------------- iModifyHoleTraces3DGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyHoleTraces3DGUI_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyHoleTraces3DGUI_DH(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_VAR   GX_LONG_PTR);

/*---------------- iModifyHoleTracesGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyHoleTracesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyHoleTracesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_LONG_PTR);

/*---------------- iModifyHoleTracesGUI2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyHoleTracesGUI2_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyHoleTracesGUI2_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_LONG_PTR);

/*---------------- iModifyPlanGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyPlanGUI_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyPlanGUI_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_LONG_PTR);

/*---------------- iModifyPlanHolesGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyPlanHolesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyPlanHolesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_LONG_PTR);

/*---------------- iModifyRockCodesGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyRockCodesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyRockCodesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- iModifyRockCodesGUI2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyRockCodesGUI2_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyRockCodesGUI2_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- iModifySectionGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifySectionGUI_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifySectionGUI_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_LONG_PTR);

/*---------------- iModifySectionHolesGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifySectionHolesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifySectionHolesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_VAR   GX_LONG_PTR);

/*---------------- iModifyStackedSectionGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyStackedSectionGUI_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyStackedSectionGUI_DH(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_VAR   GX_LONG_PTR);

/*---------------- iModifyStripLogGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyStripLogGUI_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyStripLogGUI_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_LONG_PTR);

/*---------------- iModifyStructureCodesGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyStructureCodesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyStructureCodesGUI_DH(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR);

/*---------------- iModifyStructureCodesGUI2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyStructureCodesGUI2_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyStructureCodesGUI2_DH(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- Import2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Import2_DH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Import2_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ImportLAS_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportLAS_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportLAS_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iNumAssays_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumAssays_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumAssays_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iNumSelectedHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumSelectedHoles_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumSelectedHoles_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- iQADipAzCurvatureLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iQADipAzCurvatureLST_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iQADipAzCurvatureLST_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- iQADipAzSurveyLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iQADipAzSurveyLST_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iQADipAzSurveyLST_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- iQAEastNorthCurvatureLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iQAEastNorthCurvatureLST_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iQAEastNorthCurvatureLST_DH(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- iQAEastNorthSurveyLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iQAEastNorthSurveyLST_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iQAEastNorthSurveyLST_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- iSliceSelectionToolGUI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSliceSelectionToolGUI_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSliceSelectionToolGUI_DH(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR);

/*---------------- iUpdateSurveyFromCollar_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iUpdateSurveyFromCollar_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iUpdateSurveyFromCollar_DH(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- LoadDataParametersINI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadDataParametersINI_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadDataParametersINI_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- LoadPlotParameters_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadPlotParameters_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadPlotParameters_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- LoadSelect_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadSelect_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadSelect_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- MaskPLY_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaskPLY_DH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaskPLY_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Open_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Open_DH(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Open_DH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR);

/*---------------- OpenJob_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OpenJob_DH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OpenJob_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- PlotHoleTraces_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PlotHoleTraces_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PlotHoleTraces_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- PlotHoleTraces3D_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PlotHoleTraces3D_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PlotHoleTraces3D_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- PlotSymbols3D_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PlotSymbols3D_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PlotSymbols3D_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- QACollar_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QACollar_DH(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QACollar_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- QACollarLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QACollarLST_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QACollarLST_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- QADipAzCurvature_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QADipAzCurvature_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QADipAzCurvature_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- QADipAzCurvature2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QADipAzCurvature2_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QADipAzCurvature2_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- QADipAzSurvey_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QADipAzSurvey_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QADipAzSurvey_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- QAEastNorthCurvature_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QAEastNorthCurvature_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QAEastNorthCurvature_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR);

/*---------------- QAEastNorthCurvature2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QAEastNorthCurvature2_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QAEastNorthCurvature2_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- QAEastNorthSurvey_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QAEastNorthSurvey_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QAEastNorthSurvey_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- QAFromToData_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QAFromToData_DH(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QAFromToData_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- QAPointData_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QAPointData_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QAPointData_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- QAWriteUnregisteredHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QAWriteUnregisteredHoles_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QAWriteUnregisteredHoles_DH(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- ReplotHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReplotHoles_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReplotHoles_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- PlotHolesOnSection_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PlotHolesOnSection_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PlotHolesOnSection_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- ReSurveyEastNorth_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReSurveyEastNorth_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReSurveyEastNorth_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- ReSurveyPolFit_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReSurveyPolFit_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
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
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReSurveyPolFit_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
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
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- ReSurveyRadCurve_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReSurveyRadCurve_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReSurveyRadCurve_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- ReSurveyStraight_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReSurveyStraight_DH(GX_VAR   GX_OBJECT_PTR,
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
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReSurveyStraight_DH(GX_VAR   GX_OBJECT_PTR,
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
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- ReSurveyStraightSeg_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReSurveyStraightSeg_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReSurveyStraightSeg_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- SaveDataParametersINI_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveDataParametersINI_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveDataParametersINI_DH(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- SaveJob_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveJob_DH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveJob_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SaveSelect_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveSelect_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveSelect_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- SectionWindowSizeMM_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SectionWindowSizeMM_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SectionWindowSizeMM_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);

/*---------------- SelectAllHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectAllHoles_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectAllHoles_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- SelectHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectHoles_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectHoles_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- SelectName_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectName_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectName_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SelectPLY_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectPLY_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectPLY_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SelectPLY2_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectPLY2_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectPLY2_DH(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SetCrookedSectionIPJ_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetCrookedSectionIPJ_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetCrookedSectionIPJ_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- SetCurrentViewName_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetCurrentViewName_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetCurrentViewName_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- SetInfo_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInfo_DH(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInfo_DH(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- SetIPJ_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_DH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- SetMAP_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMAP_DH(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMAP_DH(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- SetNewIPJ_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetNewIPJ_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetNewIPJ_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- SetSelectedHolesVV_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetSelectedHolesVV_DH(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetSelectedHolesVV_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- SetTemplateBlob_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetTemplateBlob_DH(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetTemplateBlob_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- SignificantIntersectionsDB_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SignificantIntersectionsDB_DH(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SignificantIntersectionsDB_DH(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR);

/*---------------- TestImportLAS_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TestImportLAS_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TestImportLAS_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_LONG_PTR);

/*---------------- UnSelectAllHoles_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UnSelectAllHoles_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UnSelectAllHoles_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- UnSelectedHoleLST_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UnSelectedHoleLST_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UnSelectedHoleLST_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- UpdateCollarTable_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UpdateCollarTable_DH(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UpdateCollarTable_DH(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- UpdateHoleExtent_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UpdateHoleExtent_DH(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UpdateHoleExtent_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- Wholeplot_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Wholeplot_DH(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Wholeplot_DH(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- SurfaceIntersections_DH[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SurfaceIntersections_DH(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SurfaceIntersections_DH(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- GetMXDepositRightsInfo_DH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMXDepositRightsInfo_DH(GX_VAR   GX_OBJECT_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMXDepositRightsInfo_DH(GX_VAR   GX_OBJECT_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- NavigateToMXDeposit_DH[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NavigateToMXDeposit_DH(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NavigateToMXDeposit_DH(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- _Clear_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Clear_DMPPLY(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Clear_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- Copy_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_DMPPLY(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Create_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_DMPPLY(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_DMPPLY(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_DMPPLY[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DMPPLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GetAzimuth_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAzimuth_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAzimuth_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetExtents_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExtents_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExtents_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetJoins_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetJoins_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetJoins_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GetNormalVectors_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetNormalVectors_DMPPLY(GX_VAR   GX_OBJECT_PTR,
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
Std_GetNormalVectors_DMPPLY(GX_VAR   GX_OBJECT_PTR,
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

/*---------------- GetPoly_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetPoly_DMPPLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetPoly_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- GetSwing_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetSwing_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetSwing_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetVertex_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVertex_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVertex_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- iNumJoins_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumJoins_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumJoins_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- iNumPolys_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumPolys_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumPolys_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- iNumVertices_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumVertices_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumVertices_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- Load_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Load_DMPPLY(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Load_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- MoveVertex_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MoveVertex_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MoveVertex_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- ProjectPoly_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjectPoly_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProjectPoly_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- ReProjectPoly_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReProjectPoly_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReProjectPoly_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- Save_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Save_DMPPLY(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Save_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- SetPoly_DMPPLY[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPoly_DMPPLY(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPoly_DMPPLY(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Copy_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_DOCU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_DOCU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Create_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_DOCU(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_DOCU(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateS_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_DOCU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_DOCU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DOCU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DOCU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetFile_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetFile_DOCU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetFile_DOCU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- GetFileMeta_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetFileMeta_DOCU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetFileMeta_DOCU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- GetMETA_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMETA_DOCU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMETA_DOCU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- IDocName_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDocName_DOCU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDocName_DOCU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- IFileName_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFileName_DOCU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFileName_DOCU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- iHaveMETA_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iHaveMETA_DOCU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iHaveMETA_DOCU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iIsReference_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsReference_DOCU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsReference_DOCU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- Open_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Open_DOCU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Open_DOCU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- Serial_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_DOCU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_DOCU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SetFile_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFile_DOCU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFile_DOCU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- SetFileMeta_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFileMeta_DOCU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFileMeta_DOCU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- SetMETA_DOCU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMETA_DOCU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMETA_DOCU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- _TableLook1_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_TableLook1_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__TableLook1_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- _TableLook2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_TableLook2_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__TableLook2_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- _TableLookI2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_TableLookI2_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__TableLookI2_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- _TableLookR2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_TableLookR2_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__TableLookR2_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ADOTableNames_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ADOTableNames_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ADOTableNames_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- AnSig_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AnSig_DU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AnSig_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- Append_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Append_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Append_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- AvgAzimuth_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AvgAzimuth_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AvgAzimuth_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);

/*---------------- BaseData_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BaseData_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BaseData_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- BaseDataEx_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BaseDataEx_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BaseDataEx_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- BoundLine_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BoundLine_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BoundLine_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- BPFilt_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BPFilt_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BPFilt_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- BreakLine_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BreakLine_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BreakLine_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- BreakLine2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BreakLine2_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BreakLine2_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- BreakLineToGroups_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BreakLineToGroups_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BreakLineToGroups_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- BreakLineToGroups2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BreakLineToGroups2_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BreakLineToGroups2_DU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- BSpline_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BSpline_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BSpline_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- ClosestPoint_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClosestPoint_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClosestPoint_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR);

/*---------------- CopyLine_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyLine_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyLine_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- CopyLineAcross_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyLineAcross_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyLineAcross_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- CopyLineChanAcross_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyLineChanAcross_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyLineChanAcross_DU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- CopyLineMasked_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CopyLineMasked_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CopyLineMasked_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- DAOTableNames_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DAOTableNames_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DAOTableNames_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Decimate_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Decimate_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Decimate_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Diff_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Diff_DU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Diff_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- Distance_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Distance_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Distance_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Distance3D_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Distance3D_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Distance3D_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Distline_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Distline_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Distline_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- DupChanLocks_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DupChanLocks_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DupChanLocks_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- DupChans_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DupChans_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DupChans_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- EditDuplicates_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EditDuplicates_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EditDuplicates_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- Export_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Export_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Export_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- Export2_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Export2_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Export2_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- ExportAMIRA_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportAMIRA_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportAMIRA_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- ExportAseg_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportAseg_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportAseg_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- ExportAsegProj_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportAsegProj_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportAsegProj_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- ExportChanCRC_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportChanCRC_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportChanCRC_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- ExportCSV_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportCSV_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportCSV_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- ExportDatabaseCRC_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportDatabaseCRC_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportDatabaseCRC_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- ExportGBN_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportGBN_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportGBN_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ExportMDB_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportMDB_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportMDB_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ExportGeodatabase_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportGeodatabase_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportGeodatabase_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- GetExistingFeatureClassesInGeodatabase_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetExistingFeatureClassesInGeodatabase_DU(GX_VAR   GX_OBJECT_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_STR_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetExistingFeatureClassesInGeodatabase_DU(GX_VAR   GX_OBJECT_PTR,
                                              GX_CONST GX_HANDLE_PTR,
                                              GX_CONST GX_STR_PTR,
                                              GX_CONST GX_HANDLE_PTR,
                                              GX_CONST GX_HANDLE_PTR);

/*---------------- ExportSHP_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportSHP_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportSHP_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- ExportXYZ_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportXYZ_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportXYZ_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ExportXYZ2_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportXYZ2_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportXYZ2_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- FFT_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FFT_DU(GX_VAR   GX_OBJECT_PTR,
       GX_CONST GX_HANDLE_PTR,
       GX_CONST GX_LONG_PTR,
       GX_CONST GX_LONG_PTR,
       GX_CONST GX_LONG_PTR,
       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FFT_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);

/*---------------- Filter_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Filter_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Filter_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- GenLev_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenLev_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenLev_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- GenLevDB_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenLevDB_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenLevDB_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- GenXYZTemp_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GenXYZTemp_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GenXYZTemp_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- GetXYZNumFields_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetXYZNumFields_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetXYZNumFields_DU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_LONG_PTR);

/*---------------- GetChanDataLST_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetChanDataLST_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetChanDataLST_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GetChanDataVV_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetChanDataVV_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetChanDataVV_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Gradient_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Gradient_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Gradient_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- GravDrift_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GravDrift_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GravDrift_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- GravTide_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GravTide_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GravTide_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- GridLoad_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridLoad_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridLoad_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- GridLoadXYZ_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridLoadXYZ_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridLoadXYZ_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- Head_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Head_DU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Head_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR);

/*---------------- IImportBIN3_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IImportBIN3_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_VAR   GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IImportBIN3_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- ImpCBPly_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImpCBPly_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImpCBPly_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- ImportADO_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportADO_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportADO_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ImportAllADO_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportAllADO_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportAllADO_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- ImportAllDAO_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportAllDAO_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportAllDAO_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- ImportAMIRA_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportAMIRA_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportAMIRA_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- ImportAseg_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportAseg_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportAseg_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ImportAsegProj_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportAsegProj_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportAsegProj_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- ImportBIN_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportBIN_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportBIN_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- ImportBIN2_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportBIN2_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportBIN2_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ImportBIN4_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportBIN4_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportBIN4_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ImportDAARC500Serial_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportDAARC500Serial_DU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportDAARC500Serial_DU(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- ImportDAARC500SerialGPS_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportDAARC500SerialGPS_DU(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportDAARC500SerialGPS_DU(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- ImportDAO_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportDAO_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportDAO_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ImportESRI_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportESRI_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportESRI_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- ImportGBN_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportGBN_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportGBN_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ImportODDF_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportODDF_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportODDF_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- ImportPico_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportPico_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportPico_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ImportUBCModMsh_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportUBCModMsh_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportUBCModMsh_DU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- ImportUSGSPost_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportUSGSPost_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportUSGSPost_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- ImportXYZ_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportXYZ_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportXYZ_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ImportXYZ2_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportXYZ2_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportXYZ2_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ImportIoGAS_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportIoGAS_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportIoGAS_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- IndexOrder_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IndexOrder_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IndexOrder_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Interp_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Interp_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Interp_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- InterpGap_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InterpGap_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InterpGap_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Intersect_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Intersect_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Intersect_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- IntersectAll_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IntersectAll_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IntersectAll_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- IntersectGDBtoTBL_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IntersectGDBtoTBL_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IntersectGDBtoTBL_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- IntersectOld_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IntersectOld_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IntersectOld_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- IntersectTBLtoGDB_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IntersectTBLtoGDB_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IntersectTBLtoGDB_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- LabTemplate_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LabTemplate_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LabTemplate_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- LoadGravity_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadGravity_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadGravity_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- LoadGravityCG6_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadGravityCG6_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadGravityCG6_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- LoadLTB_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LoadLTB_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LoadLTB_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- MakeFid_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MakeFid_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MakeFid_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Mask_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Mask_DU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Mask_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- Math_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Math_DU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Math_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- MergeLine_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MergeLine_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MergeLine_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- ModFidRange_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ModFidRange_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ModFidRange_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- Move_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Move_DU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Move_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- NLFilt_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NLFilt_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NLFilt_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- Normal_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Normal_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Normal_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- PolyFill_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyFill_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyFill_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- PolyMask_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyMask_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyMask_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- ProjectData_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjectData_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProjectData_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- ProjectXYZ_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjectXYZ_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ProjectXYZ_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ProjPoints_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ProjPoints_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
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
Std_ProjPoints_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- QCInitSeparation_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QCInitSeparation_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QCInitSeparation_DU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- QCSurveyPlan_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QCSurveyPlan_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
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
Std_QCSurveyPlan_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
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

/*---------------- rDirection_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rDirection_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rDirection_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ReFid_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReFid_DU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReFid_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);

/*---------------- ReFidAllCh_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReFidAllCh_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReFidAllCh_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- ReFidCh_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReFidCh_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReFidCh_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Rotate_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Rotate_DU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Rotate_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- SampleGD_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SampleGD_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SampleGD_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SampleIMG_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SampleIMG_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SampleIMG_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SampleIMGLineLST_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SampleIMGLineLST_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SampleIMGLineLST_DU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- ScanADO_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ScanADO_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ScanADO_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ScanAseg_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ScanAseg_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ScanAseg_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- ScanDAO_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ScanDAO_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ScanDAO_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ScanPico_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ScanPico_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ScanPico_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Sort_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Sort_DU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Sort_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);

/*---------------- SortIndex_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SortIndex_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SortIndex_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- SortIndex2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SortIndex2_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SortIndex2_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SplitLine_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SplitLine_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SplitLine_DU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- SplitLine2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SplitLine2_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SplitLine2_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SplitLineXY_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SplitLineXY_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_VAR   GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SplitLineXY_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- SplitLineXY2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SplitLineXY2_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SplitLineXY2_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SplitLineXY3_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SplitLineXY3_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SplitLineXY3_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SplitLineByDirection_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SplitLineByDirection_DU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SplitLineByDirection_DU(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- SplitLineByDirection2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SplitLineByDirection2_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SplitLineByDirection2_DU(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- Stat_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Stat_DU(GX_VAR   GX_OBJECT_PTR,
        GX_CONST GX_HANDLE_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_LONG_PTR,
        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Stat_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR);

/*---------------- TableLineFid_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TableLineFid_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TableLineFid_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- TableSelectedLinesFid_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TableSelectedLinesFid_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TableSelectedLinesFid_DU(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- TimeConstant_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TimeConstant_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TimeConstant_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Trend_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Trend_DU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Trend_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- UpdateIntersectDB_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UpdateIntersectDB_DU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UpdateIntersectDB_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- VoxelSection_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
VoxelSection_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_VoxelSection_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- WriteWA_DU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteWA_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteWA_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- XyzLine_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
XyzLine_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_XyzLine_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- XyzLine2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
XyzLine2_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_XyzLine2_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- XyzLine3_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
XyzLine3_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_XyzLine3_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- ZMask_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ZMask_DU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ZMask_DU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);

/*---------------- RangeXY_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeXY_DU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_VAR   GX_DOUBLE_PTR,
           GX_VAR   GX_DOUBLE_PTR,
           GX_VAR   GX_DOUBLE_PTR,
           GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeXY_DU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR,
               GX_VAR   GX_DOUBLE_PTR);

/*---------------- RangeXYZ_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeXYZ_DU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeXYZ_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_LONG_PTR);

/*---------------- RangeXYZData_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeXYZData_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeXYZData_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_LONG_PTR);

/*---------------- CreateDrillholeParameterWeightConstraintDatabase_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateDrillholeParameterWeightConstraintDatabase_DU(GX_VAR   GX_OBJECT_PTR,
                                                    GX_CONST GX_HANDLE_PTR,
                                                    GX_CONST GX_LONG_PTR,
                                                    GX_CONST GX_HANDLE_PTR,
                                                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateDrillholeParameterWeightConstraintDatabase_DU(GX_VAR   GX_OBJECT_PTR,
                                                        GX_CONST GX_HANDLE_PTR,
                                                        GX_CONST GX_LONG_PTR,
                                                        GX_CONST GX_HANDLE_PTR,
                                                        GX_CONST GX_STR_PTR);

/*---------------- CalculateDrapedSurveyAltitude_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CalculateDrapedSurveyAltitude_DU(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_DOUBLE_PTR,
                                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CalculateDrapedSurveyAltitude_DU(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_DOUBLE_PTR,
                                     GX_CONST GX_DOUBLE_PTR);

/*---------------- CalculateDrapedSurveyAltitude2_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CalculateDrapedSurveyAltitude2_DU(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_DOUBLE_PTR,
                                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CalculateDrapedSurveyAltitude2_DU(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_DOUBLE_PTR,
                                      GX_CONST GX_DOUBLE_PTR);

/*---------------- DirectGridDataToVoxel_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DirectGridDataToVoxel_DU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
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
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DirectGridDataToVoxel_DU(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
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
                             GX_CONST GX_LONG_PTR);

/*---------------- DirectGridItemCountsToVoxel_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DirectGridItemCountsToVoxel_DU(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
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
                               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DirectGridItemCountsToVoxel_DU(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
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
                                   GX_CONST GX_LONG_PTR);

/*---------------- iEMTauAutomatic_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEMTauAutomatic_DU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEMTauAutomatic_DU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- iEMTauCalc_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEMTauCalc_DU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEMTauCalc_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iEMTauLateTime_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEMTauLateTime_DU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEMTauLateTime_DU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iEMTauManual_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEMTauManual_DU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEMTauManual_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- EMTauTrendWindow_DU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EMTauTrendWindow_DU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EMTauTrendWindow_DU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- FootprintCoverageStatic_DU[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FootprintCoverageStatic_DU(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FootprintCoverageStatic_DU(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- FootprintCoverageDynamic_DU[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FootprintCoverageDynamic_DU(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FootprintCoverageDynamic_DU(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- Create_DXFI[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_DXFI(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_DXFI(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Destroy_DXFI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_DXFI(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_DXFI(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- DXF2PLY_DXFI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DXF2PLY_DXFI(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DXF2PLY_DXFI(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- DXF2ViewEx_DXFI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DXF2ViewEx_DXFI(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DXF2ViewEx_DXFI(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- GetRange_DXFI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetRange_DXFI(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetRange_DXFI(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);

/*---------------- ApplyFormulaInternal_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ApplyFormulaInternal_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ApplyFormulaInternal_EDB(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- Current_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Current_EDB(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Current_EDB(GX_VAR   GX_OBJECT_PTR);

/*---------------- CurrentNoActivate_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CurrentNoActivate_EDB(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CurrentNoActivate_EDB(GX_VAR   GX_OBJECT_PTR);

/*---------------- CurrentIfExists_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CurrentIfExists_EDB(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CurrentIfExists_EDB(GX_VAR   GX_OBJECT_PTR);

/*---------------- DelLine0_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DelLine0_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DelLine0_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Destroy_EDB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Destroy_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- DestroyView_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DestroyView_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DestroyView_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- GetCurChanSymb_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetCurChanSymb_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetCurChanSymb_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- GetCurLineSymb_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetCurLineSymb_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetCurLineSymb_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- GetDisplFidRange_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetDisplFidRange_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetDisplFidRange_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_LONG_PTR,
                             GX_VAR   GX_LONG_PTR);

/*---------------- GetCurPoint_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetCurPoint_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetCurPoint_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetFidRange_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetFidRange_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetFidRange_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_LONG_PTR);

/*---------------- GetNextLineSymb_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetNextLineSymb_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetNextLineSymb_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- GetPrevLineSymb_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetPrevLineSymb_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetPrevLineSymb_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- GetProfileXAxisOptions_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetProfileXAxisOptions_EDB(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetProfileXAxisOptions_EDB(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_DOUBLE_PTR);

/*---------------- SetProfileXAxisOptions_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProfileXAxisOptions_EDB(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProfileXAxisOptions_EDB(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_DOUBLE_PTR);

/*---------------- GetProfileRangeX_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetProfileRangeX_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetProfileRangeX_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_LONG_PTR);

/*---------------- GetProfileRangeY_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetProfileRangeY_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetProfileRangeY_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_LONG_PTR);

/*---------------- GetProfileSplit_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetProfileSplit_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetProfileSplit_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetProfileSplit5_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetProfileSplit5_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetProfileSplit5_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetProfileSplitVV_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetProfileSplitVV_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetProfileSplitVV_EDB(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- GetProfileVerticalGridLines_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetProfileVerticalGridLines_EDB(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetProfileVerticalGridLines_EDB(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_VAR   GX_LONG_PTR,
                                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetProfileWindow_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetProfileWindow_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetProfileWindow_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_LONG_PTR,
                             GX_VAR   GX_LONG_PTR);

/*---------------- GotoColumn_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GotoColumn_EDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GotoColumn_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- GotoElem_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GotoElem_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GotoElem_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- GotoLine_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GotoLine_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GotoLine_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- Histogram_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Histogram_EDB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Histogram_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iAllChanList_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iAllChanList_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iAllChanList_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- iChannels_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iChannels_EDB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iChannels_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iDispChanList_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDispChanList_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDispChanList_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- iDispChanLST_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDispChanLST_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDispChanLST_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- iDispClassChanLST_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDispClassChanLST_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDispClassChanLST_EDB(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR);

/*---------------- iFindChannelColumn_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iFindChannelColumn_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iFindChannelColumn_EDB(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- iFindNearest_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iFindNearest_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iFindNearest_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- IGetCurChan_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetCurChan_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetCurChan_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- IGetCurFidString_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetCurFidString_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetCurFidString_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- IGetCurLine_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetCurLine_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetCurLine_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- iGetCurMark_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetCurMark_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetCurMark_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- IGetCurrentSelection_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetCurrentSelection_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetCurrentSelection_EDB(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_VAR   GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_VAR   GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_VAR   GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_VAR   GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR);

/*---------------- iGetDatabasesLST_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetDatabasesLST_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetDatabasesLST_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- iGetMarkChanVV_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetMarkChanVV_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetMarkChanVV_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- iGetMarkChanVA_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetMarkChanVA_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetMarkChanVA_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- IGetName_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetName_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetName_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iGetProfileParm_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetProfileParm_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetProfileParm_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- iGetWindowState_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetWindowState_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetWindowState_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- iHaveCurrent_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iHaveCurrent_EDB(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iHaveCurrent_EDB(GX_VAR   GX_OBJECT_PTR);

/*---------------- iIsLocked_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iIsLocked_EDB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iIsLocked_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iLoaded_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iLoaded_EDB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iLoaded_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- iProfileOpen_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iProfileOpen_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iProfileOpen_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- iReadOnly_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iReadOnly_EDB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iReadOnly_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GetWindowPosition_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetWindowPosition_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetWindowPosition_EDB(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR);

/*---------------- SetWindowPosition_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowPosition_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowPosition_EDB(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- iShowProfileName_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iShowProfileName_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iShowProfileName_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- iGetWindowYAxisDirection_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetWindowYAxisDirection_EDB(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetWindowYAxisDirection_EDB(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_LONG_PTR);

/*---------------- iWindowProfiles_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iWindowProfiles_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iWindowProfiles_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- LaunchHistogram_EDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchHistogram_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchHistogram_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- LaunchScatter_EDB[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchScatter_EDB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchScatter_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- Load_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Load_EDB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Load_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- LoadNoActivate_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_LoadNoActivate_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_LoadNoActivate_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- LoadAllChans_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LoadAllChans_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LoadAllChans_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- LoadChan_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LoadChan_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LoadChan_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- LoadNew_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_LoadNew_EDB(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_LoadNew_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- LoadPass_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_LoadPass_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_LoadPass_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- LoadWithView_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_LoadWithView_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_LoadWithView_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- Lock_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Lock_EDB(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Lock_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- MakeCurrent_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_MakeCurrent_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_MakeCurrent_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- RemoveProfile_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_RemoveProfile_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_RemoveProfile_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- rGetCurFid_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
App_rGetCurFid_EDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_App_rGetCurFid_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- rGetProfileParm_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
App_rGetProfileParm_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_App_rGetProfileParm_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- rGetSplit_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
App_rGetSplit_EDB(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_App_rGetSplit_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- RunChannelMaker_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_RunChannelMaker_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_RunChannelMaker_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- RunChannelMakers_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_RunChannelMakers_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_RunChannelMakers_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- SetCurLine_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetCurLine_EDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetCurLine_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- SetCurLineNoMessage_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetCurLineNoMessage_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetCurLineNoMessage_EDB(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR);

/*---------------- SetCurMark_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetCurMark_EDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetCurMark_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- SetProfileParmI_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProfileParmI_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProfileParmI_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- SetProfileParmR_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProfileParmR_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProfileParmR_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR);

/*---------------- SetProfileRangeX_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProfileRangeX_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProfileRangeX_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- SetProfileRangeY_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProfileRangeY_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProfileRangeY_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- ProfileRescaleAll_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ProfileRescaleAll_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ProfileRescaleAll_EDB(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- SetProfileSplit_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProfileSplit_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProfileSplit_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR);

/*---------------- SetProfileSplit5_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProfileSplit5_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProfileSplit5_EDB(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);

/*---------------- SetProfileSplitVV_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProfileSplitVV_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProfileSplitVV_EDB(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- SetSplit_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetSplit_EDB(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetSplit_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- SetWindowState_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowState_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowState_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- ShowProfile_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ShowProfile_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ShowProfile_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- Statistics_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Statistics_EDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Statistics_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- UnLoad_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoad_EDB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoad_EDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- UnLoadAll_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadAll_EDB(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadAll_EDB(GX_VAR   GX_OBJECT_PTR);

/*---------------- UnLoadAllChans_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadAllChans_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadAllChans_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- UnLoadChan_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadChan_EDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadChan_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- UnLoadDiscard_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadDiscard_EDB(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadDiscard_EDB(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- UnLoadVerify_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadVerify_EDB(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadVerify_EDB(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- UnLock_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLock_EDB(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLock_EDB(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- LoadControl_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LoadControl_EDB(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    HWND);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LoadControl_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        HWND);

/*---------------- LoadNewControl_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LoadNewControl_EDB(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       HWND);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LoadNewControl_EDB(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           HWND);

/*---------------- LoadPassControl_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LoadPassControl_EDB(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        HWND);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LoadPassControl_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            HWND);

/*---------------- LoadWithViewControl_EDB[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LoadWithViewControl_EDB(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            HWND);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LoadWithViewControl_EDB(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                HWND);

/*---------------- CreateNewGMS3D_EDOC[_extended_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CreateNewGMS3D_EDOC(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CreateNewGMS3D_EDOC(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- Current_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Current_EDOC(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Current_EDOC(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- CurrentNoActivate_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CurrentNoActivate_EDOC(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CurrentNoActivate_EDOC(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- CurrentIfExists_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CurrentIfExists_EDOC(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CurrentIfExists_EDOC(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- Destroy_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Destroy_EDOC(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Destroy_EDOC(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- iGetDocumentsLST_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetDocumentsLST_EDOC(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetDocumentsLST_EDOC(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- IGetName_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetName_EDOC(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetName_EDOC(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iGetWindowState_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetWindowState_EDOC(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetWindowState_EDOC(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- iHaveCurrent_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iHaveCurrent_EDOC(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iHaveCurrent_EDOC(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iLoaded_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iLoaded_EDOC(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iLoaded_EDOC(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- GetWindowPosition_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetWindowPosition_EDOC(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetWindowPosition_EDOC(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR);

/*---------------- SetWindowPosition_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowPosition_EDOC(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowPosition_EDOC(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- iReadOnly_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iReadOnly_EDOC(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iReadOnly_EDOC(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- Load_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Load_EDOC(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Load_EDOC(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- LoadNoActivate_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_LoadNoActivate_EDOC(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_LoadNoActivate_EDOC(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- MakeCurrent_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_MakeCurrent_EDOC(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_MakeCurrent_EDOC(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- SetWindowState_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowState_EDOC(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowState_EDOC(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- Sync_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Sync_EDOC(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Sync_EDOC(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SyncOpen_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SyncOpen_EDOC(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SyncOpen_EDOC(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- UnLoad_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoad_EDOC(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoad_EDOC(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- UnLoadAll_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadAll_EDOC(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadAll_EDOC(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- UnLoadDiscard_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadDiscard_EDOC(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadDiscard_EDOC(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- UnLoadVerify_EDOC[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadVerify_EDOC(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadVerify_EDOC(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- DropMapClipData_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DropMapClipData_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DropMapClipData_EMAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- iDragDropEnabled_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDragDropEnabled_EMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDragDropEnabled_EMAP(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- SetDragDropEnabled_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetDragDropEnabled_EMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetDragDropEnabled_EMAP(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR);

/*---------------- CopyToClip_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_CopyToClip_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_CopyToClip_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- DrawLine_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DrawLine_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DrawLine_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- DrawRect_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DrawRect_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DrawRect_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- DrawRect3D_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DrawRect3D_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DrawRect3D_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- GetDisplayArea_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetDisplayArea_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetDisplayArea_EMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetDisplayAreaRaw_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetDisplayAreaRaw_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetDisplayAreaRaw_EMAP(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetMapLayoutProps_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetMapLayoutProps_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetMapLayoutProps_EMAP(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR);

/*---------------- GetMapSnap_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetMapSnap_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetMapSnap_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetWindowState_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetWindowState_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetWindowState_EMAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- SetDisplayArea_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetDisplayArea_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetDisplayArea_EMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR);

/*---------------- SetMapLayoutProps_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetMapLayoutProps_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetMapLayoutProps_EMAP(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_DOUBLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- SetMapSnap_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetMapSnap_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetMapSnap_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- SetWindowState_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowState_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowState_EMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- iPackedFiles_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iPackedFiles_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iPackedFiles_EMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- ActivateGroup_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ActivateGroup_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ActivateGroup_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- ActivateView_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ActivateView_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ActivateView_EMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- Current_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Current_EMAP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Current_EMAP(GX_VAR   GX_OBJECT_PTR);

/*---------------- CurrentNoActivate_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CurrentNoActivate_EMAP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CurrentNoActivate_EMAP(GX_VAR   GX_OBJECT_PTR);

/*---------------- CurrentIfExists_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CurrentIfExists_EMAP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CurrentIfExists_EMAP(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Destroy_EMAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Destroy_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- DestroyView_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DestroyView_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DestroyView_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- FontLST_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_FontLST_EMAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_FontLST_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iChangeCurrentView_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iChangeCurrentView_EMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iChangeCurrentView_EMAP(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR);

/*---------------- iCreateGroupSnapshot_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iCreateGroupSnapshot_EMAP(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iCreateGroupSnapshot_EMAP(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_HANDLE_PTR);

/*---------------- IGet3DViewName_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGet3DViewName_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGet3DViewName_EMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- IGetCurrentGroup_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetCurrentGroup_EMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetCurrentGroup_EMAP(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- IGetCurrentView_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetCurrentView_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetCurrentView_EMAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- iGetMapsLST_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetMapsLST_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetMapsLST_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- IGetName_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetName_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetName_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iHaveCurrent_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iHaveCurrent_EMAP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iHaveCurrent_EMAP(GX_VAR   GX_OBJECT_PTR);

/*---------------- iIGetSpecifiedMapName_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iIGetSpecifiedMapName_EMAP(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iIGetSpecifiedMapName_EMAP(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR);

/*---------------- iIsGrid_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iIsGrid_EMAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iIsGrid_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- ReloadGrid_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ReloadGrid_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ReloadGrid_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- iIs3DView_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iIs3DView_EMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iIs3DView_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- GetE3DV_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_GetE3DV_EMAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_GetE3DV_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- iIsLocked_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iIsLocked_EMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iIsLocked_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- iLoaded_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iLoaded_EMAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iLoaded_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- iReadOnly_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iReadOnly_EMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iReadOnly_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- GetWindowPosition_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetWindowPosition_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR,
                           GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetWindowPosition_EMAP(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR,
                               GX_VAR   GX_LONG_PTR);

/*---------------- SetWindowPosition_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowPosition_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowPosition_EMAP(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- iRealizeGroupSnapshot_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iRealizeGroupSnapshot_EMAP(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iRealizeGroupSnapshot_EMAP(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_HANDLE_PTR);

/*---------------- iSetCurrentView_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iSetCurrentView_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iSetCurrentView_EMAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- GetViewIPJ_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetViewIPJ_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetViewIPJ_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- Load_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Load_EMAP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Load_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- LoadNoActivate_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_LoadNoActivate_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_LoadNoActivate_EMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- LoadWithView_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_LoadWithView_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_LoadWithView_EMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- Lock_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Lock_EMAP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Lock_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- MakeCurrent_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_MakeCurrent_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_MakeCurrent_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- Print_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Print_EMAP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Print_EMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- Redraw_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Redraw_EMAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Redraw_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SelectGroup_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SelectGroup_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SelectGroup_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- SetRedrawFlag_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetRedrawFlag_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetRedrawFlag_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- UnLoad_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoad_EMAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoad_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- UnLoadAll_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadAll_EMAP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadAll_EMAP(GX_VAR   GX_OBJECT_PTR);

/*---------------- UnLoadVerify_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadVerify_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadVerify_EMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- UnLock_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLock_EMAP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLock_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GetCurPoint_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetCurPoint_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetCurPoint_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetCurPointMM_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetCurPointMM_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetCurPointMM_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetCursor_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetCursor_EMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetCursor_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetCursorMM_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetCursorMM_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetCursorMM_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- iDigitize_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDigitize_EMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDigitize_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iDigitize2_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDigitize2_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDigitize2_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- iDigitizePeaks_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDigitizePeaks_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDigitizePeaks_EMAP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- iDigitizePolygon_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDigitizePolygon_EMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDigitizePolygon_EMAP(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- iGetBox_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetBox_EMAP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetBox_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetBox2_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetBox2_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetBox2_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetGrid_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetGrid_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetGrid_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetLine_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetLine_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetLine_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetLineEx_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetLineEx_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetLineEx_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetLineXYZ_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetLineXYZ_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetLineXYZ_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetPoint_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetPoint_EMAP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetPoint_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetPointEx_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetPointEx_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetPointEx_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetPoint3D_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetPoint3D_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetPoint3D_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetPolyLine_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetPolyLine_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetPolyLine_EMAP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- iGetPolyLineXYZ_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetPolyLineXYZ_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetPolyLineXYZ_EMAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- iGetRect_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetRect_EMAP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetRect_EMAP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- iTrackPoint_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iTrackPoint_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iTrackPoint_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetAOIArea_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetAOIArea_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetAOIArea_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR,
                        GX_VAR   GX_DOUBLE_PTR);

/*---------------- SetAOIArea_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetAOIArea_EMAP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetAOIArea_EMAP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- SetViewportMode_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetViewportMode_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetViewportMode_EMAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- GetSelectedVertices_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetSelectedVertices_EMAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetSelectedVertices_EMAP(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR);

/*---------------- CreateVirtual_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CreateVirtual_EMAP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CreateVirtual_EMAP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- LoadControl_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LoadControl_EMAP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     HWND);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LoadControl_EMAP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         HWND);

/*---------------- LoadWithViewControl_EMAP[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LoadWithViewControl_EMAP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             HWND);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LoadWithViewControl_EMAP(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 HWND);

/*---------------- iDragDropEnabled_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDragDropEnabled_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDragDropEnabled_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR);

/*---------------- SetDragDropEnabled_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetDragDropEnabled_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetDragDropEnabled_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_LONG_PTR);

/*---------------- Current_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Current_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Current_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);

/*---------------- CurrentNoActivate_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CurrentNoActivate_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CurrentNoActivate_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);

/*---------------- CurrentIfExists_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CurrentIfExists_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CurrentIfExists_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Destroy_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Destroy_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- iGetMapTemplatesLST_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetMapTemplatesLST_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetMapTemplatesLST_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_LONG_PTR);

/*---------------- IGetName_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetName_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetName_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- iHaveCurrent_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iHaveCurrent_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iHaveCurrent_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);

/*---------------- iIGetSpecifiedMapName_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iIGetSpecifiedMapName_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_VAR   GX_STR_PTR,
                                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iIGetSpecifiedMapName_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                           GX_CONST GX_STR_PTR,
                                           GX_CONST GX_STR_PTR,
                                           GX_VAR   GX_STR_PTR,
                                           GX_CONST GX_LONG_PTR);

/*---------------- iIsLocked_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iIsLocked_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iIsLocked_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- iLoaded_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iLoaded_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iLoaded_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- GetWindowPosition_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetWindowPosition_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR,
                                   GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetWindowPosition_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_LONG_PTR,
                                       GX_VAR   GX_LONG_PTR);

/*---------------- SetWindowPosition_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowPosition_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowPosition_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_LONG_PTR);

/*---------------- iReadOnly_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iReadOnly_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iReadOnly_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- Load_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Load_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Load_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- LoadNoActivate_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_LoadNoActivate_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_LoadNoActivate_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR);

/*---------------- Lock_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_Lock_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_Lock_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- MakeCurrent_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_MakeCurrent_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_MakeCurrent_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR);

/*---------------- UnLoad_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoad_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoad_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- UnLoadAll_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadAll_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadAll_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR);

/*---------------- UnLoadVerify_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLoadVerify_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLoadVerify_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR);

/*---------------- UnLock_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_UnLock_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_UnLock_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- iGetBox_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetBox_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetBox_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetLine_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetLine_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetLine_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetPoint_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetPoint_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetPoint_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetRect_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetRect_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR,
                          GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetRect_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR,
                              GX_VAR   GX_DOUBLE_PTR);

/*---------------- iTrackPoint_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iTrackPoint_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iTrackPoint_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR);

/*---------------- iGetItemSelection_EMAPTEMPLATE[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetItemSelection_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetItemSelection_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_VAR   GX_STR_PTR,
                                       GX_CONST GX_LONG_PTR);

/*---------------- SetItemSelection_EMAPTEMPLATE[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetItemSelection_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetItemSelection_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_STR_PTR);

/*---------------- GetDisplayArea_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetDisplayArea_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetDisplayArea_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR,
                                    GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetTemplateLayoutProps_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetTemplateLayoutProps_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_VAR   GX_LONG_PTR,
                                        GX_VAR   GX_DOUBLE_PTR,
                                        GX_VAR   GX_LONG_PTR,
                                        GX_VAR   GX_LONG_PTR,
                                        GX_VAR   GX_LONG_PTR,
                                        GX_VAR   GX_LONG_PTR,
                                        GX_VAR   GX_LONG_PTR,
                                        GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetTemplateLayoutProps_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                            GX_CONST GX_HANDLE_PTR,
                                            GX_VAR   GX_LONG_PTR,
                                            GX_VAR   GX_DOUBLE_PTR,
                                            GX_VAR   GX_LONG_PTR,
                                            GX_VAR   GX_LONG_PTR,
                                            GX_VAR   GX_LONG_PTR,
                                            GX_VAR   GX_LONG_PTR,
                                            GX_VAR   GX_LONG_PTR,
                                            GX_VAR   GX_LONG_PTR);

/*---------------- iGetWindowState_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetWindowState_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetWindowState_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR);

/*---------------- SetDisplayArea_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetDisplayArea_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR,
                                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetDisplayArea_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR,
                                    GX_CONST GX_DOUBLE_PTR);

/*---------------- SetTemplateLayoutProps_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetTemplateLayoutProps_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_HANDLE_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_DOUBLE_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_LONG_PTR,
                                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetTemplateLayoutProps_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                            GX_CONST GX_HANDLE_PTR,
                                            GX_CONST GX_LONG_PTR,
                                            GX_CONST GX_DOUBLE_PTR,
                                            GX_CONST GX_LONG_PTR,
                                            GX_CONST GX_LONG_PTR,
                                            GX_CONST GX_LONG_PTR,
                                            GX_CONST GX_LONG_PTR,
                                            GX_CONST GX_LONG_PTR,
                                            GX_CONST GX_LONG_PTR);

/*---------------- SetWindowState_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowState_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowState_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR);

/*---------------- CreateVirtual_EMAPTEMPLATE[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
App_CreateVirtual_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_App_CreateVirtual_EMAPTEMPLATE(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR);

/*---------------- _Destr_EUL3[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Destr_EUL3(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Destr_EUL3(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Creat_EUL3[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Creat_EUL3(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Creat_EUL3(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- GetResult_EUL3[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetResult_EUL3(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetResult_EUL3(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- Write_EUL3[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Write_EUL3(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Write_EUL3(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- ExEulerDerive_EUL3[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExEulerDerive_EUL3(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExEulerDerive_EUL3(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- ExEulerCalc_EUL3[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExEulerCalc_EUL3(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
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
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExEulerCalc_EUL3(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
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
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Create_EXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_EXP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_EXP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- CreateFile_EXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateFile_EXP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateFile_EXP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- Destroy_EXP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_EXP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_EXP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- AppDens_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AppDens_FFT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AppDens_FFT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- AppSusc_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AppSusc_FFT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AppSusc_FFT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- BandPass_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BandPass_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BandPass_FFT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- BWorth_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BWorth_FFT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BWorth_FFT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- RCFilter_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RCFilter_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RCFilter_FFT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Contin_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Contin_FFT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Contin_FFT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- CosRoll_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CosRoll_FFT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CosRoll_FFT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Create_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_FFT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_FFT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- CreateEx_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateEx_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateEx_FFT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- CreateRef_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateRef_FFT(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateRef_FFT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- CreateRefEx_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateRefEx_FFT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateRefEx_FFT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- Destroy_FFT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_FFT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_FFT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Gaus_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Gaus_FFT(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Gaus_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- GetVV_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVV_FFT(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVV_FFT(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- HDrv_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
HDrv_FFT(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_HDrv_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR);

/*---------------- HighPass_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
HighPass_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_HighPass_FFT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- HInt_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
HInt_FFT(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_HInt_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Inverse_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Inverse_FFT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Inverse_FFT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- LowPass_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LowPass_FFT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LowPass_FFT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- RedPol_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RedPol_FFT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RedPol_FFT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- rNyquist_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rNyquist_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rNyquist_FFT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- rSampIncr_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rSampIncr_FFT(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rSampIncr_FFT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- rWaveIncr_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rWaveIncr_FFT(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rWaveIncr_FFT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- SetVV_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVV_FFT(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVV_FFT(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Spectrum_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Spectrum_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Spectrum_FFT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- VDrv_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
VDrv_FFT(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_VDrv_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR);

/*---------------- VInt_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
VInt_FFT(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_VInt_FFT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- WriteSpectrum_FFT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteSpectrum_FFT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteSpectrum_FFT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- Fft2In_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Fft2In_FFT2(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Fft2In_FFT2(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- FilterPG_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FilterPG_FFT2(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FilterPG_FFT2(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- Flt_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Flt_FFT2(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Flt_FFT2(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- FltInv_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FltInv_FFT2(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FltInv_FFT2(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- PowSpc_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PowSpc_FFT2(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PowSpc_FFT2(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- RadSpc_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RadSpc_FFT2(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RadSpc_FFT2(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- RadSpcAlt_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RadSpcAlt_FFT2(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RadSpcAlt_FFT2(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- RadSpc1_FFT2[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RadSpc1_FFT2(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RadSpc1_FFT2(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- RadSpc2_FFT2[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RadSpc2_FFT2(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RadSpc2_FFT2(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- TdXdY_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TdXdY_FFT2(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TdXdY_FFT2(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- TransPG_FFT2[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TransPG_FFT2(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TransPG_FFT2(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Create_FLT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_FLT(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_FLT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- Destroy_FLT[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_FLT(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_FLT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Load_FLT[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Load_FLT(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Load_FLT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- Create_GD[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_GD(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_GD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- Destroy_GD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_GD(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_GD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Create_GER[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_GER(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_GER(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- Destroy_GER[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_GER(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_GER(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- IiGet_GER[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IiGet_GER(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_VAR   GX_STR_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IiGet_GER(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- SetInt_GER[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_GER(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_GER(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SetReal_GER[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_GER(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_GER(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- SetString_GER[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetString_GER(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetString_GER(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- Launch_GMSYS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Launch_GMSYS(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Launch_GMSYS(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- DipoleMag_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DipoleMag_GU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DipoleMag_GU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- EMHalfSpaceInv_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EMHalfSpaceInv_GU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EMHalfSpaceInv_GU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- EMHalfSpaceVV_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EMHalfSpaceVV_GU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EMHalfSpaceVV_GU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Geometrics2DB_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Geometrics2DB_GU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Geometrics2DB_GU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- Geometrics2TBL_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Geometrics2TBL_GU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Geometrics2TBL_GU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GeometricsQC_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GeometricsQC_GU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GeometricsQC_GU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- Geonics3138Dump2DB_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Geonics3138Dump2DB_GU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Geonics3138Dump2DB_GU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);

/*---------------- Geonics61Dump2DB_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Geonics61Dump2DB_GU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Geonics61Dump2DB_GU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- GeonicsDAT2DB_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GeonicsDAT2DB_GU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GeonicsDAT2DB_GU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- GrCurvCor_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GrCurvCor_GU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GrCurvCor_GU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GrCurvCorEx_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GrCurvCorEx_GU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GrCurvCorEx_GU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- GrDEMVV_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GrDEMVV_GU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GrDEMVV_GU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GrTest_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GrTest_GU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GrTest_GU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- GravityStillReadingCorrection_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GravityStillReadingCorrection_GU(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GravityStillReadingCorrection_GU(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_LONG_PTR);

/*---------------- DespikeEMArray_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DespikeEMArray_GU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DespikeEMArray_GU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_LONG_PTR);

/*---------------- iEMLayer_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEMLayer_GU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEMLayer_GU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- iEMPlate_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEMPlate_GU(GX_VAR   GX_OBJECT_PTR,
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
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEMPlate_GU(GX_VAR   GX_OBJECT_PTR,
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
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- IGenUXDetectSymbolsGroupName_GU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGenUXDetectSymbolsGroupName_GU(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGenUXDetectSymbolsGroupName_GU(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_VAR   GX_STR_PTR,
                                    GX_CONST GX_LONG_PTR);

/*---------------- ImportDAARC500Ethernet_GU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportDAARC500Ethernet_GU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportDAARC500Ethernet_GU(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_VAR   GX_LONG_PTR);

/*---------------- ImportDAARC500Serial_GU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportDAARC500Serial_GU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportDAARC500Serial_GU(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_LONG_PTR);

/*---------------- ImportP190_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportP190_GU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportP190_GU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- LagDAARC500GPS_GU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LagDAARC500GPS_GU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LagDAARC500GPS_GU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- MaxwellPlateCorners_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaxwellPlateCorners_GU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
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
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaxwellPlateCorners_GU(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
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
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR);

/*---------------- ScanDAARC500Ethernet_GU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ScanDAARC500Ethernet_GU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_LONG_PTR,
                        GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ScanDAARC500Ethernet_GU(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR);

/*---------------- ScanDAARC500Serial_GU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ScanDAARC500Serial_GU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ScanDAARC500Serial_GU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- VVEuler_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
VVEuler_GU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_VVEuler_GU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- VVEuler2_GU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
VVEuler2_GU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_VVEuler2_GU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- CreateWNDFromHWND_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_CreateWNDFromHWND_GUI(GX_VAR   GX_OBJECT_PTR,
                          HWND);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_CreateWNDFromHWND_GUI(GX_VAR   GX_OBJECT_PTR,
                              HWND);

/*---------------- Fft2SpecFilter_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Fft2SpecFilter_GUI(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Fft2SpecFilter_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- GetParentWND_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetParentWND_GUI(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetParentWND_GUI(GX_VAR   GX_OBJECT_PTR);

/*---------------- GetPrinterLST_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetPrinterLST_GUI(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetPrinterLST_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- iGetWindowState_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetWindowState_GUI(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetWindowState_GUI(GX_VAR   GX_OBJECT_PTR);

/*---------------- SetWindowState_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowState_GUI(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowState_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- GetWindowPosition_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetWindowPosition_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetWindowPosition_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR);

/*---------------- SetWindowPosition_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetWindowPosition_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetWindowPosition_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- GetClientWindowArea_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GetClientWindowArea_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GetClientWindowArea_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR);

/*---------------- GridStatHist_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_GridStatHist_GUI(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_GridStatHist_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- VoxelStatHist_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_VoxelStatHist_GUI(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_VoxelStatHist_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- iColorForm_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iColorForm_GUI(GX_VAR   GX_OBJECT_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iColorForm_GUI(GX_VAR   GX_OBJECT_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- iColorTransform_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iColorTransform_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iColorTransform_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- iCoordSysWizard_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iCoordSysWizard_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iCoordSysWizard_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- iCoordSysWizardLicensed_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iCoordSysWizardLicensed_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iCoordSysWizardLicensed_GUI(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR);

/*---------------- iCoordSysWizardGrid_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iCoordSysWizardGrid_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR,
                            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iCoordSysWizardGrid_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR,
                                GX_VAR   GX_DOUBLE_PTR);

/*---------------- iDatabaseType_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDatabaseType_GUI(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDatabaseType_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iDatamineType_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iDatamineType_GUI(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iDatamineType_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_LONG_PTR);

/*---------------- iExportXYZTemplateEditor_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iExportXYZTemplateEditor_GUI(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iExportXYZTemplateEditor_GUI(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_LONG_PTR);

/*---------------- iExportXYZTemplateEditorEx_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iExportXYZTemplateEditorEx_GUI(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iExportXYZTemplateEditorEx_GUI(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_VAR   GX_STR_PTR,
                                       GX_CONST GX_LONG_PTR);

/*---------------- iFileFilterIndex_GUI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFileFilterIndex_GUI(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFileFilterIndex_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- iGCSDatumWarningSHP_GUI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGCSDatumWarningSHP_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGCSDatumWarningSHP_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- iGCSDatumWarningSHPDBEx_GUI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGCSDatumWarningSHPDBEx_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGCSDatumWarningSHPDBEx_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- iGCSDatumWarningSHPEx_GUI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGCSDatumWarningSHPEx_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGCSDatumWarningSHPEx_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- iGetAreaOfInterest_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetAreaOfInterest_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_VAR   GX_DOUBLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetAreaOfInterest_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_VAR   GX_DOUBLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- iGetAreaOfInterest3D_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetAreaOfInterest3D_GUI(GX_VAR   GX_OBJECT_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetAreaOfInterest3D_GUI(GX_VAR   GX_OBJECT_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_VAR   GX_DOUBLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR);

/*---------------- IGetDATDefaults_GUI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetDATDefaults_GUI(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetDATDefaults_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- IGetFileFilter_GUI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetFileFilter_GUI(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetFileFilter_GUI(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_LONG_PTR);

/*---------------- IGetGSDirectory_GUI[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetGSDirectory_GUI(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetGSDirectory_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- IiBrowseDir_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiBrowseDir_GUI(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiBrowseDir_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- IiColorTransformEx_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiColorTransformEx_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiColorTransformEx_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- IiCumulativePercent_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiCumulativePercent_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiCumulativePercent_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- IiDatFileForm_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiDatFileForm_GUI(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiDatFileForm_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- IiGenFileForm_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiGenFileForm_GUI(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiGenFileForm_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- IiCustomFileForm_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiCustomFileForm_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiCustomFileForm_GUI(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_VAR   GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- IiImportDrillDatabaseADO2_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiImportDrillDatabaseADO2_GUI(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_VAR   GX_LONG_PTR,
                                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiImportDrillDatabaseADO2_GUI(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_VAR   GX_STR_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_VAR   GX_STR_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_VAR   GX_LONG_PTR,
                                      GX_CONST GX_HANDLE_PTR);

/*---------------- IiImportDrillDatabaseESRI_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiImportDrillDatabaseESRI_GUI(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_VAR   GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiImportDrillDatabaseESRI_GUI(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_VAR   GX_STR_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_VAR   GX_STR_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_VAR   GX_LONG_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_HANDLE_PTR);

/*---------------- IiImportDrillDatabaseODBC_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiImportDrillDatabaseODBC_GUI(GX_VAR   GX_OBJECT_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_VAR   GX_LONG_PTR,
                                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiImportDrillDatabaseODBC_GUI(GX_VAR   GX_OBJECT_PTR,
                                      GX_VAR   GX_STR_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_VAR   GX_STR_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_VAR   GX_STR_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_VAR   GX_LONG_PTR,
                                      GX_CONST GX_HANDLE_PTR);

/*---------------- IiImportDrillDatabaseODBCMaxwell_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiImportDrillDatabaseODBCMaxwell_GUI(GX_VAR   GX_OBJECT_PTR,
                                         GX_VAR   GX_STR_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_VAR   GX_STR_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_VAR   GX_STR_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_VAR   GX_LONG_PTR,
                                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiImportDrillDatabaseODBCMaxwell_GUI(GX_VAR   GX_OBJECT_PTR,
                                             GX_VAR   GX_STR_PTR,
                                             GX_CONST GX_LONG_PTR,
                                             GX_VAR   GX_STR_PTR,
                                             GX_CONST GX_LONG_PTR,
                                             GX_VAR   GX_STR_PTR,
                                             GX_CONST GX_LONG_PTR,
                                             GX_VAR   GX_LONG_PTR,
                                             GX_CONST GX_HANDLE_PTR);

/*---------------- iImportAsciiWizard_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportAsciiWizard_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportAsciiWizard_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- iImportChemDatabase_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportChemDatabase_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportChemDatabase_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR);

/*---------------- iImportChemDatabaseADO_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportChemDatabaseADO_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportChemDatabaseADO_GUI(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR);

/*---------------- iImportDatabase_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportDatabase_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportDatabase_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- iImportDatabaseADO_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportDatabaseADO_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportDatabaseADO_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- iImportDatabaseSQL_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportDatabaseSQL_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportDatabaseSQL_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- iImportDatabaseSQLADO_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportDatabaseSQLADO_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportDatabaseSQLADO_GUI(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_VAR   GX_STR_PTR,
                                  GX_CONST GX_LONG_PTR);

/*---------------- iImportDrillDatabaseADO_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportDrillDatabaseADO_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportDrillDatabaseADO_GUI(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_VAR   GX_STR_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_VAR   GX_LONG_PTR,
                                    GX_CONST GX_HANDLE_PTR);

/*---------------- iImportTemplateSQL_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportTemplateSQL_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportTemplateSQL_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- iImportTemplateSQLADO_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportTemplateSQLADO_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportTemplateSQLADO_GUI(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR);

/*---------------- iImportXYZTemplateEditor_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iImportXYZTemplateEditor_GUI(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iImportXYZTemplateEditor_GUI(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_STR_PTR);

/*---------------- IiODBCFileConnect_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiODBCFileConnect_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiODBCFileConnect_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- IiSymbolForm_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IiSymbolForm_GUI(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IiSymbolForm_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_VAR   GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR);

/*---------------- iMetaDataTool_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iMetaDataTool_GUI(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iMetaDataTool_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- ImportChemWizard_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ImportChemWizard_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ImportChemWizard_GUI(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- ImportDrillWizard_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ImportDrillWizard_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ImportDrillWizard_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_LONG_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- ImportDrillWizardEx_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ImportDrillWizardEx_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ImportDrillWizardEx_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_HANDLE_PTR);

/*---------------- InternetTrust_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_InternetTrust_GUI(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_InternetTrust_GUI(GX_VAR   GX_OBJECT_PTR);

/*---------------- iPatternForm_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iPatternForm_GUI(GX_VAR   GX_OBJECT_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iPatternForm_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_LONG_PTR);

/*---------------- iLinePatternForm_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iLinePatternForm_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_VAR   GX_LONG_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_DOUBLE_PTR,
                         GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iLinePatternForm_GUI(GX_VAR   GX_OBJECT_PTR,
                             GX_VAR   GX_LONG_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_DOUBLE_PTR,
                             GX_VAR   GX_LONG_PTR);

/*---------------- iTwoPanelSelection_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iTwoPanelSelection_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iTwoPanelSelection_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- iTwoPanelSelection2_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iTwoPanelSelection2_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iTwoPanelSelection2_GUI(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR);

/*---------------- iTwoPanelSelectionEx_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iTwoPanelSelectionEx_GUI(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iTwoPanelSelectionEx_GUI(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_LONG_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- iTwoPanelSelectionEx2_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iTwoPanelSelectionEx2_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iTwoPanelSelectionEx2_GUI(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_LONG_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR);

/*---------------- LaunchSingleGeoDOTNETXTool_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LaunchSingleGeoDOTNETXTool_GUI(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LaunchSingleGeoDOTNETXTool_GUI(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_HANDLE_PTR);

/*---------------- LaunchGeoDOTNETXTool_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LaunchGeoDOTNETXTool_GUI(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LaunchGeoDOTNETXTool_GUI(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_HANDLE_PTR);

/*---------------- LaunchGeoXTool_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LaunchGeoXTool_GUI(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LaunchGeoXTool_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- LaunchSingleGeoDOTNETXToolEx_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LaunchSingleGeoDOTNETXToolEx_GUI(GX_VAR   GX_OBJECT_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_STR_PTR,
                                     GX_CONST GX_HANDLE_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR,
                                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LaunchSingleGeoDOTNETXToolEx_GUI(GX_VAR   GX_OBJECT_PTR,
                                         GX_CONST GX_STR_PTR,
                                         GX_CONST GX_STR_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_CONST GX_LONG_PTR);

/*---------------- LaunchGeoDOTNETXToolEx_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LaunchGeoDOTNETXToolEx_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR,
                               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LaunchGeoDOTNETXToolEx_GUI(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_STR_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR,
                                   GX_CONST GX_LONG_PTR);

/*---------------- LaunchGeoXToolEx_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_LaunchGeoXToolEx_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_LaunchGeoXToolEx_GUI(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- MetaDataViewer_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_MetaDataViewer_GUI(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_MetaDataViewer_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- PrintFile_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_PrintFile_GUI(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_PrintFile_GUI(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- RenderPattern_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_RenderPattern_GUI(GX_VAR   GX_OBJECT_PTR,
                      HDC,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_RenderPattern_GUI(GX_VAR   GX_OBJECT_PTR,
                          HDC,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- RenderLinePattern_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_RenderLinePattern_GUI(GX_VAR   GX_OBJECT_PTR,
                          HDC,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_RenderLinePattern_GUI(GX_VAR   GX_OBJECT_PTR,
                              HDC,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- SetParentWND_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetParentWND_GUI(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetParentWND_GUI(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- SetPrinter_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetPrinter_GUI(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetPrinter_GUI(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- SetProgAlwaysOn_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SetProgAlwaysOn_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SetProgAlwaysOn_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- ShowDirectHist_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ShowDirectHist_GUI(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ShowDirectHist_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- ShowHist_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ShowHist_GUI(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ShowHist_GUI(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- SimpleMapDialog_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_SimpleMapDialog_GUI(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_SimpleMapDialog_GUI(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- ThematicVoxelInfo_GUI[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ThematicVoxelInfo_GUI(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ThematicVoxelInfo_GUI(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- Show3DViewerDialog_GUI[_licensed_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_Show3DViewerDialog_GUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_Show3DViewerDialog_GUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- Create_HTTP[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_HTTP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_HTTP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Destroy_HTTP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_HTTP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_HTTP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Download_HTTP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Download_HTTP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Download_HTTP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- SilentDownload_HTTP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SilentDownload_HTTP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SilentDownload_HTTP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- Get_HTTP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Get_HTTP(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_STR_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Get_HTTP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Post_HTTP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Post_HTTP(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Post_HTTP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- SetProxyCredentials_HTTP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetProxyCredentials_HTTP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetProxyCredentials_HTTP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- AddGrid_IEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddGrid_IEXP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddGrid_IEXP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- Create_IEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_IEXP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_IEXP(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_IEXP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_IEXP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_IEXP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- DoFormula_IEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DoFormula_IEXP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DoFormula_IEXP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- iDownloadHTTP_INTERNET[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDownloadHTTP_INTERNET(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDownloadHTTP_INTERNET(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- SendMail_INTERNET[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SendMail_INTERNET(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SendMail_INTERNET(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- ConvertUBCIP2DToGrid_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertUBCIP2DToGrid_IP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertUBCIP2DToGrid_IP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- CreateDefaultJob_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateDefaultJob_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateDefaultJob_IP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- ExportUBCIP3_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportUBCIP3_IP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportUBCIP3_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- ExportUBCIPControl_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportUBCIPControl_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportUBCIPControl_IP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- ExportUBCIPControlV5_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportUBCIPControlV5_IP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportUBCIPControlV5_IP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_DOUBLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- ExportUBCRes3_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportUBCRes3_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportUBCRes3_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- ExportUBCResControl_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportUBCResControl_IP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportUBCResControl_IP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);

/*---------------- ExportUBCResControlV5_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportUBCResControlV5_IP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportUBCResControlV5_IP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- ExportDataToUBC3D_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportDataToUBC3D_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportDataToUBC3D_IP(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- ImportUBC2DMOD_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
ImportUBC2DMOD_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_ImportUBC2DMOD_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- ImportUBC2DMSH_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportUBC2DMSH_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportUBC2DMSH_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- ImportUBC2DTopo_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportUBC2DTopo_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportUBC2DTopo_IP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- OpenJob_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OpenJob_IP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OpenJob_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SaveJob_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveJob_IP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveJob_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- TrimUBC2DModel_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
TrimUBC2DModel_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_TrimUBC2DModel_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR);

/*---------------- WriteDistantElectrodes_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteDistantElectrodes_IP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteDistantElectrodes_IP(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- WriteDistantElectrodesLST_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteDistantElectrodesLST_IP(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteDistantElectrodesLST_IP(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_HANDLE_PTR);

/*---------------- AverageDuplicatesQC_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AverageDuplicatesQC_IP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AverageDuplicatesQC_IP(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- Create_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_IP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_IP(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_IP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_IP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- ExportI2X_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportI2X_IP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportI2X_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ExportIPDATA_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportIPDATA_IP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportIPDATA_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- ExportIPDATADir_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportIPDATADir_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportIPDATADir_IP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- ExportIPRED_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportIPRED_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportIPRED_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ExportIPREDDir_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportIPREDDir_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportIPREDDir_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- ExportLineIPDATA_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportLineIPDATA_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportLineIPDATA_IP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- ExportSGDF_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportSGDF_IP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportSGDF_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- GetNValueLST_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetNValueLST_IP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetNValueLST_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- GetTopoLine_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTopoLine_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTopoLine_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iGetChanDomain_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetChanDomain_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetChanDomain_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- IGetChanLabel_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetChanLabel_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetChanLabel_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- GetChannelInfo_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetChannelInfo_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetChannelInfo_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- SetChannelInfo_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChannelInfo_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChannelInfo_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- ImportDump_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportDump_IP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportDump_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- ImportGrid_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportGrid_IP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportGrid_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- ImportI2X_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportI2X_IP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportI2X_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- ImportI2XEx_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportI2XEx_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportI2XEx_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- ImportInstrumentationGDD_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportInstrumentationGDD_IP(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportInstrumentationGDD_IP(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR);

/*---------------- ImportIPDATA_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportIPDATA_IP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportIPDATA_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- ImportIPDATA2_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportIPDATA2_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportIPDATA2_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- ImportIPRED_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportIPRED_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportIPRED_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- ImportMergeIPRED_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportMergeIPRED_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportMergeIPRED_IP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- ImportSGDF_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportSGDF_IP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportSGDF_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- ImportTopoCSV_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportTopoCSV_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportTopoCSV_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- ImportTopoGrid_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportTopoGrid_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportTopoGrid_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- ImportZongeAVG_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportZongeAVG_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportZongeAVG_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- ImportZongeFLD_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportZongeFLD_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportZongeFLD_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- NewXYDatabase_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NewXYDatabase_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NewXYDatabase_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR);

/*---------------- PseudoPlot_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PseudoPlot_IP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PseudoPlot_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- PseudoPlot2_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PseudoPlot2_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PseudoPlot2_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- PseudoPlot2Dir_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PseudoPlot2Dir_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PseudoPlot2Dir_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- PSStack_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PSStack_IP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PSStack_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- PSStack2_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PSStack2_IP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PSStack2_IP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- PSStack2Dir_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PSStack2Dir_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PSStack2Dir_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- QCChanLST_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QCChanLST_IP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QCChanLST_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Recalculate_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Recalculate_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Recalculate_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- RecalculateEx_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RecalculateEx_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RecalculateEx_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- RecalculateZ_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RecalculateZ_IP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RecalculateZ_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SetImportLine_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetImportLine_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetImportLine_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- SetImportMode_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetImportMode_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetImportMode_IP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- Window_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Window_IP(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Window_IP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);

/*---------------- WinnowChanList_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WinnowChanList_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WinnowChanList_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- WinnowChanList2_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WinnowChanList2_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WinnowChanList2_IP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- isValidLine_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
isValidLine_IP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_isValidLine_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- iLineArrayType_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLineArrayType_IP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLineArrayType_IP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- rASpacing_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rASpacing_IP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rASpacing_IP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- iPLDPConvention_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iPLDPConvention_IP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iPLDPConvention_IP(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- GetElectrodeLocationsAndMaskValues_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetElectrodeLocationsAndMaskValues_IP(GX_VAR   GX_OBJECT_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_STR_PTR,
                                      GX_CONST GX_LONG_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_HANDLE_PTR,
                                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetElectrodeLocationsAndMaskValues_IP(GX_VAR   GX_OBJECT_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_STR_PTR,
                                          GX_CONST GX_LONG_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR,
                                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetElectrodeLocationsAndMaskValues2_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetElectrodeLocationsAndMaskValues2_IP(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_STR_PTR,
                                       GX_CONST GX_LONG_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR,
                                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetElectrodeLocationsAndMaskValues2_IP(GX_VAR   GX_OBJECT_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           GX_CONST GX_STR_PTR,
                                           GX_CONST GX_LONG_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           GX_CONST GX_HANDLE_PTR,
                                           GX_CONST GX_HANDLE_PTR);

/*---------------- SetElectrodeMaskValues_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetElectrodeMaskValues_IP(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetElectrodeMaskValues_IP(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- SetElectrodeMaskValuesSingleQCChannel_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetElectrodeMaskValuesSingleQCChannel_IP(GX_VAR   GX_OBJECT_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_STR_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_CONST GX_LONG_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_HANDLE_PTR,
                                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetElectrodeMaskValuesSingleQCChannel_IP(GX_VAR   GX_OBJECT_PTR,
                                             GX_CONST GX_HANDLE_PTR,
                                             GX_CONST GX_HANDLE_PTR,
                                             GX_CONST GX_STR_PTR,
                                             GX_CONST GX_LONG_PTR,
                                             GX_CONST GX_LONG_PTR,
                                             GX_CONST GX_HANDLE_PTR,
                                             GX_CONST GX_HANDLE_PTR,
                                             GX_CONST GX_HANDLE_PTR);

/*---------------- GetQCChannel_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetQCChannel_IP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetQCChannel_IP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- LocateContributingElectrodes_IP[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LocateContributingElectrodes_IP(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LocateContributingElectrodes_IP(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_DOUBLE_PTR);

/*---------------- iModifyJob_IPGUI[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iModifyJob_IPGUI(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iModifyJob_IPGUI(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR);

/*---------------- LaunchIPQCTool_IPGUI[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchIPQCTool_IPGUI(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchIPQCTool_IPGUI(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- LaunchOffsetIPQCTool_IPGUI[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchOffsetIPQCTool_IPGUI(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchOffsetIPQCTool_IPGUI(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- iIPQCToolExists_IPGUI[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIPQCToolExists_IPGUI(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIPQCToolExists_IPGUI(GX_VAR   GX_OBJECT_PTR);

/*---------------- LaunchRemoveContributingElectrodesEXTTool_IPGUI[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchRemoveContributingElectrodesEXTTool_IPGUI(GX_VAR   GX_OBJECT_PTR,
                                                GX_CONST GX_STR_PTR,
                                                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchRemoveContributingElectrodesEXTTool_IPGUI(GX_VAR   GX_OBJECT_PTR,
                                                    GX_CONST GX_STR_PTR,
                                                    GX_CONST GX_STR_PTR);

/*---------------- _Clear_KGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Clear_KGRD(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Clear_KGRD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Create_KGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_KGRD(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_KGRD(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_KGRD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_KGRD(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_KGRD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iLoadParms_KGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLoadParms_KGRD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLoadParms_KGRD(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- iRun_KGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRun_KGRD(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_STR_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRun_KGRD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- iRun2_KGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRun2_KGRD(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRun2_KGRD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- iRun3_KGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRun3_KGRD(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRun3_KGRD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- iSaveParms_KGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSaveParms_KGRD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSaveParms_KGRD(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- GotoPoint_LMSG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GotoPoint_LMSG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GotoPoint_LMSG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- ViewArea_LMSG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ViewArea_LMSG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ViewArea_LMSG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- ConvertCG3toRAW_MISC[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertCG3toRAW_MISC(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertCG3toRAW_MISC(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- ConvertCG5toRAW_MISC[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertCG5toRAW_MISC(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertCG5toRAW_MISC(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_STR_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- Ukoa2Tbl_MISC[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Ukoa2Tbl_MISC(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Ukoa2Tbl_MISC(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- AddSTK_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
AddSTK_MSTK(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_AddSTK_MSTK(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- ChanListVV_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ChanListVV_MSTK(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ChanListVV_MSTK(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- Create_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_MSTK(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_MSTK(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_MSTK[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_MSTK(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_MSTK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- DrawProfile_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DrawProfile_MSTK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DrawProfile_MSTK(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- SetYAxisDirection_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetYAxisDirection_MSTK(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetYAxisDirection_MSTK(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- FindSTK2_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FindSTK2_MSTK(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FindSTK2_MSTK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetSTK_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetSTK_MSTK(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetSTK_MSTK(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- IDelete_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDelete_MSTK(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDelete_MSTK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IFindSTK_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IFindSTK_MSTK(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR,
              GX_VAR   GX_STR_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IFindSTK_MSTK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- iGetNumSTK_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetNumSTK_MSTK(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetNumSTK_MSTK(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- ReadINI_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ReadINI_MSTK(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ReadINI_MSTK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- SaveProfile_MSTK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveProfile_MSTK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveProfile_MSTK(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- AxisX_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AxisX_MVG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AxisX_MVG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- AxisY_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AxisY_MVG(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AxisY_MVG(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- Create_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_MVG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_MVG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- Destroy_MVG[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_MVG(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_MVG(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetMVIEW_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
GetMVIEW_MVG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_GetMVIEW_MVG(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- Grid_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Grid_MVG(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Grid_MVG(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- LabelX_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LabelX_MVG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LabelX_MVG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- LabelY_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LabelY_MVG(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LabelY_MVG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- PolyLineVA_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyLineVA_MVG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyLineVA_MVG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- PolyLineVV_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyLineVV_MVG(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyLineVV_MVG(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- RescaleXRange_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RescaleXRange_MVG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RescaleXRange_MVG(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- RescaleYRange_MVG[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RescaleYRange_MVG(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RescaleYRange_MVG(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- Render_PDF3D[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Render_PDF3D(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Render_PDF3D(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- RenderToPage_PDF3D[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RenderToPage_PDF3D(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RenderToPage_PDF3D(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- Export2D_PDF3D[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Export2D_PDF3D(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Export2D_PDF3D(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- AddPager_PGEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddPager_PGEXP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddPager_PGEXP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- Create_PGEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_PGEXP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_PGEXP(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_PGEXP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_PGEXP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_PGEXP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- DoFormula_PGEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DoFormula_PGEXP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DoFormula_PGEXP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Bool_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Bool_PGU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Bool_PGU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- Expand_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Expand_PGU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Expand_PGU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Fill_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Fill_PGU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_LONG_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Fill_PGU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- FillValue_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FillValue_PGU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FillValue_PGU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- FiltSym_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FiltSym_PGU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FiltSym_PGU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- FiltSym5_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FiltSym5_PGU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FiltSym5_PGU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GridPeak_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GridPeak_PGU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GridPeak_PGU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- IDWGriddingDAT_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDWGriddingDAT_PGU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDWGriddingDAT_PGU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- IDWGriddingDAT3D_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDWGriddingDAT3D_PGU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDWGriddingDAT3D_PGU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- IDWGriddingDB_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDWGriddingDB_PGU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDWGriddingDB_PGU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- IDWGriddingDB3D_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDWGriddingDB3D_PGU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDWGriddingDB3D_PGU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- IDWGriddingVV_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IDWGriddingVV_PGU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IDWGriddingVV_PGU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- NumericToThematic_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NumericToThematic_PGU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NumericToThematic_PGU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- Peakedness_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Peakedness_PGU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Peakedness_PGU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- PeakednessGrid_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PeakednessGrid_PGU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PeakednessGrid_PGU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- RefFile_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RefFile_PGU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RefFile_PGU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- SaveFile_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SaveFile_PGU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SaveFile_PGU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ThematicToNumeric_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ThematicToNumeric_PGU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ThematicToNumeric_PGU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- Trend_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Trend_PGU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Trend_PGU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);

/*---------------- AddScalar_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddScalar_PGU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddScalar_PGU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- MultiplyScalar_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MultiplyScalar_PGU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MultiplyScalar_PGU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR);

/*---------------- CorrelationMatrix_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CorrelationMatrix_PGU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CorrelationMatrix_PGU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- CorrelationMatrix2_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CorrelationMatrix2_PGU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CorrelationMatrix2_PGU(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- InvertMatrix_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InvertMatrix_PGU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InvertMatrix_PGU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- Jacobi_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Jacobi_PGU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Jacobi_PGU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- LUBackSub_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LUBackSub_PGU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LUBackSub_PGU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- LUDecomp_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LUDecomp_PGU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LUDecomp_PGU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- MatrixMult_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MatrixMult_PGU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MatrixMult_PGU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- MatrixVectorMult_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MatrixVectorMult_PGU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MatrixVectorMult_PGU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- SVDecompose_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SVDecompose_PGU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SVDecompose_PGU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- SVRecompose_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SVRecompose_PGU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SVRecompose_PGU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- PCCommunality_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PCCommunality_PGU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PCCommunality_PGU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- PCLoadings_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PCLoadings_PGU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PCLoadings_PGU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- PCLoadings2_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PCLoadings2_PGU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PCLoadings2_PGU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- PCScores_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PCScores_PGU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PCScores_PGU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- PCStandardize_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PCStandardize_PGU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PCStandardize_PGU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- PCStandardize2_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PCStandardize2_PGU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PCStandardize2_PGU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- PCTransform_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PCTransform_PGU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PCTransform_PGU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- PCVarimax_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PCVarimax_PGU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PCVarimax_PGU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- rMaximumTerrainSteepness_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_DOUBLE GX_WRAPPER_CALL
rMaximumTerrainSteepness_PGU(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_DOUBLE GX_STANDARD_CALL
Std_rMaximumTerrainSteepness_PGU(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_LONG_PTR);

/*---------------- DirectGriddingDB_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DirectGriddingDB_PGU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DirectGriddingDB_PGU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- DirectGriddingDB3D_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DirectGriddingDB3D_PGU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DirectGriddingDB3D_PGU(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_DOUBLE_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- DirectGriddingVV_PGU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DirectGriddingVV_PGU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DirectGriddingVV_PGU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- iLaunch_PRAGA3[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLaunch_PRAGA3(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLaunch_PRAGA3(GX_VAR   GX_OBJECT_PTR);

/*---------------- DropMapClipData_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_DropMapClipData_PROJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_DropMapClipData_PROJ(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_LONG_PTR);

/*---------------- iAddDocument_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iAddDocument_PROJ(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iAddDocument_PROJ(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iAddDocumentWithoutOpening_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iAddDocumentWithoutOpening_PROJ(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iAddDocumentWithoutOpening_PROJ(GX_VAR   GX_OBJECT_PTR,
                                        GX_CONST GX_STR_PTR,
                                        GX_CONST GX_STR_PTR);

/*---------------- iGetCommandEnvironment_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iGetCommandEnvironment_PROJ(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iGetCommandEnvironment_PROJ(GX_VAR   GX_OBJECT_PTR);

/*---------------- iListDocuments_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iListDocuments_PROJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iListDocuments_PROJ(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR);

/*---------------- iListLoadedDocuments_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iListLoadedDocuments_PROJ(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iListLoadedDocuments_PROJ(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_STR_PTR);

/*---------------- ICurrentDocument_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ICurrentDocument_PROJ(GX_VAR   GX_OBJECT_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_VAR   GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ICurrentDocument_PROJ(GX_VAR   GX_OBJECT_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR,
                              GX_VAR   GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- ICurrentDocumentOfType_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_ICurrentDocumentOfType_PROJ(GX_VAR   GX_OBJECT_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_ICurrentDocumentOfType_PROJ(GX_VAR   GX_OBJECT_PTR,
                                    GX_VAR   GX_STR_PTR,
                                    GX_CONST GX_LONG_PTR,
                                    GX_CONST GX_STR_PTR);

/*---------------- iListTools_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iListTools_PROJ(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iListTools_PROJ(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- iRemoveDocument_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iRemoveDocument_PROJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iRemoveDocument_PROJ(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR);

/*---------------- iRemoveTool_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iRemoveTool_PROJ(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iRemoveTool_PROJ(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- iSaveCloseDocuments_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_iSaveCloseDocuments_PROJ(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_iSaveCloseDocuments_PROJ(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- IGetName_PROJ[_public_app] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
App_IGetName_PROJ(GX_VAR   GX_OBJECT_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_App_IGetName_PROJ(GX_VAR   GX_OBJECT_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- _Clear_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
_Clear_RGRD(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std__Clear_RGRD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Create_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_RGRD(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_RGRD(GX_VAR   GX_OBJECT_PTR);

/*---------------- CreateIMG_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateIMG_RGRD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateIMG_RGRD(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- Destroy_RGRD[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_RGRD(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_RGRD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iDefault_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDefault_RGRD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_STR_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDefault_RGRD(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iLoadParms_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLoadParms_RGRD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLoadParms_RGRD(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- iRun_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRun_RGRD(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRun_RGRD(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- iRun2_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iRun2_RGRD(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iRun2_RGRD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- iSaveParms_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSaveParms_RGRD(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSaveParms_RGRD(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- RunVV_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RunVV_RGRD(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RunVV_RGRD(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);

/*---------------- RunList_RGRD[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RunList_RGRD(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RunList_RGRD(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);

/*---------------- ApplyFilterToMask_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ApplyFilterToMask_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ApplyFilterToMask_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_LONG_PTR);

/*---------------- ConvertDummies_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ConvertDummies_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ConvertDummies_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_LONG_PTR);

/*---------------- CreateGroups_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CreateGroups_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CreateGroups_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_STR_PTR);

/*---------------- DefaultGroups_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DefaultGroups_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DefaultGroups_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- EditMapPlotParameters_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EditMapPlotParameters_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EditMapPlotParameters_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_STR_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_STR_PTR);

/*---------------- EditPlotComponents_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EditPlotComponents_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EditPlotComponents_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- EditPlotParameters_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EditPlotParameters_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EditPlotParameters_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_STR_PTR);

/*---------------- ExportOverlay_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportOverlay_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportOverlay_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- ExportView_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportView_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportView_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR);

/*---------------- ExportView2_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportView2_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportView2_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- FilterLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FilterLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FilterLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- FilterMineralPosData_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FilterMineralPosData_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FilterMineralPosData_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_LONG_PTR);

/*---------------- GetAssociatedLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetAssociatedLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetAssociatedLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_LONG_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- GetCurrentMineralLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetCurrentMineralLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetCurrentMineralLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetCurrentPositionLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetCurrentPositionLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetCurrentPositionLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                  GX_CONST GX_HANDLE_PTR,
                                  GX_CONST GX_HANDLE_PTR);

/*---------------- GetFullMineralLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetFullMineralLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetFullMineralLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR);

/*---------------- GetFullPositionLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetFullPositionLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetFullPositionLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- GetGroupingLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetGroupingLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetGroupingLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);

/*---------------- iCreateASCIITemplate_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCreateASCIITemplate_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCreateASCIITemplate_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- iCreateDatabaseTemplate_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCreateDatabaseTemplate_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCreateDatabaseTemplate_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR);

/*---------------- iEditFilter_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iEditFilter_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iEditFilter_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- IGetMineralChannelName_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetMineralChannelName_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetMineralChannelName_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_HANDLE_PTR,
                                   GX_VAR   GX_STR_PTR,
                                   GX_CONST GX_LONG_PTR);

/*---------------- IImportAsciiWizard_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IImportAsciiWizard_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_CONST GX_STR_PTR,
                           GX_VAR   GX_STR_PTR,
                           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IImportAsciiWizard_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_CONST GX_STR_PTR,
                               GX_VAR   GX_STR_PTR,
                               GX_CONST GX_LONG_PTR);

/*---------------- IImportDatabaseODBC_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IImportDatabaseODBC_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IImportDatabaseODBC_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR,
                                GX_VAR   GX_STR_PTR,
                                GX_CONST GX_LONG_PTR);

/*---------------- ImportBIN_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportBIN_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportBIN_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- ImportDatabaseADO_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ImportDatabaseADO_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ImportDatabaseADO_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_STR_PTR,
                              GX_CONST GX_STR_PTR);

/*---------------- InitGroupSymbolsUsed_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InitGroupSymbolsUsed_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InitGroupSymbolsUsed_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_HANDLE_PTR);

/*---------------- iTemplateType_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTemplateType_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTemplateType_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- iViewType_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iViewType_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iViewType_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- MineralID_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MineralID_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MineralID_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- NewFilter_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NewFilter_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NewFilter_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- NewTemplate_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NewTemplate_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NewTemplate_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- OverlayLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OverlayLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OverlayLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- Plot_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Plot_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Plot_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- PlotSymbolLegend_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PlotSymbolLegend_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PlotSymbolLegend_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_HANDLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR,
                             GX_CONST GX_DOUBLE_PTR);

/*---------------- PropSymb_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PropSymb_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PropSymb_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- Replot_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Replot_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Replot_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- RePlotSymbolLegend_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RePlotSymbolLegend_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                           GX_CONST GX_HANDLE_PTR,
                           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RePlotSymbolLegend_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                               GX_CONST GX_HANDLE_PTR,
                               GX_CONST GX_HANDLE_PTR);

/*---------------- ResetGroups_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ResetGroups_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ResetGroups_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- ResetUsedChannel_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ResetUsedChannel_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ResetUsedChannel_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_HANDLE_PTR);

/*---------------- SelectPoly_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SelectPoly_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SelectPoly_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_STR_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- SetChannelOrder_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChannelOrder_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChannelOrder_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- SetChannelUnits_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetChannelUnits_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetChannelUnits_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR);

/*---------------- SetITR_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetITR_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetITR_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- SetMask_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetMask_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetMask_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SortData_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SortData_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SortData_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- TemplateLST_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TemplateLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TemplateLST_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- TileWindows_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TileWindows_SEMPLOT(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TileWindows_SEMPLOT(GX_VAR   GX_OBJECT_PTR);

/*---------------- TotalOxides_SEMPLOT[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TotalOxides_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TotalOxides_SEMPLOT(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR);

/*---------------- AppendItem_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AppendItem_SHP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AppendItem_SHP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- Create_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_SHP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_STR_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_SHP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Destroy_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_SHP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_SHP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- iAddIntField_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddIntField_SHP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddIntField_SHP(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- iAddRealField_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddRealField_SHP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddRealField_SHP(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- iAddStringField_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAddStringField_SHP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAddStringField_SHP(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- iFindField_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindField_SHP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindField_SHP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- iMaxIDNum_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iMaxIDNum_SHP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iMaxIDNum_SHP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iNumFields_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumFields_SHP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumFields_SHP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iNumRecords_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNumRecords_SHP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNumRecords_SHP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- iType_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iType_SHP(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iType_SHP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Open_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Open_SHP(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Open_SHP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_STR_PTR);

/*---------------- SetArc_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetArc_SHP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetArc_SHP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetArcZ_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetArcZ_SHP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetArcZ_SHP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- SetInt_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetInt_SHP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetInt_SHP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- SetIPJ_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_SHP(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_SHP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetPoint_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPoint_SHP(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPoint_SHP(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- SetPointZ_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPointZ_SHP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPointZ_SHP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- SetPolygon_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPolygon_SHP(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPolygon_SHP(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- SetPolygonZ_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetPolygonZ_SHP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetPolygonZ_SHP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SetReal_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetReal_SHP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetReal_SHP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- SetString_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetString_SHP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetString_SHP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- WriteItem_SHP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WriteItem_SHP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WriteItem_SHP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- iAttachMDF_SQLSRV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iAttachMDF_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iAttachMDF_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR);

/*---------------- iDetachDB_SQLSRV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDetachDB_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDetachDB_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- iGetDatabaseLanguagesLST_SQLSRV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetDatabaseLanguagesLST_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                                GX_CONST GX_HANDLE_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_STR_PTR,
                                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetDatabaseLanguagesLST_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                                    GX_CONST GX_HANDLE_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_STR_PTR,
                                    GX_CONST GX_LONG_PTR);

/*---------------- iGetDatabasesLST_SQLSRV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetDatabasesLST_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetDatabasesLST_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR);

/*---------------- IGetLoginGUI_SQLSRV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetLoginGUI_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetLoginGUI_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_LONG_PTR);

/*---------------- iGetServersLST_SQLSRV[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetServersLST_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetServersLST_SQLSRV(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR);

/*---------------- GetTransParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTransParms_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTransParms_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iGetAxisFormat_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetAxisFormat_STK(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetAxisFormat_STK(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- IGetAxisParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetAxisParms_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetAxisParms_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- IGetFidParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetFidParms_STK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetFidParms_STK(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- iGetFlag_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iGetFlag_STK(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iGetFlag_STK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- IGetGenParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetGenParms_STK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR,
                 GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetGenParms_STK(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR,
                     GX_VAR   GX_DOUBLE_PTR);

/*---------------- IGetGridParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetGridParms_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetGridParms_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- IGetLabelParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetLabelParms_STK(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetLabelParms_STK(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- IGetProfile_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetProfile_STK(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetProfile_STK(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_LONG_PTR);

/*---------------- IGetProfileEx_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetProfileEx_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetProfileEx_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR);

/*---------------- IGetSymbParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetSymbParms_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetSymbParms_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_VAR   GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_DOUBLE_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- IGetTitleParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IGetTitleParms_STK(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_IGetTitleParms_STK(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_STR_PTR,
                       GX_CONST GX_LONG_PTR,
                       GX_CONST GX_LONG_PTR);

/*---------------- ISetFlag_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ISetFlag_STK(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ISetFlag_STK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- SetArrayColors_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetArrayColors_STK(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetArrayColors_STK(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- SetAxisFormat_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAxisFormat_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAxisFormat_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetAxisParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetAxisParms_STK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetAxisParms_STK(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SetFidParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetFidParms_STK(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetFidParms_STK(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_STR_PTR);

/*---------------- SetGenParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGenParms_STK(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGenParms_STK(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- SetGridParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetGridParms_STK(GX_VAR   GX_OBJECT_PTR,
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
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetGridParms_STK(GX_VAR   GX_OBJECT_PTR,
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
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SetLabelParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLabelParms_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLabelParms_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetLineParm_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetLineParm_STK(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetLineParm_STK(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- SetProfile_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetProfile_STK(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetProfile_STK(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- SetProfileEx_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetProfileEx_STK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetProfileEx_STK(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SetSymbParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetSymbParms_STK(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetSymbParms_STK(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- SetTitleParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetTitleParms_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetTitleParms_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetTransParms_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetTransParms_STK(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetTransParms_STK(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- SetVAIndexStart_STK[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetVAIndexStart_STK(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetVAIndexStart_STK(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- LaunchDigitizationUI_STRINGS[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LaunchDigitizationUI_STRINGS(GX_VAR   GX_OBJECT_PTR,
                             GX_CONST GX_STR_PTR,
                             GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LaunchDigitizationUI_STRINGS(GX_VAR   GX_OBJECT_PTR,
                                 GX_CONST GX_STR_PTR,
                                 GX_CONST GX_STR_PTR);

/*---------------- Create_TC[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_TC(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_DOUBLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_TC(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- CreateEx_TC[_extended] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateEx_TC(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateEx_TC(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Destroy_TC[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_TC(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_TC(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- Grregter_TC[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Grregter_TC(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Grregter_TC(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Grterain_TC[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Grterain_TC(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Grterain_TC(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- Grterain2_TC[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Grterain2_TC(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Grterain2_TC(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- GGterain_TC[_extended] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GGterain_TC(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GGterain_TC(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- EnableDisableArcEngineLicense_TEST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
EnableDisableArcEngineLicense_TEST(GX_VAR   GX_OBJECT_PTR,
                                   GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_EnableDisableArcEngineLicense_TEST(GX_VAR   GX_OBJECT_PTR,
                                       GX_CONST GX_LONG_PTR);

/*---------------- iArcEngineLicense_TEST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iArcEngineLicense_TEST(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iArcEngineLicense_TEST(GX_VAR   GX_OBJECT_PTR);

/*---------------- iTestMode_TEST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTestMode_TEST(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTestMode_TEST(GX_VAR   GX_OBJECT_PTR);

/*---------------- WrapperTest_TEST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
WrapperTest_TEST(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_WrapperTest_TEST(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_STR_PTR);

/*---------------- CoreClass_TEST[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
CoreClass_TEST(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_STR_PTR,
               GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_CoreClass_TEST(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_STR_PTR,
                   GX_CONST GX_STR_PTR);

/*---------------- Copy_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Copy_TIN(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Copy_TIN(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- Create_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_TIN(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_TIN(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- CreateS_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
CreateS_TIN(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_CreateS_TIN(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- Destroy_TIN[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_TIN(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_TIN(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- ExportXML_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExportXML_TIN(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_STR_PTR,
              GX_VAR   GX_LONG_PTR,
              GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExportXML_TIN(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_STR_PTR,
                  GX_VAR   GX_LONG_PTR,
                  GX_CONST GX_STR_PTR);

/*---------------- GetConvexHull_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetConvexHull_TIN(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetConvexHull_TIN(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- GetIPJ_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetIPJ_TIN(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetIPJ_TIN(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetJoins_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetJoins_TIN(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetJoins_TIN(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetMesh_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMesh_TIN(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMesh_TIN(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- GetNodes_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetNodes_TIN(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetNodes_TIN(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- GetTriangles_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTriangles_TIN(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTriangles_TIN(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- GetTriangle_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetTriangle_TIN(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetTriangle_TIN(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR,
                    GX_VAR   GX_DOUBLE_PTR);

/*---------------- GetVoronoiEdges_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetVoronoiEdges_TIN(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetVoronoiEdges_TIN(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- iIsZValued_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsZValued_TIN(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsZValued_TIN(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- iLocateTriangle_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iLocateTriangle_TIN(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iLocateTriangle_TIN(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_DOUBLE_PTR,
                        GX_CONST GX_DOUBLE_PTR);

/*---------------- iNodes_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iNodes_TIN(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iNodes_TIN(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- InterpVV_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
InterpVV_TIN(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_InterpVV_TIN(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- iTriangles_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTriangles_TIN(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTriangles_TIN(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- LinearInterpVV_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
LinearInterpVV_TIN(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_LinearInterpVV_TIN(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- NearestVV_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NearestVV_TIN(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NearestVV_TIN(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- RangeXY_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeXY_TIN(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeXY_TIN(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- Serial_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Serial_TIN(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Serial_TIN(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- SetIPJ_TIN[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SetIPJ_TIN(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SetIPJ_TIN(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- GetMaxMin_TRND[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMaxMin_TRND(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMaxMin_TRND(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- GetMesh_TRND[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
GetMesh_TRND(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_STR_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_GetMesh_TRND(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- TrndDB_TRND[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TrndDB_TRND(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TrndDB_TRND(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR);

/*---------------- iIsValidUTF16Char_UNC[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iIsValidUTF16Char_UNC(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iIsValidUTF16Char_UNC(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- iValidSymbol_UNC[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iValidSymbol_UNC(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_STR_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iValidSymbol_UNC(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_STR_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- UTF16ValToSTR_UNC[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UTF16ValToSTR_UNC(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_VAR   GX_STR_PTR,
                  GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UTF16ValToSTR_UNC(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_VAR   GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);

/*---------------- ValidateSymbols_UNC[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ValidateSymbols_UNC(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ValidateSymbols_UNC(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- Prune_VAU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Prune_VAU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Prune_VAU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- TotalVector_VAU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
TotalVector_VAU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_TotalVector_VAU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- AddVV_VVEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AddVV_VVEXP(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AddVV_VVEXP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR);

/*---------------- Create_VVEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_HANDLE GX_WRAPPER_CALL
Create_VVEXP(GX_VAR   GX_OBJECT_PTR);
GX_STANDARD_FUNC GX_HANDLE GX_STANDARD_CALL
Std_Create_VVEXP(GX_VAR   GX_OBJECT_PTR);

/*---------------- Destroy_VVEXP[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Destroy_VVEXP(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Destroy_VVEXP(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- DoFormula_VVEXP[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DoFormula_VVEXP(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DoFormula_VVEXP(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- AverageRepeat_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AverageRepeat_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AverageRepeat_VVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- AverageRepeatEx_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AverageRepeatEx_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AverageRepeatEx_VVU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR);

/*---------------- AverageRepeat2_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AverageRepeat2_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AverageRepeat2_VVU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- AverageRepeat2Ex_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
AverageRepeat2Ex_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_AverageRepeat2Ex_VVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_LONG_PTR);

/*---------------- BinarySearch_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BinarySearch_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_VAR   GX_LONG_PTR,
                 GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BinarySearch_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_VAR   GX_LONG_PTR,
                     GX_VAR   GX_LONG_PTR);

/*---------------- BoxCox_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BoxCox_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BoxCox_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- BPFilt_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
BPFilt_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_BPFilt_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Clip_VVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Clip_VVU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_DOUBLE_PTR,
         GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Clip_VVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);

/*---------------- ClipToDetectLimit_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ClipToDetectLimit_VVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ClipToDetectLimit_VVU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- Decimate_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Decimate_VVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Decimate_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- Deviation_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Deviation_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Deviation_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- Distance_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Distance_VVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Distance_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- DistanceNonCumulative_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DistanceNonCumulative_VVU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR,
                          GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DistanceNonCumulative_VVU(GX_VAR   GX_OBJECT_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_HANDLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR,
                              GX_CONST GX_DOUBLE_PTR);

/*---------------- Distance3D_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Distance3D_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Distance3D_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- FindGaps3D_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FindGaps3D_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FindGaps3D_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR);

/*---------------- DummyRange_VVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DummyRange_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DummyRange_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- DummyRangeEx_VVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DummyRangeEx_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DummyRangeEx_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- DummyRepeat_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DummyRepeat_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DummyRepeat_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- DupStats_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
DupStats_VVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_DupStats_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- ExpDist_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
ExpDist_VVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR,
            GX_CONST GX_DOUBLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_ExpDist_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- Filter_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Filter_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Filter_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- FindStringItems_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FindStringItems_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FindStringItems_VVU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_HANDLE_PTR);

/*---------------- FractalFilter_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
FractalFilter_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_FractalFilter_VVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- iCloseXY_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCloseXY_VVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCloseXY_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_DOUBLE_PTR);

/*---------------- iCloseXYM_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCloseXYM_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCloseXYM_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- iCloseXYZ_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCloseXYZ_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCloseXYZ_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- iCloseXYZM_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iCloseXYZM_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iCloseXYZM_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR);

/*---------------- iDummyBackTracks_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iDummyBackTracks_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iDummyBackTracks_VVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- iFindDummy_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iFindDummy_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iFindDummy_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- Interp_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Interp_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Interp_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- iQCFillGaps_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iQCFillGaps_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iQCFillGaps_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR);

/*---------------- iSearchText_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iSearchText_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_STR_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iSearchText_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_STR_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Mask_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Mask_VVU(GX_VAR   GX_OBJECT_PTR,
         GX_CONST GX_HANDLE_PTR,
         GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Mask_VVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR);

/*---------------- MaskAND_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaskAND_VVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaskAND_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR);

/*---------------- MaskOR_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
MaskOR_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_MaskOR_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- NLFilt_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NLFilt_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NLFilt_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR);

/*---------------- NoiseCheck_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NoiseCheck_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NoiseCheck_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- NoiseCheck2_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NoiseCheck2_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NoiseCheck2_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- NormalDist_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
NormalDist_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_NormalDist_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_LONG_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_LONG_PTR);

/*---------------- OffsetCircles_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OffsetCircles_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OffsetCircles_VVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- OffsetCorrect_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OffsetCorrect_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OffsetCorrect_VVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_HANDLE_PTR);

/*---------------- OffsetCorrect2_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OffsetCorrect2_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OffsetCorrect2_VVU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- OffsetCorrect3_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OffsetCorrect3_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_DOUBLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OffsetCorrect3_VVU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_DOUBLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR);

/*---------------- OffsetCorrectXYZ_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OffsetCorrectXYZ_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OffsetCorrectXYZ_VVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- OffsetRectangles_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
OffsetRectangles_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_DOUBLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_OffsetRectangles_VVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_DOUBLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- PickPeak_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PickPeak_VVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_DOUBLE_PTR,
             GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PickPeak_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_DOUBLE_PTR,
                 GX_CONST GX_LONG_PTR);

/*---------------- PickPeak2_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PickPeak2_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PickPeak2_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- PickPeak3_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PickPeak3_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PickPeak3_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- PolyFill_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyFill_VVU(GX_VAR   GX_OBJECT_PTR,
             GX_CONST GX_HANDLE_PTR,
             GX_CONST GX_LONG_PTR,
             GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyFill_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_HANDLE_PTR);

/*---------------- PolyFill2_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolyFill2_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolyFill2_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR,
                  GX_CONST GX_HANDLE_PTR);

/*---------------- PolygonMask_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
PolygonMask_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_PolygonMask_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- Prune_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Prune_VVU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Prune_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);

/*---------------- QC_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
QC_VVU(GX_VAR   GX_OBJECT_PTR,
       GX_CONST GX_HANDLE_PTR,
       GX_CONST GX_HANDLE_PTR,
       GX_CONST GX_HANDLE_PTR,
       GX_CONST GX_DOUBLE_PTR,
       GX_CONST GX_DOUBLE_PTR,
       GX_CONST GX_DOUBLE_PTR,
       GX_CONST GX_DOUBLE_PTR,
       GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_QC_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR);

/*---------------- RangeVectorMag_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RangeVectorMag_VVU(GX_VAR   GX_OBJECT_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_CONST GX_HANDLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR,
                   GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RangeVectorMag_VVU(GX_VAR   GX_OBJECT_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_CONST GX_HANDLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR,
                       GX_VAR   GX_DOUBLE_PTR);

/*---------------- Regress_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Regress_VVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_VAR   GX_DOUBLE_PTR,
            GX_VAR   GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Regress_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_VAR   GX_DOUBLE_PTR,
                GX_VAR   GX_DOUBLE_PTR);

/*---------------- RelVarDup_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RelVarDup_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_VAR   GX_DOUBLE_PTR,
              GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RelVarDup_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_VAR   GX_DOUBLE_PTR,
                  GX_VAR   GX_LONG_PTR);

/*---------------- RemoveDummy_VVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveDummy_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveDummy_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR);

/*---------------- RemoveDummy2_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveDummy2_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveDummy2_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- RemoveDummy3_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveDummy3_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveDummy3_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- RemoveDummy4_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveDummy4_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveDummy4_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);

/*---------------- RemoveDup_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveDup_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveDup_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_LONG_PTR);

/*---------------- RemoveXYDup_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveXYDup_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveXYDup_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR);

/*---------------- RemoveXYDupIndex_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RemoveXYDupIndex_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RemoveXYDupIndex_VVU(GX_VAR   GX_OBJECT_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR,
                         GX_CONST GX_HANDLE_PTR);

/*---------------- RollingStats_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
RollingStats_VVU(GX_VAR   GX_OBJECT_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_HANDLE_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR,
                 GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_RollingStats_VVU(GX_VAR   GX_OBJECT_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_HANDLE_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR,
                     GX_CONST GX_LONG_PTR);

/*---------------- SearchReplace_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SearchReplace_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SearchReplace_VVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_DOUBLE_PTR,
                      GX_CONST GX_DOUBLE_PTR);

/*---------------- SearchReplaceText_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SearchReplaceText_VVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_LONG_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_STR_PTR,
                      GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SearchReplaceText_VVU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_LONG_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_STR_PTR,
                          GX_CONST GX_LONG_PTR);

/*---------------- SearchReplaceTextEx_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
SearchReplaceTextEx_VVU(GX_VAR   GX_OBJECT_PTR,
                        GX_CONST GX_HANDLE_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_STR_PTR,
                        GX_CONST GX_LONG_PTR,
                        GX_VAR   GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_SearchReplaceTextEx_VVU(GX_VAR   GX_OBJECT_PTR,
                            GX_CONST GX_HANDLE_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_STR_PTR,
                            GX_CONST GX_LONG_PTR,
                            GX_VAR   GX_LONG_PTR);

/*---------------- Spline_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Spline_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_DOUBLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Spline_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_DOUBLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_LONG_PTR);

/*---------------- Spline2_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Spline2_VVU(GX_VAR   GX_OBJECT_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_HANDLE_PTR,
            GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Spline2_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR);

/*---------------- iTokenizeToValues_VVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
iTokenizeToValues_VVU(GX_VAR   GX_OBJECT_PTR,
                      GX_CONST GX_HANDLE_PTR,
                      GX_CONST GX_STR_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_iTokenizeToValues_VVU(GX_VAR   GX_OBJECT_PTR,
                          GX_CONST GX_HANDLE_PTR,
                          GX_CONST GX_STR_PTR);

/*---------------- Translate_VVU[_public] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Translate_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_DOUBLE_PTR,
              GX_CONST GX_DOUBLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Translate_VVU(GX_VAR   GX_OBJECT_PTR,
                  GX_CONST GX_HANDLE_PTR,
                  GX_CONST GX_DOUBLE_PTR,
                  GX_CONST GX_DOUBLE_PTR);

/*---------------- Trend_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Trend_VVU(GX_VAR   GX_OBJECT_PTR,
          GX_CONST GX_HANDLE_PTR,
          GX_CONST GX_LONG_PTR,
          GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Trend_VVU(GX_VAR   GX_OBJECT_PTR,
              GX_CONST GX_HANDLE_PTR,
              GX_CONST GX_LONG_PTR,
              GX_CONST GX_HANDLE_PTR);

/*---------------- Trend2_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
Trend2_VVU(GX_VAR   GX_OBJECT_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_HANDLE_PTR,
           GX_CONST GX_LONG_PTR,
           GX_CONST GX_HANDLE_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_Trend2_VVU(GX_VAR   GX_OBJECT_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_HANDLE_PTR,
               GX_CONST GX_LONG_PTR,
               GX_CONST GX_HANDLE_PTR);

/*---------------- UniformDist_VVU[_licensed] ----------------*/

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
UniformDist_VVU(GX_VAR   GX_OBJECT_PTR,
                GX_CONST GX_HANDLE_PTR,
                GX_CONST GX_LONG_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_DOUBLE_PTR,
                GX_CONST GX_LONG_PTR);
GX_STANDARD_FUNC GX_LONG GX_STANDARD_CALL
Std_UniformDist_VVU(GX_VAR   GX_OBJECT_PTR,
                    GX_CONST GX_HANDLE_PTR,
                    GX_CONST GX_LONG_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_DOUBLE_PTR,
                    GX_CONST GX_LONG_PTR);

//*** endblock WapperDeclare

//*** block Footer
//** NOTICE: Do not edit anything here, it is generated code

#ifdef __cplusplus
   }
#endif

//*** endblock Footer