// Class ACQUIRE
#define ACQUIRE_SEL_HOLES    0
#define ACQUIRE_SEL_POINT    1


// Class ARCDB
#define ARC_SELTBL_STANDALONE      0
#define ARC_SELTBL_FEATURELAYER    1
#define ARC_SELTBL_CANCELED        -1
#define ARCDB_NULL    ((ARCDB)0)


// Class ARCDH


// Class ARCMAP
#define ARCMAP_LOAD_DELFRAME             1
#define ARCMAP_LOAD_DELLAYER             2
#define ARCMAP_LOAD_EXISTFRAME           4
#define ARCMAP_LOAD_COPYLAYER            8
#define ARCMAP_LOAD_HIDESIBLINGS         16
#define ARCMAP_LOAD_PREFIXMAPFRAME       32
#define ARCMAP_LOAD_PREFIXMAPLAYER       64
#define ARCMAP_LOAD_MERGETOSINGLEVIEW    128
#define ARCMAP_LOAD_INTOCURRENTFRAME     256
#define ARCMAP_LOAD_NOMAPLAYERS          512
#define ARCMAP_LOAD_ACTIVATE             1024
#define ARCMAP_LOAD_NEW                  2048
#define ARCMAP_LOAD_NAMETAGISPREFIX      4096


// Class ARCPY


// Class ARCSYS


// Class BIGRID


// Class CHIMERA
#define CHIMERA_MAX_CHAN    128
#define CHIMERA_PLOT_ROSE    0
#define CHIMERA_PLOT_PIE     1
#define CHIMERA_PLOT_BAR     2


// Class COM
#define COM_BAUD_110       0
#define COM_BAUD_300       1
#define COM_BAUD_600       2
#define COM_BAUD_1200      3
#define COM_BAUD_2400      4
#define COM_BAUD_4800      5
#define COM_BAUD_9600      6
#define COM_BAUD_14400     7
#define COM_BAUD_19200     8
#define COM_BAUD_56000     9
#define COM_BAUD_57600     10
#define COM_BAUD_115200    11
#define COM_BAUD_128000    12
#define COM_BAUD_256000    13
#define COM_BAUD_38400     14
#define COM_DATASIZE_FIVE     5
#define COM_DATASIZE_SIX      6
#define COM_DATASIZE_SEVEN    7
#define COM_DATASIZE_EIGHT    8
#define COM_FLOWCONTROL_NONE        0
#define COM_FLOWCONTROL_RTS_CTS     1
#define COM_FLOWCONTROL_DTR_DSR     2
#define COM_FLOWCONTROL_XON_XOFF    3
#define COM_PARITY_EVEN     0
#define COM_PARITY_NARK     1
#define COM_PARITY_NONE     2
#define COM_PARITY_ODD      3
#define COM_PARITY_SPACE    4
#define COM_STOPBITS_ONE     0
#define COM_STOPBITS_ONE5    1
#define COM_STOPBITS_TWO     2


// Class DGW
#define DGW_LABEL        0
#define DGW_TEXT         1
#define DGW_PATH         2
#define DGW_FILEPATH     3
#define DGW_LISTVAL      4
#define DGW_LISTALIAS    5
#define DGW_EXT          7
#define DGW_HIDE         8


// Class DH
#define DH_DEFAULT_ROCKCODE_FILE         "agso.csv"
#define DH_DEFAULT_STRUCTURECODE_FILE    "structcodes.csv"
#define STR_DH_HOLES    1048576
#define DH_COMP_DONE       0
#define DH_COMP_CANCEL     -1
#define DH_COMP_SELECT     1
#define DH_COMP_REFRESH    2
#define DH_COMPSTDB_HOLSEL_ALL         0
#define DH_COMPSTDB_HOLSEL_SELECTED    1
#define DH_COMPSTDB_INTSEL_FIXED          0
#define DH_COMPSTDB_INTSEL_LITHOLOGY      1
#define DH_COMPSTDB_INTSEL_BESTFITLITH    2
#define DH_COMPSTDB_INTSEL_INTFILE        3
#define DH_DATA_DIPAZIMUTH    0
#define DH_DATA_EASTNORTH     1
#define DH_DATA_FROMTO        2
#define DH_DATA_POINT         3
#define DH_DATA_COLLAR        4
#define DH_DATA_UNKNOWN       100
#define DH_DEFINE_PLAN    1
#define DH_DEFINE_SECT_NS        1
#define DH_DEFINE_SECT_EW        2
#define DH_DEFINE_SECT_ANGLED    3
#define DH_EXP_CSV           0
#define DH_EXP_ASCII         1
#define DH_EXP_ACCESS        2
#define DH_EXP_SHP           3
#define DH_EXP_SURPAC        4
#define DH_EXP_SHP_TRACES    5
#define DH_HOLES_ALL         0
#define DH_HOLES_SELECTED    1
#define DH_MASK_APPEND    0
#define DH_MASK_NEW       1
#define DH_PLOT_PLAN               0
#define DH_PLOT_SECTION            1
#define DH_PLOT_STRIPLOG           2
#define DH_PLOT_HOLE_TRACES        3
#define DH_PLOT_3D                 4
#define DH_PLOT_SECTION_STACK      5
#define DH_PLOT_SECTION_FENCE      6
#define DH_PLOT_SECTION_CROOKED    7
#define DH_SECT_PAGE_SECTION    1
#define DH_SURFACE_FIRST_LAYER_FROM     0
#define DH_SURFACE_FIRST_LAYER_TO       1
#define DH_SURFACE_SECOND_LAYER_FROM    2
#define DH_SURFACE_SECOND_LAYER_TO      3
#define DH_SURFACE_LAST_LAYER_FROM      4
#define DH_SURFACE_LAST_LAYER_TO        5
#define DIP_CONVENTION_NEGATIVE    -1
#define DIP_CONVENTION_POSITIVE    1
#define DH_DESURVEY_RAD_CURVE       0
#define DH_DESURVEY_POLYNOMIAL      1
#define DH_DESURVEY_STRAIGHT_SEG    2


// Class DMPPLY


// Class DOCU
#define DOCU_OPEN_VIEW    0
#define DOCU_OPEN_EDIT    1


// Class DU
#define DB_DUP_FIRST      1
#define DB_DUP_AVERAGE    2
#define DB_DUP_MINIMUM    3
#define DB_DUP_MAXIMUM    4
#define DB_DUP_MEDIAN     5
#define DB_DUP_LAST       6
#define DB_DUPEDIT_SINGLE    0
#define DB_DUPEDIT_ALL       1
#define DU_CHANNELS_DISPLAYED    0
#define DU_CHANNELS_ALL          1
#define DU_EXPORT_CSV          0
#define DU_EXPORT_ODDF         1
#define DU_EXPORT_POST_PC      2
#define DU_EXPORT_POST_UNIX    3
#define DU_FILL_INSIDE     0
#define DU_FILL_OUTSIDE    1
#define DU_IMPORT_APPEND          0
#define DU_IMPORT_REPLACE         1
#define DU_IMPORT_MERGE           2
#define DU_IMPORT_MERGE_APPEND    3
#define DU_INTERP_NEAREST    1
#define DU_INTERP_LINEAR     2
#define DU_INTERP_CUBIC      3
#define DU_INTERP_AKIMA      4
#define DU_INTERP_PREDICT    5
#define DU_INTERP_EDGE_NONE       0
#define DU_INTERP_EDGE_SAME       1
#define DU_INTERP_EDGE_NEAREST    2
#define DU_INTERP_EDGE_LINEAR     3
#define DU_LAB_TYPE_FREE     1
#define DU_LAB_TYPE_COMMA    2
#define DU_LEVEL_LINES    0
#define DU_LEVEL_TIES     1
#define DU_LEVEL_ALL      2
#define DU_LINEOUT_SINGLE      0
#define DU_LINEOUT_MULTIPLE    1
#define DU_FEATURE_TYPE_OUTPUT_POINT    0
#define DU_FEATURE_TYPE_OUTPUT_LINE     1
#define DU_GEODATABASE_EXPORT_TYPE_OVERWRITE_GEODATABASE     0
#define DU_GEODATABASE_EXPORT_TYPE_OVERWRITE_FEATURECLASS    1
#define DU_GEODATABASE_EXPORT_TYPE_APPEND                    2
#define DU_LINES_DISPLAYED    0
#define DU_LINES_SELECTED     1
#define DU_LINES_ALL          2
#define DU_LOADLTB_REPLACE    0
#define DU_LOADLTB_APPEND     1
#define DU_LOOKUP_EXACT                       0
#define DU_LOOKUP_NEAREST                     1
#define DU_LOOKUP_INTERPOLATE                 2
#define DU_LOOKUP_NEARESTCLOSE                3
#define DU_LOOKUP_INTERPCLOSE                 4
#define DU_LOOKUP_INTERPOLATE_DUMMYOUTSIDE    5
#define DU_LOOKUP_INTERPOLATE_CONSTOUTSIDE    6
#define DU_LOOKUP_INTERPOLATE_EXTPLOUTSIDE    7
#define DU_LOOKUP_MAXOPTION                   8
#define DU_MASK_INSIDE     0
#define DU_MASK_OUTSIDE    1
#define DU_MERGE_APPEND    0
#define DU_MODFID_INSERT    0
#define DU_MODFID_DELETE    1
#define DU_MODFID_APPEND    2
#define DU_MOVE_ABSOLUTE    0
#define DU_MOVE_MINUS       1
#define DU_MOVE_PLUS        2
#define DU_MOVE_INTERP      3
#define DU_REFID_LINEAR     0
#define DU_REFID_MINCUR     1
#define DU_REFID_AKIMA      2
#define DU_REFID_NEAREST    3
#define DU_SORT_ASCENDING     0
#define DU_SORT_DESCENDING    1
#define DU_SPLITLINE_XYPOSITION    0
#define DU_SPLITLINE_SEQUENTIAL    1
#define DU_SPLITLINE_TOVERSIONS    2
#define DU_STORAGE_LINE     0
#define DU_STORAGE_GROUP    1
#define QC_PLAN_SURVEYLINE    0
#define QC_PLAN_TIELINE       1
#define QC_PLAN_BOTHLINES     2
#define DU_DISTANCE_CHANNEL_MAINTAIN_DIRECTION       0
#define DU_DISTANCE_CHANNEL_CARTESIAN_COORDINATES    1
#define DU_DIRECTGRID_MIN     0
#define DU_DIRECTGRID_MAX     1
#define DU_DIRECTGRID_MEAN    2


// Class DXFI


// Class EDB
#define MAX_PROF_WND    5
#define EDB_PATH_FULL        0
#define EDB_PATH_DIR         1
#define EDB_PATH_NAME_EXT    2
#define EDB_PATH_NAME        3
#define EDB_PROF_I_CHANNEL               0
#define EDB_PROF_I_LINE_STYLE            1
#define EDB_PROF_I_LINE_WEIGHT           2
#define EDB_PROF_I_SYMBOL                3
#define EDB_PROF_I_SYMBOL_WEIGHT         4
#define EDB_PROF_I_COLOR                 5
#define EDB_PROF_I_WRAP                  6
#define EDB_PROF_I_BREAK_ON_DUMMY        7
#define EDB_PROF_I_GRID_LINE             8
#define EDB_PROF_R_GRID_LINE_INTERVAL    9
#define EDB_PROF_I_LOG                   10
#define EDB_PROF_R_LOG_MINIMUM           11
#define EDB_PROF_I_SAMESCALE             12
#define EDB_PROF_I_SOURCELINE            13
#define EDB_PROF_I_SCALEOPTION           14
#define EDB_PROF_I_SAMERANGE             15
#define EDB_PROFILE_SCALE_LINEAR       0
#define EDB_PROFILE_SCALE_LOG          1
#define EDB_PROFILE_SCALE_LOGLINEAR    2
#define EDB_REMOVE_SAVE       0
#define EDB_REMOVE_PROMPT     1
#define EDB_REMOVE_DISCARD    2
#define EDB_UNLOAD_NO_PROMPT        0
#define EDB_UNLOAD_SINGLE_PROMPT    1
#define EDB_UNLOAD_MULTI_PROMPT     2
#define EDB_WINDOW_POSITION_DOCKED      0
#define EDB_WINDOW_POSITION_FLOATING    1
#define EDB_WINDOW_RESTORE     0
#define EDB_WINDOW_MINIMIZE    1
#define EDB_WINDOW_MAXIMIZE    2
#define EDB_YAXIS_NORMAL      0
#define EDB_YAXIS_INVERTED    1


// Class EDOC
#define EDOC_PATH_FULL        0
#define EDOC_PATH_DIR         1
#define EDOC_PATH_NAME_EXT    2
#define EDOC_PATH_NAME        3
#define EDOC_TYPE_GMS3D              0
#define EDOC_TYPE_VOXEL              1
#define EDOC_TYPE_VOXEL_INVERSION    2
#define EDOC_TYPE_GMS2D              3
#define EDOC_TYPE_GEOSURFACE         4
#define EDOC_UNLOAD_NO_PROMPT    0
#define EDOC_UNLOAD_PROMPT       1
#define EDOC_WINDOW_POSITION_DOCKED      0
#define EDOC_WINDOW_POSITION_FLOATING    1
#define EDOC_WINDOW_RESTORE     0
#define EDOC_WINDOW_MINIMIZE    1
#define EDOC_WINDOW_MAXIMIZE    2
#define GMS3D_MODELTYPE_DEPTH    0
#define GMS3D_MODELTYPE_TIME     1
#define GMS2D_MODELTYPE_DEPTH    0
#define GMS2D_MODELTYPE_TIME     1


// Class EMAP
#define EMAP_FONT_TT     0
#define EMAP_FONT_GFN    1
#define EMAP_PATH_FULL        0
#define EMAP_PATH_DIR         1
#define EMAP_PATH_NAME_EXT    2
#define EMAP_PATH_NAME        3
#define EMAP_REDRAW_NO     0
#define EMAP_REDRAW_YES    1
#define EMAP_REMOVE_SAVE       0
#define EMAP_REMOVE_PROMPT     1
#define EMAP_REMOVE_DISCARD    2
#define EMAP_TRACK_ERASE    1
#define EMAP_TRACK_RMENU    2
#define EMAP_TRACK_CYCLE    4
#define EMAP_VIEWPORT_NORMAL        0
#define EMAP_VIEWPORT_BROWSEZOOM    1
#define EMAP_VIEWPORT_BROWSEAOI     2
#define EMAP_WINDOW_POSITION_DOCKED      0
#define EMAP_WINDOW_POSITION_FLOATING    1
#define EMAP_WINDOW_RESTORE     0
#define EMAP_WINDOW_MINIMIZE    1
#define EMAP_WINDOW_MAXIMIZE    2
#define LAYOUT_VIEW_MM    0
#define LAYOUT_VIEW_CM    1
#define LAYOUT_VIEW_IN    2


// Class EMAPTEMPLATE
#define EMAPTEMPLATE_PATH_FULL        0
#define EMAPTEMPLATE_PATH_DIR         1
#define EMAPTEMPLATE_PATH_NAME_EXT    2
#define EMAPTEMPLATE_PATH_NAME        3
#define EMAPTEMPLATE_TRACK_ERASE    1
#define EMAPTEMPLATE_TRACK_RMENU    2
#define EMAPTEMPLATE_TRACK_CYCLE    4
#define EMAPTEMPLATE_WINDOW_POSITION_DOCKED      0
#define EMAPTEMPLATE_WINDOW_POSITION_FLOATING    1
#define EMAPTEMPLATE_WINDOW_RESTORE     0
#define EMAPTEMPLATE_WINDOW_MINIMIZE    1
#define EMAPTEMPLATE_WINDOW_MAXIMIZE    2


// Class EUL3
#define EUL3_RESULT_X                1
#define EUL3_RESULT_Y                2
#define EUL3_RESULT_DEPTH            3
#define EUL3_RESULT_BACKGROUND       4
#define EUL3_RESULT_DEPTHERROR       5
#define EUL3_RESULT_LOCATIONERROR    6
#define EUL3_RESULT_WINDOWX          7
#define EUL3_RESULT_WINDOWY          8


// Class EXP


// Class FFT
#define FFT_DETREND_NONE    0
#define FFT_DETREND_ENDS    1
#define FFT_DETREND_ALL     2
#define FFT_DETREND_MEAN    3
#define FFT_WHITE_NOISE_ADD    0
#define FFT_WHITE_NOISE_SET    1


// Class FFT2
#define FFT2_PG_FORWARD    0
#define FFT2_PG_INVERSE    1


// Class FLT


// Class GD
#define GD_STATUS_READONLY    0
#define GD_STATUS_NEW         1
#define GD_STATUS_OLD         2


// Class GER


// Class GMSYS


// Class GU
#define EM_ERR_UNSCALED      0
#define EM_ERR_LOGSCALING    1
#define EM_INV_INPHASE       0
#define EM_INV_QUADRATURE    1
#define EM_INV_BOTH          2
#define EMPLATE_FREQUENCY    1
#define EMPLATE_TIME         9
#define EMPLATE_TX_X    1
#define EMPLATE_TX_Y    2
#define EMPLATE_TX_Z    3
#define GU_DAARC500_UNKNOWN          0
#define GU_DAARC500_GENERIC_ASCII    1
#define GU_DAARC500_GPS              2
#define GU_DAARC500_GR820_256D       3
#define GU_DAARC500_GR820_256DU      4
#define GU_DAARC500_GR820_512DU      5
#define GU_DAARC500_NAV              6
#define PEAKEULER_XY_NOFIT    0
#define PEAKEULER_XY_FIT      1


// Class GUI
#define AOI_RETURN_CANCEL      -1
#define AOI_RETURN_NODEFINE    0
#define AOI_RETURN_DEFINE      1
#define COORDSYS_MODE_ALL            0
#define COORDSYS_MODE_GCS            1
#define COORDSYS_MODE_PCS            2
#define COORDSYS_MODE_GCS_PCS        3
#define COORDSYS_MODE_PCS_UNKNOWN    4
#define DAT_TYPE_GRID              0
#define DAT_TYPE_IMAGE             1
#define DAT_TYPE_GRID_AND_IMAGE    2
#define FILE_FILTER_ALL                        1
#define FILE_FILTER_GDB                        2
#define FILE_FILTER_GX                         3
#define FILE_FILTER_GS                         4
#define FILE_FILTER_INI                        5
#define FILE_FILTER_OMN                        6
#define FILE_FILTER_VU                         7
#define FILE_FILTER_MAP                        8
#define FILE_FILTER_PRJ                        9
#define FILE_FILTER_CON                        10
#define FILE_FILTER_MNU                        11
#define FILE_FILTER_PDF                        12
#define FILE_FILTER_PLT                        13
#define FILE_FILTER_GWS                        14
#define FILE_FILTER_AGG                        15
#define FILE_FILTER_TBL                        16
#define FILE_FILTER_ZON                        17
#define FILE_FILTER_ITR                        18
#define FILE_FILTER_DXF                        19
#define FILE_FILTER_TIF                        20
#define FILE_FILTER_EMF                        21
#define FILE_FILTER_BMP                        22
#define FILE_FILTER_LUT                        23
#define FILE_FILTER_PNG                        24
#define FILE_FILTER_JPG                        25
#define FILE_FILTER_PCX                        26
#define FILE_FILTER_GIF                        27
#define FILE_FILTER_GRD                        28
#define FILE_FILTER_ERS                        29
#define FILE_FILTER_EPS                        30
#define FILE_FILTER_SHP                        31
#define FILE_FILTER_CGM                        32
#define FILE_FILTER_TAB                        33
#define FILE_FILTER_COMPS                      34
#define FILE_FILTER_CSV                        35
#define FILE_FILTER_GPF                        36
#define FILE_FILTER_PLY                        37
#define FILE_FILTER_STM                        38
#define FILE_FILTER_TTM                        39
#define FILE_FILTER_XYZ                        40
#define FILE_FILTER_BAR                        41
#define FILE_FILTER_GEOSOFT_LICENSE            42
#define FILE_FILTER_XML                        43
#define FILE_FILTER_GXNET                      44
#define FILE_FILTER_ECW                        45
#define FILE_FILTER_J2K                        46
#define FILE_FILTER_JP2                        47
#define FILE_FILTER_SEL                        48
#define FILE_FILTER_SVG                        49
#define FILE_FILTER_SVZ                        50
#define FILE_FILTER_WRP                        51
#define FILE_FILTER_MAPPLOT                    52
#define FILE_FILTER_DTM                        53
#define FILE_FILTER_VOXEL                      54
#define FILE_FILTER_MAPTEMPLATE                55
#define FILE_FILTER_ACTION                     56
#define FILE_FILTER_DM                         57
#define FILE_FILTER_KML                        58
#define FILE_FILTER_KMZ                        59
#define FILE_FILTER_TARGET_PLAN                60
#define FILE_FILTER_TARGET_SECTION             61
#define FILE_FILTER_TARGET_STRIPLOG            62
#define FILE_FILTER_TARGET_3D                  63
#define FILE_FILTER_ARGIS_LYR                  64
#define FILE_FILTER_ARGIS_MXD                  65
#define FILE_FILTER_GOCAD_TS                   66
#define FILE_FILTER_LST                        67
#define FILE_FILTER_ECS                        68
#define FILE_FILTER_TARGET_FENCE               69
#define FILE_FILTER_GMS3D                      70
#define FILE_FILTER_BT2                        71
#define FILE_FILTER_BPR                        72
#define FILE_FILTER_BPR2                       73
#define FILE_FILTER_XLS                        74
#define FILE_FILTER_XLSX                       75
#define FILE_FILTER_MDB                        76
#define FILE_FILTER_ACCDB                      77
#define FILE_FILTER_INTERSECTION_TBL           78
#define FILE_FILTER_UBC_CON                    79
#define FILE_FILTER_UBC_CHG                    80
#define FILE_FILTER_UBC_MSH                    81
#define FILE_FILTER_UBC_MSH_DAT                82
#define FILE_FILTER_UBC_TOPO_DAT               83
#define FILE_FILTER_UBC_TOPO_XYZ               84
#define FILE_FILTER_XYZ_TEMPLATE_I0            85
#define FILE_FILTER_PICO_TEMPLATE_I1           86
#define FILE_FILTER_BB_TEMPLATE_I2             87
#define FILE_FILTER_ASCII_TEMPLATE_I3          88
#define FILE_FILTER_ODBC_TEMPLATE_I4           89
#define FILE_FILTER_EXP                        90
#define FILE_FILTER_SEGY                       91
#define FILE_FILTER_DAARC500                   92
#define FILE_FILTER_TXT                        93
#define FILE_FILTER_VOXEL_INVERSION            94
#define FILE_FILTER_GMS                        95
#define FILE_FILTER_FLT3D                      96
#define FILE_FILTER_RESOURCE_PACK              97
#define FILE_FILTER_GEOSTRING                  98
#define FILE_FILTER_GEOSURFACE                 99
#define FILE_FILTER_GEOSOFT3DV                 100
#define FILE_FILTER_VECTORVOXEL                101
#define FILE_FILTER_FLT                        102
#define FILE_FILTER_XYZ_TEMPLATE_O0            103
#define FILE_FILTER_GMS2D                      104
#define FILE_FILTER_IP_DATABASE_TEMPLATE       105
#define FILE_FILTER_GEOSOFT_RESOURCE_MODULE    106
#define FILE_FILTER_VT                         107
#define FILE_FILTER_INT                        108
#define FILE_FILTER_SGT                        109
#define FILE_FILTER_IMGVIEW                    110
#define FILE_FILTER_ZIP                        111
#define FILE_FILTER_GPS_TABLE                  112
#define FILE_FILTER_VULCAN_TRIANGULATION       113
#define FILE_FILTER_VULCAN_BLOCK_MODEL         114
#define FILE_FILTER_PRJVIEW                    115
#define FILE_FILTER_LEAPFROG_MODEL             116
#define FILE_FILTER_IOGAS                      117
#define FILE_FILTER_ASEG_ESF                   118
#define FILE_FILTER_LACOSTE_DAT                119
#define FILE_FILTER_VAR                        120
#define FILE_FILTER_P190                       121
#define FILE_FILTER_UBC_OBS_DAT                122
#define FILE_FILTER_UBC_LOC                    123
#define FILE_FILTER_UBC_MOD                    124
#define FILE_FILTER_UBC_DEN                    125
#define FILE_FILTER_UBC_SUS                    126
#define FILE_FILTER_GOCAD_VOXET                127
#define FILE_FILTER_SCINTREX_DAT               128
#define FILE_FILTER_DMP                        129
#define FILE_FILTER_RAW                        130
#define FILE_FILTER_DAT                        131
#define FILE_FILTER_OMF                        132
#define FILE_FILTER_3DSURVEY                   133
#define FILE_FORM_OPEN    0
#define FILE_FORM_SAVE    1
#define GS_DIRECTORY_NONE                 0
#define GS_DIRECTORY_GEOSOFT              1
#define GS_DIRECTORY_BIN                  2
#define GS_DIRECTORY_GER                  3
#define GS_DIRECTORY_OMN                  4
#define GS_DIRECTORY_TBL                  5
#define GS_DIRECTORY_FONTS                6
#define GS_DIRECTORY_GX                   7
#define GS_DIRECTORY_GS                   8
#define GS_DIRECTORY_APPS                 9
#define GS_DIRECTORY_ETC                  10
#define GS_DIRECTORY_HLP                  11
#define GS_DIRECTORY_GXDEV                12
#define GS_DIRECTORY_COMPONENT            13
#define GS_DIRECTORY_CSV                  14
#define GS_DIRECTORY_LIC                  15
#define GS_DIRECTORY_INI                  16
#define GS_DIRECTORY_TEMP                 17
#define GS_DIRECTORY_UETC                 18
#define GS_DIRECTORY_UMAPTEMPLATE         19
#define GS_DIRECTORY_COMPONENT_SCRIPTS    50
#define GS_DIRECTORY_COMPONENT_HTML       51
#define GS_DIRECTORY_IMG                  52
#define GS_DIRECTORY_BAR                  53
#define GS_DIRECTORY_GXNET                54
#define GS_DIRECTORY_MAPTEMPLATE          55
#define IMPCH_TYPE_DATA     0
#define IMPCH_TYPE_ASSAY    1
#define WINDOW_RESTORE     0
#define WINDOW_MINIMIZE    1
#define WINDOW_MAXIMIZE    2
#define XTOOL_ALIGN_LEFT      1
#define XTOOL_ALIGN_TOP       2
#define XTOOL_ALIGN_RIGHT     4
#define XTOOL_ALIGN_BOTTOM    8
#define XTOOL_ALIGN_ANY       15
#define XTOOL_DOCK_TOP       1
#define XTOOL_DOCK_LEFT      2
#define XTOOL_DOCK_RIGHT     3
#define XTOOL_DOCK_BOTTOM    4
#define XTOOL_DOCK_FLOAT     5


// Class HTTP


// Class IEXP


// Class INTERNET


// Class IP
#define IP_ARRAY_DPDP            0
#define IP_ARRAY_PLDP            1
#define IP_ARRAY_PLPL            2
#define IP_ARRAY_GRAD            3
#define IP_ARRAY_WENNER          5
#define IP_ARRAY_SCHLUMBERGER    6
#define IP_ARRAY_UNKNOWN         7
#define IP_ARRAY_3D              9
#define IP_ARRAY_3D_PLDP         10
#define IP_ARRAY_3D_PLPL         11
#define IP_CHANNELS_DISPLAYED    0
#define IP_CHANNELS_SELECTED     1
#define IP_CHANNELS_ALL          2
#define IP_DOMAIN_NONE         -1
#define IP_DOMAIN_TIME         0
#define IP_DOMAIN_FREQUENCY    1
#define IP_DOMAIN_BOTH         2
#define IP_DUPLICATE_APPEND       0
#define IP_DUPLICATE_OVERWRITE    1
#define IP_FILTER_PANTLEG      1
#define IP_FILTER_PANTLEGP     2
#define IP_FILTER_PYRIAMID     3
#define IP_FILTER_PYRIAMIDP    4
#define IP_I2XIMPMODE_REPLACE    0
#define IP_I2XIMPMODE_MERGE      1
#define IP_I2XINV_IMAGE    0
#define IP_I2XINV_ZONGE    1
#define IP_LINES_DISPLAYED    0
#define IP_LINES_SELECTED     1
#define IP_LINES_ALL          2
#define IP_PLOT_PSEUDOSECTION     0
#define IP_PLOT_STACKEDSECTION    1
#define IP_QCTYPE_RESISTIVITY    0
#define IP_QCTYPE_IP             1
#define IP_STACK_TYPE_MAP           0
#define IP_STACK_TYPE_EQUAL         1
#define IP_STACK_TYPE_GEOGRAPHIC    2
#define IP_STNSCALE_NONE      0
#define IP_STNSCALE_ASPACE    1
#define IP_STNSCALE_VALUE     2
#define IP_STNSCALE_FILE      3
#define IP_SYS_IPDATA        0
#define IP_SYS_IP2           1
#define IP_SYS_IP6           2
#define IP_SYS_IP10          3
#define IP_SYS_SYSCALR2      4
#define IP_SYS_IPR11         5
#define IP_SYS_IPR12         6
#define IP_SYS_PHOENIX       7
#define IP_SYS_PHOENIX_V2    8
#define IP_SYS_ELREC_PRO     9
#define IP_SYS_PROSYS_II     10
#define IP_UBC_CONTROL_NONE       -1
#define IP_UBC_CONTROL_DEFAULT    0
#define IP_UBC_CONTROL_FILE       1
#define IP_UBC_CONTROL_VALUE      2
#define IP_UBC_CONTROL_LENGTH     3
#define IP_PLDP_CONV_CLOSE_RX      0
#define IP_PLDP_CONV_MID_RX        1
#define IP_PLDP_CONV_DISTANT_RX    2


// Class IPGUI


// Class KGRD


// Class LMSG


// Class MISC


// Class MSTK


// Class MVG
#define MVG_DRAW_POLYLINE    0
#define MVG_DRAW_POLYGON     1
#define MVG_GRID_DOT      0
#define MVG_GRID_LINE     1
#define MVG_GRID_CROSS    2
#define MVG_LABEL_BOUND_NO     0
#define MVG_LABEL_BOUND_YES    1
#define MVG_LABEL_JUST_TOP       0
#define MVG_LABEL_JUST_BOTTOM    1
#define MVG_LABEL_JUST_LEFT      2
#define MVG_LABEL_JUST_RIGHT     3
#define MVG_LABEL_ORIENT_HORIZONTAL    0
#define MVG_LABEL_ORIENT_TOP_RIGHT     1
#define MVG_LABEL_ORIENT_TOP_LEFT      2
#define MVG_SCALE_LINEAR       0
#define MVG_SCALE_LOG          1
#define MVG_SCALE_LOGLINEAR    2
#define MVG_WRAP_NO     0
#define MVG_WRAP_YES    1


// Class PDF3D


// Class PGEXP


// Class PGU
#define BLAKEY_TEST_ONESIDE      1
#define BLAKEY_TEST_TWOSIDE      2
#define BLAKEY_TEST_THREESIDE    3
#define BLAKEY_TEST_FOURSIDE     4
#define PGU_CORR_SIMPLE     0
#define PGU_CORR_PEARSON    1
#define PGU_DIRECTGRID_MINIMUM    0
#define PGU_DIRECTGRID_MAXIMUM    1
#define PGU_DIRECTGRID_MEAN       2
#define PGU_DIRECTGRID_ITEMS      3
#define PGU_FORWARD     0
#define PGU_BACKWARD    1
#define PGU_TRANS_NONE    0
#define PGU_TRANS_LOG     1
#define PGU_INTERP_ORDER_XYZ    0
#define PGU_INTERP_ORDER_XZY    1
#define PGU_INTERP_ORDER_YXZ    2
#define PGU_INTERP_ORDER_YZX    3
#define PGU_INTERP_ORDER_ZXY    4
#define PGU_INTERP_ORDER_ZYX    5


// Class PRAGA3


// Class PROJ
#define COMMAND_ENV_NORMAL        0
#define COMMAND_ENV_IN3DVIEWER    1
#define TOOL_TYPE_DEFAULT      0
#define TOOL_TYPE_AUXILIARY    1
#define TOOL_TYPE_ALL          2
#define PROJ_DISPLAY_NO        0
#define PROJ_DISPLAY_YES       1
#define PROJ_DISPLAY_ALWAYS    2


// Class RGRD


// Class SEMPLOT
#define SEMPLOT_GROUP_CLASS    "Semplot"
#define SEMPLOT_EXPORT_NORMAL     0
#define SEMPLOT_EXPORT_NOEXTRA    1
#define SEMPLOT_EXT_ALL        0
#define SEMPLOT_EXT_SEMPLOT    1
#define SEMPLOT_EXT_CHIMERA    2
#define SEMPLOT_PLOT_ALL        0
#define SEMPLOT_PLOT_XYPLOT     1
#define SEMPLOT_PLOT_TRIPLOT    2
#define SEMPLOT_PLOT_UNKNOWN    3


// Class SHP
#define SHP_GEOM_TYPE_POINT       1
#define SHP_GEOM_TYPE_ARC         3
#define SHP_GEOM_TYPE_POLYGON     5
#define SHP_GEOM_TYPE_POINTZ      11
#define SHP_GEOM_TYPE_ARCZ        13
#define SHP_GEOM_TYPE_POLYGONZ    15


// Class SQLSRV
#define MFCSQL_DRIVER_NOPROMPT             0
#define MFCSQL_DRIVER_COMPLETE             1
#define MFCSQL_DRIVER_PROMPT               2
#define MFCSQL_DRIVER_COMPLETE_REQUIRED    3


// Class STK
#define STK_AXIS_X    0
#define STK_AXIS_Y    1
#define STK_FLAG_PROFILE    0
#define STK_FLAG_FID        1
#define STK_FLAG_SYMBOL     2
#define STK_FLAG_XBAR       3
#define STK_FLAG_XLABEL     4
#define STK_FLAG_XTITLE     5
#define STK_FLAG_YBAR       6
#define STK_FLAG_YLABEL     7
#define STK_FLAG_YTITLE     8
#define STK_FLAG_GRID1      9
#define STK_FLAG_GRID2      10
#define STK_GRID_PRIMARY      0
#define STK_GRID_SECONDARY    1


// Class STRINGS


// Class TC
#define TC_OPT_NONE    0
#define TC_OPT_MAX     1
#define TC_SURVEYTYPE_GROUND       0
#define TC_SURVEYTYPE_SHIPBORNE    1
#define TC_SURVEYTYPE_AIRBORNE     2
#define GG_ELEMENT_XX    0
#define GG_ELEMENT_YY    1
#define GG_ELEMENT_XY    2
#define GG_ELEMENT_XZ    3
#define GG_ELEMENT_YZ    4


// Class TEST


// Class TIN


// Class TRND
#define TRND_MIN    0
#define TRND_MAX    1


// Class UNC
#define UTF8_MAX_CHAR    5


// Class VAU
#define VAU_PRUNE_DUMMY    0
#define VAU_PRUNE_VALID    1


// Class VVEXP


// Class VVU
#define QC_CRITERION_1     0
#define QC_CRITERION_2     1
#define QC_CRITERION_12    2
#define TEM_ARRAY_VERTICALSOUNDING    0
#define TEM_ARRAY_PROFILING           1
#define TEM_ARRAY_BOREHOLE            2
#define VV_DUP_AVERAGE    0
#define VV_DUP_1          1
#define VV_DUP_2          2
#define VV_DUP_DUMMY      3
#define VV_DUP_SAMPLE     4
#define VV_XYDUP_AVERAGE    0
#define VV_XYDUP_SUM        1
#define VVU_CASE_TOLERANT     0
#define VVU_CASE_SENSITIVE    1
#define VVU_CLIP_DUMMY    0
#define VVU_CLIP_LIMIT    1
#define VVU_DUMMYREPEAT_FIRST     0
#define VVU_DUMMYREPEAT_LAST      1
#define VVU_DUMMYREPEAT_MIDDLE    2
#define VVU_INTERP_NEAREST    1
#define VVU_INTERP_LINEAR     2
#define VVU_INTERP_CUBIC      3
#define VVU_INTERP_AKIMA      4
#define VVU_INTERP_PREDICT    5
#define VVU_INTERP_EDGE_NONE       0
#define VVU_INTERP_EDGE_SAME       1
#define VVU_INTERP_EDGE_NEAREST    2
#define VVU_INTERP_EDGE_LINEAR     3
#define LINE_2_POINTS         0
#define LINE_POINT_AZIMUTH    1
#define VVU_MASK_INSIDE     0
#define VVU_MASK_OUTSIDE    1
#define VVU_MATCH_FULL_STRINGS    0
#define VVU_MATCH_INPUT_LENGTH    1
#define VVU_MODE_MEAN       0
#define VVU_MODE_MEDIAN     1
#define VVU_MODE_MAXIMUM    2
#define VVU_MODE_MINIMUM    3
#define VVU_OFFSET_FORWARD     0
#define VVU_OFFSET_BACKWARD    1
#define VVU_OFFSET_RIGHT       2
#define VVU_OFFSET_LEFT        3
#define VVU_PRUNE_DUMMY    0
#define VVU_PRUNE_VALID    1
#define VVU_SPL_LINEAR     0
#define VVU_SPL_CUBIC      1
#define VVU_SPL_AKIMA      2
#define VVU_SPL_NEAREST    3
#define VVU_SRCHREPL_CASE_TOLERANT     0
#define VVU_SRCHREPL_CASE_SENSITIVE    1


