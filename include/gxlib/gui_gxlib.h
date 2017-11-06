//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file gui_gxlib.h
* @date 2017-11-06
* @brief File containing GUI GX C API constant and function declarations
*/

/**
* @defgroup GUI_Module GUI
* These are graphical functions that typically create a
* dialog-style window for a specific function. Examples include
* file import wizards, and the Histogram and Scatter tools.
* @{
*/

#pragma once
#ifndef HGUI_H_DEFINED
#define HGUI_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name AOI_RETURN_STATE Definitions
* 
* AOI query return state
*/
///@{
/** 
* AOI_RETURN_CANCEL
* 
* User canceled
*/
#define AOI_RETURN_CANCEL -1
/** 
* AOI_RETURN_NODEFINE
* 
* User chose to continue with no AOI defined or available
*/
#define AOI_RETURN_NODEFINE 0
/** 
* AOI_RETURN_DEFINE
* 
* User chose to continue and defined valid AOI parameters
*/
#define AOI_RETURN_DEFINE 1
///@}

/**
* @name COORDSYS_MODE Definitions
* 
* Coordinate system wizard IPJ types allowed on return.
* The wizard present three types of projections for selection
* by the user, Geographic (GCS), Projected (PCS), and Unknown.
* (Unknown requires only that the units be defined.)
* The Editable flag must be Yes for this option to take affect,
* and is overridden internally if the user's license does not
* allow modification of projections (e.g. the OM Viewer).
*/
///@{
/** 
* COORDSYS_MODE_ALL
* 
* Allow Geographic (GCS), Projected (PCS), and Unknown
*/
#define COORDSYS_MODE_ALL 0
/** 
* COORDSYS_MODE_GCS
* 
* Allow only Geographic (GCS)
*/
#define COORDSYS_MODE_GCS 1
/** 
* COORDSYS_MODE_PCS
* 
* Allow only Projected (PCS)
*/
#define COORDSYS_MODE_PCS 2
/** 
* COORDSYS_MODE_GCS_PCS
* 
* Allow only Geographic (GCS) and Projected (PCS)
*/
#define COORDSYS_MODE_GCS_PCS 3
/** 
* COORDSYS_MODE_PCS_UNKNOWN
* 
* Allow only Projected (PCS), or Unknown
*/
#define COORDSYS_MODE_PCS_UNKNOWN 4
///@}

/**
* @name DAT_TYPE Definitions
* 
* Type of files (grids, images) to support
*/
///@{
/** 
* DAT_TYPE_GRID
* 
* Display only grid formats
*/
#define DAT_TYPE_GRID 0
/** 
* DAT_TYPE_IMAGE
* 
* Display only image formats
*/
#define DAT_TYPE_IMAGE 1
/** 
* DAT_TYPE_GRID_AND_IMAGE
* 
* Displays both grids and image formats
*/
#define DAT_TYPE_GRID_AND_IMAGE 2
///@}

/**
* @name FILE_FILTER Definitions
* 
* File filters
*/
///@{
/** 
* FILE_FILTER_ALL
* 
* All files              *.*                  ANYWHERE
*/
#define FILE_FILTER_ALL 1
/** 
* FILE_FILTER_GDB
* 
* Geosoft Database       *.gdb                LOCAL
*/
#define FILE_FILTER_GDB 2
/** 
* FILE_FILTER_GX
* 
* Geosoft Executable     *.gx                 GEOSOFT
*/
#define FILE_FILTER_GX 3
/** 
* FILE_FILTER_GS
* 
* Geosoft Script         *.gs                 BOTH
*/
#define FILE_FILTER_GS 4
/** 
* FILE_FILTER_INI
* 
* Parameter files        *.ini                GEOSOFT
*/
#define FILE_FILTER_INI 5
/** 
* FILE_FILTER_OMN
* 
* Oasis Menu files       *.omn                GEOSOFT
*/
#define FILE_FILTER_OMN 6
/** 
* FILE_FILTER_VU
* 
* Oasis View files       *.vu                 LOCAL
*/
#define FILE_FILTER_VU 7
/** 
* FILE_FILTER_MAP
* 
* Oasis Map files        *.map                LOCAL
*/
#define FILE_FILTER_MAP 8
/** 
* FILE_FILTER_PRJ
* 
* Projection file        *.prj                LOCAL
*/
#define FILE_FILTER_PRJ 9
/** 
* FILE_FILTER_CON
* 
* Configuration file     *.con                LOCAL
*/
#define FILE_FILTER_CON 10
/** 
* FILE_FILTER_MNU
* 
* Sushi MNU files        *.mnu                GEOSOFT
*/
#define FILE_FILTER_MNU 11
/** 
* FILE_FILTER_PDF
* 
* PDF files              *.pdf                GEOSOFT
*/
#define FILE_FILTER_PDF 12
/** 
* FILE_FILTER_PLT
* 
* Geosoft PLT files      *.plt                LOCAL
*/
#define FILE_FILTER_PLT 13
/** 
* FILE_FILTER_GWS
* 
* Geosoft workspace      *.gws                LOCAL
*/
#define FILE_FILTER_GWS 14
/** 
* FILE_FILTER_AGG
* 
* Aggregate              *.agg                LOCAL
*/
#define FILE_FILTER_AGG 15
/** 
* FILE_FILTER_TBL
* 
* Color table            *.tbl                GEOSOFT
*/
#define FILE_FILTER_TBL 16
/** 
* FILE_FILTER_ZON
* 
* Zone                   *.zon                LOCAL
*/
#define FILE_FILTER_ZON 17
/** 
* FILE_FILTER_ITR
* 
* Image transform        *.itr                LOCAL
*/
#define FILE_FILTER_ITR 18
/** 
* FILE_FILTER_DXF
* 
* AutoCAD DXF files      *.dxf                LOCAL
*/
#define FILE_FILTER_DXF 19
/** 
* FILE_FILTER_TIF
* 
* TIFF files             *.tif                LOCAL
*/
#define FILE_FILTER_TIF 20
/** 
* FILE_FILTER_EMF
* 
* Enhanced Metafies      *.emf                LOCAL
*/
#define FILE_FILTER_EMF 21
/** 
* FILE_FILTER_BMP
* 
* Bitmap files           *.bmp                LOCAL
*/
#define FILE_FILTER_BMP 22
/** 
* FILE_FILTER_LUT
* 
* ER Mapper LUT          *.lut                GEOSOFT
*/
#define FILE_FILTER_LUT 23
/** 
* FILE_FILTER_PNG
* 
* PNG files              *.png                LOCAL
*/
#define FILE_FILTER_PNG 24
/** 
* FILE_FILTER_JPG
* 
* JPG files              *.jpg                LOCAL
*/
#define FILE_FILTER_JPG 25
/** 
* FILE_FILTER_PCX
* 
* PCX files              *.pcx                LOCAL
*/
#define FILE_FILTER_PCX 26
/** 
* FILE_FILTER_GIF
* 
* GIF files              *.gif                LOCAL
*/
#define FILE_FILTER_GIF 27
/** 
* FILE_FILTER_GRD
* 
* GRD files              *.grd                LOCAL
*/
#define FILE_FILTER_GRD 28
/** 
* FILE_FILTER_ERS
* 
* ERS files              *.ers                LOCAL
*/
#define FILE_FILTER_ERS 29
/** 
* FILE_FILTER_EPS
* 
* EPS files              *.eps                LOCAL
*/
#define FILE_FILTER_EPS 30
/** 
* FILE_FILTER_SHP
* 
* ArcView Shape files    *.shp                LOCAL
*/
#define FILE_FILTER_SHP 31
/** 
* FILE_FILTER_CGM
* 
* CGM files              *.cgm                LOCAL
*/
#define FILE_FILTER_CGM 32
/** 
* FILE_FILTER_TAB
* 
* MapInfo Tab files      *.tab                LOCAL
*/
#define FILE_FILTER_TAB 33
/** 
* FILE_FILTER_COMPS
* 
* Software Components    Components           LOCAL
*/
#define FILE_FILTER_COMPS 34
/** 
* FILE_FILTER_CSV
* 
* MapInfo Tab files      *.tab                LOCAL
*/
#define FILE_FILTER_CSV 35
/** 
* FILE_FILTER_GPF
* 
* Geosoft Project        *.gpf                LOCAL
*/
#define FILE_FILTER_GPF 36
/** 
* FILE_FILTER_PLY
* 
* Geosoft Polygons       *.ply                LOCAL
*/
#define FILE_FILTER_PLY 37
/** 
* FILE_FILTER_STM
* 
* Scatter templates      *.stm                LOCAL
*/
#define FILE_FILTER_STM 38
/** 
* FILE_FILTER_TTM
* 
* Triplot templates      *.ttm                LOCAL
*/
#define FILE_FILTER_TTM 39
/** 
* FILE_FILTER_XYZ
* 
* Geosoft XYZ files      *.xyz                LOCAL
*/
#define FILE_FILTER_XYZ 40
/** 
* FILE_FILTER_BAR
* 
* Geosoft Bar file       *.geobar             LOCAL
*/
#define FILE_FILTER_BAR 41
/** 
* FILE_FILTER_GEOSOFT_LICENSE
* 
* Geosoft License files   *.geosoft_license   LOCAL
*/
#define FILE_FILTER_GEOSOFT_LICENSE 42
/** 
* FILE_FILTER_XML
* 
* XML files              *.xml                LOCAL
*/
#define FILE_FILTER_XML 43
/** 
* FILE_FILTER_GXNET
* 
* GX.NET files           *.dll                GEOSOFT
*/
#define FILE_FILTER_GXNET 44
/** 
* FILE_FILTER_ECW
* 
* ECW files              *.ecw                LOCAL
*/
#define FILE_FILTER_ECW 45
/** 
* FILE_FILTER_J2K
* 
* J2K JPEG 2000 files    *.j2k                LOCAL
*/
#define FILE_FILTER_J2K 46
/** 
* FILE_FILTER_JP2
* 
* JP2 JPEG 2000 files    *.jp2                LOCAL
*/
#define FILE_FILTER_JP2 47
/** 
* FILE_FILTER_SEL
* 
* acQuire parameters     *.sel                LOCAL
*/
#define FILE_FILTER_SEL 48
/** 
* FILE_FILTER_SVG
* 
* SVG file               *.svg                LOCAL
*/
#define FILE_FILTER_SVG 49
/** 
* FILE_FILTER_SVZ
* 
* SVG Compressed file    *.svz                LOCAL
*/
#define FILE_FILTER_SVZ 50
/** 
* FILE_FILTER_WRP
* 
* Warp file              *.wrp                LOCAL
*/
#define FILE_FILTER_WRP 51
/** 
* FILE_FILTER_MAPPLOT
* 
* MAPPLOT file           *.con                LOCAL
*/
#define FILE_FILTER_MAPPLOT 52
/** 
* FILE_FILTER_DTM
* 
* Surpac DTM files       *.dtm                LOCAL
*/
#define FILE_FILTER_DTM 53
/** 
* FILE_FILTER_VOXEL
* 
* Geosoft Voxel          *.geosoft_voxel      LOCAL
*/
#define FILE_FILTER_VOXEL 54
/** 
* FILE_FILTER_MAPTEMPLATE
* 
* Map Template file      *.geosoft_maptemplate      LOCAL
*/
#define FILE_FILTER_MAPTEMPLATE 55
/** 
* FILE_FILTER_ACTION
* 
* Action Scripts         *.action             LOCAL
*/
#define FILE_FILTER_ACTION 56
/** 
* FILE_FILTER_DM
* 
* Datamine files         *.dm                 LOCAL
*/
#define FILE_FILTER_DM 57
/** 
* FILE_FILTER_KML
* 
* Google Earth KML       *.kml                LOCAL
*/
#define FILE_FILTER_KML 58
/** 
* FILE_FILTER_KMZ
* 
* Google Earth Compressed KML  *.kmz          LOCAL
*/
#define FILE_FILTER_KMZ 59
/** 
* FILE_FILTER_TARGET_PLAN
* 
* Target parameter ini file for plans      *.inp    LOCAL
*/
#define FILE_FILTER_TARGET_PLAN 60
/** 
* FILE_FILTER_TARGET_SECTION
* 
* Target parameter ini file for sections   *.ins    LOCAL
*/
#define FILE_FILTER_TARGET_SECTION 61
/** 
* FILE_FILTER_TARGET_STRIPLOG
* 
* Target parameter ini file for strip logs *.inl    LOCAL
*/
#define FILE_FILTER_TARGET_STRIPLOG 62
/** 
* FILE_FILTER_TARGET_3D
* 
* Target parameter ini file for 3D plots   *.in3    LOCAL
*/
#define FILE_FILTER_TARGET_3D 63
/** 
* FILE_FILTER_ARGIS_LYR
* 
* ArcGIS Layer files			 *.lyr    LOCAL
*/
#define FILE_FILTER_ARGIS_LYR 64
/** 
* FILE_FILTER_ARGIS_MXD
* 
* ArcGIS Map Document files	 *.mxd    LOCAL
*/
#define FILE_FILTER_ARGIS_MXD 65
/** 
* FILE_FILTER_GOCAD_TS
* 
* GOCAD TSurf files			 *.ts     LOCAL
*/
#define FILE_FILTER_GOCAD_TS 66
/** 
* FILE_FILTER_LST
* 
* Geosoft list of items: names, values  *.lst     LOCAL
*/
#define FILE_FILTER_LST 67
/** 
* FILE_FILTER_ECS
* 
* GM-SYS external coordinate system     *.ecs     LOCAL
*/
#define FILE_FILTER_ECS 68
/** 
* FILE_FILTER_TARGET_FENCE
* 
* Target parameter ini file for fence sections   *.ins    LOCAL
*/
#define FILE_FILTER_TARGET_FENCE 69
/** 
* FILE_FILTER_GMS3D
* 
* GM-SYS 3D model   *.geosoft_gmsys3d    LOCAL
*/
#define FILE_FILTER_GMS3D 70
/** 
* FILE_FILTER_BT2
* 
* GEMCOM BT2 *.bt2 LOCAL
*/
#define FILE_FILTER_BT2 71
/** 
* FILE_FILTER_BPR
* 
* GEMCOM BPR *.bpr LOCAL
*/
#define FILE_FILTER_BPR 72
/** 
* FILE_FILTER_BPR2
* 
* GEMCOM BPR2 *.bpr2 LOCAL
*/
#define FILE_FILTER_BPR2 73
/** 
* FILE_FILTER_XLS
* 
* Excel 97-2003 workbook		*.xls					LOCAL
*/
#define FILE_FILTER_XLS 74
/** 
* FILE_FILTER_XLSX
* 
* Excel 2007 workbook 			*.xlsx				LOCAL
*/
#define FILE_FILTER_XLSX 75
/** 
* FILE_FILTER_MDB
* 
* Access 97-2003  				*.mdb 				LOCAL
*/
#define FILE_FILTER_MDB 76
/** 
* FILE_FILTER_ACCDB
* 
* Access 2007 					*.accdb 				LOCAL
*/
#define FILE_FILTER_ACCDB 77
/** 
* FILE_FILTER_INTERSECTION_TBL
* 
* Levelling intersection		*.tbl					LOCAL
*/
#define FILE_FILTER_INTERSECTION_TBL 78
/** 
* FILE_FILTER_UBC_CON
* 
* UBC DCIP2D Conductivity model files *.con		LOCAL
*/
#define FILE_FILTER_UBC_CON 79
/** 
* FILE_FILTER_UBC_CHG
* 
* UBC DCIP2D Chargeability model files *.chg	LOCAL
*/
#define FILE_FILTER_UBC_CHG 80
/** 
* FILE_FILTER_UBC_MSH
* 
* UBC DCIP2D Mesh files		*.msh					LOCAL
*/
#define FILE_FILTER_UBC_MSH 81
/** 
* FILE_FILTER_UBC_MSH_DAT
* 
* UBC DCIP2D Mesh files		*.dat					LOCAL
*/
#define FILE_FILTER_UBC_MSH_DAT 82
/** 
* FILE_FILTER_UBC_TOPO_DAT
* 
* UBC DCIP2D Topo files		*.dat					LOCAL
*/
#define FILE_FILTER_UBC_TOPO_DAT 83
/** 
* FILE_FILTER_UBC_TOPO_XYZ
* 
* UBC DCIP2D Topo files		*.xyz					LOCAL
*/
#define FILE_FILTER_UBC_TOPO_XYZ 84
/** 
* FILE_FILTER_XYZ_TEMPLATE_I0
* 
* XYZ Import Templates		      *.i0				LOCAL
*/
#define FILE_FILTER_XYZ_TEMPLATE_I0 85
/** 
* FILE_FILTER_PICO_TEMPLATE_I1
* 
* Picodas Import Templates      *.i1				LOCAL
*/
#define FILE_FILTER_PICO_TEMPLATE_I1 86
/** 
* FILE_FILTER_BB_TEMPLATE_I2
* 
* Block Binary Import Templates *.i2				LOCAL
*/
#define FILE_FILTER_BB_TEMPLATE_I2 87
/** 
* FILE_FILTER_ASCII_TEMPLATE_I3
* 
* ASCII Import Templates		   *.i3				LOCAL
*/
#define FILE_FILTER_ASCII_TEMPLATE_I3 88
/** 
* FILE_FILTER_ODBC_TEMPLATE_I4
* 
* ODBC Import Templates		   *.i4				LOCAL
*/
#define FILE_FILTER_ODBC_TEMPLATE_I4 89
/** 
* FILE_FILTER_EXP
* 
* Math expression files		   *.exp  			LOCAL
*/
#define FILE_FILTER_EXP 90
/** 
* FILE_FILTER_SEGY
* 
* SEG-Y files							*.sgy  			LOCAL
*/
#define FILE_FILTER_SEGY 91
/** 
* FILE_FILTER_DAARC500
* 
* DAARC500 files						xYYMMDD 		   LOCAL
*/
#define FILE_FILTER_DAARC500 92
/** 
* FILE_FILTER_TXT
* 
* Text files							*.txt  			LOCAL
*/
#define FILE_FILTER_TXT 93
/** 
* FILE_FILTER_VOXEL_INVERSION
* 
* Voxi									*.geosoft_voxi	LOCAL
*/
#define FILE_FILTER_VOXEL_INVERSION 94
/** 
* FILE_FILTER_GMS
* 
* GM-SYS Profile model file		*.gms	LOCAL
*/
#define FILE_FILTER_GMS 95
/** 
* FILE_FILTER_FLT3D
* 
* Geosoft 3D filter files			*.flt3d			LOCAL
*/
#define FILE_FILTER_FLT3D 96
/** 
* FILE_FILTER_RESOURCE_PACK
* 
* Geosoft Resource Update Packages *.geosoft_resource_pack LOCAL
*/
#define FILE_FILTER_RESOURCE_PACK 97
/** 
* FILE_FILTER_GEOSTRING
* 
* Geostring files *.geosoft_string LOCAL
*/
#define FILE_FILTER_GEOSTRING 98
/** 
* FILE_FILTER_GEOSURFACE
* 
* Geosurface files *.geosoft_surface LOCAL
*/
#define FILE_FILTER_GEOSURFACE 99
/** 
* FILE_FILTER_GEOSOFT3DV
* 
* Geosoft 3DV *.geosoft_3dv LOCAL
*/
#define FILE_FILTER_GEOSOFT3DV 100
/** 
* FILE_FILTER_VECTORVOXEL
* 
* Geosoft Vector Voxel *.geosoft_vectorvoxel LOCAL
*/
#define FILE_FILTER_VECTORVOXEL 101
/** 
* FILE_FILTER_FLT
* 
* Geosoft Filters *.flt LOCAL
*/
#define FILE_FILTER_FLT 102
/** 
* FILE_FILTER_XYZ_TEMPLATE_O0
* 
* XYZ Export Templates *.o0 LOCAL
*/
#define FILE_FILTER_XYZ_TEMPLATE_O0 103
/** 
* FILE_FILTER_GMS2D
* 
* GM-SYS Profile model    *.geosoft_gmsys2d   LOCAL
*/
#define FILE_FILTER_GMS2D 104
/** 
* FILE_FILTER_IP_DATABASE_TEMPLATE
* 
* IP Database Template *.geosoft_ipdatabasetemplate LOCAL
*/
#define FILE_FILTER_IP_DATABASE_TEMPLATE 105
/** 
* FILE_FILTER_GEOSOFT_RESOURCE_MODULE
* 
* Geosoft Resource Module *.geosoft_resources  LOCAL
*/
#define FILE_FILTER_GEOSOFT_RESOURCE_MODULE 106
/** 
* FILE_FILTER_VT
* 
* Shell VT files     *.vt        LOCAL
*/
#define FILE_FILTER_VT 107
/** 
* FILE_FILTER_INT
* 
* Shell INT files     *.int      LOCAL
*/
#define FILE_FILTER_INT 108
/** 
* FILE_FILTER_SGT
* 
* Shell SGT files     *.sgt      LOCAL
*/
#define FILE_FILTER_SGT 109
/** 
* FILE_FILTER_IMGVIEW
* 
* Image Viewer files  *.imgview  LOCAL
*/
#define FILE_FILTER_IMGVIEW 110
/** 
* FILE_FILTER_ZIP
* 
* Zip files  *.zip  LOCAL
*/
#define FILE_FILTER_ZIP 111
/** 
* FILE_FILTER_GPS_TABLE
* 
* GPS Table *.tbl GEOSOFT
*/
#define FILE_FILTER_GPS_TABLE 112
/** 
* FILE_FILTER_VULCAN_TRIANGULATION
* 
* Maptek Vulcan trianguilation file   *.tbl     LOCAL
*/
#define FILE_FILTER_VULCAN_TRIANGULATION 113
/** 
* FILE_FILTER_VULCAN_BLOCK_MODEL
* 
* Maptek Vulcan block model file       *.bmf                        LOCAL
*/
#define FILE_FILTER_VULCAN_BLOCK_MODEL 114
/** 
* FILE_FILTER_PRJVIEW
* 
* Layout files  *.prjview  LOCAL
*/
#define FILE_FILTER_PRJVIEW 115
/** 
* FILE_FILTER_LEAPFROG_MODEL
* 
* Leapfrog model files  *.lfm  LOCAL
*/
#define FILE_FILTER_LEAPFROG_MODEL 116
/** 
* FILE_FILTER_IOGAS
* 
* Reflex ioGAS files  *.gas  LOCAL
*/
#define FILE_FILTER_IOGAS 117
/** 
* FILE_FILTER_ASEG_ESF
* 
* ASEG ESF file  *.esf  LOCAL
*/
#define FILE_FILTER_ASEG_ESF 118
/** 
* FILE_FILTER_LACOSTE_DAT
* 
* Micro-g LaCoste MGS-6 gravity files  *.:class:`DAT`  LOCAL
*/
#define FILE_FILTER_LACOSTE_DAT 119
/** 
* FILE_FILTER_VAR
* 
* Geosoft variogram file  *.var  LOCAL
*/
#define FILE_FILTER_VAR 120
/** 
* FILE_FILTER_P190
* 
* UKOOA data exchange file  *.p190  LOCAL
*/
#define FILE_FILTER_P190 121
/** 
* FILE_FILTER_UBC_OBS_DAT
* 
* UBC observation files *.dat		LOCAL
*/
#define FILE_FILTER_UBC_OBS_DAT 122
/** 
* FILE_FILTER_UBC_LOC
* 
* UBC location files *.loc		LOCAL
*/
#define FILE_FILTER_UBC_LOC 123
/** 
* FILE_FILTER_UBC_MOD
* 
* UBC model files *.mod		LOCAL
*/
#define FILE_FILTER_UBC_MOD 124
/** 
* FILE_FILTER_UBC_DEN
* 
* UBC density model files *.den		LOCAL
*/
#define FILE_FILTER_UBC_DEN 125
/** 
* FILE_FILTER_UBC_SUS
* 
* UBC susceptibility model files *.sus		LOCAL
*/
#define FILE_FILTER_UBC_SUS 126
/** 
* FILE_FILTER_GOCAD_VOXET
* 
* GOCAD voxet files *.vo		LOCAL
*/
#define FILE_FILTER_GOCAD_VOXET 127
///@}

/**
* @name FILE_FORM Definitions
* 
* File Form Defines
*/
///@{
/** 
* FILE_FORM_OPEN
* 
* Open a file
*/
#define FILE_FORM_OPEN 0
/** 
* FILE_FORM_SAVE
* 
* Save a file
*/
#define FILE_FORM_SAVE 1
///@}

/**
* @name GS_DIRECTORY Definitions
* 
* Geosoft predefined directory
*/
///@{
/** 
* GS_DIRECTORY_NONE
*/
#define GS_DIRECTORY_NONE 0
/** 
* GS_DIRECTORY_GEOSOFT
*/
#define GS_DIRECTORY_GEOSOFT 1
/** 
* GS_DIRECTORY_BIN
*/
#define GS_DIRECTORY_BIN 2
/** 
* GS_DIRECTORY_GER
*/
#define GS_DIRECTORY_GER 3
/** 
* GS_DIRECTORY_OMN
*/
#define GS_DIRECTORY_OMN 4
/** 
* GS_DIRECTORY_TBL
*/
#define GS_DIRECTORY_TBL 5
/** 
* GS_DIRECTORY_FONTS
*/
#define GS_DIRECTORY_FONTS 6
/** 
* GS_DIRECTORY_GX
*/
#define GS_DIRECTORY_GX 7
/** 
* GS_DIRECTORY_GS
*/
#define GS_DIRECTORY_GS 8
/** 
* GS_DIRECTORY_APPS
*/
#define GS_DIRECTORY_APPS 9
/** 
* GS_DIRECTORY_ETC
*/
#define GS_DIRECTORY_ETC 10
/** 
* GS_DIRECTORY_HLP
*/
#define GS_DIRECTORY_HLP 11
/** 
* GS_DIRECTORY_GXDEV
*/
#define GS_DIRECTORY_GXDEV 12
/** 
* GS_DIRECTORY_COMPONENT
*/
#define GS_DIRECTORY_COMPONENT 13
/** 
* GS_DIRECTORY_CSV
*/
#define GS_DIRECTORY_CSV 14
/** 
* GS_DIRECTORY_LIC
*/
#define GS_DIRECTORY_LIC 15
/** 
* GS_DIRECTORY_INI
*/
#define GS_DIRECTORY_INI 16
/** 
* GS_DIRECTORY_TEMP
*/
#define GS_DIRECTORY_TEMP 17
/** 
* GS_DIRECTORY_UETC
*/
#define GS_DIRECTORY_UETC 18
/** 
* GS_DIRECTORY_UMAPTEMPLATE
*/
#define GS_DIRECTORY_UMAPTEMPLATE 19
/** 
* GS_DIRECTORY_COMPONENT_SCRIPTS
*/
#define GS_DIRECTORY_COMPONENT_SCRIPTS 50
/** 
* GS_DIRECTORY_COMPONENT_HTML
*/
#define GS_DIRECTORY_COMPONENT_HTML 51
/** 
* GS_DIRECTORY_IMG
*/
#define GS_DIRECTORY_IMG 52
/** 
* GS_DIRECTORY_BAR
*/
#define GS_DIRECTORY_BAR 53
/** 
* GS_DIRECTORY_GXNET
*/
#define GS_DIRECTORY_GXNET 54
/** 
* GS_DIRECTORY_MAPTEMPLATE
*/
#define GS_DIRECTORY_MAPTEMPLATE 55
///@}

/**
* @name IMPCH_TYPE Definitions
* 
* Import Chem defines
*/
///@{
/** 
* IMPCH_TYPE_DATA
*/
#define IMPCH_TYPE_DATA 0
/** 
* IMPCH_TYPE_ASSAY
*/
#define IMPCH_TYPE_ASSAY 1
///@}

/**
* @name WINDOW_STATE Definitions
* 
* Window State Options
*/
///@{
/** 
* WINDOW_RESTORE
*/
#define WINDOW_RESTORE 0
/** 
* WINDOW_MINIMIZE
*/
#define WINDOW_MINIMIZE 1
/** 
* WINDOW_MAXIMIZE
*/
#define WINDOW_MAXIMIZE 2
///@}

/**
* @name XTOOL_ALIGN Definitions
* 
* XTool docking alignment flags
*/
///@{
/** 
* XTOOL_ALIGN_LEFT
*/
#define XTOOL_ALIGN_LEFT 1
/** 
* XTOOL_ALIGN_TOP
*/
#define XTOOL_ALIGN_TOP 2
/** 
* XTOOL_ALIGN_RIGHT
*/
#define XTOOL_ALIGN_RIGHT 4
/** 
* XTOOL_ALIGN_BOTTOM
*/
#define XTOOL_ALIGN_BOTTOM 8
/** 
* XTOOL_ALIGN_ANY
*/
#define XTOOL_ALIGN_ANY 15
///@}

/**
* @name XTOOL_DOCK Definitions
* 
* XTool default docking state
*/
///@{
/** 
* XTOOL_DOCK_TOP
*/
#define XTOOL_DOCK_TOP 1
/** 
* XTOOL_DOCK_LEFT
*/
#define XTOOL_DOCK_LEFT 2
/** 
* XTOOL_DOCK_RIGHT
*/
#define XTOOL_DOCK_RIGHT 3
/** 
* XTOOL_DOCK_BOTTOM
*/
#define XTOOL_DOCK_BOTTOM 4
/** 
* XTOOL_DOCK_FLOAT
*/
#define XTOOL_DOCK_FLOAT 5
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create a standard WND object from an HWND.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  p1 TODO
* @return x - WND object created
**
* @par Note 
*      The object returned must be destroyed by the
*      destroy object call.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_CreateWNDFromHWND_GUI(void* p_geo, HWND p1);

/**
* Interactive FFT2 radially averaged power spectrum filter
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  spec_file_name TODO
* @param[in]  con_file_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Fft2SpecFilter_GUI(void* p_geo, const char* spec_file_name, const char* con_file_name);

/**
* Get the current parent window
*
* @param[in]  p_geo GX Context Pointer
* @return Parent window.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_GetParentWND_GUI(void* p_geo);

/**
* Gets a list of all printers.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetPrinterLST_GUI(void* p_geo, const int32_t* lst);

/**
* Retrieve the current state of the Oasis montaj window
*
* @param[in]  p_geo GX Context Pointer
* @return WINDOW_STATE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT int32_t App_iGetWindowState_GUI(void* p_geo);

/**
* Changes the state of the Oasis montaj window
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  state TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_SetWindowState_GUI(void* p_geo, const int32_t* state);

/**
* Get the Oasis montaj window's position state
*
* @param[in]  p_geo GX Context Pointer
* @param[out] left TODO
* @param[out] top TODO
* @param[out] right TODO
* @param[out] bottom TODO
* @param[out] state TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_GetWindowPosition_GUI(void* p_geo, int32_t* left, int32_t* top, int32_t* right, int32_t* bottom, int32_t* state);

/**
* Get the Oasis montaj window's position and state
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  left TODO
* @param[in]  top TODO
* @param[in]  right TODO
* @param[in]  bottom TODO
* @param[in]  state TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_SetWindowPosition_GUI(void* p_geo, const int32_t* left, const int32_t* top, const int32_t* right, const int32_t* bottom, const int32_t* state);

/**
* Get the location of the Oasis montaj client window.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
**
* @par Note 
*      Returns the coordinates of the client window area (where MDI document windows are placed).
*      The returned coordinates are 0,0 for the minimum X and Y and the window width
*      width and height for the maximum X and Y.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_GetClientWindowArea_GUI(void* p_geo, int32_t* min_x, int32_t* min_y, int32_t* max_x, int32_t* max_y);

/**
* Display Histogram of grid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  grid_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GridStatHist_GUI(void* p_geo, const char* grid_name);

/**
* Display Histogram of Voxel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_VoxelStatHist_GUI(void* p_geo, const char* vox_name);

/**
* Select a color.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] col TODO
* @param[in]  no_col TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Color value is set on input, and new value returned.
*      If the input color type is C_TRANSPARENT, then the color
*      is set to white, if any other type is input the output is
*      guaranteed to be of the same type.
*      
*      If no_col is 1, then on exit, if white is
*      selected, the user is prompted: 'Do you want white (Yes) or
*      "None" (No) ?' and the color is converted as requested.
*      If this is not the case, the C_TRANSPARENT is converted
*      to white (if "Ok" is selected) and no choice is offered.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iColorForm_GUI(void* p_geo, int32_t* col, const int32_t* no_col);

/**
* Define an ITR of up to 8 zones.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  st TODO
* @return 0 if OK
* 1 if user cancels
**
* @par Note 
*      The statistics object is required in order to determine
*      data ranges, percentiles, etc. Create it using
*      CreateExact_ST, or be sure to enable histogram statistics.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iColorTransform_GUI(void* p_geo, const int32_t* itr, const int32_t* st);

/**
* Launch the coordinate system definition/display GUI.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  editable TODO
* @param[in]  mode TODO
* @param[in]  source_label TODO
* @param[in]  source TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Launches the new GX.Net single-dialog coordinate system
*      definition dialog. The input IPJ is modified on return
*      if OK is selected (and the editable parameter is 1).
*      The "Data source label" and "Data source" is information displayed
*      in the dialog for the user to know where the IPJ came from (e.g. "Grid: X.grd")
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iCoordSysWizard_GUI(void* p_geo, const int32_t* ipj, const int32_t* editable, const int32_t* mode, const char* source_label, const char* source);

/**
* Launch the coordinate system definition/display GUI.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  editable TODO
* @param[in]  mode TODO
* @param[in]  source_label TODO
* @param[in]  source TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Same as iCoordSysWizardLicensed_GUI but will always be editable. The other
*      method is not editable in the viewer while this one is.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iCoordSysWizardLicensed_GUI(void* p_geo, const int32_t* ipj, const int32_t* editable, const int32_t* mode, const char* source_label, const char* source);

/**
* Launch the coordinate system definition/display GUI.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ipj TODO
* @param[in]  target_ipj TODO
* @param[in]  editable TODO
* @param[in]  mode TODO
* @param[in]  source_label TODO
* @param[in]  source TODO
* @param[in]  nx TODO
* @param[in]  ny TODO
* @param[out] x0 TODO
* @param[out] y0 TODO
* @param[out] dx TODO
* @param[out] dy TODO
* @param[out] rot TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Same as iCoordSysWizardLicensed_GUI but allows the original grid info to be adjusted
*      when projections on section or oriented plan grids are modified.
*      In the tool, it is the "modified" orientation required to keep the edited projection's grid
*      in the same location as it was in the target projection.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT int32_t App_iCoordSysWizardGrid_GUI(void* p_geo, const int32_t* ipj, const int32_t* target_ipj, const int32_t* editable, const int32_t* mode, const char* source_label, const char* source, const int32_t* nx, const int32_t* ny, double* x0, double* y0, double* dx, double* dy, double* rot);

/**
* Returns the type string of an external DAO database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[out] type TODO
* @param[in]  size TODO
* @return 0 - OK
* -1 - Cancel
* terminates on error
**
* @par Note 
*      If the file extension is "mdb", then an MSJET (Microsoft Access)
*      database is assumed. If the file name is "ODBC", then "ODBC" is
*      returned as the type. Otherwise, a dialog appears listing the
*      other valid DAO database types.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDatabaseType_GUI(void* p_geo, const char* name, char* type, const int32_t* size);

/**
* Returns the type of a Datamine file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] type TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      Often, a Datamine file can be opened a number of different ways
*      (e.g. as a string file or a as wireframe (point) file.
*      The following function checks to see if there is a choice to be made
*      between types supported by Geosoft for import. If not, it just returns
*      the original type "hint" from Datamine. If there is a choice, it puts up
*      a dialog with the choices for the user to pick from.
*      Do a bit-wise AND with the returned type to determine the file type
*      (or the type selected).
*      
*      Currently supported overlapping types/choices:
*      
*      dmString
*      dmWireframePoint
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDatamineType_GUI(void* p_geo, const char* file, int32_t* type);

/**
* Allows the user to edit XYZ export template
* using a complex dialog. The Template name
* may change during editing.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
* @param[in]  size TODO
* @return 0 - OK
* 1 - Error
**
* @par Note 
*      Only uses the current DB. This function does
*      not exactly work as supposed to. Instead of using
*      the EDB handle passed to it, it only will use
*      the current DB. Please see ExportXYXTemplateEditorEx_GUI
*      for an updated function.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iExportXYZTemplateEditor_GUI(void* p_geo, const int32_t* db, const char* template, const int32_t* size);

/**
* Allows the user to edit an XYZ export template
* using a complex dialog. The template name
* may change during editing.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  edb TODO
* @param[out] template TODO
* @param[in]  size TODO
* @return 0 - OK
* 1 - Error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iExportXYZTemplateEditorEx_GUI(void* p_geo, const int32_t* edb, char* template, const int32_t* size);

/**
* Return the FILE_FILTER_XXX value for a file filter string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  filter TODO
* @return FILE_FILTER, -1 if not found
**
* @par Note 
*      For example, if "Database (*.gdb)" is input,
*      then the FILE_FILTER_GDB value is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iFileFilterIndex_GUI(void* p_geo, const char* filter);

/**
* Launch the GCS Datum Warning dialog for SHP files.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data_source TODO
* @param[in]  ipj TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Runs the GCS Warning dialog with one data source
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT int32_t iGCSDatumWarningSHP_GUI(void* p_geo, const char* data_source, const int32_t* ipj);

/**
* Launch the GCS Datum Warning dialog for SHP files (Database).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  source_lst TODO
* @param[in]  datum_from_lst TODO
* @param[in]  ldtlst TODO
* @param[in]  db TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Runs the GCS Warning dialog with multiple data sources (Database)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT int32_t iGCSDatumWarningSHPDBEx_GUI(void* p_geo, const int32_t* source_lst, const int32_t* datum_from_lst, const int32_t* ldtlst, const int32_t* db);

/**
* Launch the GCS Datum Warning dialog for SHP files.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  source_lst TODO
* @param[in]  datum_from_lst TODO
* @param[in]  ldtlst TODO
* @param[in]  mview TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Runs the GCS Warning dialog with multiple data sources
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT int32_t iGCSDatumWarningSHPEx_GUI(void* p_geo, const int32_t* source_lst, const int32_t* datum_from_lst, const int32_t* ldtlst, const int32_t* mview);

/**
* Get the current area of interest from the application.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[in]  ply TODO
* @param[in]  ipj TODO
* @return AOI_RETURN_STATE
**
* @par Note 
*      Depending on what is currently visible on screen and
*      the defined coordinate system the user may be prompted
*      by a warning and optionaly cancel the process.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetAreaOfInterest_GUI(void* p_geo, double* min_x, double* min_y, double* max_x, double* max_y, const int32_t* ply, const int32_t* ipj);

/**
* Get the current area of interest from the application in 3D.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] min_x TODO
* @param[out] min_y TODO
* @param[out] min_z TODO
* @param[out] max_x TODO
* @param[out] max_y TODO
* @param[out] max_z TODO
* @param[in]  ply TODO
* @param[in]  ipj TODO
* @return AOI_RETURN_STATE
**
* @par Note 
*      Depending on what is currently visible on screen and
*      the defined coordinate system the user may be prompted
*      by a warning and optionaly cancel the process.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iGetAreaOfInterest3D_GUI(void* p_geo, double* min_x, double* min_y, double* min_z, double* max_x, double* max_y, double* max_z, const int32_t* ply, const int32_t* ipj);

/**
* Return the user default extension and qualifier for grids/images.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  flags TODO
* @param[in]  open TODO
* @param[out] ext TODO
* @param[in]  ext_size TODO
* @param[out] qual TODO
* @param[in]  qual_size TODO
**
* @par Note 
*      The default grid/image filters are normally stored in
*      "MONTAJ.DEFAULT_XGD_IN" and "MONTAJ.DEFAULT_XGD_OUT"
*      
*      If no filter is defined, or the filter is not found
*      then "grd" and "GRD" are returned as the default extension
*      and qualifier.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetDATDefaults_GUI(void* p_geo, const int32_t* flags, const int32_t* open, char* ext, const int32_t* ext_size, char* qual, const int32_t* qual_size);

/**
* Return the defined filter, mask, extension and directory for an input filter.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file_filter TODO
* @param[out] filter TODO
* @param[in]  filter_size TODO
* @param[out] mask TODO
* @param[in]  m TODO
* @param[out] ext TODO
* @param[in]  e TODO
* @param[out] path TODO
**
* @par Note 
*      Returns the four parts of the file filter;
*      e.g. for FILE_FILTER_GDB it returns:
*      
*      Filter:    "Database (*.gdb)"
*      Mask:      "*.gdb"
*      Extension: "gdb"
*      Directory: "GS_DIRECTORY_NONE"
*      
*      This function is useful for constuction open/save dialog
*      file filters, especially in GX.Net functions.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetFileFilter_GUI(void* p_geo, const int32_t* file_filter, char* filter, const int32_t* filter_size, char* mask, const int32_t* m, char* ext, const int32_t* e, int32_t* path);

/**
* Return the directory path for value of GS_DIRECTORY.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  path TODO
* @param[out] dir TODO
* @param[in]  dir_size TODO
**
* @par Note 
*      Works along with the IGetFileFilter_GUI function. Note that
*      most values of FILE_FILTER_XXX will return GS_DIRECTORY_NONE,
*      and give the current workspace directory.
*      
*      This function is useful for constuction open/save dialog
*      file filters, especially in GX.Net functions.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void IGetGSDirectory_GUI(void* p_geo, const int32_t* path, char* dir, const int32_t* dir_size);

/**
* Browses for a specific directory.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  default TODO
* @param[out] dir_path TODO
* @param[in]  size TODO
* @return 0 - Ok
* 1 - Cancel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiBrowseDir_GUI(void* p_geo, const char* title, const char* default, char* dir_path, const int32_t* size);

/**
* Define an ITR of up to 12 zones, with file load/save buttons.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  itr TODO
* @param[in]  st TODO
* @param[in]  zones TODO
* @param[in]  load_save TODO
* @param[out] file TODO
* @param[in]  size TODO
* @return 0 if OK
* 1 if user cancels
**
* @par Note 
*      The statistics object is required in order to determine
*      data ranges, percentiles, etc. Create it using
*      CreateExact_ST, or be sure to enable histogram statistics.
*      The color transform file name is used as the default when the save
*      button is pushed, and is updated both after the load and save buttons
*      are pushed by the value input or selected by the user.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiColorTransformEx_GUI(void* p_geo, const int32_t* itr, const int32_t* st, const int32_t* zones, const int32_t* load_save, char* file, const int32_t* size);

/**
* Define a percent-based ITR of up to 12 zones.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] file TODO
* @param[in]  size TODO
* @param[in]  itr TODO
* @return 0 if OK
* 1 if user cancels
**
* @par Note 
*      The ITR values are interpreted as cumulative percent values, using
*      the "PERCENT=1" value in the ITR's REG.
*      
*      Note that processes using ITRs do not automatically know to convert between
*      percent values and "actual" data values. The REG "PERCENT" value is simply
*      a flag to indicate to a user that the values are intended to be in the range
*      from 0 < x < 100. The ITR should not, therefore, be applied directly to data
*      unless that data is already given in percent.
*      
*      If the file name is defined on input, the initial ITR will be loaded from it.
*      If it is left blank, a default 5-color transform with
*      The color transform file name is used as the default when the save
*      button is pushed, and is updated both after the load and save buttons
*      are pushed by the value input or selected by the user.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiCumulativePercent_GUI(void* p_geo, char* file, const int32_t* size, const int32_t* itr);

/**
* Grid and Image file Open/Save Form for Multiple/Single file selections
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  default TODO
* @param[out] psz_file_path TODO
* @param[in]  file_size TODO
* @param[in]  type TODO
* @param[in]  validation_type TODO
* @param[in]  multi TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Remember to make the string size big enough for multiple file
*      selections. In the case of multiple selections the names will be separated
*      by a semicolon and only the first file will contain the full path.
*      
*      When using the multiple flag on any of these functions please be aware that
*      the string returned will be in the format:
*      drive:\path1\path2\name.grid|name2.grid|name3.grid(QUALIFIERS)
*      All grids are required to be of the same type.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiDatFileForm_GUI(void* p_geo, const char* title, const char* default, char* psz_file_path, const int32_t* file_size, const int32_t* type, const int32_t* validation_type, const int32_t* multi);

/**
* General file Open/Save Form for Multiple/Single file selections and multiple filter capability
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  filt_vv TODO
* @param[in]  filter TODO
* @param[in]  default TODO
* @param[out] file_path TODO
* @param[in]  size TODO
* @param[in]  type TODO
* @param[in]  multi TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Remember to make the string size big enough for multiple file
*      selections. In the case of multiple selections the names will be separated
*      by a semicolon and only the first file will contain the full path.
*      
*      Defined Functions     The following four functions are handy defines and simply pass the appropriate
*      parameter.
*      
*      iFileOpen_GUI
*      iFileSave_GUI
*      iMultiFileOpen_GUI
*      iMultiFileSave_GUI
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiGenFileForm_GUI(void* p_geo, const char* title, const int32_t* filt_vv, const int32_t* filter, const char* default, char* file_path, const int32_t* size, const int32_t* type, const int32_t* multi);

/**
* General file Open/Save Form for Multiple/Single file selections and custom filter capability
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  filter TODO
* @param[in]  default TODO
* @param[out] file_path TODO
* @param[in]  size TODO
* @param[in]  type TODO
* @param[in]  multi TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Remember to make the string size big enough for multiple file
*      selections. In the case of multiple selections the names will be separated
*      by a semicolon and only the first file will contain the full path.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.3
*/
GX_EXPORT int32_t App_IiCustomFileForm_GUI(void* p_geo, const char* title, const char* filter, const char* default, char* file_path, const int32_t* size, const int32_t* type, const int32_t* multi);

/**
* Same as iImportDrillDatabaseADO_GUI, but template name is returned.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  connect TODO
* @param[out] temp TODO
* @param[in]  temp_size TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[out] type TODO
* @param[in]  reg TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      If it is not defined on input, the template name is set
*      to be the Wholeplot table name; e.g.
*      "HOLESURVEY.i4" for "Project_HOLESURVEY"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiImportDrillDatabaseADO2_GUI(void* p_geo, const char* connect, char* temp, const int32_t* temp_size, char* table, const int32_t* table_size, int32_t* type, const int32_t* reg);

/**
* Same as iImportDrillDatabaseADO2_GUI, but from an ArcGIS Geodatabase
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  connect TODO
* @param[out] temp TODO
* @param[in]  temp_size TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[out] type TODO
* @param[in]  geochem TODO
* @param[in]  reg TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      If it is not defined on input, the template name is set
*      to be the Wholeplot table name; e.g.
*      "HOLESURVEY.i4" for "Project_HOLESURVEY"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiImportDrillDatabaseESRI_GUI(void* p_geo, const char* connect, char* temp, const int32_t* temp_size, char* table, const int32_t* table_size, int32_t* type, const int32_t* geochem, const int32_t* reg);

/**
* Generate a template file for importing drill holes
* from ODBC database data.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] connect TODO
* @param[in]  connect_size TODO
* @param[out] temp TODO
* @param[in]  temp_size TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[out] type TODO
* @param[in]  reg TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      If the input connection string is empty (""), then the ODBC connection dialogs
*      will appear (e.g. to connect to a machine database) before the import wizard
*      is run. The connect string used for this connection is then returned.
*      This string can then be used on input to skip the ODBC connection dialogs and
*      go straight to the Wholeplot import wizard.
*      Because the name of the database is not necessarily known, the template name is created
*      from the name of the table opened - e.g. "HOLELOCATION.i4".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiImportDrillDatabaseODBC_GUI(void* p_geo, char* connect, const int32_t* connect_size, char* temp, const int32_t* temp_size, char* table, const int32_t* table_size, int32_t* type, const int32_t* reg);

/**
* Same as IiImportDrillDatabaseODBC_GUI but customized for Maxwell.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] connect TODO
* @param[in]  connect_size TODO
* @param[out] temp TODO
* @param[in]  temp_size TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[out] type TODO
* @param[in]  reg TODO
* @return 0-OK 1-Cancel
**
* @par Note 
*      Same as IiImportDrillDatabaseODBC_GUI but customized for Maxwell.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 8.3
*/
GX_EXPORT int32_t App_IiImportDrillDatabaseODBCMaxwell_GUI(void* p_geo, char* connect, const int32_t* connect_size, char* temp, const int32_t* temp_size, char* table, const int32_t* table_size, int32_t* type, const int32_t* reg);

/**
* Generate a template file from a gui.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @return 0 - OK
* 1 - Cancel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportAsciiWizard_GUI(void* p_geo, const char* name, const char* temp);

/**
* Generate a template file for importing Geochems Database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[in]  type TODO
* @return 0 - OK
* -1 - Cancel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportChemDatabase_GUI(void* p_geo, const char* name, const char* temp, char* table, const int32_t* table_size, const int32_t* type);

/**
* Improved template creation for importing geochem database (ADO).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  connect TODO
* @param[in]  temp TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[in]  type TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      This is an improved version of ImportChemDatabase_GUI using the
*      new ADO technology, as opposed to DAO. Use in conjuction with
*      ImportADO_DU. See also ImportDatabaseADO_GUI.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportChemDatabaseADO_GUI(void* p_geo, const char* connect, const char* temp, char* table, const int32_t* table_size, const int32_t* type);

/**
* Create template to import an external database table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      This is used to select a single database table, and
*      selected fields from that table. If the database is not
*      Microsoft Access (type .mdb), an introductory dialog
*      requests the file type.
*      This function DOES NOT import the table itself, but
*      creates an import template which may be used to import
*      the table (see ImportDAO_DU).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportDatabase_GUI(void* p_geo, const char* name, const char* temp, char* table, const int32_t* table_size);

/**
* Create template to import an external database table (ADO Version).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  connect TODO
* @param[in]  temp TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      1. This is used to select a single database table, and
*         selected fields from that table.
*      
*      2. This function DOES NOT import the table itself, but
*         creates an import template which may be used to import
*         the table (see ImportADO_DU).
*      
*      3. If connection string is of type "FILENAME=..." the connection will attempt to resolve
*         it as a file database. (see also ODBCFileConnect_GUI)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportDatabaseADO_GUI(void* p_geo, const char* connect, const char* temp, char* table, const int32_t* table_size);

/**
* Create template to import an external database table,
* created using SQL.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  sql TODO
* @param[in]  temp TODO
* @param[out] line TODO
* @param[in]  size TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      1. This is used to build an Oasis montaj group (line) from
*         one or more database tables and fields, by selecting from
*         one or more SQL selection queries. The list of queries
*         is read from a text file with the following syntax:
*      
*         Query_Name_1
*         Query...
*         Query... (continued)
*         ...
*         ...
*         END_QUERY
*         Query_Name_2
*         etc.
*      
*      2. Each query has a title line, the query itself, then the
*         "END_QUERY" line to finish.  The title of a subsequent query
*         is on the line after an "END_QUERY" line.
*      
*      3. If the text file parameter is left blank (""), then
*         selection queries in the database itself are listed.
*         In addition to the pre-defined queries, there is a
*         "User Defined" query which may be filled in by the user.
*      
*      4. This function DOES NOT import the table itself, but
*         creates an import template which may be used to import
*         the data (see ImportDAO_DU).
*      
*      5. If connection string is of type "FILENAME=..." the connection will attempt to resolve
*         it as a file database. (see also ODBCFileConnect_GUI)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportDatabaseSQL_GUI(void* p_geo, const char* name, const char* sql, const char* temp, char* line, const int32_t* size);

/**
* Create template to import an external database table,
* created using SQL (New ADO Version).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  connect TODO
* @param[in]  sql TODO
* @param[in]  temp TODO
* @param[out] line TODO
* @param[in]  size TODO
* @return 0 - OK
* -1 Cancel
**
* @par Note 
*      This is used to build an Oasis montaj group (line) from
*      one or more database tables and fields, by selecting from
*      one or more SQL selection queries. The list of queries
*      is read from a text file with the following syntax:
*      
*      Query_Name_1
*      Query...
*      Query... (continued)
*      ...
*      ...
*      END_QUERY
*      Query_Name_2
*      etc.
*      
*      Each query has a title line, the query itself, then the
*      "END_QUERY" line to finish.  The title of a subsequent query
*      is on the line after an "END_QUERY" line.
*      
*      If the text file parameter is left blank (""), then
*      selection queries in the database itself are listed.
*      In addition to the pre-defined queries, there is a
*      "User Defined" query which may be filled in by the user.
*      
*      This function DOES NOT import the table itself, but
*      creates an import template which may be used to import
*      the data (see ImportDAO_DU).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportDatabaseSQLADO_GUI(void* p_geo, const char* connect, const char* sql, const char* temp, char* line, const int32_t* size);

/**
* Generate a template file for importing drill holes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  connect TODO
* @param[in]  temp TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[out] type TODO
* @param[in]  reg TODO
* @return 0 - OK
* -1 - Cancel
**
* @par Note 
*      This is an improved version of ImportDrillDatabase_GUI using the
*      new ADO technology, as opposed to DAO. Use in conjunction with
*      ImportADO_DU. See also ImportDatabaseADO_GUI.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportDrillDatabaseADO_GUI(void* p_geo, const char* connect, const char* temp, char* table, const int32_t* table_size, int32_t* type, const int32_t* reg);

/**
* Create template to import an external database table; provide query.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @param[in]  sql TODO
* @param[in]  line TODO
* @return 0 - OK
* -1 Cancel
* terminates on error
**
* @par Note 
*      This is similar to iImportDatabaseSQL_GUI, but dispenses with
*      the dialog offering a selection of queries. Instead, the
*      user supplies the query as a string.
*      
*      This function DOES NOT import the table itself, but
*      creates an import template which may be used to import
*      the data (see ImportDAO_DU).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportTemplateSQL_GUI(void* p_geo, const char* name, const char* temp, const char* sql, const char* line);

/**
* Create template to import an external database table; provide query.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @param[in]  sql TODO
* @param[in]  line TODO
* @return 0 - OK
* -1 - Cancel
* terminates on error
**
* @par Note 
*      This is similar to iImportDatabaseSQL_GUI, but dispenses with
*      the dialog offering a selection of queries. Instead, the
*      user supplies the query as a string.
*      
*      This function DOES NOT import the table itself, but
*      creates an import template which may be used to import
*      the data (see ImportADO_DU).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportTemplateSQLADO_GUI(void* p_geo, const char* name, const char* temp, const char* sql, const char* line);

/**
* Allows the user to edit XYZ import templates
* using a complex dialog. The Template name
* may change during editing.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  template TODO
* @param[in]  size TODO
* @param[in]  file TODO
* @return 0 - OK
* 1 - Error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iImportXYZTemplateEditor_GUI(void* p_geo, const int32_t* db, const char* template, const int32_t* size, const char* file);

/**
* Get the connection string for a file database as well as optional table name and FileUsage attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] connect TODO
* @param[in]  c_size TODO
* @param[in]  usage TODO
* @param[out] table TODO
* @param[in]  t_size TODO
* @return 0 - OK
* -1 - Cancel
* terminates on error
**
* @par Note 
*      If the file extension is "mdb" or "xls" then a Microsoft Access
*      or Excel database is assumed. Otherwise, a dialog appears listing
*      the installed ODBC file database drivers. If the driver takes a
*      directory as a database (FileUsage==1) the table name is also
*      returned. This is needed because the table name may or may not include
*      the file extension.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiODBCFileConnect_GUI(void* p_geo, const char* file, char* connect, const int32_t* c_size, const int32_t* usage, char* table, const int32_t* t_size);

/**
* - Select a symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] symb_font TODO
* @param[in]  size TODO
* @param[out] geo_font TODO
* @param[out] weight TODO
* @param[out] symb_num TODO
* @param[out] symb_size TODO
* @param[out] symb_ang TODO
* @param[out] edge_col TODO
* @param[out] fill_col TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Symbols are set on input, and new values returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiSymbolForm_GUI(void* p_geo, char* symb_font, const int32_t* size, int32_t* geo_font, int32_t* weight, int32_t* symb_num, double* symb_size, double* symb_ang, int32_t* edge_col, int32_t* fill_col);

/**
* Edit a META object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  root_token TODO
* @param[in]  schema TODO
* @return 0         - OK
* non-zero  - Cancel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iMetaDataTool_GUI(void* p_geo, const int32_t* meta, const int32_t* root_token, const int32_t* schema);

/**
* Generate a template file for importing geochems.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ImportChemWizard_GUI(void* p_geo, const char* name, const char* temp, const int32_t* type);

/**
* Generate a template file for importing drill holes.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  temp TODO
* @param[out] table TODO
* @param[in]  table_size TODO
* @param[out] type TODO
* @param[in]  reg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ImportDrillWizard_GUI(void* p_geo, const char* name, const char* temp, char* table, const int32_t* table_size, int32_t* type, const int32_t* reg);

/**
* Change the Internet Trust Relationships
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_InternetTrust_GUI(void* p_geo);

/**
* - Select a pattern.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] pat TODO
* @param[out] size TODO
* @param[out] thick TODO
* @param[out] dense TODO
* @param[out] col TODO
* @param[out] back_col TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Pattern values set on input, and new values returned.
*      Solid fill is indicated by Pattern number 0.
*      
*      Returned Values (not set on input)
*      
*      Size
*           pattern tile size in mm.
*      
*      Thick
*           pattern line thickness in percent of the tile size.
*           valid range is 0-100.
*      
*      Density
*           Tile spacing. A value of 1 means tiles are laid with no overlap.
*           A value of 2 means they overlap each other.
*      
*      The pattern Angle and Style parameters are not user-definable.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iPatternForm_GUI(void* p_geo, int32_t* pat, double* size, int32_t* thick, double* dense, int32_t* col, int32_t* back_col);

/**
* Select a line pattern.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] pattern TODO
* @param[out] thickness TODO
* @param[out] pitch TODO
* @param[out] colour TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Same as iPatternForm_GUI but for line patterns.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 8.1
*/
GX_EXPORT int32_t App_iLinePatternForm_GUI(void* p_geo, int32_t* pattern, double* thickness, double* pitch, int32_t* colour);

/**
* General purpose two-panel selection.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ls_tf TODO
* @param[in]  ls_ts TODO
* @param[in]  title TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Takes as input two LSTs, one contains all available items,
*      the second currently selected items. These are processed,
*      and in the left panel are displayed all items in the first
*      LST not in the selection LST, and on the right all items
*      in the first LST which are in the selection LST. (Items in
*      the selection LST NOT in the first LST are ignored).
*      Once the user has finalized the selections, the final selections
*      are returned in the selection LST.
*      
*      Selections and display are based on the LST_ITEM_NAME part of the
*      LST item, but on export both the LST_ITEM_NAME and LST_ITEM_VALUE
*      elements of the selected items from the first LST are transferred
*      to the second list for output.
*      
*      The sConvertToCSV_LST and sConvertFromCSV_LST functions in lst.h
*      can be used to convert the selection LSTs to forms that can be
*      stored and retrieved from GX parameters (or REG or INI, etc.).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iTwoPanelSelection_GUI(void* p_geo, const int32_t* ls_tf, const int32_t* ls_ts, const char* title);

/**
* Two-panel selection, items not sorted alphabetically.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ls_tf TODO
* @param[in]  ls_ts TODO
* @param[in]  title TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Same as iTwoPanelSelection_GUI, but the items in the
*      two lists are not sorted alphabetically, but are ordered
*      exactly as input, and when an item is selected it is
*      added at the end of the lists.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iTwoPanelSelection2_GUI(void* p_geo, const int32_t* ls_tf, const int32_t* ls_ts, const char* title);

/**
* Two-panel selection; options for sort and ability to select no items.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ls_tf TODO
* @param[in]  ls_ts TODO
* @param[in]  sorted TODO
* @param[in]  allow_no_select TODO
* @param[in]  title TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Same as iTwoPanelSelection_GUI, but the items in the
*      two lists are not sorted alphabetically, but are ordered
*      exactly as input, and when an item is selected it is
*      added at the end of the lists.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iTwoPanelSelectionEx_GUI(void* p_geo, const int32_t* ls_tf, const int32_t* ls_ts, const int32_t* sorted, const int32_t* allow_no_select, const char* title);

/**
* Two-panel selection; extended options including a help link.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ls_tf TODO
* @param[in]  ls_ts TODO
* @param[in]  sorted TODO
* @param[in]  allow_no_select TODO
* @param[in]  title TODO
* @param[in]  help TODO
* @return 0 - Ok
* 1 - Cancel
**
* @par Note 
*      Same as iTwoPanelSelectionEx_GUI, but user can specify a help
*      link.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iTwoPanelSelectionEx2_GUI(void* p_geo, const int32_t* ls_tf, const int32_t* ls_ts, const int32_t* sorted, const int32_t* allow_no_select, const char* title, const char* help);

/**
* Launch a user created .Net GEOXTOOL ensuring a single instance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dll TODO
* @param[in]  func TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LaunchSingleGeoDOTNETXTool_GUI(void* p_geo, const char* dll, const char* func, const int32_t* meta);

/**
* Launch a user created .Net GEOXTOOL.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dll TODO
* @param[in]  func TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LaunchGeoDOTNETXTool_GUI(void* p_geo, const char* dll, const char* func, const int32_t* meta);

/**
* Launch a user created GEOXTOOL.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dll TODO
* @param[in]  func TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_LaunchGeoXTool_GUI(void* p_geo, const char* dll, const char* func, const int32_t* meta);

/**
* Launch a user created .Net GEOXTOOL ensuring a single instance.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dll TODO
* @param[in]  func TODO
* @param[in]  meta TODO
* @param[in]  align TODO
* @param[in]  dock TODO
* @param[in]  width TODO
* @param[in]  height TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_LaunchSingleGeoDOTNETXToolEx_GUI(void* p_geo, const char* dll, const char* func, const int32_t* meta, const int32_t* align, const int32_t* dock, const int32_t* width, const int32_t* height);

/**
* Launch a user created .Net GEOXTOOL.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dll TODO
* @param[in]  func TODO
* @param[in]  meta TODO
* @param[in]  align TODO
* @param[in]  dock TODO
* @param[in]  width TODO
* @param[in]  height TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_LaunchGeoDOTNETXToolEx_GUI(void* p_geo, const char* dll, const char* func, const int32_t* meta, const int32_t* align, const int32_t* dock, const int32_t* width, const int32_t* height);

/**
* Launch a user created GEOXTOOL.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dll TODO
* @param[in]  func TODO
* @param[in]  meta TODO
* @param[in]  align TODO
* @param[in]  dock TODO
* @param[in]  width TODO
* @param[in]  height TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_LaunchGeoXToolEx_GUI(void* p_geo, const char* dll, const char* func, const int32_t* meta, const int32_t* align, const int32_t* dock, const int32_t* width, const int32_t* height);

/**
* View a META object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  root_token TODO
* @param[in]  schema TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_MetaDataViewer_GUI(void* p_geo, const int32_t* meta, const int32_t* root_token, const int32_t* schema);

/**
* Prints a file to current printer
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_PrintFile_GUI(void* p_geo, const char* file);

/**
* - Render a pattern.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hdc TODO
* @param[in]  left TODO
* @param[in]  bottom TODO
* @param[in]  right TODO
* @param[in]  top TODO
* @param[in]  pat TODO
* @param[in]  size TODO
* @param[in]  thick TODO
* @param[in]  dense TODO
* @param[in]  col TODO
* @param[in]  back_col TODO
* @param[in]  is_enabled TODO
* @param[in]  is_button TODO
* @param[in]  is_selected TODO
**
* @par Note 
*      Renders a Geosoft pattern to a Windows DC.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_RenderPattern_GUI(void* p_geo, HDC hdc, const int32_t* left, const int32_t* bottom, const int32_t* right, const int32_t* top, const int32_t* pat, const double* size, const int32_t* thick, const double* dense, const int32_t* col, const int32_t* back_col, const int32_t* is_enabled, const int32_t* is_button, const int32_t* is_selected);

/**
* Render a line pattern.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  hdc TODO
* @param[in]  left TODO
* @param[in]  bottom TODO
* @param[in]  right TODO
* @param[in]  top TODO
* @param[in]  pattern TODO
* @param[in]  thickness TODO
* @param[in]  pitch TODO
* @param[in]  col TODO
* @param[in]  is_enabled TODO
* @param[in]  is_button TODO
* @param[in]  is_selected TODO
**
* @par Note 
*      Same as RenderPattern_GUI but for line patterns.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 8.1
*/
GX_EXPORT void App_RenderLinePattern_GUI(void* p_geo, HDC hdc, const int32_t* left, const int32_t* bottom, const int32_t* right, const int32_t* top, const int32_t* pattern, const double* thickness, const double* pitch, const int32_t* col, const int32_t* is_enabled, const int32_t* is_button, const int32_t* is_selected);

/**
* Set the current parent WND
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  wnd TODO
**
* @par Note 
*      The parent WND is used by all modal dialogs as a
*      parent to ensure the dialog is correctly modal.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetParentWND_GUI(void* p_geo, const int32_t* wnd);

/**
* Sets the Printer.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  printer TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetPrinter_GUI(void* p_geo, const char* printer);

/**
* Ability to set the progress bar to stay visible even
* if main application is processing messages
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  on TODO
**
* @par Note 
*      In montaj the progress bar is hidden when the main window
*      start processing messages. This is not always desirable
*      in some 3rd party apps, hence this function.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetProgAlwaysOn_GUI(void* p_geo, const int32_t* on);

/**
* Display histogram of data directly
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  min TODO
* @param[in]  max TODO
* @param[in]  mean TODO
* @param[in]  std_dev TODO
* @param[in]  median TODO
* @param[in]  items TODO
* @param[in]  vv TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ShowDirectHist_GUI(void* p_geo, const double* min, const double* max, const double* mean, const double* std_dev, const double* median, const int32_t* items, const int32_t* vv);

/**
* Display Histogram of data from ST
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  st TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ShowHist_GUI(void* p_geo, const int32_t* st);

/**
* General purpose map display GUI with no interaction.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  map TODO
* @param[in]  title TODO
* @param[in]  help_id TODO
**
* @par Note 
*      This function displays a map in a simple resizable dialog that fits the map into it.
*      It is generally useful to display temporary maps as graphs (e.g. variograms).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SimpleMapDialog_GUI(void* p_geo, const int32_t* map, const char* title, const char* help_id);

/**
* Display GX.Net thematic voxel info GUI.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vox TODO
**
* @par Note 
*      Displays the thematic voxel codes, colors, total volume for
*      each code, and number of valid items (cubes) for each code.
*      This is a replacement for the numeric stats done on normal
*      numerical voxel grids.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ThematicVoxelInfo_GUI(void* p_geo, const int32_t* vox);

/**
* Display a standalone 3D viewer
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  o3dv TODO
**
* @par Note 
*      Any changes made to the 3D View will be persisted.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.3
*/
GX_EXPORT void App_Show3DViewerDialog_GUI(void* p_geo, const char* title, const char* o3dv);

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
