// Class 3DC


// Class 3DN


// Class 3DV
#define GEO3DV_MVIEW_READ        0
#define GEO3DV_MVIEW_WRITEOLD    2


// Class AGG
#define AGG_LAYER_ZONE_DEFAULT      0
#define AGG_LAYER_ZONE_LINEAR       1
#define AGG_LAYER_ZONE_NORMAL       2
#define AGG_LAYER_ZONE_EQUALAREA    3
#define AGG_LAYER_ZONE_SHADE        4
#define AGG_LAYER_ZONE_LOGLINEAR    5
#define AGG_LAYER_ZONE_LAST         6
#define AGG_MODEL_HSV    1
#define AGG_MODEL_RGB    2
#define AGG_MODEL_CMY    3
#define AGG_RENDER_ADD          0
#define AGG_RENDER_BLEND        1
#define AGG_RENDER_BLEND_ALL    2
#define AGG_RENDER_FADE         3


// Class BF
#define BF_BYTEORDER_LSB    256
#define BF_BYTEORDER_MSB    512
#define BF_KEEP      0
#define BF_DELETE    1
#define BF_ENCODE_ANSI    0
#define BF_ENCODE_UTF8    1
#define BF_READ             0
#define BF_READWRITE_NEW    1
#define BF_READWRITE_OLD    2
#define BF_READWRITE_APP    4
#define BF_SEEK_START      0
#define BF_SEEK_CURRENT    1
#define BF_SEEK_EOF        2


// Class CSYMB
#define CSYMB_COLOR_EDGE    0
#define CSYMB_COLOR_FILL    1


// Class CSYMB3D
#define CSYMB_SYMBOL_SPHERE      30
#define CSYMB_SYMBOL_CUBE        31
#define CSYMB_SYMBOL_CYLINDER    32
#define CSYMB_SYMBOL_CONE        33
#define CSYMB_SYMBOL_DOT         34


// Class DAT
#define DAT_FILE_GRID     1
#define DAT_FILE_IMAGE    2
#define DAT_FILE_FORM_OPEN    0
#define DAT_FILE_FORM_SAVE    1
#define DAT_XGD_READ     0
#define DAT_XGD_NEW      1
#define DAT_XGD_WRITE    2


// Class DATALINKD


// Class DATAMINE
#define GIS_DMTYPE_STRING          2
#define GIS_DMTYPE_WIREFRAME_TR    8
#define GIS_DMTYPE_DTM             16
#define GIS_DMTYPE_BLOCKMODEL      32
#define GIS_DMTYPE_WIREFRAME_PT    64
#define GIS_DMTYPE_POINTDATA       1024


// Class DB
#define DB_ACTIVITY_BLOB    "OE.DB_ACTIVITY_LOG"
#define DB_CATEGORY_BLOB_NORMAL    0
#define DB_CATEGORY_CHAN_BYTE       GS_BYTE
#define DB_CATEGORY_CHAN_USHORT     GS_USHORT
#define DB_CATEGORY_CHAN_SHORT      GS_SHORT
#define DB_CATEGORY_CHAN_LONG       GS_LONG
#define DB_CATEGORY_CHAN_FLOAT      GS_FLOAT
#define DB_CATEGORY_CHAN_DOUBLE     GS_DOUBLE
#define DB_CATEGORY_CHAN_UBYTE      GS_UBYTE
#define DB_CATEGORY_CHAN_ULONG      GS_ULONG
#define DB_CATEGORY_CHAN_LONG64     GS_LONG64
#define DB_CATEGORY_CHAN_ULONG64    GS_ULONG64
#define DB_CATEGORY_LINE_FLIGHT    100
#define DB_CATEGORY_LINE_GROUP     200
#define DB_CATEGORY_LINE_NORMAL    DB_CATEGORY_LINE_FLIGHT
#define DB_CATEGORY_USER_NORMAL    0
#define DB_CHAN_FORMAT_NORMAL    FORMAT_DECIMAL
#define DB_CHAN_FORMAT_EXP       FORMAT_EXP
#define DB_CHAN_FORMAT_TIME      FORMAT_TIME_COLON
#define DB_CHAN_FORMAT_DATE      FORMAT_DATE_YYYYMMDD
#define DB_CHAN_FORMAT_GEOGR     FORMAT_GEOGRAPHIC
#define DB_CHAN_FORMAT_SIGDIG    FORMAT_SIG_DIG
#define DB_CHAN_FORMAT_HEX       6
#define DB_CHAN_UNPROTECTED    0
#define DB_CHAN_PROTECTED      1
#define DB_CHAN_X    0
#define DB_CHAN_Y    1
#define DB_CHAN_Z    2
#define DB_COMP_NONE     0
#define DB_COMP_SPEED    1
#define DB_COMP_SIZE     2
#define DB_COORDPAIR_NONE    0
#define DB_COORDPAIR_X       1
#define DB_COORDPAIR_Y       2
#define DB_GROUP_CLASS_SIZE    16
#define DB_INFO_BLOBS_MAX         0
#define DB_INFO_LINES_MAX         1
#define DB_INFO_CHANS_MAX         2
#define DB_INFO_USERS_MAX         3
#define DB_INFO_BLOBS_USED        4
#define DB_INFO_LINES_USED        5
#define DB_INFO_CHANS_USED        6
#define DB_INFO_USERS_USED        7
#define DB_INFO_PAGE_SIZE         8
#define DB_INFO_DATA_SIZE         9
#define DB_INFO_LOST_SIZE         10
#define DB_INFO_FREE_SIZE         11
#define DB_INFO_COMP_LEVEL        16
#define DB_INFO_BLOB_SIZE         19
#define DB_INFO_FILE_SIZE         17
#define DB_INFO_INDEX_SIZE        18
#define DB_INFO_MAX_BLOCK_SIZE    20
#define DB_INFO_CHANGESLOST       21
#define DB_LINE_LABEL_FORMAT_LINE       1
#define DB_LINE_LABEL_FORMAT_VERSION    2
#define DB_LINE_LABEL_FORMAT_TYPE       4
#define DB_LINE_LABEL_FORMAT_FLIGHT     8
#define DB_LINE_LABEL_FORMAT_FULL       15
#define DB_LINE_LABEL_FORMAT_DATE       16
#define DB_LINE_LABEL_FORMAT_LINK       7
#define DB_LINE_SELECT_INCLUDE    0
#define DB_LINE_SELECT_EXCLUDE    1
#define DB_LINE_TYPE_NORMAL     0
#define DB_LINE_TYPE_BASE       1
#define DB_LINE_TYPE_TIE        2
#define DB_LINE_TYPE_TEST       3
#define DB_LINE_TYPE_TREND      4
#define DB_LINE_TYPE_SPECIAL    5
#define DB_LINE_TYPE_RANDOM     6
#define DB_LOCK_NONE         -1
#define DB_LOCK_READONLY     0
#define DB_LOCK_READWRITE    1
#define DB_NAME_FILE    0
#define DB_NULL    ((DB)0)
#define DB_OWN_SHARED    0
#define DB_OWN_USER      1
#define DB_SYMB_BLOB    0
#define DB_SYMB_LINE    1
#define DB_SYMB_CHAN    2
#define DB_SYMB_USER    3
#define DB_SYMB_NAME_SIZE    STR_DB_SYMBOL
#define DB_WAIT_NONE        0
#define DB_WAIT_INFINITY    -1
#define DB_ARRAY_BASETYPE_NONE                     0
#define DB_ARRAY_BASETYPE_TIME_WINDOWS             1
#define DB_ARRAY_BASETYPE_TIMES                    2
#define DB_ARRAY_BASETYPE_FREQUENCIES              3
#define DB_ARRAY_BASETYPE_ELEVATIONS               4
#define DB_ARRAY_BASETYPE_DEPTHS                   5
#define DB_ARRAY_BASETYPE_VELOCITIES               6
#define DB_ARRAY_BASETYPE_DISCRETE_TIME_WINDOWS    7
#define NULLSYMB    -1


// Class DBREAD


// Class DBWRITE


// Class DSEL
#define DSEL_PICTURE_QUALITY_DEFAULT      0
#define DSEL_PICTURE_QUALITY_LOSSLESS     1
#define DSEL_PICTURE_QUALITY_SEMILOSSY    2
#define DSEL_PICTURE_QUALITY_LOSSY        3
#define DSEL_PICTURE_QUALITY_NATIVE       4
#define DSEL_PICTURE_QUALITY_ECW          5
#define DSEL_PICTURE_QUALITY_JPG          6
#define DSEL_PICTURE_QUALITY_PNG          7
#define DSEL_PICTURE_QUALITY_BMP          8
#define DSEL_PICTURE_QUALITY_TIF          9


// Class E3DV


// Class EXT


// Class GEO


// Class GEOSOFT
#define CRC_INIT_VALUE    4294967295
#define DATE_FORMAT_YYYYMMDD    1
#define DATE_FORMAT_DDMMYYYY    2
#define DATE_FORMAT_MMDDYYYY    3
#define iDUMMY    -2147483647
#define rDUMMY    -1.0E32
#define GS_S1MX         127
#define GS_S1MN         -126
#define GS_S1DM         -127
#define GS_U1MX         254U
#define GS_U1MN         0U
#define GS_U1DM         255U
#define GS_S2MX         32767
#define GS_S2MN         -32766
#define GS_S2DM         -32767
#define GS_U2MX         65534U
#define GS_U2MN         0U
#define GS_U2DM         65535U
#define GS_S4MX         2147483647L
#define GS_S4MN         -2147483646L
#define GS_S4DM         -2147483647L
#define GS_U4MX         0xFFFFFFFE
#define GS_U4MN         0x00000000
#define GS_U4DM         0xFFFFFFFF
#define GS_S8MX         0x7FFFFFFFFFFFFFFF
#define GS_S8MN         0x8000000000000001
#define GS_S8DM         0x8000000000000000
#define GS_U8MX         0xFFFFFFFFFFFFFFFE
#define GS_U8MN         0x0000000000000000
#define GS_U8DM         0xFFFFFFFFFFFFFFFF
#define GS_R4MX         1.0E32f
#define GS_R4MN         -0.9E32f
#define GS_R4DM         -1.0E32f
#define GS_R8MX         1.0E32
#define GS_R8MN         -0.9E+32
#define GS_R8DM         -1.0E+32
#define GS_R4EPSILON    1.0E-32f
#define GS_R8EPSILON    1.0E-32
#define iMIN    -2147483646
#define iMAX    2147483647
#define rMIN    -0.9E32
#define rMAX    1.0E32
#define STR_DEFAULT          128
#define STR_DEFAULT_SHORT    64
#define STR_DEFAULT_LONG     1024
#define STR_ERROR            2048
#define STR_VERY_LONG        16384
#define STR_VIEW             2080
#define STR_GROUP            1040
#define STR_VIEW_GROUP       2080
#define STR_FILE             1040
#define STR_MULTI_FILE       16384
#define STR_DB_SYMBOL        64
#define STR_GXF              160
#define STR_MAX_PATH         1040
#define STR_MULTI_PATH       16384
#define GS_MAX_PATH          STR_FILE
#define GS_MULTI_PATH        STR_MULTI_FILE
#define GS_FALSE    0
#define GS_TRUE     1
#define GS_INT     0
#define GS_REAL    1
#define FORMAT_DECIMAL          0
#define FORMAT_SIG_DIG          5
#define FORMAT_EXP              1
#define FORMAT_TIME_COLON       2
#define FORMAT_TIME_HMS         8
#define FORMAT_TIME_HHMMSS      9
#define FORMAT_DATE_YYYYMMDD    3
#define FORMAT_DATE_DDMMYYYY    6
#define FORMAT_DATE_MMDDYYYY    7
#define FORMAT_GEOGRAPHIC       4
#define FORMAT_GEOGRAPHIC_1     10
#define FORMAT_GEOGRAPHIC_2     11
#define FORMAT_GEOGRAPHIC_3     12
#define GS_BYTE            0
#define GS_USHORT          1
#define GS_SHORT           2
#define GS_LONG            3
#define GS_FLOAT           4
#define GS_DOUBLE          5
#define GS_UBYTE           6
#define GS_ULONG           7
#define GS_LONG64          8
#define GS_ULONG64         9
#define GS_FLOAT3D         10
#define GS_DOUBLE3D        11
#define GS_FLOAT2D         12
#define GS_DOUBLE2D        13
#define GS_MAXTYPE         13
#define GS_TYPE_DEFAULT    -32767
#define SYS_CRYPT_LICENSE_KEY    "{***LICENSE_KEY***}"
#define SYS_CRYPT_COMPUTER_ID    "{***COMPUTER_ID***}"
#define SYS_CRYPT_GLOBAL_ID      "{***GLOBAL_COMPUTER_ID***}"
#define TIME_FORMAT_COLON    1
#define TIME_FORMAT_HMS      2


// Class GEOSTRING
#define GEOSTRING_OPEN_READ         0
#define GEOSTRING_OPEN_READWRITE    1
#define SECTION_ORIENTATION_UNKNOWN    0
#define SECTION_ORIENTATION_PLAN       1
#define SECTION_ORIENTATION_SECTION    2
#define SECTION_ORIENTATION_CROOKED    2
#define SECTION_ORIENTATION_GMSYS      2


// Class GIS
#define GIS_MAP2D_PLAN         0
#define GIS_MAP2D_EWSECTION    1
#define GIS_MAP2D_NSSECTION    2
#define GIS_TYPE_MAPINFO      1
#define GIS_TYPE_ARCVIEW      2
#define GIS_TYPE_DGN          3
#define GIS_TYPE_SURPAC       4
#define GIS_TYPE_DATAMINE     5
#define GIS_TYPE_GEMCOM       6
#define GIS_TYPE_MICROMINE    7
#define GIS_TYPE_MINESIGHT    8


// Class GRID3D
#define GRID3D_DOUBLE      0
#define GRID3D_VECTOR      1
#define GRID3D_THEMATIC    2


// Class HGD


// Class HXYZ


// Class IGRF


// Class IMG
#define IMG_NULL    ((IMG)0)
#define IMG_SHADING_INCLINATION    0
#define IMG_SHADING_DECLINATION    1
#define IMG_SHADING_SCALE          2
#define IMG_SHADING_CONTRAST       3
#define IMG_SHADING_BRIGHTNESS     4
#define IMG_SHADING_WETLOOK        5
#define IMG_COLOURS_REVERSED       6
#define IMG_SMOOTHING_ENABLED      7
#define IMG_SHADING_ENABLED        8
#define IMG_FAULT_POLYLINE    0
#define IMG_FAULT_POLYGON     1
#define IMG_FILE_READONLY       0
#define IMG_FILE_READWRITE      2
#define IMG_FILE_READORWRITE    3
#define IMG_QUERY_iWRITE                0
#define IMG_QUERY_iPG                   1
#define IMG_QUERY_iWRITEPG              2
#define IMG_QUERY_iIMGTYPE              3
#define IMG_QUERY_iDATTYPE              4
#define IMG_QUERY_iRENDER               5
#define IMG_QUERY_iKX                   6
#define IMG_QUERY_iNX                   7
#define IMG_QUERY_iNY                   8
#define IMG_QUERY_iNV                   9
#define IMG_QUERY_iNE                   10
#define IMG_QUERY_rXO                   11
#define IMG_QUERY_rYO                   12
#define IMG_QUERY_rDX                   13
#define IMG_QUERY_rDY                   14
#define IMG_QUERY_rROT                  15
#define IMG_QUERY_rBASE                 16
#define IMG_QUERY_rMULT                 17
#define IMG_QUERY_rCOMPRESSION_RATIO    18
#define IMG_RELOCATE_FIT       0
#define IMG_RELOCATE_ASPECT    1


// Class IMU
#define IMU_BOOL_OLAP_AVE      0
#define IMU_BOOL_OLAP_1        1
#define IMU_BOOL_OLAP_2        2
#define IMU_BOOL_OLAP_MINUS    4
#define IMU_BOOL_OPT_AND    0
#define IMU_BOOL_OPT_OR     1
#define IMU_BOOL_OPT_XOR    2
#define IMU_BOOL_SIZING_MIN    0
#define IMU_BOOL_SIZING_0      1
#define IMU_BOOL_SIZING_1      2
#define IMU_BOOL_SIZING_MAX    3
#define IMU_DOUBLE_CRC_BITS_EXACT      0
#define IMU_DOUBLE_CRC_BITS_DEFAULT    10
#define IMU_DOUBLE_CRC_BITS_MAX        51
#define IMU_EXPAND_SHAPE_RECTANGLE    0
#define IMU_EXPAND_SHAPE_SQUARE       1
#define IMU_FILL_ROLLOPT_LINEAR    1
#define IMU_FILL_ROLLOPT_SQUARE    2
#define IMU_FILT_DUMMY_NO     0
#define IMU_FILT_DUMMY_YES    1
#define IMU_FILT_FILE_NO     0
#define IMU_FILT_FILE_YES    1
#define IMU_FILT_HZDRV_NO    0
#define IMU_FILT_HZDRV_X     1
#define IMU_FILT_HZDRV_Y     2
#define IMU_FLOAT_CRC_BITS_EXACT      0
#define IMU_FLOAT_CRC_BITS_DEFAULT    7
#define IMU_FLOAT_CRC_BITS_MAX        22
#define IMU_MASK_INSIDE     0
#define IMU_MASK_OUTSIDE    1
#define IMU_STAT_FORCED_NO     0
#define IMU_STAT_FORCED_YES    1
#define IMU_TRANS_DEFAULT    0
#define IMU_TRANS_Y          1
#define IMU_TRANS_X          -1
#define IMU_TREND_ALL     0
#define IMU_TREND_EDGE    1
#define IMU_WIND_GRID      0
#define IMU_WIND_GROUND    1
#define IMU_WIND_DUMMY    0
#define IMU_WIND_CLIP     1
#define IMU_XYZ_INDEX_NO     0
#define IMU_XYZ_INDEX_YES    1
#define IMU_XYZ_LABEL_NO     1
#define IMU_XYZ_LABEL_YES    0


// Class IPJ
#define IPJ_3D_FLAG_NONE              0
#define IPJ_3D_FLAG_INVERTANGLES      1
#define IPJ_3D_FLAG_INVERTZ           2
#define IPJ_3D_FLAG_ORDER_ROTATION    4
#define IPJ_3D_ROTATE_DEFAULT    0
#define IPJ_3D_ROTATE_XYZ        1
#define IPJ_3D_ROTATE_XZY        2
#define IPJ_3D_ROTATE_YXZ        3
#define IPJ_3D_ROTATE_YZX        4
#define IPJ_3D_ROTATE_ZXY        5
#define IPJ_3D_ROTATE_ZYX        6
#define IPJ_CSP_SCALE         0
#define IPJ_CSP_FALSEEAST     1
#define IPJ_CSP_FALSENORTH    2
#define IPJ_CSP_LATORIGIN     3
#define IPJ_CSP_LONORIGIN     4
#define IPJ_CSP_PARALLEL_1    5
#define IPJ_CSP_PARALLEL_2    6
#define IPJ_CSP_AZIMUTH       7
#define IPJ_CSP_ANGLE         8
#define IPJ_CSP_POINTLAT_1    9
#define IPJ_CSP_POINTLON_1    10
#define IPJ_CSP_POINTLAT_2    11
#define IPJ_CSP_POINTLON_2    12
#define IPJ_NAME_PCS                    0
#define IPJ_NAME_PROJECTION             1
#define IPJ_NAME_METHOD                 2
#define IPJ_NAME_DATUM                  3
#define IPJ_NAME_ELLIPSOID              4
#define IPJ_NAME_LDATUM                 5
#define IPJ_NAME_UNIT_ABBR              6
#define IPJ_NAME_UNIT_FULL              7
#define IPJ_NAME_TYPE                   8
#define IPJ_NAME_LLDATUM                9
#define IPJ_NAME_METHOD_PARMS           10
#define IPJ_NAME_METHOD_LABEL           11
#define IPJ_NAME_DATUM_PARMS            12
#define IPJ_NAME_LDATUM_PARMS           13
#define IPJ_NAME_GEOID                  14
#define IPJ_NAME_LDATUMDESCRIPTION      15
#define IPJ_NAME_METHOD_PARMS_NATIVE    16
#define IPJ_NAME_ORIENTATION_PARMS      17
#define IPJ_ORIENT_DEFAULT            0
#define IPJ_ORIENT_PLAN               1
#define IPJ_ORIENT_SECTION            2
#define IPJ_ORIENT_SECTION_NORMAL     5
#define IPJ_ORIENT_DEPTH_SECTION      3
#define IPJ_ORIENT_3D                 4
#define IPJ_ORIENT_3D_MATRIX          7
#define IPJ_ORIENT_SECTION_CROOKED    6
#define IPJ_PARM_LST_COORDINATESYSTEM         0
#define IPJ_PARM_LST_DATUM                    1
#define IPJ_PARM_LST_PROJECTION               2
#define IPJ_PARM_LST_UNITS                    3
#define IPJ_PARM_LST_LOCALDATUMDESCRIPTION    4
#define IPJ_PARM_LST_LOCALDATUMNAME           5
#define IPJ_PARM_LST_UNITSDESCRIPTION         6
#define IPJ_TYPE_PRJ     0
#define IPJ_TYPE_PCS     1
#define IPJ_TYPE_GCS     2
#define IPJ_TYPE_ANY     3
#define IPJ_TYPE_NONE    4
#define IPJ_TYPE_WRP     5
#define IPJ_TYPE_TEST    6
#define IPJ_UNIT_ABBREVIATION    0
#define IPJ_UNIT_FULLNAME        1
#define IPJ_WARP_MATRIX          -1
#define IPJ_WARP_NONE            0
#define IPJ_WARP_TRANS1          1
#define IPJ_WARP_TRANS2          2
#define IPJ_WARP_TRANS3          3
#define IPJ_WARP_QUAD            4
#define IPJ_WARP_MULTIPOINT      5
#define IPJ_WARP_LOG             6
#define IPJ_WARP_MULTIPOINT_Y    7


// Class ITR
#define ITR_COLOR_MODEL_HSV    1
#define ITR_COLOR_MODEL_RGB    2
#define ITR_COLOR_MODEL_CMY    3
#define ITR_NULL    ((ITR)0)
#define ITR_POWER_10     0
#define ITR_POWER_EXP    1
#define ITR_ZONE_DEFAULT      0
#define ITR_ZONE_LINEAR       1
#define ITR_ZONE_NORMAL       2
#define ITR_ZONE_EQUALAREA    3
#define ITR_ZONE_SHADE        4
#define ITR_ZONE_LOGLINEAR    5
#define ITR_ZONE_MODEL_NOZONE    -1
#define ITR_ZONE_MODEL_NONE      0
#define ITR_ZONE_MODEL_LINEAR    1
#define ITR_ZONE_MODEL_NORMAL    2
#define ITR_ZONE_MODEL_EQUAL     3
#define ITR_MODEL_LOGLIN         4
#define ITR_ZONE_MODEL_LOGLIN    4


// Class KML
#define KML_ALT_CLAMPTOGROUND       0
#define KML_ALT_RELATIVETOGROUND    1
#define KML_ALT_ABSOLUTE            2


// Class LAYOUT
#define LAYOUT_CONSTR_LEFT       0
#define LAYOUT_CONSTR_RIGHT      1
#define LAYOUT_CONSTR_TOP        2
#define LAYOUT_CONSTR_BOTTOM     3
#define LAYOUT_CONSTR_WIDTH      4
#define LAYOUT_CONSTR_HEIGHT     5
#define LAYOUT_CONSTR_HCENTER    6
#define LAYOUT_CONSTR_VCENTER    7
#define LAYOUT_CONSTR_MOVEL      8
#define LAYOUT_CONSTR_MOVER      9
#define LAYOUT_CONSTR_MOVET      10
#define LAYOUT_CONSTR_MOVEB      11


// Class LL2


// Class LPT


// Class LST
#define LST_ITEM_NAME     0
#define LST_ITEM_VALUE    1


// Class LTB
#define LTB_CASE_INSENSITIVE    0
#define LTB_CASE_SENSITIVE      1
#define LTB_CONLST_EXACT    0
#define LTB_CONLST_ANY      1
#define LTB_DELIM_SPACE         0
#define LTB_DELIM_COMMA         1
#define LTB_DELIM_SPACECOMMA    2
#define LTB_TYPE_HEADER      0
#define LTB_TYPE_NOHEADER    1


// Class MAP
#define DUPMAP_BLANK         0
#define DUPMAP_COPY          1
#define DUPMAP_COPY_PRE62    2
#define MAP_EXPORT_BITS_32         32
#define MAP_EXPORT_BITS_24         24
#define MAP_EXPORT_BITS_GREY8      9
#define MAP_EXPORT_BITS_8          8
#define MAP_EXPORT_BITS_GREY4      5
#define MAP_EXPORT_BITS_4          4
#define MAP_EXPORT_BITS_GREY1      1
#define MAP_EXPORT_BITS_DEFAULT    0
#define MAP_EXPORT_FORMAT_PLT       "PLT"
#define MAP_EXPORT_FORMAT_SHP       "SHP"
#define MAP_EXPORT_FORMAT_DXF12     "DXF12"
#define MAP_EXPORT_FORMAT_DXF13     "DXF13"
#define MAP_EXPORT_FORMAT_GTIFF     "GTIFF"
#define MAP_EXPORT_FORMAT_CGTIFF    "CGTIFF"
#define MAP_EXPORT_FORMAT_MTIFF     "MTIFF"
#define MAP_EXPORT_FORMAT_ATIFF     "ATIFF"
#define MAP_EXPORT_FORMAT_GEO       "GEO"
#define MAP_EXPORT_FORMAT_ERM       "ERM"
#define MAP_EXPORT_FORMAT_KMZ       "KMZ"
#define MAP_EXPORT_METHOD_STANDARD    0
#define MAP_EXPORT_METHOD_DIFFUSE     1
#define MAP_EXPORT_METHOD_NONE        2
#define MAP_EXPORT_RASTER_FORMAT_EMF      "EMF"
#define MAP_EXPORT_RASTER_FORMAT_BMP      "BMP"
#define MAP_EXPORT_RASTER_FORMAT_JPEGL    "JPEGL"
#define MAP_EXPORT_RASTER_FORMAT_JPEG     "JPEG"
#define MAP_EXPORT_RASTER_FORMAT_JPEGH    "JPEGH"
#define MAP_EXPORT_RASTER_FORMAT_GIF      "GIF"
#define MAP_EXPORT_RASTER_FORMAT_PCX      "PCX"
#define MAP_EXPORT_RASTER_FORMAT_PNG      "PNG"
#define MAP_EXPORT_RASTER_FORMAT_EPS      "EPS"
#define MAP_EXPORT_RASTER_FORMAT_TIFF     "TIFF"
#define MAP_LIST_MODE_ALL      0
#define MAP_LIST_MODE_3D       1
#define MAP_LIST_MODE_NOT3D    2
#define MAP_WRITENEW    1
#define MAP_WRITEOLD    2


// Class MAPL


// Class MAPTEMPLATE
#define MAPTEMPLATE_WRITENEW    0
#define MAPTEMPLATE_EXIST       1


// Class MATH


// Class MESH
#define ATTRIBUTE_DOUBLE      0
#define ATTRIBUTE_THEMATIC    1
#define ATTRIBUTE_VECTOR      2
#define ATTRIBUTE_SINGLE           0
#define ATTRIBUTE_SURFACE_SIDES    1
#define ATTRIBUTE_VERTICES         2
#define ATTRIBUTE_FACES            3


// Class MESHUTIL
#define SURFACE_CLIP_ABOVE    0
#define SURFACE_CLIP_BELOW    1
#define SURFACE_CLIP_BOTH     2
#define SURFACE_CLIP_SUCCESS          0
#define SURFACE_CLIP_SUCCESS_EMPTY    1
#define SURFACE_CLIP_FAIL             2
#define SURFACE_PROJECTION_MAXIMUM    0
#define SURFACE_PROJECTION_MINIMUM    1
#define SURFACE_PROJECTION_AVERAGE    2
#define SURFACE_TRANSFORMATION_METHOD_SHIFT    0
#define SURFACE_TRANSFORMATION_METHOD_SCALE    1


// Class META
#define H_META_INVALID_TOKEN    -1
#define META_CORE_ATTRIB_Class_Description     -300
#define META_CORE_ATTRIB_Class_Application     -301
#define META_CORE_ATTRIB_Class_ReferenceURL    -302
#define META_CORE_ATTRIB_Class_Type            -303
#define META_CORE_ATTRIB_Type_Description      -304
#define META_CORE_ATTRIB_Type_ReferenceURL     -305
#define META_CORE_ATTRIB_Type_FixedSize        -306
#define META_CORE_ATTRIB_Type_ByteOrder        -307
#define META_CORE_ATTRIB_Type_MinValue         -308
#define META_CORE_ATTRIB_Type_MaxValue         -309
#define META_CORE_ATTRIB_Type_MaxSize          -310
#define META_CORE_ATTRIB_Type_ObjectClass      -311
#define META_CORE_ATTRIB_Type_hCreatS_Func     -312
#define META_CORE_ATTRIB_Type_sSerial_Func     -313
#define META_CORE_ATTRIB_Type_Enum_Value       -314
#define META_CORE_ATTRIB_Attrib_Visible        -315
#define META_CORE_ATTRIB_Attrib_Editable       -316
#define META_CORE_ATTRIB_Attrib_FlatName       -317
#define META_CORE_CLASS_Base                   -100
#define META_CORE_CLASS_Predefined             -101
#define META_CORE_CLASS_Attributes             -102
#define META_CORE_CLASS_ClassAttributes        -103
#define META_CORE_CLASS_TypeAttributes         -104
#define META_CORE_CLASS_ObjectAttributes       -105
#define META_CORE_CLASS_EnumAttributes         -106
#define META_CORE_CLASS_AttributeAttributes    -107
#define META_CORE_CLASS_ItemAttributes         -108
#define META_CORE_CLASS_Types                  -109
#define META_CORE_CLASS_Enums                  -110
#define META_CORE_CLASS_Enum_Bool              -111
#define META_CORE_CLASS_Enum_ClassType         -112
#define META_CORE_TYPE_Bytes        -200
#define META_CORE_TYPE_Bool         -201
#define META_CORE_TYPE_I1           -202
#define META_CORE_TYPE_U1           -203
#define META_CORE_TYPE_I2           -204
#define META_CORE_TYPE_U2           -205
#define META_CORE_TYPE_I4           -206
#define META_CORE_TYPE_U4           -207
#define META_CORE_TYPE_I8           -208
#define META_CORE_TYPE_U8           -209
#define META_CORE_TYPE_R4           -210
#define META_CORE_TYPE_R8           -211
#define META_CORE_TYPE_String       -212
#define META_CORE_TYPE_Object       -213
#define META_CORE_TYPE_Enum         -214
#define META_CORE_TYPE_ClassType    -215


// Class MPLY


// Class MULTIGRID3D
#define DIRECTION3D_XYZ    0
#define DIRECTION3D_YXZ    1
#define DIRECTION3D_XZY    2
#define DIRECTION3D_YZX    3
#define DIRECTION3D_ZXY    4
#define DIRECTION3D_ZYX    5
#define GOCAD_ORIENTATIONS_NORMAL             0
#define GOCAD_ORIENTATIONS_INVERTED           1
#define GOCAD_ORIENTATIONS_NORMAL_ZFIRST      2
#define GOCAD_ORIENTATIONS_INVERTED_ZFIRST    3
#define VECTOR_IMPORT_XYZ    0
#define VECTOR_IMPORT_UVW    1
#define VECTOR_IMPORT_AID    2
#define FILTER3D_FILE              0
#define FILTER3D_SMOOTHING         1
#define FILTER3D_LAPLACE           2
#define FILTER3D_X_GRADIENT        3
#define FILTER3D_Y_GRADIENT        4
#define FILTER3D_Z_GRADIENT        5
#define FILTER3D_TOTAL_GRADIENT    6
#define MULTIGRID3D_DIRECTGRID_MINIMUM       0
#define MULTIGRID3D_DIRECTGRID_MAXIMUM       1
#define MULTIGRID3D_DIRECTGRID_MEAN          2
#define MULTIGRID3D_DIRECTGRID_ITEMS         3
#define MULTIGRID3D_DIRECTGRID_DUMMYITEMS    4


// Class MULTIGRID3DUTIL
#define RBFKERNEL_DISTANCE          0
#define RBFKERNEL_MULTIQUADRATIC    1


// Class MVIEW
#define MAKER_GX    0
#define CLIP_ON     1
#define CLIP_OFF    0
#define C_BLACK          33554432
#define C_RED            33554687
#define C_GREEN          33619712
#define C_BLUE           50266112
#define C_CYAN           50331903
#define C_MAGENTA        50396928
#define C_YELLOW         67043328
#define C_GREY           41975936
#define C_LT_RED         54542336
#define C_LT_GREEN       54526016
#define C_LT_BLUE        50348096
#define C_LT_CYAN        50331712
#define C_LT_MAGENTA     50348032
#define C_LT_YELLOW      54525952
#define C_LT_GREY        54542400
#define C_GREY10         51910680
#define C_GREY25         54542400
#define C_GREY50         41975936
#define C_WHITE          50331648
#define C_TRANSPARENT    0
#define MVIEW_CYLINDER3D_OPEN          0
#define MVIEW_CYLINDER3D_CLOSESTART    1
#define MVIEW_CYLINDER3D_CLOSEEND      2
#define MVIEW_CYLINDER3D_CLOSEALL      3
#define MVIEW_DRAW_POLYLINE    0
#define MVIEW_DRAW_POLYGON     1
#define MVIEW_DRAWOBJ3D_ENTITY_POINTS             0
#define MVIEW_DRAWOBJ3D_ENTITY_LINES              1
#define MVIEW_DRAWOBJ3D_ENTITY_LINE_STRIPS        2
#define MVIEW_DRAWOBJ3D_ENTITY_LINE_LOOPS         3
#define MVIEW_DRAWOBJ3D_ENTITY_TRIANGLES          4
#define MVIEW_DRAWOBJ3D_ENTITY_TRIANGLE_STRIPS    5
#define MVIEW_DRAWOBJ3D_ENTITY_TRIANGLE_FANS      6
#define MVIEW_DRAWOBJ3D_ENTITY_QUADS              7
#define MVIEW_DRAWOBJ3D_ENTITY_QUADS_STRIPS       8
#define MVIEW_DRAWOBJ3D_ENTITY_POLYGONS           9
#define MVIEW_DRAWOBJ3D_MODE_FLAT      0
#define MVIEW_DRAWOBJ3D_MODE_SMOOTH    1
#define MVIEW_EXTENT_ALL        0
#define MVIEW_EXTENT_CLIP       1
#define MVIEW_EXTENT_MAP        2
#define MVIEW_EXTENT_VISIBLE    3
#define MVIEW_FIT_MAP     0
#define MVIEW_FIT_VIEW    1
#define MVIEW_FONT_WEIGHT_NORMAL        0
#define MVIEW_FONT_WEIGHT_ULTRALIGHT    1
#define MVIEW_FONT_WEIGHT_LIGHT         2
#define MVIEW_FONT_WEIGHT_MEDIUM        3
#define MVIEW_FONT_WEIGHT_BOLD          4
#define MVIEW_FONT_WEIGHT_XBOLD         5
#define MVIEW_FONT_WEIGHT_XXBOLD        6
#define MVIEW_GRID_DOT      0
#define MVIEW_GRID_LINE     1
#define MVIEW_GRID_CROSS    2
#define MVIEW_GROUP_NEW       1
#define MVIEW_GROUP_APPEND    0
#define MVIEW_GROUP_LIST_ALL        0
#define MVIEW_GROUP_LIST_MARKED     1
#define MVIEW_GROUP_LIST_VISIBLE    2
#define HIDE_ON     1
#define HIDE_OFF    0
#define MVIEW_IS_AGG                         0
#define MVIEW_IS_MOVABLE                     3
#define MVIEW_IS_CSYMB                       4
#define MVIEW_IS_LINKED                      5
#define MVIEW_IS_MADE                        6
#define MVIEW_IS_HIDDEN                      7
#define MVIEW_IS_CLIPPED                     8
#define MVIEW_IS_META                        9
#define MVIEW_IS_VOXD                        10
#define MVIEW_IS_SHADOW_2D_INTERPRETATION    11
#define MVIEW_IS_VECTOR3D                    12
#define MVIEW_IS_GENSURF                     13
#define MVIEW_IS_VOXSURF                     14
#define MVIEW_IS_CSYMB3D                     15
#define MVIEW_LABEL_BOUND_NO     0
#define MVIEW_LABEL_BOUND_YES    1
#define MVIEW_LABEL_JUST_TOP       0
#define MVIEW_LABEL_JUST_BOTTOM    1
#define MVIEW_LABEL_JUST_LEFT      2
#define MVIEW_LABEL_JUST_RIGHT     3
#define MVIEW_LABEL_ORIENT_HORIZONTAL    0
#define MVIEW_LABEL_ORIENT_TOP_RIGHT     1
#define MVIEW_LABEL_ORIENT_TOP_LEFT      2
#define MVIEW_NAME_LENGTH    1040
#define MVIEW_READ        0
#define MVIEW_WRITENEW    1
#define MVIEW_WRITEOLD    2
#define MVIEW_PJ_OFF         0
#define MVIEW_PJ_LOCATION    1
#define MVIEW_PJ_ALL         2
#define MVIEW_PJ_ON          3
#define MVIEW_RELOCATE_FIT              0
#define MVIEW_RELOCATE_ASPECT           1
#define MVIEW_RELOCATE_ASPECT_CENTER    2
#define MVIEW_SMOOTH_NEAREST    0
#define MVIEW_SMOOTH_CUBIC      1
#define MVIEW_SMOOTH_AKIMA      2
#define MVIEW_TILE_RECTANGULAR    0
#define MVIEW_TILE_DIAGONAL       1
#define MVIEW_TILE_TRIANGULAR     2
#define MVIEW_TILE_RANDOM         3
#define MVIEW_UNIT_VIEW             0
#define MVIEW_UNIT_PLOT             1
#define MVIEW_UNIT_MM               2
#define MVIEW_UNIT_VIEW_UNWARPED    3
#define MVIEW_EXTENT_UNIT_VIEW             MVIEW_UNIT_VIEW
#define MVIEW_EXTENT_UNIT_PLOT             MVIEW_UNIT_PLOT
#define MVIEW_EXTENT_UNIT_MM               MVIEW_UNIT_MM
#define MVIEW_EXTENT_UNIT_VIEW_UNWARPED    MVIEW_UNIT_VIEW_UNWARPED
#define TEXT_REF_BOTTOM_LEFT      0
#define TEXT_REF_BOTTOM_CENTER    1
#define TEXT_REF_BOTTOM_RIGHT     2
#define TEXT_REF_MIDDLE_LEFT      3
#define TEXT_REF_MIDDLE_CENTER    4
#define TEXT_REF_MIDDLE_RIGHT     5
#define TEXT_REF_TOP_LEFT         6
#define TEXT_REF_TOP_CENTER       7
#define TEXT_REF_TOP_RIGHT        8
#define MVIEW_3D_RENDER_BACKFACES       1
#define MVIEW_3D_DONT_SCALE_GEOMETRY    2


// Class MVU
#define EMLAY_V_COPLANAR    0
#define EMLAY_H_COPLANAR    1
#define EMLAY_V_COAXIAL     2
#define ARROW_ALIGNMENT_HORIZONTAL    0
#define ARROW_ALIGNMENT_VERTICAL      1
#define BARCHART_LABEL_NO           0
#define BARCHART_LABEL_BELOWX       1
#define BARCHART_LABEL_ABOVEX       2
#define BARCHART_LABEL_PEND         3
#define BARCHART_LABEL_NEND         4
#define BARCHART_LABEL_ALTERNAT1    5
#define BARCHART_LABEL_ALTERNAT2    6
#define COLORBAR_LABEL_HORIZONTAL    0
#define COLORBAR_LABEL_VERTICAL      1
#define COLORBAR_STYLE_NONE      0
#define COLORBAR_STYLE_MAXMIN    1
#define MVU_ORIENTATION_VERTICAL      0
#define MVU_ORIENTATION_HORIZONTAL    1
#define MVU_DIVISION_STYLE_NONE     0
#define MVU_DIVISION_STYLE_LINES    1
#define MVU_DIVISION_STYLE_TICS     2
#define MVU_ARROW_SOLID    1
#define MVU_ARROW_FIXED    2
#define MVU_FLIGHT_COMPASS_NONE     -1
#define MVU_FLIGHT_COMPASS_EAST     0
#define MVU_FLIGHT_COMPASS_NORTH    1
#define MVU_FLIGHT_COMPASS_WEST     2
#define MVU_FLIGHT_COMPASS_SOUTH    3
#define MVU_FLIGHT_DUMMIES_NOTINCLUDED    0
#define MVU_FLIGHT_DUMMIES_INCLUDED       1
#define MVU_FLIGHT_LOCATE_NONE     0
#define MVU_FLIGHT_LOCATE_END      1
#define MVU_FLIGHT_LOCATE_ABOVE    2
#define MVU_FLIGHT_LOCATE_BELOW    3
#define MVU_FLIGHT_DIRECTION       8
#define MVU_VOX_SURFACE_METHOD_MARCHING_CUBES    0
#define MVU_VOX_SURFACE_OPTION_OPEN      0
#define MVU_VOX_SURFACE_OPTION_CLOSED    1
#define MVU_TEXTBOX_LEFT      0
#define MVU_TEXTBOX_CENTER    1
#define MVU_TEXTBOX_RIGHT     2
#define MVU_VPOINT_SHARP     0
#define MVU_VPOINT_MEDIUM    1
#define MVU_VPOINT_BLUNT     2
#define MVU_VPOS_HEAD      0
#define MVU_VPOS_MIDDLE    1
#define MVU_VPOS_TAIL      2
#define MVU_VSIZE_NOHEAD        0
#define MVU_VSIZE_SMALLHEAD     1
#define MVU_VSIZE_MEDIUMHEAD    2
#define MVU_VSIZE_LARGEHEAD     3
#define MVU_VSIZE_NOTAIL        4
#define MVU_VSTYLE_LINES       0
#define MVU_VSTYLE_BARB        1
#define MVU_VSTYLE_TRIANGLE    2


// Class MXD


// Class PAT


// Class PG
#define PG_3D_DIR_XYZ    0
#define PG_3D_DIR_YXZ    1
#define PG_3D_DIR_XZY    2
#define PG_3D_DIR_YZX    3
#define PG_3D_DIR_ZXY    4
#define PG_3D_DIR_ZYX    5
#define PG_BF_CONV_NONE    0
#define PG_BF_CONV_SWAP    1


// Class PJ
#define PJ_ELEVATION_NONE          0
#define PJ_ELEVATION_GEOCENTRIC    1
#define PJ_ELEVATION_GEOID         2
#define PJ_RECT_XY2LL    0
#define PJ_RECT_LL2XY    1


// Class PLY
#define PLY_CLIP_NO_INTERSECT    0
#define PLY_CLIP_INTERSECT       1
#define PLY_CLIP_A_IN_B          2
#define PLY_CLIP_B_IN_A          3
#define PLY_POINT_CLIP_INSIDE     0
#define PLY_POINT_CLIP_OUTSIDE    1
#define PLY_POINT_CLIP_ERROR      2
#define PLY_LINE_CLIP_INSIDE          0
#define PLY_LINE_CLIP_NO_INTERSECT    0
#define PLY_LINE_CLIP_OUTSIDE         1
#define PLY_LINE_CLIP_ERROR           2


// Class RA


// Class REG
#define REG_MERGE_REPLACE    0
#define REG_MERGE_ADD        1


// Class SBF
#define SBF_READ             0
#define SBF_READWRITE_NEW    1
#define SBF_READWRITE_OLD    2
#define SBF_TYPE_DIRS     1
#define SBF_TYPE_FILES    2
#define SBF_TYPE_BOTH     3


// Class SEGYREADER


// Class ST
#define ST_ITEMS            0
#define ST_NPOS             1
#define ST_NZERO            22
#define ST_TOTAL            24
#define ST_NEMPTYSTRINGS    25
#define ST_DUMMIES          2
#define ST_MIN              3
#define ST_MAX              4
#define ST_RANGE            5
#define ST_MEAN             6
#define ST_MEDIAN           7
#define ST_MODE             8
#define ST_SIMPLE_MODE      23
#define ST_GEOMEAN          9
#define ST_VARIANCE         10
#define ST_STDDEV           11
#define ST_STDERR           12
#define ST_SKEW             13
#define ST_KURTOSIS         14
#define ST_BASE             15
#define ST_SUM              16
#define ST_SUM2             17
#define ST_SUM3             18
#define ST_SUM4             19
#define ST_MINPOS           21
#define ST_HIST_MAXCOUNT    100


// Class ST2
#define ST2_CORR     0
#define ST2_PCORR    1


// Class STORAGEPROJECT


// Class STR
#define FILE_EXT_ADD_IF_NONE    0
#define FILE_EXT_FORCE          1
#define STR_CASE_TOLERANT     0
#define STR_CASE_SENSITIVE    1
#define ESCAPE_CONVERT    0
#define ESCAPE_REPLACE    1
#define STR_FILE_PART_NAME                      0
#define STR_FILE_PART_EXTENSION                 1
#define STR_FILE_PART_DIRECTORY                 2
#define STR_FILE_PART_VOLUME                    3
#define STR_FILE_PART_QUALIFIERS                4
#define STR_FILE_PART_NAME_EXTENSION            5
#define STR_FILE_PART_FULLPATH_NO_QUALIFIERS    6
#define STR_JUSTIFY_LEFT      0
#define STR_JUSTIFY_CENTER    1
#define STR_JUSTIFY_RIGHT     2
#define STR_TRIMRIGHT    1
#define STR_TRIMLEFT     2
#define STR_TRIMBOTH     3


// Class SURFACE
#define SURFACE_OPEN_READ         0
#define SURFACE_OPEN_READWRITE    1


// Class SURFACEITEM
#define SURFACERENDER_SMOOTH    0
#define SURFACERENDER_FILL      1
#define SURFACERENDER_EDGES     2


// Class SYS
#define ARC_LICENSE_ENGINENOTPRESENT    0
#define ARC_LICENSE_DESKTOPENGINE       1
#define ARC_LICENSE_ARCVIEW             2
#define ARC_LICENSE_ARCEDITOR           3
#define ARC_LICENSE_ARCINFO             4
#define ARC_LICENSE_ARCSERVER           5
#define GEO_DIRECTORY_NONE                   0
#define GEO_DIRECTORY_GEOSOFT                1
#define GEO_DIRECTORY_BIN                    2
#define GEO_DIRECTORY_GER                    3
#define GEO_DIRECTORY_OMN                    4
#define GEO_DIRECTORY_TBL                    5
#define GEO_DIRECTORY_FONTS                  6
#define GEO_DIRECTORY_GX                     7
#define GEO_DIRECTORY_GS                     8
#define GEO_DIRECTORY_APPS                   9
#define GEO_DIRECTORY_ETC                    10
#define GEO_DIRECTORY_HLP                    11
#define GEO_DIRECTORY_USER_CSV               14
#define GEO_DIRECTORY_USER_LIC               15
#define GEO_DIRECTORY_USER_INI               16
#define GEO_DIRECTORY_USER_TEMP              17
#define GEO_DIRECTORY_USER_ETC               18
#define GEO_DIRECTORY_IMG                    19
#define GEO_DIRECTORY_BAR                    20
#define GEO_DIRECTORY_MAPTEMPLATE            22
#define GEO_DIRECTORY_USER_MAPTEMPLATE       23
#define GEO_DIRECTORY_PYGX                   24
#define GEO_DIRECTORY_USER_PYGX              25
#define GEO_DIRECTORY_USER_GX                26
#define GEO_DIRECTORY_USER_TBL_FAVOURITES    27
#define REG_DOMAIN_MACHINE    0
#define REG_DOMAIN_USER       1
#define SW_HIDE               0
#define SW_SHOWNORMAL         1
#define SW_SHOWMINIMIZED      2
#define SW_SHOWMAXIMIZED      3
#define SW_SHOWNOACTIVATE     4
#define SW_SHOW               5
#define SW_MINIMIZE           6
#define SW_SHOWMINNOACTIVE    7
#define SW_SHOWNA             8
#define SW_RESTORE            9
#define SW_SHOWDEFAULT        10
#define SW_FORCEMINIMIZE      11
#define SYS_DIR_LOCAL                     0
#define SYS_DIR_GEOSOFT                   1
#define SYS_DIR_USER                      2
#define SYS_DIR_GEOTEMP                   3
#define SYS_DIR_WINDOWS                   4
#define SYS_DIR_SYSTEM                    5
#define SYS_DIR_LICENSE                   6
#define SYS_DIR_RESOURCEFILES             7
#define SYS_DIR_GEOSOFT_BAR               100
#define SYS_DIR_GEOSOFT_BIN               101
#define SYS_DIR_GEOSOFT_CSV               102
#define SYS_DIR_GEOSOFT_CSV_ALIASES       103
#define SYS_DIR_GEOSOFT_DATA              104
#define SYS_DIR_GEOSOFT_DBG               105
#define SYS_DIR_GEOSOFT_ENCRYPTEDFILES    106
#define SYS_DIR_GEOSOFT_ETC               107
#define SYS_DIR_GEOSOFT_FONTS             108
#define SYS_DIR_GEOSOFT_GER               109
#define SYS_DIR_GEOSOFT_GS                110
#define SYS_DIR_GEOSOFT_GX                111
#define SYS_DIR_GEOSOFT_HLP               112
#define SYS_DIR_GEOSOFT_IMG               113
#define SYS_DIR_GEOSOFT_INI               114
#define SYS_DIR_GEOSOFT_MAPTEMPLATE       115
#define SYS_DIR_GEOSOFT_OMN               116
#define SYS_DIR_GEOSOFT_PAGE              117
#define SYS_DIR_GEOSOFT_SCHEMA            118
#define SYS_DIR_GEOSOFT_SPEC_INI          119
#define SYS_DIR_GEOSOFT_STYLESHEETS       120
#define SYS_DIR_GEOSOFT_TBL               121
#define SYS_DIR_GEOSOFT_PYTHON            127
#define SYS_DIR_USER_CSV                  200
#define SYS_DIR_USER_ETC                  201
#define SYS_DIR_USER_GS                   202
#define SYS_DIR_USER_HLP                  203
#define SYS_DIR_USER_INI                  204
#define SYS_DIR_USER_LIC                  205
#define SYS_DIR_USER_MAPTEMPLATE          206
#define SYS_DIR_USER_OMN                  207
#define SYS_DIR_USER_BAR                  214
#define SYS_DIR_USER_IMG                  215
#define SYS_DIR_USER_STACKS               209
#define SYS_DIR_USER_TEMP                 210
#define SYS_DIR_USER_SERVICES             211
#define SYS_DIR_USER_STYLESHEETS          212
#define SYS_FONT_GFN    1
#define SYS_FONT_TT     0
#define SYS_FILE_FORM_OPEN    0
#define SYS_FILE_FORM_SAVE    1
#define SYS_DAT_FILE_GRID    1
#define SYS_DAT_FILE_IMAG    2
#define SYS_INFO_VERSION_MAJOR           0
#define SYS_INFO_VERSION_MINOR           1
#define SYS_INFO_VERSION_SP              2
#define SYS_INFO_BUILD_NUMBER            3
#define SYS_INFO_BUILD_LABEL             4
#define SYS_INFO_VERSION_LABEL           5
#define SYS_INFO_PRODUCTNAME             6
#define SYS_INFO_SERVERNAME              7
#define SYS_INFO_LEGALCOPYRIGHT          8
#define SYS_INFO_REGISTRY                9
#define SYS_INFO_REGISTRY_ENVIRONMENT    10
#define SYS_INFO_REGISTRY_SUPPORT        11
#define SYS_INFO_REGISTRY_INTERAPP       12
#define SYS_INFO_OIS_REGISTRY            13
#define SYS_INFO_TEST_REGISTRY           14
#define SYS_LINEAGE_SOURCE_MAP            0
#define SYS_LINEAGE_SOURCE_MXD            1
#define SYS_LINEAGE_SOURCE_DB             2
#define SYS_LINEAGE_SOURCE_MAPTEMPLATE    3
#define SYS_LINEAGE_SOURCE_GRID           4
#define SYS_LINEAGE_SOURCE_VOXEL          5
#define SYS_MENU_CLEAR_ALL        0
#define SYS_MENU_CLEAR_DEFAULT    1
#define SYS_PATH_LOCAL                       0
#define SYS_PATH_GEOSOFT                     1
#define SYS_PATH_GEOSOFT_USER                2
#define SYS_PATH_GEOTEMP                     3
#define SYS_PATH_WINDOWS                     4
#define SYS_PATH_SYSTEM                      5
#define SYS_PATH_LICENSE                     6
#define SYS_PATH_RESOURCEFILES               7
#define SYS_PATH_GEOSOFT_BAR                 100
#define SYS_PATH_GEOSOFT_BIN                 101
#define SYS_PATH_GEOSOFT_CSV                 102
#define SYS_PATH_GEOSOFT_CSV_ALIASES         103
#define SYS_PATH_GEOSOFT_DATA                104
#define SYS_PATH_GEOSOFT_DBG                 105
#define SYS_PATH_GEOSOFT_ENCRYPTEDFILES      106
#define SYS_PATH_GEOSOFT_ETC                 107
#define SYS_PATH_GEOSOFT_FONTS               108
#define SYS_PATH_GEOSOFT_GER                 109
#define SYS_PATH_GEOSOFT_GS                  110
#define SYS_PATH_GEOSOFT_PYGX                126
#define SYS_PATH_GEOSOFT_GX                  111
#define SYS_PATH_GEOSOFT_HLP                 112
#define SYS_PATH_GEOSOFT_IMG                 113
#define SYS_PATH_GEOSOFT_INI                 114
#define SYS_PATH_GEOSOFT_MAPTEMPLATE         115
#define SYS_PATH_GEOSOFT_OMN                 116
#define SYS_PATH_GEOSOFT_PAGE                117
#define SYS_PATH_GEOSOFT_SCHEMA              118
#define SYS_PATH_GEOSOFT_SPEC_INI            119
#define SYS_PATH_GEOSOFT_STYLESHEETS         120
#define SYS_PATH_GEOSOFT_TBL                 121
#define SYS_PATH_GEOSOFT_USER_CSV            200
#define SYS_PATH_GEOSOFT_USER_ETC            201
#define SYS_PATH_GEOSOFT_USER_GS             202
#define SYS_PATH_GEOSOFT_USER_GX             217
#define SYS_PATH_GEOSOFT_USER_PYGX           216
#define SYS_PATH_GEOSOFT_USER_HLP            203
#define SYS_PATH_GEOSOFT_USER_INI            204
#define SYS_PATH_GEOSOFT_USER_LIC            205
#define SYS_PATH_GEOSOFT_USER_MAPTEMPLATE    206
#define SYS_PATH_GEOSOFT_USER_OMN            207
#define SYS_PATH_GEOSOFT_USER_STACKS         209
#define SYS_PATH_GEOSOFT_USER_TEMP           210
#define SYS_PATH_USER_SERVICES               211
#define SYS_PATH_USER_STYLESHEETS            212
#define SYS_RUN_DISPLAY_WINDOW        0
#define SYS_RUN_DISPLAY_MINIMIZE      8
#define SYS_RUN_DISPLAY_FULLSCREEN    16
#define SYS_RUN_HOLD_NEVER      0
#define SYS_RUN_HOLD_ONERROR    512
#define SYS_RUN_HOLD_ALWAYS     1024
#define SYS_RUN_TYPE_DOS        1
#define SYS_RUN_TYPE_EXE        0
#define SYS_RUN_TYPE_WINDOWS    2
#define SYS_RUN_WIN_NOWAIT    0
#define SYS_RUN_WIN_WAIT      2048
#define FIND_LOCAL_GEOSOFT    0
#define FIND_GEOSOFT          1
#define FIND_LOCAL            2
#define FIND_SHORT            1024
#define SYS_ENCRYPTION_KEY_GEOSOFT_ID    0
#define SYS_ENCRYPTION_KEY_GLOBAL_ID     1
#define TD_ICON_NONE            0
#define TD_ICON_WARNING         1
#define TD_ICON_ERROR           2
#define TD_ICON_INFORMATION     3
#define TD_ICON_SUCCESS         4
#define TD_ICON_CONFIRMATION    5
#define TD_BUTTON_NONE      0
#define TD_BUTTON_OK        1
#define TD_BUTTON_YES       2
#define TD_BUTTON_NO        4
#define TD_BUTTON_CANCEL    8
#define TD_BUTTON_RETRY     16
#define TD_BUTTON_CLOSE     32
#define TD_ID_OK        1
#define TD_ID_CANCEL    2
#define TD_ID_RETRY     4
#define TD_ID_YES       6
#define TD_ID_NO        7
#define TD_ID_CLOSE     8


// Class TB
#define TB_SEARCH_BINARY    0
#define TB_SEARCH_LINEAR    1
#define TB_SORT_UNIQUE              0
#define TB_SORT_ALLOW_DUPLICATES    1


// Class TPAT
#define TPAT_CODE_SIZE        21
#define TPAT_LABEL_SIZE       32
#define TPAT_DESC_SIZE        128
#define TPAT_SYMBFONT_SIZE    32


// Class TR


// Class USERMETA
#define USERMETA_FORMAT_DEFAULT    -1
#define USERMETA_FORMAT_ISO        0
#define USERMETA_FORMAT_FGDC       1


// Class VA
#define VA_AVERAGE_ROWS       0
#define VA_AVERAGE_COLUMNS    1
#define VA_ROW    0
#define VA_COL    1


// Class VECTOR3D


// Class VM


// Class VOX
#define VOX_DIR_XY    0
#define VOX_DIR_XZ    1
#define VOX_DIR_YZ    2
#define VOX_3D_DIR_XYZ    0
#define VOX_3D_DIR_YXZ    1
#define VOX_3D_DIR_XZY    2
#define VOX_3D_DIR_YZX    3
#define VOX_3D_DIR_ZXY    4
#define VOX_3D_DIR_ZYX    5
#define VOX_FILTER3D_FILE              0
#define VOX_FILTER3D_SMOOTHING         1
#define VOX_FILTER3D_LAPLACE           2
#define VOX_FILTER3D_X_GRADIENT        3
#define VOX_FILTER3D_Y_GRADIENT        4
#define VOX_FILTER3D_Z_GRADIENT        5
#define VOX_FILTER3D_TOTAL_GRADIENT    6
#define VOX_GOCAD_ORIENTATIONS_NORMAL             0
#define VOX_GOCAD_ORIENTATIONS_INVERTED           1
#define VOX_GOCAD_ORIENTATIONS_NORMAL_ZFIRST      2
#define VOX_GOCAD_ORIENTATIONS_INVERTED_ZFIRST    3
#define VOX_GRID_LOGOPT_LINEAR                  0
#define VOX_GRID_LOGOPT_LOG_SAVELINEAR          -1
#define VOX_GRID_LOGOPT_LOGLINEAR_SAVELINEAR    -2
#define VOX_GRID_LOGOPT_LOG_SAVELOG             1
#define VOX_GRID_LOGOPT_LOGLINEAR_SAVELOG       2
#define VOX_ORIGIN_BOTTOM    0
#define VOX_ORIGIN_TOP       1
#define VOX_SLICE_MODE_LINEAR     1
#define VOX_SLICE_MODE_NEAREST    0
#define VOX_VECTORVOX_XYZ    0
#define VOX_VECTORVOX_UVW    1
#define VOX_VECTORVOX_AID    2


// Class VOXD
#define VOXELRENDER_FILL          0
#define VOXELRENDER_EDGES         1
#define VOXELRENDER_FILL_EDGES    2
#define VOXELRENDER_SMOOTH        3


// Class VOXE
#define VOXE_EVAL_NEAR      0
#define VOXE_EVAL_INTERP    1
#define VOXE_EVAL_BEST      2


// Class VULCAN
#define BLOCK_MODEL_NUMERIC_VARIABLE    1
#define BLOCK_MODEL_STRING_VARIABLE     2


// Class VV
#define VV_DOUBLE_CRC_BITS_EXACT      0
#define VV_DOUBLE_CRC_BITS_DEFAULT    10
#define VV_DOUBLE_CRC_BITS_MAX        51
#define VV_FLOAT_CRC_BITS_EXACT      0
#define VV_FLOAT_CRC_BITS_DEFAULT    7
#define VV_FLOAT_CRC_BITS_MAX        22
#define VV_LOG_BASE_10    0
#define VV_LOG_BASE_E     1
#define VV_LOGMODE_CLIPPED    0
#define VV_LOGMODE_SCALED     1
#define VV_LOGMODE_CLAMPED    2
#define VV_LOGMODE_LINEAR     3
#define VV_LOOKUP_EXACT           0
#define VV_LOOKUP_NEAREST         1
#define VV_LOOKUP_INTERPOLATE     2
#define VV_LOOKUP_NEARESTCLOSE    3
#define VV_LOOKUP_INTERPCLOSE     4
#define VV_MASK_INSIDE     0
#define VV_MASK_OUTSIDE    1
#define VV_ORDER_NONE          0
#define VV_ORDER_INCREASING    1
#define VV_ORDER_DECREASING    2
#define VV_SORT_ASCENDING     0
#define VV_SORT_DESCENDING    1
#define VV_WINDOW_DUMMY    0
#define VV_WINDOW_LIMIT    1


// Class WA
#define WA_ENCODE_ANSI              0
#define WA_ENCODE_RAW               1
#define WA_ENCODE_UTF8              2
#define WA_ENCODE_UTF8_NOHEADER     3
#define WA_ENCODE_UTF16_NOHEADER    4
#define WA_NEW       0
#define WA_APPEND    1


