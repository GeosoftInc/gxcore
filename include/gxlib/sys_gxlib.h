//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file sys_gxlib.h
* @date 2017-11-06
* @brief File containing SYS GX C API constant and function declarations
*/

/**
* @defgroup SYS_Module SYS
* The SYS library functions perform a wide range functions,
* including the storage and retrieval of named parameters
* from the current workspace; writing messages to the user;
* display of progress bars; retrieving file, date and time
* information from the operating system; and providing warning
* and error handling functions.
*
* Notes:
*
* PARAMETER CONTROL FUNCTIONS
* 
* Parameters can be named with an index extension.
* For example, a parameter could be named as "PARM[1]".
* The index can be a positive number, or it can be a '*'.
* 
* If the index is a '*' in SetString_SYS, then the value string
* will be parsed into multiple values. Commas are assumed to be delimiters.
* 
* E.g.
* 
* ::
* 
*    "group1",
*    "multiparm[*]",
*    "value1,\"value,2\",\"value 3\",  value4  ,\"value 5 \""
* 
* 
* Will set:
* 
* ::
* 
*     multiparm[0] ="value1"
*     multiparm[1] ="value,2"
*     multiparm[2] ="value 3"
*     multiparm[3] ="value4"
*     multiparm[4] ="value 5"
* 
* To read a parameter, name the parameter with the index.  There is no
* looped-reading ability. For example using the following with GtString_SYS:
* 
* "group1","multiparm[3]",setting
* 
* will return:
* 
* setting = "value4"
*
* @{
*/

#pragma once
#ifndef HSYS_H_DEFINED
#define HSYS_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name ARC_LICENSE Definitions
* 
* ArcGIS platform types
*/
///@{
/** 
* ARC_LICENSE_ENGINENOTPRESENT
* 
* The Engine or any qualifying ArcGIS product is missing
*/
#define ARC_LICENSE_ENGINENOTPRESENT 0
/** 
* ARC_LICENSE_DESKTOPENGINE
* 
* Desktop Engine
*/
#define ARC_LICENSE_DESKTOPENGINE 1
/** 
* ARC_LICENSE_ARCVIEW
* 
* ArcView
*/
#define ARC_LICENSE_ARCVIEW 2
/** 
* ARC_LICENSE_ARCEDITOR
* 
* ArcEditor
*/
#define ARC_LICENSE_ARCEDITOR 3
/** 
* ARC_LICENSE_ARCINFO
* 
* ArcInfo
*/
#define ARC_LICENSE_ARCINFO 4
/** 
* ARC_LICENSE_ARCSERVER
* 
* ArcServer
*/
#define ARC_LICENSE_ARCSERVER 5
///@}

/**
* @name GEO_DIRECTORY Definitions
* 
* Geosoft directory defines
*/
///@{
/** 
* GEO_DIRECTORY_NONE
* 
* None
*/
#define GEO_DIRECTORY_NONE 0
/** 
* GEO_DIRECTORY_GEOSOFT
* 
* Geosoft\
*/
#define GEO_DIRECTORY_GEOSOFT 1
/** 
* GEO_DIRECTORY_BIN
* 
* Geosoft\bin
*/
#define GEO_DIRECTORY_BIN 2
/** 
* GEO_DIRECTORY_GER
* 
* Geosoft\ger
*/
#define GEO_DIRECTORY_GER 3
/** 
* GEO_DIRECTORY_OMN
* 
* Geosoft\omn
*/
#define GEO_DIRECTORY_OMN 4
/** 
* GEO_DIRECTORY_TBL
* 
* Geosoft\tbl
*/
#define GEO_DIRECTORY_TBL 5
/** 
* GEO_DIRECTORY_FONTS
* 
* Geosoft\fonts
*/
#define GEO_DIRECTORY_FONTS 6
/** 
* GEO_DIRECTORY_GX
* 
* Geosoft\gx
*/
#define GEO_DIRECTORY_GX 7
/** 
* GEO_DIRECTORY_GS
* 
* Geosoft\gs
*/
#define GEO_DIRECTORY_GS 8
/** 
* GEO_DIRECTORY_APPS
* 
* Geosoft\apps
*/
#define GEO_DIRECTORY_APPS 9
/** 
* GEO_DIRECTORY_ETC
* 
* Geosoft\user\etc and then Geosoft\etc
*/
#define GEO_DIRECTORY_ETC 10
/** 
* GEO_DIRECTORY_HLP
* 
* Geosoft\hlp
*/
#define GEO_DIRECTORY_HLP 11
/** 
* GEO_DIRECTORY_USER_CSV
* 
* Geosoft\user\csv
*/
#define GEO_DIRECTORY_USER_CSV 14
/** 
* GEO_DIRECTORY_USER_LIC
* 
* Geosoft\user\lic
*/
#define GEO_DIRECTORY_USER_LIC 15
/** 
* GEO_DIRECTORY_USER_INI
* 
* Geosoft\user\ini
*/
#define GEO_DIRECTORY_USER_INI 16
/** 
* GEO_DIRECTORY_USER_TEMP
* 
* Geosoft\temp (or where the user put it)
*/
#define GEO_DIRECTORY_USER_TEMP 17
/** 
* GEO_DIRECTORY_USER_ETC
* 
* Geosoft\user\etc
*/
#define GEO_DIRECTORY_USER_ETC 18
/** 
* GEO_DIRECTORY_IMG
* 
* Geosoft\img
*/
#define GEO_DIRECTORY_IMG 19
/** 
* GEO_DIRECTORY_BAR
* 
* Geosoft\bar
*/
#define GEO_DIRECTORY_BAR 20
/** 
* GEO_DIRECTORY_MAPTEMPLATE
* 
* Geosoft\maptemplate
*/
#define GEO_DIRECTORY_MAPTEMPLATE 22
/** 
* GEO_DIRECTORY_USER_MAPTEMPLATE
* 
* Geosoft\user\maptemplate
*/
#define GEO_DIRECTORY_USER_MAPTEMPLATE 23
/** 
* GEO_DIRECTORY_PYGX
* 
* Geosoft\pygx
*/
#define GEO_DIRECTORY_PYGX 24
/** 
* GEO_DIRECTORY_USER_PYGX
* 
* Geosoft\user\pygx
*/
#define GEO_DIRECTORY_USER_PYGX 25
/** 
* GEO_DIRECTORY_USER_GX
* 
* Geosoft\user\gx
*/
#define GEO_DIRECTORY_USER_GX 26
///@}

/**
* @name REG_DOMAIN Definitions
* 
* Registry key domains
*/
///@{
/** 
* REG_DOMAIN_MACHINE
* 
* Same as HKEY_LOCAL_MACHINE in Windows
*/
#define REG_DOMAIN_MACHINE 0
/** 
* REG_DOMAIN_USER
* 
* Same as HKEY_CURRENT_USER in Windows
*/
#define REG_DOMAIN_USER 1
///@}

/**
* @name SHELL_EXECUTE Definitions
* 
* Shell execute defines
*/
///@{
/** 
* SW_HIDE
*/
#define SW_HIDE 0
/** 
* SW_SHOWNORMAL
*/
#define SW_SHOWNORMAL 1
/** 
* SW_SHOWMINIMIZED
*/
#define SW_SHOWMINIMIZED 2
/** 
* SW_SHOWMAXIMIZED
*/
#define SW_SHOWMAXIMIZED 3
/** 
* SW_SHOWNOACTIVATE
*/
#define SW_SHOWNOACTIVATE 4
/** 
* SW_SHOW
*/
#define SW_SHOW 5
/** 
* SW_MINIMIZE
*/
#define SW_MINIMIZE 6
/** 
* SW_SHOWMINNOACTIVE
*/
#define SW_SHOWMINNOACTIVE 7
/** 
* SW_SHOWNA
*/
#define SW_SHOWNA 8
/** 
* SW_RESTORE
*/
#define SW_RESTORE 9
/** 
* SW_SHOWDEFAULT
*/
#define SW_SHOWDEFAULT 10
/** 
* SW_FORCEMINIMIZE
*/
#define SW_FORCEMINIMIZE 11
///@}

/**
* @name SYS_DIR Definitions
* 
* SYS Directory locations
*/
///@{
/** 
* SYS_DIR_LOCAL
* 
* Is the workspace working directory
*/
#define SYS_DIR_LOCAL 0
/** 
* SYS_DIR_GEOSOFT
* 
* Is the geosoft installation directory (read-only)
*/
#define SYS_DIR_GEOSOFT 1
/** 
* SYS_DIR_USER
* 
* is the geosoft installation directory that
* contains user read/write files.
*/
#define SYS_DIR_USER 2
/** 
* SYS_DIR_GEOTEMP
* 
* Geosoft Temp folder
*/
#define SYS_DIR_GEOTEMP 3
/** 
* SYS_DIR_WINDOWS
* 
* Windows folder
*/
#define SYS_DIR_WINDOWS 4
/** 
* SYS_DIR_SYSTEM
* 
* Windows SYSTEM folder
*/
#define SYS_DIR_SYSTEM 5
/** 
* SYS_DIR_LICENSE
* 
* Where the license file is stored
*/
#define SYS_DIR_LICENSE 6
/** 
* SYS_DIR_RESOURCEFILES
* 
* User RESOURCEFILES Folder
*/
#define SYS_DIR_RESOURCEFILES 7
/** 
* SYS_DIR_GEOSOFT_BAR
* 
* BAR folder
*/
#define SYS_DIR_GEOSOFT_BAR 100
/** 
* SYS_DIR_GEOSOFT_BIN
* 
* BIN folder
*/
#define SYS_DIR_GEOSOFT_BIN 101
/** 
* SYS_DIR_GEOSOFT_CSV
* 
* CSV folder
*/
#define SYS_DIR_GEOSOFT_CSV 102
/** 
* SYS_DIR_GEOSOFT_CSV_ALIASES
* 
* CSV ALIASES folder
*/
#define SYS_DIR_GEOSOFT_CSV_ALIASES 103
/** 
* SYS_DIR_GEOSOFT_DATA
* 
* DATA folder
*/
#define SYS_DIR_GEOSOFT_DATA 104
/** 
* SYS_DIR_GEOSOFT_DBG
* 
* DBG folder
*/
#define SYS_DIR_GEOSOFT_DBG 105
/** 
* SYS_DIR_GEOSOFT_ENCRYPTEDFILES
* 
* Encrypted Files folder
*/
#define SYS_DIR_GEOSOFT_ENCRYPTEDFILES 106
/** 
* SYS_DIR_GEOSOFT_ETC
* 
* ETC folder
*/
#define SYS_DIR_GEOSOFT_ETC 107
/** 
* SYS_DIR_GEOSOFT_FONTS
* 
* FONTS folder
*/
#define SYS_DIR_GEOSOFT_FONTS 108
/** 
* SYS_DIR_GEOSOFT_GER
* 
* GER folder
*/
#define SYS_DIR_GEOSOFT_GER 109
/** 
* SYS_DIR_GEOSOFT_GS
* 
* GS folder
*/
#define SYS_DIR_GEOSOFT_GS 110
/** 
* SYS_DIR_GEOSOFT_GX
* 
* GX folder
*/
#define SYS_DIR_GEOSOFT_GX 111
/** 
* SYS_DIR_GEOSOFT_HLP
* 
* HLP folder
*/
#define SYS_DIR_GEOSOFT_HLP 112
/** 
* SYS_DIR_GEOSOFT_IMG
* 
* IMG folder
*/
#define SYS_DIR_GEOSOFT_IMG 113
/** 
* SYS_DIR_GEOSOFT_INI
* 
* INI folder
*/
#define SYS_DIR_GEOSOFT_INI 114
/** 
* SYS_DIR_GEOSOFT_MAPTEMPLATE
* 
* MAPTEMPLATE folder
*/
#define SYS_DIR_GEOSOFT_MAPTEMPLATE 115
/** 
* SYS_DIR_GEOSOFT_OMN
* 
* OMN folder
*/
#define SYS_DIR_GEOSOFT_OMN 116
/** 
* SYS_DIR_GEOSOFT_PAGE
* 
* PAGE folder
*/
#define SYS_DIR_GEOSOFT_PAGE 117
/** 
* SYS_DIR_GEOSOFT_SCHEMA
* 
* SCHEMA folder
*/
#define SYS_DIR_GEOSOFT_SCHEMA 118
/** 
* SYS_DIR_GEOSOFT_SPEC_INI
* 
* SPEC INI older
*/
#define SYS_DIR_GEOSOFT_SPEC_INI 119
/** 
* SYS_DIR_GEOSOFT_STYLESHEETS
* 
* STYLE SHEETS folder
*/
#define SYS_DIR_GEOSOFT_STYLESHEETS 120
/** 
* SYS_DIR_GEOSOFT_TBL
* 
* TBL folder
*/
#define SYS_DIR_GEOSOFT_TBL 121
/** 
* SYS_DIR_USER_CSV
* 
* User CSV Folder
*/
#define SYS_DIR_USER_CSV 200
/** 
* SYS_DIR_USER_ETC
* 
* User ETC Folder
*/
#define SYS_DIR_USER_ETC 201
/** 
* SYS_DIR_USER_GS
* 
* User GS Folder
*/
#define SYS_DIR_USER_GS 202
/** 
* SYS_DIR_USER_HLP
* 
* User HLP Folder
*/
#define SYS_DIR_USER_HLP 203
/** 
* SYS_DIR_USER_INI
* 
* User INI Folder
*/
#define SYS_DIR_USER_INI 204
/** 
* SYS_DIR_USER_LIC
* 
* User LIC Folder
*/
#define SYS_DIR_USER_LIC 205
/** 
* SYS_DIR_USER_MAPTEMPLATE
* 
* User MAPTEMPLATE Folder
*/
#define SYS_DIR_USER_MAPTEMPLATE 206
/** 
* SYS_DIR_USER_OMN
* 
* User OMN Folder
*/
#define SYS_DIR_USER_OMN 207
/** 
* SYS_DIR_USER_BAR
* 
* User BAR Folder
*/
#define SYS_DIR_USER_BAR 214
/** 
* SYS_DIR_USER_IMG
* 
* User IMG Folder
*/
#define SYS_DIR_USER_IMG 215
/** 
* SYS_DIR_USER_STACKS
* 
* User STACKS Folder
*/
#define SYS_DIR_USER_STACKS 209
/** 
* SYS_DIR_USER_TEMP
* 
* User TEMP Folder
*/
#define SYS_DIR_USER_TEMP 210
/** 
* SYS_DIR_USER_SERVICES
* 
* User SERVICES Folder
*/
#define SYS_DIR_USER_SERVICES 211
/** 
* SYS_DIR_USER_STYLESHEETS
* 
* User STYLESHEETS Folder
*/
#define SYS_DIR_USER_STYLESHEETS 212
///@}

/**
* @name SYS_FONT Definitions
* 
* Font types
*/
///@{
/** 
* SYS_FONT_GFN
* 
* Geosoft GFN fonts.
*/
#define SYS_FONT_GFN 1
/** 
* SYS_FONT_TT
* 
* Available TrueType fonts
*/
#define SYS_FONT_TT 0
///@}

/**
* @name SYS_INFO Definitions
* 
* System information
*/
///@{
/** 
* SYS_INFO_VERSION_MAJOR
*/
#define SYS_INFO_VERSION_MAJOR 0
/** 
* SYS_INFO_VERSION_MINOR
*/
#define SYS_INFO_VERSION_MINOR 1
/** 
* SYS_INFO_VERSION_SP
*/
#define SYS_INFO_VERSION_SP 2
/** 
* SYS_INFO_BUILD_NUMBER
*/
#define SYS_INFO_BUILD_NUMBER 3
/** 
* SYS_INFO_BUILD_LABEL
*/
#define SYS_INFO_BUILD_LABEL 4
/** 
* SYS_INFO_VERSION_LABEL
*/
#define SYS_INFO_VERSION_LABEL 5
/** 
* SYS_INFO_PRODUCTNAME
*/
#define SYS_INFO_PRODUCTNAME 6
/** 
* SYS_INFO_SERVERNAME
*/
#define SYS_INFO_SERVERNAME 7
/** 
* SYS_INFO_LEGALCOPYRIGHT
*/
#define SYS_INFO_LEGALCOPYRIGHT 8
/** 
* SYS_INFO_REGISTRY
*/
#define SYS_INFO_REGISTRY 9
/** 
* SYS_INFO_REGISTRY_ENVIRONMENT
*/
#define SYS_INFO_REGISTRY_ENVIRONMENT 10
/** 
* SYS_INFO_REGISTRY_SUPPORT
*/
#define SYS_INFO_REGISTRY_SUPPORT 11
/** 
* SYS_INFO_REGISTRY_INTERAPP
*/
#define SYS_INFO_REGISTRY_INTERAPP 12
/** 
* SYS_INFO_OIS_REGISTRY
*/
#define SYS_INFO_OIS_REGISTRY 13
/** 
* SYS_INFO_TEST_REGISTRY
*/
#define SYS_INFO_TEST_REGISTRY 14
///@}

/**
* @name SYS_LINEAGE_SOURCE Definitions
* 
* Type of lineage sources
*/
///@{
/** 
* SYS_LINEAGE_SOURCE_MAP
*/
#define SYS_LINEAGE_SOURCE_MAP 0
/** 
* SYS_LINEAGE_SOURCE_MXD
*/
#define SYS_LINEAGE_SOURCE_MXD 1
/** 
* SYS_LINEAGE_SOURCE_DB
*/
#define SYS_LINEAGE_SOURCE_DB 2
/** 
* SYS_LINEAGE_SOURCE_MAPTEMPLATE
*/
#define SYS_LINEAGE_SOURCE_MAPTEMPLATE 3
/** 
* SYS_LINEAGE_SOURCE_GRID
*/
#define SYS_LINEAGE_SOURCE_GRID 4
/** 
* SYS_LINEAGE_SOURCE_VOXEL
*/
#define SYS_LINEAGE_SOURCE_VOXEL 5
///@}

/**
* @name SYS_MENU_CLEAR Definitions
* 
* Font types
*/
///@{
/** 
* SYS_MENU_CLEAR_ALL
* 
* Clear all menus excluding the coremenus.omn
* but including any default menus specified in the settings (these will not come back in this project).
*/
#define SYS_MENU_CLEAR_ALL 0
/** 
* SYS_MENU_CLEAR_DEFAULT
* 
* Clear all menus excluding the coremenus.omn
* but reload any default menus specified in the settings (essentially this is a refresh
* back to the default state again).
*/
#define SYS_MENU_CLEAR_DEFAULT 1
///@}

/**
* @name SYS_PATH Definitions
* 
* Get specific Geosoft paths. The path name will
* have a directory separator at the end.
*/
///@{
/** 
* SYS_PATH_LOCAL
* 
* Is the workspace working directory
*/
#define SYS_PATH_LOCAL 0
/** 
* SYS_PATH_GEOSOFT
* 
* Is the geosoft installation directory (read-only)
*/
#define SYS_PATH_GEOSOFT 1
/** 
* SYS_PATH_GEOSOFT_USER
* 
* is the geosoft installation directory that
* contains user read/write files.
*/
#define SYS_PATH_GEOSOFT_USER 2
/** 
* SYS_PATH_GEOTEMP
* 
* Geosoft Temp folder
*/
#define SYS_PATH_GEOTEMP 3
/** 
* SYS_PATH_WINDOWS
* 
* Windows folder
*/
#define SYS_PATH_WINDOWS 4
/** 
* SYS_PATH_SYSTEM
* 
* System folder
*/
#define SYS_PATH_SYSTEM 5
/** 
* SYS_PATH_LICENSE
* 
* Where the license file is stored
*/
#define SYS_PATH_LICENSE 6
/** 
* SYS_PATH_RESOURCEFILES
* 
* User RESOURCEFILES Folder
*/
#define SYS_PATH_RESOURCEFILES 7
/** 
* SYS_PATH_GEOSOFT_BAR
* 
* BAR folder
*/
#define SYS_PATH_GEOSOFT_BAR 100
/** 
* SYS_PATH_GEOSOFT_BIN
* 
* BIN folder
*/
#define SYS_PATH_GEOSOFT_BIN 101
/** 
* SYS_PATH_GEOSOFT_CSV
* 
* CSV folder
*/
#define SYS_PATH_GEOSOFT_CSV 102
/** 
* SYS_PATH_GEOSOFT_CSV_ALIASES
* 
* CSV ALIASES folder
*/
#define SYS_PATH_GEOSOFT_CSV_ALIASES 103
/** 
* SYS_PATH_GEOSOFT_DATA
* 
* DATA folder
*/
#define SYS_PATH_GEOSOFT_DATA 104
/** 
* SYS_PATH_GEOSOFT_DBG
* 
* DBG folder
*/
#define SYS_PATH_GEOSOFT_DBG 105
/** 
* SYS_PATH_GEOSOFT_ENCRYPTEDFILES
* 
* Encrypted Files folder
*/
#define SYS_PATH_GEOSOFT_ENCRYPTEDFILES 106
/** 
* SYS_PATH_GEOSOFT_ETC
* 
* ETC folder
*/
#define SYS_PATH_GEOSOFT_ETC 107
/** 
* SYS_PATH_GEOSOFT_FONTS
* 
* FONTS folder
*/
#define SYS_PATH_GEOSOFT_FONTS 108
/** 
* SYS_PATH_GEOSOFT_GER
* 
* GER folder
*/
#define SYS_PATH_GEOSOFT_GER 109
/** 
* SYS_PATH_GEOSOFT_GS
* 
* GS folder
*/
#define SYS_PATH_GEOSOFT_GS 110
/** 
* SYS_PATH_GEOSOFT_PYGX
* 
* PYGX folder
*/
#define SYS_PATH_GEOSOFT_PYGX 126
/** 
* SYS_PATH_GEOSOFT_GX
* 
* GX folder
*/
#define SYS_PATH_GEOSOFT_GX 111
/** 
* SYS_PATH_GEOSOFT_HLP
* 
* HLP folder
*/
#define SYS_PATH_GEOSOFT_HLP 112
/** 
* SYS_PATH_GEOSOFT_IMG
* 
* IMG folder
*/
#define SYS_PATH_GEOSOFT_IMG 113
/** 
* SYS_PATH_GEOSOFT_INI
* 
* INI folder
*/
#define SYS_PATH_GEOSOFT_INI 114
/** 
* SYS_PATH_GEOSOFT_MAPTEMPLATE
* 
* MAPTEMPLATE folder
*/
#define SYS_PATH_GEOSOFT_MAPTEMPLATE 115
/** 
* SYS_PATH_GEOSOFT_OMN
* 
* OMN folder
*/
#define SYS_PATH_GEOSOFT_OMN 116
/** 
* SYS_PATH_GEOSOFT_PAGE
* 
* PAGE folder
*/
#define SYS_PATH_GEOSOFT_PAGE 117
/** 
* SYS_PATH_GEOSOFT_SCHEMA
* 
* SCHEMA folder
*/
#define SYS_PATH_GEOSOFT_SCHEMA 118
/** 
* SYS_PATH_GEOSOFT_SPEC_INI
* 
* SPEC INI older
*/
#define SYS_PATH_GEOSOFT_SPEC_INI 119
/** 
* SYS_PATH_GEOSOFT_STYLESHEETS
* 
* STYLE SHEETS folder
*/
#define SYS_PATH_GEOSOFT_STYLESHEETS 120
/** 
* SYS_PATH_GEOSOFT_TBL
* 
* TBL folder
*/
#define SYS_PATH_GEOSOFT_TBL 121
/** 
* SYS_PATH_GEOSOFT_USER_CSV
* 
* User CSV Folder
*/
#define SYS_PATH_GEOSOFT_USER_CSV 200
/** 
* SYS_PATH_GEOSOFT_USER_ETC
* 
* User ETC Folder
*/
#define SYS_PATH_GEOSOFT_USER_ETC 201
/** 
* SYS_PATH_GEOSOFT_USER_GS
* 
* User GS Folder
*/
#define SYS_PATH_GEOSOFT_USER_GS 202
/** 
* SYS_PATH_GEOSOFT_USER_GX
* 
* User GX Folder
*/
#define SYS_PATH_GEOSOFT_USER_GX 217
/** 
* SYS_PATH_GEOSOFT_USER_PYGX
* 
* User PYGX Folder
*/
#define SYS_PATH_GEOSOFT_USER_PYGX 216
/** 
* SYS_PATH_GEOSOFT_USER_HLP
* 
* User HLP Folder
*/
#define SYS_PATH_GEOSOFT_USER_HLP 203
/** 
* SYS_PATH_GEOSOFT_USER_INI
* 
* User INI Folder
*/
#define SYS_PATH_GEOSOFT_USER_INI 204
/** 
* SYS_PATH_GEOSOFT_USER_LIC
* 
* User LIC Folder
*/
#define SYS_PATH_GEOSOFT_USER_LIC 205
/** 
* SYS_PATH_GEOSOFT_USER_MAPTEMPLATE
* 
* User MAPTEMPLATE Folder
*/
#define SYS_PATH_GEOSOFT_USER_MAPTEMPLATE 206
/** 
* SYS_PATH_GEOSOFT_USER_OMN
* 
* User OMN Folder
*/
#define SYS_PATH_GEOSOFT_USER_OMN 207
/** 
* SYS_PATH_GEOSOFT_USER_STACKS
* 
* User STACKS Folder
*/
#define SYS_PATH_GEOSOFT_USER_STACKS 209
/** 
* SYS_PATH_GEOSOFT_USER_TEMP
* 
* User TEMP Folder
*/
#define SYS_PATH_GEOSOFT_USER_TEMP 210
/** 
* SYS_PATH_USER_SERVICES
* 
* User SERVICES Folder
*/
#define SYS_PATH_USER_SERVICES 211
/** 
* SYS_PATH_USER_STYLESHEETS
* 
* User STYLESHEETS Folder
*/
#define SYS_PATH_USER_STYLESHEETS 212
///@}

/**
* @name SYS_RUN_DISPLAY Definitions
* 
* Windows Display Options
* Determine how applications are started.
* These options are not yet implemented.
*/
///@{
/** 
* SYS_RUN_DISPLAY_WINDOW
* 
* In a window  (default)
*/
#define SYS_RUN_DISPLAY_WINDOW 0
/** 
* SYS_RUN_DISPLAY_MINIMIZE
* 
* Maximized
*/
#define SYS_RUN_DISPLAY_MINIMIZE 8
/** 
* SYS_RUN_DISPLAY_FULLSCREEN
* 
* Full Screen
*/
#define SYS_RUN_DISPLAY_FULLSCREEN 16
///@}

/**
* @name SYS_RUN_HOLD Definitions
* 
* DOS Console Options
* These options determine if and when the DOS/EXE
* console window is held. These options only work
* on DOS and EXE programs.
*/
///@{
/** 
* SYS_RUN_HOLD_NEVER
* 
* Don't wait (Default)
*/
#define SYS_RUN_HOLD_NEVER 0
/** 
* SYS_RUN_HOLD_ONERROR
* 
* Hold the screen if there is an error
*/
#define SYS_RUN_HOLD_ONERROR 512
/** 
* SYS_RUN_HOLD_ALWAYS
* 
* Always hold the screen
*/
#define SYS_RUN_HOLD_ALWAYS 1024
///@}

/**
* @name SYS_RUN_TYPE Definitions
* 
* Type of application to run
*/
///@{
/** 
* SYS_RUN_TYPE_DOS
* 
* Things such as .BAT files, copy commands, etc. (A console window is created)
*/
#define SYS_RUN_TYPE_DOS 1
/** 
* SYS_RUN_TYPE_EXE
* 
* Any program (.EXE) (a console window is created)
*/
#define SYS_RUN_TYPE_EXE 0
/** 
* SYS_RUN_TYPE_WINDOWS
* 
* Windows applications that do not require a console window.
*/
#define SYS_RUN_TYPE_WINDOWS 2
///@}

/**
* @name SYS_RUN_WIN Definitions
* 
* Windows Options
* Should we wait for the application to
* finish or should we continue executing. If you wait
* for another program, Oasis montaj will not
* redraw or respond. We always wait for EXE and DOS programs.
*/
///@{
/** 
* SYS_RUN_WIN_NOWAIT
* 
* Never wait (default)
*/
#define SYS_RUN_WIN_NOWAIT 0
/** 
* SYS_RUN_WIN_WAIT
* 
* Always wait
*/
#define SYS_RUN_WIN_WAIT 2048
///@}

/**
* @name SYS_SEARCH_PATH Definitions
* 
* Find File define
*/
///@{
/** 
* FIND_LOCAL_GEOSOFT
* 
* Local and then Geosoft directory
*/
#define FIND_LOCAL_GEOSOFT 0
/** 
* FIND_GEOSOFT
* 
* Geosoft directory
*/
#define FIND_GEOSOFT 1
/** 
* FIND_LOCAL
* 
* Local directory
*/
#define FIND_LOCAL 2
/** 
* FIND_SHORT
* 
* Make the name short (FLAG that is added on)
*/
#define FIND_SHORT 1024
///@}

/**
* @name SYS_ENCRYPTION_KEY Definitions
* 
* How to encrypt a string. Determines the portability of the encrypted string.
*/
///@{
/** 
* SYS_ENCRYPTION_KEY_GEOSOFT_ID
* 
* Encrypt string to currently signed-in user. The string can be decrypted
* by the same user on any machine.
*/
#define SYS_ENCRYPTION_KEY_GEOSOFT_ID 0
/** 
* SYS_ENCRYPTION_KEY_GLOBAL_ID
* 
* Encrypt string to current machine. The string can be decrypted by any
* user on the same machine.
*/
#define SYS_ENCRYPTION_KEY_GLOBAL_ID 1
///@}

/**
* @name TD_ICON Definitions
* 
* TaskDialog Icon
*/
///@{
/** 
* TD_ICON_NONE
* 
* No icon.
*/
#define TD_ICON_NONE 0
/** 
* TD_ICON_WARNING
* 
* An exclamation-point icon appears in the task dialog.
*/
#define TD_ICON_WARNING 1
/** 
* TD_ICON_ERROR
* 
* A stop-sign icon appears in the task dialog.
*/
#define TD_ICON_ERROR 2
/** 
* TD_ICON_INFORMATION
* 
* An icon consisting of a lowercase letter i in a circle appears in the task dialog.
*/
#define TD_ICON_INFORMATION 3
/** 
* TD_ICON_SUCCESS
* 
* A shield icon appears in the task dialog.
*/
#define TD_ICON_SUCCESS 4
/** 
* TD_ICON_CONFIRMATION
* 
* A shield icon appears in the task dialog.
*/
#define TD_ICON_CONFIRMATION 5
///@}

/**
* @name TD_BUTTON Definitions
* 
* TaskDialog Common Buttons
*/
///@{
/** 
* TD_BUTTON_NONE
* 
* No common buttons.
*/
#define TD_BUTTON_NONE 1
/** 
* TD_BUTTON_OK
* 
* Button results in TD_ID_OK return value.
*/
#define TD_BUTTON_OK 1
/** 
* TD_BUTTON_YES
* 
* Button results in TD_ID_YES return value.
*/
#define TD_BUTTON_YES 2
/** 
* TD_BUTTON_NO
* 
* Button results in TD_ID_NO return value.
*/
#define TD_BUTTON_NO 4
/** 
* TD_BUTTON_CANCEL
* 
* Button results in TD_ID_CANCEL return value.
*/
#define TD_BUTTON_CANCEL 8
/** 
* TD_BUTTON_RETRY
* 
* Button results in TD_ID_RETRY return value.
*/
#define TD_BUTTON_RETRY 16
/** 
* TD_BUTTON_CLOSE
* 
* Button results in TD_ID_CLOSE return value.
*/
#define TD_BUTTON_CLOSE 32
///@}

/**
* @name TD_ID Definitions
* 
* TaskDialog Common Button Return Values
*/
///@{
/** 
* TD_ID_OK
* 
* TD_BUTTON_OK pressed.
*/
#define TD_ID_OK 1
/** 
* TD_ID_CANCEL
* 
* TD_BUTTON_CANCEL pressed.
*/
#define TD_ID_CANCEL 2
/** 
* TD_ID_RETRY
* 
* TD_BUTTON_RETRY pressed.
*/
#define TD_ID_RETRY 4
/** 
* TD_ID_YES
* 
* TD_BUTTON_YES pressed.
*/
#define TD_ID_YES 6
/** 
* TD_ID_NO
* 
* TD_BUTTON_NO pressed.
*/
#define TD_ID_NO 7
/** 
* TD_ID_CLOSE
* 
* TD_BUTTON_CLOSE pressed.
*/
#define TD_ID_CLOSE 8
///@}


/**
* @name Date/Time Functions 
*/
///@{

/**
* Breaks a decimal date value into year, month and day.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  date TODO
* @param[out] year TODO
* @param[out] month TODO
* @param[out] day TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void BreakDate_SYS(void* p_geo, const double* date, int32_t* year, int32_t* month, int32_t* day);

/**
* Converts a double date to a value representing total
* days elapsed since day 0 of year 0. This uses the
* Numerical Receipies Julian function.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  date TODO
* @return x - Days
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iDatetoLong_SYS(void* p_geo, const double* date);

/**
* Converts decimal hours to seconds in a day.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  time TODO
* @return x - Seconds (integer)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iTimetoLong_SYS(void* p_geo, const double* time);

/**
* Returns the current date in decimal years.
*
* @param[in]  p_geo GX Context Pointer
* @return Date in decimal years.
**
* @par Note 
*      The FormatDate_STR function can be used to convert a date to
*      a string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rDate_SYS(void* p_geo);

/**
* Converts a value representing total days elapsed since
* day 0 of year 0 to a geosoft date. This uses the
* Numerical Receipies Julian function.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  days TODO
* @return x - Date
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT double rLongtoDate_SYS(void* p_geo, const int32_t* days);

/**
* Converts seconds to decimal hours.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sec TODO
* @return x - Time
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT double rLongtoTime_SYS(void* p_geo, const int32_t* sec);

/**
* Returns the decimal date given the year, month and day.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  year TODO
* @param[in]  month TODO
* @param[in]  day TODO
* @return Date in decimal years.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT double rMakeDate_SYS(void* p_geo, const int32_t* year, const int32_t* month, const int32_t* day);

/**
* Converts fractional seconds to decimal hours.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sec TODO
* @return x - Time
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT double rSecondstoTime_SYS(void* p_geo, const double* sec);

/**
* Returns the current time in decimal hours.
*
* @param[in]  p_geo GX Context Pointer
* @return Time in decimal hours.
**
* @par Note 
*      The FormatTime_STR function can be used to convert a time to
*      a string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rTime_SYS(void* p_geo);

/**
* Converts decimal hours to seconds in a day fractional
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  time TODO
* @return x - Number of seconds with fractions
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT double rTimetoSeconds_SYS(void* p_geo, const double* time);

/**
* Returns the current UTC date in decimal years.
*
* @param[in]  p_geo GX Context Pointer
* @return Date in decimal years.
**
* @par Note 
*      The FormatDate_STR function can be used to convert a date to
*      a string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT double rUTCDate_SYS(void* p_geo);

/**
* Returns the current UTC time in decimal hours.
*
* @param[in]  p_geo GX Context Pointer
* @return Time in decimal hours.
**
* @par Note 
*      The FormatTime_STR function can be used to convert a time to
*      a string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT double rUTCTime_SYS(void* p_geo);

///@}

/**
* @name Environment Functions 
*/
///@{

/**
* Check if setting exists in environment.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  parm TODO
* @return 1 - Yes
* 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iExistEnv_SYS(void* p_geo, const char* parm);

/**
* Get an environment setting.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  parm TODO
* @param[out] set TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetEnv_SYS(void* p_geo, const char* parm, char* set, const int32_t* length);

/**
* Set an environment setting.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  parm TODO
* @param[in]  set TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetEnv_SYS(void* p_geo, const char* parm, const char* set);

///@}

/**
* @name Error Handling Functions 
*/
///@{

/**
* This method is called at to clear all registered errors.
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - Successful
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iClearErrAP_SYS(void* p_geo);

/**
* Get the error number of the last registered error.
*
* @param[in]  p_geo GX Context Pointer
* @return The top error number registered, 0 if none registered.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.0
*/
GX_EXPORT int32_t iGetTopErrorAP_SYS(void* p_geo);

/**
* Return the error message text as a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  err TODO
* @param[out] err_str TODO
* @param[in]  size TODO
**
* @par Note 
*      This wrapper is mostly for use outside of GXs,
*      because in general if an error is registered in a GX
*      the GX would terminate before it could be called.
*      Use iNumErrorsAP_SYS to get the number of registered errors.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void IGetErrorMessageAP_SYS(void* p_geo, const int32_t* err, char* err_str, const int32_t* size);

/**
* Returns the number of registered errors.
*
* @param[in]  p_geo GX Context Pointer
* @return The number of registered errors.
**
* @par Note 
*      This wrapper is mostly for use outside of GXs,
*      because in general if an error is registered in a GX
*      the GX would terminate before it could be called.
*
* @par See also 
*      GetErrorMessageAP_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT int32_t iNumErrorsAP_SYS(void* p_geo);

/**
* Control the server message handling.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  flag TODO
**
* @par Note 
*      Should be set to false when dialogs should not
*      appear. This setting is thread specific.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SetServerMessagesAP_SYS(void* p_geo, const int32_t* flag);

///@}

/**
* @name Execution Functions 
*/
///@{

/**
* Run a command line process.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  command TODO
* @param[in]  args TODO
* @param[in]  process TODO
* @return -1 if failed to execute task
* Exit status of the task
**
* @par Note 
*      The Default option for each define below is the first one
*      and is set to 0.
*      
*      We look for the command object in the following order:
*      
*      1. the local working directory
*      2. the <geosoft>\bin directory
*      3. the system path
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iRun_SYS(void* p_geo, const char* command, const char* args, const int32_t* process);

/**
* Run a GS.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gs TODO
* @return Exit status of the GS
* -1 cancelled
* 0 success
* 1 ended with an error.
*
* @par See also 
*      SetInteractive_SYS, iRunGX_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iRunGS_SYS(void* p_geo, const char* gs);

/**
* Run a GX.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gx TODO
* @return Exit status of the GX:
* -1 cancelled
* 0 success
* 1 ended with an error.
**
* @par Note 
*      If the called GX returns an error, they will not be
*      displayed until the "top" calling GX terminates, unless you
*      call ShowError_SYS.
*
* @par See also 
*      iRunGXEx_SYS, SetInteractive_SYS and iRunGS_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iRunGX_SYS(void* p_geo, const char* gx);

/**
* Run a GX.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gx TODO
* @param[out] ret TODO
* @return Exit status of the GX:
* -1 cancelled
* 0 success
* 1 ended with an error.
*
* @par See also 
*      iRunGX_SYS, SetReturn_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iRunGXEx_SYS(void* p_geo, const char* gx, int32_t* ret);

/**
* Run a PDF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mnu TODO
* @param[in]  pdf TODO
* @return Exit status of the task, 0 usually means success.
**
* @par Note 
*      The group name of the PDF variables will be "group_pdf",
*      where "group" is the name given in the first argument,
*      and "pdf" is the root PDF file name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iRunPDF_SYS(void* p_geo, const char* mnu, const char* pdf);

/**
* Call Microsoft ShellExecute function (See `MSDN <https://msdn.microsoft.com/en-us/library/windows/desktop/bb762153(v=vs.85).aspx>`_)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  verb TODO
* @param[in]  file TODO
* @param[in]  parameters TODO
* @param[in]  directory TODO
* @param[in]  show TODO
* @return return value of ShellExecute as documented on MSDN
*
* @par See also 
*      DoCommand_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iShellExecute_SYS(void* p_geo, const char* verb, const char* file, const char* parameters, const char* directory, const int32_t* show);

/**
* Set the return value of a GX.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ret TODO
**
* @par Note 
*      This value is returned in the iRunGXEx_SYS call only.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReturn_SYS(void* p_geo, const int32_t* ret);

///@}

/**
* @name External DLL Functions 
*/
///@{

/**
* Execute an Oasis montaj command.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  command TODO
**
* @par Note 
*      Commands syntax:  "[type] command"
*      
*      =======  ============================================================================================
*      type     command
*      =======  ============================================================================================
*      ID       Internal Menu Command (as found in omn and geobar files e.g. *ID_EDIT_SELECT)
*      -------  --------------------------------------------------------------------------------------------
*      GX       gx file name
*      -------  --------------------------------------------------------------------------------------------
*      GS       gs file name
*      -------  --------------------------------------------------------------------------------------------
*      DOTNET   dll file name 
*               Use qualifiers to specify class and method e.g.:
*               "[DOTNET] geogxnet.dll(Geosoft.GX.NewGDB.NewGDB;Run)"
*      -------  --------------------------------------------------------------------------------------------
*      PDF      Geosoft pdf file name (Not Adobe PDF document, a legacy Geosoft Sushi script)
*      -------  --------------------------------------------------------------------------------------------
*      DOS      DOS style command
*      -------  --------------------------------------------------------------------------------------------
*      HLP      help file name
*      =======  ============================================================================================
*      
*      The must be ONE space between the "]" and the command.  For example:
*      
*      "[ID] ID_EDIT_SELECT"  // bring up the line edit tool
*
* @par See also 
*      iShellExecute_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DoCommand_SYS(void* p_geo, const char* command);

/**
* Register an error message
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  error_file TODO
* @param[in]  module TODO
* @param[in]  error TODO
**
* @par Note 
*      Use this function to register your own error
*      messages when an error occurs in your code.  Your
*      errors can be provided in your own GER file.  See
*      GEOSOFT.GER for an example of the GER file format.
*      
*      If the error # is not found in your error file, the
*      OE32.GER file, then the GEOSOFT.GER file will be
*      searched.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Error_SYS(void* p_geo, const char* error_file, const char* module, const int32_t* error);

/**
* Set an error message tag string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tag TODO
* @param[in]  set TODO
**
* @par Note 
*      Use this method to replace tag strings in your error
*      message text with run-time information.  For example,
*      Geosoft error messages often use the tag strings "%1",
*      "%2", etc. as place holders to be replaced by a string
*      which is only known at run-time.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ErrorTag_SYS(void* p_geo, const char* tag, const char* set);

/**
* DLL function argument error assertion
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  exp TODO
* @param[in]  mod TODO
* @param[in]  parm TODO
* @return 0 assertion passed
* 1 assertion failed
**
* @par Note 
*      Use this function to evaluate errors in passed
*      function arguments.  Functions called by GX programs
*      should be tolerant of all errors in the passed argument
*      list.  The iAssertGX_SYS can be used to test each
*      argument before doing any work in the function.  If
*      an assertion fails, an error will be registered with
*      the name of the function and the parameter name and
*      a 1 will be returned.  The caller should immediatley
*      cleaning up (if necessary) and return.
*      
*      You could also test the validity of arguments and call
*      the Error_SYS, ErrorTag_SYS and Terminate_SYS
*      functions if you would like to provide a more specific
*      error message.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iAssertGX_SYS(void* p_geo, const int32_t* exp, const char* mod, const char* parm);

/**
* Call OLE Automation designed to be called from Montaj.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  object TODO
* @param[in]  info_str TODO
* @param[in]  info_val TODO
* @return Return from automation engine.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iOLEAutomation_SYS(void* p_geo, const char* object, const char* info_str, const int32_t* info_val);

/**
* Saves the main log file to another file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SaveLog_SYS(void* p_geo, const char* file);

/**
* Display any errors to the user.
*
* @param[in]  p_geo GX Context Pointer
**
* @par Note 
*      If you call a GX from another GX using iRunGX_SYS, and
*      the called GX registers errors, they will not be displayed
*      until after the "top" GX exits.
*      If you wish to continue without exiting, call this function
*      so that errors are displayed immediately to the user. For
*      instance, when creating a new map from inside another GX:
*      
*      --- Run NEWMAP wizard. Keep trying if something is wrong (like a
*      too-small map scale), but exit if the user cancels (iRet==-1) ---
*      
*      do {
*      iRet = iRunGX_SYS("newmap.gx");
*      if(iRet==1) ShowError_SYS();     // Dump errors.
*      } while(iRet==1);
*      
*      This wrapper is not intended for use outside a GX, because it
*      uses the GX run-time machinery to display the error messages.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ShowError_SYS(void* p_geo);

/**
* DLL error termination
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
**
* @par Note 
*      Call this function immediately before returning to
*      the caller after an error has occurred inside the
*      DLL.  If an error has occurred, you should clean-up
*      (free memory, close files), call Error_SYS to register
*      your own error messages, call ErrorTag_SYS to set any
*      error message tags, call Terminate_SYS and return.
*      
*      Geosoft functions that detect an error will have
*      already registered their own errors and called
*      Terminate_SYS.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Terminate_SYS(void* p_geo, const char* name);

///@}

/**
* @name File System Functions 
*/
///@{

/**
* Compute the CRC of a file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return CRC Value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t CRCFile_SYS(void* p_geo, const char* file);

/**
* Compute the CRC of a file with an Offset
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  offset TODO
* @return CRC Value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT int32_t CRCFileOffset_SYS(void* p_geo, const char* file, const int32_t* offset);

/**
* Rename a file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  old_file TODO
* @param[in]  new_file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FileRen_SYS(void* p_geo, const char* old_file, const char* new_file);

/**
* Fill a VV with files matching an input file mask.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  vv TODO
* @param[in]  mask TODO
**
* @par Note 
*      Fill a VV with files matching the input file mask.
*      The VV should be of string type.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FindFilesVV_SYS(void* p_geo, const int32_t* vv, const char* mask);

/**
* Convert an abbreviated path name to a full path name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  abbr TODO
* @param[out] name TODO
* @param[in]  size TODO
**
* @par Note 
*      This is mainly intended to convert ".\name" to a full
*      name at run-time.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IAbsoluteFileName_SYS(void* p_geo, const char* abbr, char* name, const int32_t* size);

/**
* Copy a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  src_file TODO
* @param[in]  dest_file TODO
* @return 0 if file copied ok.
* 1 if unable to copy file or source file not found.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t iCopyFile_SYS(void* p_geo, const char* src_file, const char* dest_file);

/**
* Delete a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 if file deleted.
* 1 if unable to find file or delete file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iDeleteFile_SYS(void* p_geo, const char* file);

/**
* Delete the GI file associated with a grid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 if file deleted.
* 1 if file is not found, or found but could not be deleted.
* 
* This is a "one-line" function to take a grid file name,
* remove the qualifiers, add the ".gi" and delete the file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iDeleteGIFile_SYS(void* p_geo, const char* file);

/**
* Delete a grid file and its associated GI and XML files.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 if grid file deleted.
* 1 if grid file not found or if one or more files is found but could not be deleted.
**
* @par Note 
*      Deletes the grid file first, and, if they exist, the associated GI
*      and XML files.
*      No error is registered if a file is not found or cannot be deleted.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iDeleteGridFile_SYS(void* p_geo, const char* file);

/**
* Check to see if a directory exists
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dir TODO
* @return 0 - Directory doesn't exist
* 1 - Directory exists
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iDirExist_SYS(void* p_geo, const char* dir);

/**
* Check to see if a file exists
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 - File doesn't exist
* 1 - File exists
**
* @par Note 
*      Use the FULL path for the file name. If the full
*      path is not specified, then the current working
*      directory is used for the path.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFileExist_SYS(void* p_geo, const char* file);

/**
* Returns size of a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 none/error
* x Size
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFileSize_SYS(void* p_geo, const char* file);

/**
* Check if a file can be created or opened in read-write mode
* at a specific location
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t iFileWritable_SYS(void* p_geo, const char* file);

/**
* Get full path for a file with Geosoft subdirectory parameter.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  mode TODO
* @param[out] fullname TODO
* @param[in]  size TODO
* @return 0 if file found.
* 1 if file not found.
**
* @par Note 
*      Directories can be resolved from the Environment section of the
*      Geosoft registry, or from system environment variables that are
*      not defined in the Geosoft Environment registry.  The following
*      file prefixes will be replaced by the environment settings:
*      
*      <geosoft>      the main Geosoft installation directory
*      <geosoft2>     the secondary Geosoft installation directory
*      <geotemp>      the Geosoft temporary file directory
*      <windows>      the operating system Windows directory
*      <system>       the operating system system directory
*      <other>        other environment variables
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iFindPath_SYS(void* p_geo, const char* file, const int32_t* mode, char* fullname, const int32_t* size);

/**
* Get full path for a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  mode TODO
* @param[in]  dir_mode TODO
* @param[out] fullname TODO
* @param[in]  size TODO
* @return 0 if file found.
* 1 if file not found.
**
* @par Note 
*      Directories can be resolved from the Environment section of the
*      Geosoft registry, or from system environment variables that are
*      not defined in the Geosoft Environment registry.  The following
*      file prefixes will be replaced by the environment settings:
*      
*      <geosoft>      the main Geosoft installation directory
*      <geosoft2>     the secondary Geosoft installation directory
*      <geotemp>      the Geosoft temporary file directory
*      <windows>      the operating system Windows directory
*      <system>       the operating system system directory
*      <other>        other environment variable
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iFindPathEx_SYS(void* p_geo, const char* file, const int32_t* mode, const int32_t* dir_mode, char* fullname, const int32_t* size);

/**
* Get a directory path
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sys_dir TODO
* @param[out] dir TODO
* @param[in]  size TODO
**
* @par Note 
*      The path will always end with the file separator character
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetDirectory_SYS(void* p_geo, const int32_t* sys_dir, char* dir, const int32_t* size);

/**
* Get a Geosoft path
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  type TODO
* @param[out] path TODO
* @param[in]  size TODO
**
* @par Note 
*      The path name will have a directory separator at the end.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetPath_SYS(void* p_geo, const int32_t* type, char* path, const int32_t* size);

/**
* Get the Windows directory path
*
* @param[in]  p_geo GX Context Pointer
* @param[out] dir TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetWindowsDir_SYS(void* p_geo, char* dir, const int32_t* size);

/**
* Create a directory.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dir TODO
* @return 0 - Directory made
* 1 - Directory cannot be made
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iMakeDir_SYS(void* p_geo, const char* dir);

/**
* Set a file's read-only attribute.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 if read-only attribute successfully set,
* 1 if attribute change fails.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iMakeFileReadonly_SYS(void* p_geo, const char* file);

/**
* Removes a file's read-only attribute.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 if read-only attribute successfully removed,
* 1 if attribute change fails.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iMakeFileWritable_SYS(void* p_geo, const char* file);

/**
* Convert a file name to a relative abbreviated path name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  abbr TODO
* @param[out] name TODO
* @param[in]  size TODO
**
* @par Note 
*      This will produce relative paths based on the workspace
*      directory into ".\name".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT void IRelativeFileName_SYS(void* p_geo, const char* abbr, char* name, const int32_t* size);

/**
* Obtains the short path form of a specified input path.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  in_name TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IShortPathFileName_SYS(void* p_geo, const char* in_name, char* name, const int32_t* size);

/**
* Generate a unique file name for this extension in the temp directory.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ext TODO
* @param[out] out TODO
* @param[in]  size TODO
**
* @par Note 
*      This is useful for created a unique tempory name for a file in the Geosoft temporary directory.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void ITempFileExt_SYS(void* p_geo, const char* ext, char* out, const int32_t* size);

/**
* Generate a file name for this file in the temp directory.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  path_file TODO
* @param[out] out_filename TODO
* @param[in]  size TODO
**
* @par Note 
*      This is useful for created a unique tempory name for a file in the Geosoft temporary directory.
*      
*      From version 7.0 The file extension will match the input file, but the
*      filename itself will be a process and thread unique value to ensure that
*      clashes does not happen.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ITempFileName_SYS(void* p_geo, const char* path_file, char* out_filename, const int32_t* size);

/**
* Transfers file path to new file name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  path_file TODO
* @param[out] file TODO
* @param[in]  size TODO
**
* @par Note 
*      The path and volume of from the input string is added to
*      file name from the output string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void ITransferPath_SYS(void* p_geo, const char* path_file, char* file, const int32_t* size);

/**
* Check to see if a file name valid
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return 0 - File name is not valid
* 1 - File name is valid
**
* @par Note 
*      Use the FULL path for the file name. If the full
*      path is not specified, then the current working
*      directory is used for the path.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iValidFileName_SYS(void* p_geo, const char* file);

/**
* Can I create files in this directory ?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dir TODO
* @return 0 - Directory doesn't allow write of does not exist
* 1 - Directory allows writes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iWriteInDir_SYS(void* p_geo, const char* dir);

/**
* File creation date in decimal years.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return Date in decimal years, rDUMMY if the file does not exist.
**
* @par Note 
*      The FormatDate_STR function can be used to convert a date
*      to a string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rFileDate_SYS(void* p_geo, const char* file);

/**
* File creation time in decimal hours.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return Date in decimal hours, rDUMMY if the file does not exist.
**
* @par Note 
*      The FormatTime_STR function can be used to convert a time
*      to a string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rFileTime_SYS(void* p_geo, const char* file);

/**
* File creation UTC date in decimal years.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return Date in decimal years, rDUMMY if the file does not exist.
**
* @par Note 
*      The FormatDate_STR function can be used to convert a date
*      to a string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT double rUTCFileDate_SYS(void* p_geo, const char* file);

/**
* File creation UTC time in decimal hours.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @return Date in decimal hours, rDUMMY if the file does not exist.
**
* @par Note 
*      The FormatTime_STR function can be used to convert a time
*      to a string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT double rUTCFileTime_SYS(void* p_geo, const char* file);

///@}

/**
* @name Global Parameter Functions 
*/
///@{

/**
* Get the settings metadata object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void GetSettingsMETA_SYS(void* p_geo, const int32_t* meta);

/**
* Reset the global parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ini TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GlobalReset_SYS(void* p_geo, const char* ini);

/**
* Set a global parameter setting.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  parm TODO
* @param[in]  set TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GlobalSet_SYS(void* p_geo, const char* parm, const char* set);

/**
* Modify the global parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ini TODO
**
* @par Note 
*      If the global parameters have been changed, use
*      this function to make the changes permanent,
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GlobalWrite_SYS(void* p_geo, const char* ini);

/**
* Get a global parameter setting.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  parm TODO
* @param[out] setting TODO
* @param[in]  size TODO
* @return 0 if parameter found.
* 1 if parameter not found or not set.
**
* @par Note 
*      The returned string will be empty if the parameter is
*      not found.
*      
*      Parameters are derived from GEOSOFT.INI.
*      This is a standard Windows style INI
*      file that contains [GROUPS], PARAMETERS and SETTINGS
*      as follows
*      
*      [GROUP1]
*      PARAM1=setting1
*      PARAM2 setting2
*      PARAM3 "setting3 is text"
*      
*      To retrieve an entry, specify the group.parameter.  For
*      example, iGlobal_SYS("GROUP1.PARAM3",sSetting) will
*      retrieve the string "setting is text".  The double
*      quotes will not appear in the setting.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t IiGlobal_SYS(void* p_geo, const char* parm, char* setting, const int32_t* size);

/**
* Resets the GX_HELP settings in the geosoft.ini file
* after changes have been made.
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.1.8
*/
GX_EXPORT void App_ResetSettings_SYS(void* p_geo);

/**
* Set the settings metadata object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void SetSettingsMETA_SYS(void* p_geo, const int32_t* meta);

///@}

/**
* @name Licensing Functions 
*/
///@{

/**
* Check to see if a ESRI ArcEngine or ArcView license is available
*
* @param[in]  p_geo GX Context Pointer
* @return 1 - Licenced
* 0 - Not licenced
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.1
*/
GX_EXPORT int32_t iCheckArcLicense_SYS(void* p_geo);

/**
* Check to see if a ESRI ArcEngine or ArcView license is available, returns type and version of available engine.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] version TODO
* @param[in]  version_size TODO
* @return ARC_LICENSE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t iCheckArcLicenseEx_SYS(void* p_geo, char* version, const int32_t* version_size);

/**
* Check to see if an intrinsic object is licensed
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  cl TODO
* @param[in]  name TODO
* @return 1 - Licenced
* 0 - Not licenced
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT int32_t iCheckIntrinsic_SYS(void* p_geo, const int32_t* cl, const char* name);

/**
* Gets a global flag that indicates whether we are
* running within the geodist library
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - Geodist not loaded, 1 - Geodist loaded
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iGetGeodist_SYS(void* p_geo);

/**
* Get the current application license class.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] cl TODO
* @param[in]  class_size TODO
**
* @par Note 
*      String may be one of :  "ArcGIS"
*      "OasisMontaj"
*      "DapServer"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT void IGetLicenseClass_SYS(void* p_geo, char* cl, const int32_t* class_size);

/**
* Get the licensed user name and Company
*
* @param[in]  p_geo GX Context Pointer
* @param[out] user TODO
* @param[in]  user_size TODO
* @param[out] company TODO
* @param[in]  company_size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void IGetLicensedUser_SYS(void* p_geo, char* user, const int32_t* user_size, char* company, const int32_t* company_size);

///@}

/**
* @name Lineage Functions 
*/
///@{

/**
* Add a parameter to the current lineage object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void AddLineageParameter_SYS(void* p_geo, const char* name, const char* value);

/**
* Add a source to the current lineage object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  source_type TODO
* @param[in]  source_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void AddLineageSource_SYS(void* p_geo, const int32_t* source_type, const char* source_name);

/**
* Clear all the lineage parameters
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void ClearLineageParameters_SYS(void* p_geo);

/**
* Clear all the lineage sources
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void ClearLineageSources_SYS(void* p_geo);

/**
* Copy a Geosoft data file and all associated files to a new folder
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data TODO
* @param[in]  dir TODO
**
* @par Note 
*      Grids are copied and the GI's are maintained - note that support
*      for non-geosoft grids is limited since this method does not
*      guarantee all grid files besides the main one are copied.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void CopyGeoFile_SYS(void* p_geo, const char* data, const char* dir);

/**
* Backup a Geosoft data file and all associated files to a temporary folder.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  data TODO
* @param[out] target TODO
* @param[in]  size TODO
**
* @par Note 
*      Grids are copied and the GI's are maintained - note that support
*      for non-geosoft grids is limited since this method does not
*      guarantee all grid files besides the main one are copied.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void IBackupGeoFile_SYS(void* p_geo, const char* data, char* target, const int32_t* size);

/**
* Remove an output from the current lineage object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  output_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0.1
*/
GX_EXPORT void RemoveLineageOutput_SYS(void* p_geo, const char* output_name);

/**
* Remove a parameter in the current lineage object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void RemoveLineageParameter_SYS(void* p_geo, const char* name);

/**
* Remove a source from the current lineage object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  source_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void RemoveLineageSource_SYS(void* p_geo, const char* source_name);

/**
* Backup a Geosoft data file and all associated files to original location
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  target TODO
* @param[in]  original TODO
**
* @par Note 
*      Grids are copied and the GI's are maintained - note that support
*      for non-geosoft grids is limited since this method does not
*      guarantee all grid files besides the main one are copied.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 7.0
*/
GX_EXPORT void RestoreGeoFile_SYS(void* p_geo, const char* target, const char* original);

/**
* Set the description for the current lineage object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  description TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetLineageDescription_SYS(void* p_geo, const char* description);

/**
* Set the display name for the current lineage object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  display_name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetLineageDisplayName_SYS(void* p_geo, const char* display_name);

/**
* Set the name for the current lineage object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetLineageName_SYS(void* p_geo, const char* name);

///@}

/**
* @name Menus and Toolbar Functions 
*/
///@{

/**
* Clear all menus
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  flag TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_ClearMenus_SYS(void* p_geo, const int32_t* flag);

/**
* Get the loaded menus.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst_default TODO
* @param[in]  lst_loaded TODO
* @param[in]  lst_user TODO
**
* @par Note 
*      The names of the LSTs contain the menus and the values contain any exclusions. Exclusions 
*      are semicolon separated top level menu names and/or toolbar.geobar file names.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_GetLoadedMenus_SYS(void* p_geo, const int32_t* lst_default, const int32_t* lst_loaded, const int32_t* lst_user);

/**
* Load a list of menus
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst_default TODO
* @param[in]  lst_loaded TODO
* @param[in]  lst_user TODO
**
* @par Note 
*      The names of the LSTs contain the menus and the values contain any exclusions. Exclusions 
*      are semicolon separated top level menu names and/or toolbar.geobar file names.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 9.0
*/
GX_EXPORT void App_SetLoadedMenus_SYS(void* p_geo, const int32_t* lst_default, const int32_t* lst_loaded, const int32_t* lst_user);

/**
* Get the Entitlement Rights
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst_rights TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void GetEntitlementRights_SYS(void* p_geo, const int32_t* lst_rights);

///@}

/**
* @name Misc Functions 
*/
///@{

/**
* Genrates a GUID string (e.g. {4FEDE8BF-CDAB-430A-8026-1CCC0EC0A2EB})
*
* @param[in]  p_geo GX Context Pointer
* @param[out] guid TODO
* @param[in]  guid_size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.4
*/
GX_EXPORT void GenerateGUID_SYS(void* p_geo, char* guid, const int32_t* guid_size);

/**
* Copy text from the clipboard to a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClipboardToFile_SYS(void* p_geo, const char* file);

/**
* Create a RA to read text from the clipboard.
*
* @param[in]  p_geo GX Context Pointer
* @return RA to use for reading.
**
* @par Note 
*      Destroy the RA as soon as possible. As long as it
*      open the clipboard is not accessible from any
*      application.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateClipboardRA_SYS(void* p_geo);

/**
* Create a WA to write text on the clipboard.
*
* @param[in]  p_geo GX Context Pointer
* @return WA to use for reading.
**
* @par Note 
*      Destroy the WA as soon as possible. As long as it
*      open the clipboard is not accessible from any
*      application.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateClipboardWA_SYS(void* p_geo);

/**
* Destroy ANY object made with a Create_? method
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  obj TODO
**
* @par Note 
*      You can use this method instead of the Destroy_? methods
*      which are specific to each object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destr_SYS(void* p_geo, const int32_t* obj);

/**
* Get the size of an EMF object
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] size_x TODO
* @param[out] size_y TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void EMFObjectSize_SYS(void* p_geo, const char* file, double* size_x, double* size_y);

/**
* Copy a text file onto the clipboard as text.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FileToClipboard_SYS(void* p_geo, const char* file);

/**
* List all Windows and geosoft fonts.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  which TODO
**
* @par Note 
*      To get TT and GFN fonts, call twice with the same list
*      and SYS_FONT_TT, then SYS_FONT_GFN, or vice-versa to
*      change order of listing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void FontLST_SYS(void* p_geo, const int32_t* lst, const int32_t* which);

/**
* Get the list of entry points that this assembly has
* exposed to Oasis montaj.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  gx TODO
* @param[out] entry_buffer TODO
* @param[in]  entry_size TODO
* @return 0  success
* 1  error.
**
* @par Note 
*      The list of entry points are passed back as one
*      string with each entry point separated by a semi-colon.
*      For example: NewGDB|Run;NewGDB|RunEx
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t IiGetDotNetGXEntries_SYS(void* p_geo, const char* gx, char* entry_buffer, const int32_t* entry_size);

/**
* Send a general information message to all listners
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  cl TODO
* @param[in]  info TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SendGeneralMessage_SYS(void* p_geo, const char* cl, const char* info);

/**
* This method writes out information to the output
* debugging log file (in temp folder) or output window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  log TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void WriteDebugLog_SYS(void* p_geo, const char* log);

/**
* This method logs that a script was run
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  location TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.2
*/
GX_EXPORT void LogScriptRun_SYS(void* p_geo, const char* location);

///@}

/**
* @name Multithreading Functions 
*/
///@{

/**
* Get the ID the current thread.
*
* @param[in]  p_geo GX Context Pointer
* @return x - ID
**
* @par Note 
*      In a single threaded application this will always be 0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t iGetThreadID_SYS(void* p_geo);

/**
* Execute a script using multithreaded users
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  script TODO
* @param[in]  users TODO
* @param[in]  iterations TODO
* @param[in]  wait_min_time TODO
* @param[in]  wait_max_time TODO
* @param[in]  ramp_up_time TODO
**
* @par Note 
*      No access is provided in the script to EMAPS
*      or EDBS. Users must ensure that the resources
*      that are shared are protected.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void RunMultiUserScript_SYS(void* p_geo, const char* script, const int32_t* users, const int32_t* iterations, const int32_t* wait_min_time, const int32_t* wait_max_time, const int32_t* ramp_up_time);

///@}

/**
* @name Parameter Functions 
*/
///@{

/**
* Clear current contents of a group
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClearGroup_SYS(void* p_geo, const char* group);

/**
* Clears all paramters in a specified group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void ClearGroupParm_SYS(void* p_geo, const char* group);

/**
* Clears all paramters.
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ClearParm_SYS(void* p_geo);

/**
* Allows a default int to be set.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @param[in]  val TODO
**
* @par Note 
*      The value will only be set if there is no existing
*      setting.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void DefaultInt_SYS(void* p_geo, const char* group, const char* field, const int32_t* val);

/**
* Allows a default real to be set.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @param[in]  val TODO
**
* @par Note 
*      The value will only be set if there is no existing
*      setting.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void DefaultReal_SYS(void* p_geo, const char* group, const char* field, const double* val);

/**
* Allows a default string to be set.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @param[in]  val TODO
**
* @par Note 
*      The value will only be set if there is no existing
*      setting.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void DefaultString_SYS(void* p_geo, const char* group, const char* field, const char* val);

/**
* Gets pattern parameters from the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[out] pat TODO
* @param[out] size TODO
* @param[out] thick TODO
* @param[out] dense TODO
* @param[out] col TODO
* @param[out] back_col TODO
**
* @par Note 
*      Gets all the user-definable pattern parameters from
*      a specified group. Parameters are:
*      "PAT_NUMBER"    0 is solid fill (default)
*      "PAT_SIZE"      pattern tile size in mm. (can return iDUMMY)
*      "PAT_THICKNESS" pattern line thickness in percent of the tile size.
*      valid range is 0-100.
*      "PAT_DENSITY"   Tile spacing. A value of 1 means tiles are laid with no overlap.
*      A value of 2 means they overlap each other.
*      "PAT_COLOR"     The color value.
*      "PAT_BACKCOLOR" Background color value.
*      
*      Returned values may be DUMMY, but will be acceptable for use with
*      the iColorForm_GUI function, to set defaults.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void GetPattern_SYS(void* p_geo, const char* group, int32_t* pat, double* size, int32_t* thick, double* dense, int32_t* col, int32_t* back_col);

/**
* Get REG parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
* @param[in]  group TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetREG_SYS(void* p_geo, const int32_t* reg, const char* group);

/**
* This method returns a string in the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @param[out] buff TODO
* @param[in]  size TODO
**
* @par Note 
*      If the setting exits it is placed in the buffer, otherwise
*      the buffer will have zero length
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GtString_SYS(void* p_geo, const char* group, const char* field, char* buff, const int32_t* size);

/**
* This method checks to see if a int parameter exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @return 1 - Yes
* 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iExistInt_SYS(void* p_geo, const char* group, const char* field);

/**
* This method checks to see if a real parameter exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @return 1 - Yes
* 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iExistReal_SYS(void* p_geo, const char* group, const char* field);

/**
* This method checks to see if a string parameter exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @return 1 - Yes
* 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iExistString_SYS(void* p_geo, const char* group, const char* field);

/**
* This method returns an int from the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @return Int Value, iDUMMY if the parameter is not set.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iGetInt_SYS(void* p_geo, const char* group, const char* field);

/**
* Check a YES/NO Setting
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @return 1 - if first char in setting is a "Y" or"y"
* 0 - Otherwise
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetYesNo_SYS(void* p_geo, const char* group, const char* field);

/**
* Replace "% %" tokens in a string with parameter values
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @param[out] output TODO
* @param[in]  size TODO
* @param[in]  group TODO
**
* @par Note 
*      If parameter does not exist, the token is removed.  Full parameter names,
*      such as "%group.name%", are used as-is.  Partial parameter names, such as
*      "%name%" will have the default group attached.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IReplaceString_SYS(void* p_geo, const char* str_val, char* output, const int32_t* size, const char* group);

/**
* Reads parameters from a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  groups TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadParm_SYS(void* p_geo, const char* file, const char* groups);

/**
* This method returns a real from the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @return Real Value, rDUMMY if parameter not set.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rGetReal_SYS(void* p_geo, const char* group, const char* field);

/**
* Writes out one group (or all groups) to a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  mode TODO
* @param[in]  groups TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SaveParm_SYS(void* p_geo, const char* file, const int32_t* mode, const char* groups);

/**
* Controls filtering of specific group during logging.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  add TODO
**
* @par Note 
*      This is useful to prevent certain utility GX parameters from being recorded during GS script runs where the parameters does not influence the actual script execution.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.1
*/
GX_EXPORT void FilterParmGroup_SYS(void* p_geo, const char* group, const int32_t* add);

/**
* This method sets an int in the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @param[in]  val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInt_SYS(void* p_geo, const char* group, const char* field, const int32_t* val);

/**
* Sets pattern parameters in the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  pat TODO
* @param[in]  size TODO
* @param[in]  thick TODO
* @param[in]  dense TODO
* @param[in]  col TODO
* @param[in]  back_col TODO
**
* @par Note 
*      Sets all the user-definable pattern parameters to
*      a specified group. Parameters are:
*      "PAT_NUMBER"    0 is solid fill
*      "PAT_SIZE"      pattern tile size in mm.
*      "PAT_THICKNESS" pattern line thickness in percent of the tile size.
*      valid range is 0-100.
*      "PAT_DENSITY"   Tile spacing. A value of 1 means tiles are laid with no overlap.
*      A value of 2 means they overlap each other.
*      "PAT_COLOR"     The color value.
*      "PAT_BACKCOLOR" Background color value.
*      
*      Input values may be DUMMY.
*      
*      Designed for use along with the sPatternForm_GUI function.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void SetPattern_SYS(void* p_geo, const char* group, const int32_t* pat, const double* size, const int32_t* thick, const double* dense, const int32_t* col, const int32_t* back_col);

/**
* This method Sets a real in the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @param[in]  val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReal_SYS(void* p_geo, const char* group, const char* field, const double* val);

/**
* Copy contents of a REG to current parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetREG_SYS(void* p_geo, const int32_t* reg);

/**
* This method sets a string in the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  field TODO
* @param[in]  val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetString_SYS(void* p_geo, const char* group, const char* field, const char* val);

///@}

/**
* @name Progress Control Functions 
*/
///@{

/**
* This method is called at convenient points in the
* GX code to check if the user has asked the script
* to stop running. This method should be called by
* any GX program that may take a while to complete.
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - No
* 1 - Yes, Terminate processing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iCheckStop_SYS(void* p_geo);

/**
* Return current progress state (On/Off)
*
* @param[in]  p_geo GX Context Pointer
**
* @par Note 
*      This is useful, for instance, when calling one GX from another,
*      especially if it is called multiple times in a loop.
*      The called GX may turn the progress ON/OFF on its own, which
*      means any progress tracking in the calling GX is disrupted.
*      The called GX should use this function to determine the original
*      progress state, and not turn off progress if it was already on.
*      
*      Returns				 0 - Progress is on
*      - Progress is off
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iProgState_SYS(void* p_geo);

/**
* This method allows you to name the current process being
* displayed by the progress bar. This method has no affect
* if no progress bar exists.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @param[in]  reset TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ProgName_SYS(void* p_geo, const char* name, const int32_t* reset);

/**
* This method allows you to turn on the Progress BAR ON/OFF.
* Once the progress bar is on, use the UpdateProg method
* to drive it.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  on TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Progress_SYS(void* p_geo, const int32_t* on);

/**
* This method drives the Progress Bar. It is passed
* a percentage and will update the bar to reflect that
* percentage.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  perc TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ProgUpdate_SYS(void* p_geo, const int32_t* perc);

/**
* Updates progress bar based on count and maxcount.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  v1 TODO
* @param[in]  v2 TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ProgUpdateL_SYS(void* p_geo, const int32_t* v1, const int32_t* v2);

///@}

/**
* @name Registry Functions 
*/
///@{

/**
* Get system information
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sys_info TODO
* @param[out] info TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetSysInfo_SYS(void* p_geo, const int32_t* sys_info, char* info, const int32_t* size);

/**
* Get a registry value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  domain TODO
* @param[in]  key TODO
* @param[in]  sub_key TODO
* @param[out] value TODO
* @param[in]  size TODO
* @return 0 if value exists
* 1 if value does not exist
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t IiRegistryGetVal_SYS(void* p_geo, const int32_t* domain, const char* key, const char* sub_key, char* value, const int32_t* size);

/**
* Delete a registry value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  domain TODO
* @param[in]  key TODO
* @return 0 - Ok
* 1 - Error
**
* @par Note 
*      All sub-keys and values will be deleted if they exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iRegistryDeleteKey_SYS(void* p_geo, const int32_t* domain, const char* key);

/**
* Delete a registry value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  domain TODO
* @param[in]  key TODO
* @param[in]  value_name TODO
* @return 0 - Ok
* 1 - Error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iRegistryDeleteVal_SYS(void* p_geo, const int32_t* domain, const char* key, const char* value_name);

/**
* Set/create a registry value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  domain TODO
* @param[in]  key TODO
* @param[in]  sub_key TODO
* @param[in]  value TODO
**
* @par Note 
*      This function will create the subkey and key if either do not
*      already exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void RegistrySetVal_SYS(void* p_geo, const int32_t* domain, const char* key, const char* sub_key, const char* value);

///@}

/**
* @name Temporary File Functions 
*/
///@{

/**
* Destroy PTMP.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ptmp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DestroyPTMP_SYS(void* p_geo, const int32_t* ptmp);

/**
* Get temporary saves copy of parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ptmp TODO
*
* @par See also 
*      SavePTMP_SYS, DestroyPTMP_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetPTMP_SYS(void* p_geo, const int32_t* ptmp);

/**
* Save a temporary copy of the parameter block.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  groups TODO
* @return PTMP handle.
**
* @par Note 
*      All PTMP instances will be destroyed on exit.
*
* @par See also 
*      GetPTMP_SYS, DestroyPTMP_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t SavePTMP_SYS(void* p_geo, const char* groups);

///@}

/**
* @name Termination Functions 
*/
///@{

/**
* This method terminates the execution of a script. A message
* giving the reason for the abort will be displayed along with
* the line number where we stopped in the script.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  message TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Abort_SYS(void* p_geo, const char* message);

/**
* Abort with GX line number if not true.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  exp TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Assert_SYS(void* p_geo, const int32_t* exp);

/**
* This method terminates the execution of a script in  a regular
* fashion with no error messages displayed.
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Exit_SYS(void* p_geo);

/**
* This method indicates that the GX program terminated without
* doing anything of interest and should be ignored.  In
* particular, the GX will not be logged in a recorded GS.
*
* @param[in]  p_geo GX Context Pointer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Cancel_SYS(void* p_geo);

///@}

/**
* @name Timing Functions 
*/
///@{

/**
* Idle delay method.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  secs TODO
* @return Success if the delay has elapsed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT int32_t iDelay_SYS(void* p_geo, const double* secs);

/**
* Return the elapsed time since the established time.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  flag TODO
* @param[out] start_time TODO
* @param[out] elapsed_time TODO
* @return Success if the delay has elapsed.
**
* @par Note 
*      1st time through call the method with a flag of 1 to identify
*      the count start time, subsequent times the time will be the time
*      elapsed since the queried start time.  Do so by settign the flag to 0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT int32_t iGetTimer_SYS(void* p_geo, const int32_t* flag, double* start_time, double* elapsed_time);

///@}

/**
* @name User Interaction Functions 
*/
///@{

/**
* Display the help dialog with the specified topic highlighted
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  group TODO
* @param[in]  topic TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DisplayHelp_SYS(void* p_geo, const char* group, const char* topic);

/**
* Display the help dialog without topic lookup in INI files
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  topic TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DisplayHelpTopic_SYS(void* p_geo, const char* file, const char* topic);

/**
* Display an integer.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  int TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DisplayInt_SYS(void* p_geo, const char* title, const int32_t* int);

/**
* Display a user message.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  message TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DisplayMessage_SYS(void* p_geo, const char* title, const char* message);

/**
* Display a real number.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  real TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_DisplayReal_SYS(void* p_geo, const char* title, const double* real);

/**
* Display a YES/NO type question. This method waits
* for the user to hit YES or NO.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  message TODO
* @return 0 - user selected No
* 1 - user selected YES
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDisplayQuestion_SYS(void* p_geo, const char* title, const char* message);

/**
* Display a YES/NO/CANCEL type question. This method waits
* for the user to hit YES or NO or CANCEL.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  message TODO
* @return 0 - user selected No
* 1 - user selected YES
* 2 - user selected CANCEL
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iDisplayQuestionWithCancel_SYS(void* p_geo, const char* title, const char* message);

/**
* Show a Windows TaskDialog UI (see https://msdn.microsoft.com/en-us/library/windows/desktop/bb760441(v=vs.85).aspx).
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[in]  main_instruction TODO
* @param[in]  content TODO
* @param[in]  common_buttons TODO
* @param[in]  custom_button_lst TODO
* @param[in]  icon TODO
* @param[in]  footer TODO
* @param[in]  footer_icon TODO
* @param[in]  verification_check_text TODO
* @param[out] verification_checked TODO
* @param[in]  expanded_information TODO
* @param[in]  collapsed_control_text TODO
* @param[in]  expanded_control_text TODO
* @return Button ID. One of TD_ID or the int value from LST of custom buttons.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.3
*/
GX_EXPORT int32_t iDisplayTaskDialogUI_SYS(void* p_geo, const char* title, const char* main_instruction, const char* content, const int32_t* common_buttons, const int32_t* custom_button_lst, const int32_t* icon, const char* footer, const int32_t* footer_icon, const char* verification_check_text, int32_t* verification_checked, const char* expanded_information, const char* collapsed_control_text, const char* expanded_control_text);

/**
* Checks to see if you should run interactively.
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - Run in batch mode only
* 1 - Run Interactively only
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iInteractive_SYS(void* p_geo);

/**
* Asks the User to enter a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  title TODO
* @param[out] result TODO
* @param[in]  size TODO
* @return 0 - User hit OK
* 1 - user hit CANCEL
**
* @par Note 
*      The User string is displayed as the default value in the prompt.
*      Empty the user string if no default is needed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_IiPrompt_SYS(void* p_geo, const char* title, char* result, const int32_t* size);

/**
* Checks to see if we are running inside OMS (script mode)
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - Normal mode
* 1 - Scripting mode
* 
* A number of functions can only be run from inside Oasis montaj
* (such as GetDisplayAreaRaw_EMAP), because they require an actual
* window object, such as an editable database or map. Use this
* function to prevent calls
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iScript_SYS(void* p_geo);

/**
* Checks to see if we are in scripting recording mode
*
* @param[in]  p_geo GX Context Pointer
* @return 0 - Normal mode
* 1 - Recording mode
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iScriptRecord_SYS(void* p_geo);

/**
* Set the cursor on the display.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  cursor TODO
**
* @par Note 
*      Possible Cursors:
*      Normal, Horiz, Vert, Moving, Cross, Hand, NoEdit, Sun,
*      View, Group, ViewSel, GroupSel, BoxSelect, Shadow, Link,
*      Line, PolyLine, Polygon, Ellipse, Rectangle, Text, Symbol,
*      Zoom, Pan, Rotate, InteractiveZoom, PolyFill, GetFill,
*      SnapPoint, SnapLine, SnapOnPoint, SnapOnLine, NPolygon,
*      ExcludeRect, ExcludePoly, ExcludeNPoly, AddVertex, DelVertex, GeneralAdd and GeneralDelete
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetCursor_SYS(void* p_geo, const char* cursor);

/**
* Display a message on the information line at the left
* bottom corner of the OAISIS montaj application.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  message TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetInfoLine_SYS(void* p_geo, const char* message);

/**
* Sets the interactive mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mode TODO
**
* @par Note 
*      Call to iInteractive_SYS will return the value
*      set here.
*
* @par See also 
*      iInteractive_SYS, iRunGX_SYS and iRunGS_SYS
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInteractive_SYS(void* p_geo, const int32_t* mode);

///@}

/**
* @name Workspace Functions 
*/
///@{

/**
* Get a copy of the workspace REG;
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
**
* @par Note 
*      The workspace REG is separate from the reg used
*      to store SYS parameters.
*      
*      Because GetWorkspaceREG_SYS returns a copy of the
*      workspace REG, and not the workspace REG itself,
*      you must call SetWorkspaceREG_SYS if you make changes
*      to your own REG object and you wish them to take
*      effect in the workspace REG.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetWorkspaceREG_SYS(void* p_geo, const int32_t* reg);

/**
* Set the workspace REG;
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  reg TODO
**
* @par Note 
*      The workspace REG is separate from the reg used
*      to store SYS parameters.
*      
*      Because GetWorkspaceREG_SYS returns a copy of the
*      workspace REG, and not the workspace REG itself,
*      you must call SetWorkspaceREG_SYS if you make changes
*      to your own REG object and you wish them to take
*      effect in the workspace REG
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetWorkspaceREG_SYS(void* p_geo, const int32_t* reg);

///@}

/**
* @name String Encryption Functions 
*/
///@{

/**
* Encrypts a string for secure storage in configuration files
* or in the workspace parameters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input TODO
* @param[out] output TODO
* @param[in]  output_size TODO
* @param[in]  key TODO
* @return Nothing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void EncryptString_SYS(void* p_geo, const char* input, char* output, const int32_t* output_size, const int32_t* key);

/**
* Decrypts a string that has been previously encrypted by EncryptString_SYS.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input TODO
* @param[out] output TODO
* @param[in]  output_size TODO
* @param[in]  key TODO
* @return Nothing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void DecryptString_SYS(void* p_geo, const char* input, char* output, const int32_t* output_size, const int32_t* key);

/**
* Checks whether the specified string was encrypted by EncryptString_SYS.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  input TODO
* @return 0 (false) or non-zero (true)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t IsEncryptedString_SYS(void* p_geo, const char* input);

///@}

/**
* @name GX Debugger Functions 
*/
///@{

/**
* Disable GX Debugger GUI if active
*
* @param[in]  p_geo GX Context Pointer
**
* @par Note 
*      All breakpoints will be cleared by this call.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DisableGXDebugger_SYS(void* p_geo);

/**
* Enable GX Debugger GUI
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  src_dir TODO
* @param[in]  first_gx TODO
**
* @par Note 
*      Takes as input two strings one a path that will be scanned
*      recursively for GXC source files and a second string without
*      a path of the GX where the first breakpoint should be set in (i.e. "gxname.gx").
*      The source of the GX should be found in the path (e.g. <path>\somewhere\gxname.gxc)
*      and a breakpoint will be set on the first executing line of this GX. Make sure the
*      GX binary is newer than the source file, otherwise unexpected results may occur. As
*      soon as the GX is run the GUI will become visible and it will be possible to set more
*      breakpoints in any of the GXC files found in the path.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void EnableGXDebugger_SYS(void* p_geo, const char* src_dir, const char* first_gx);

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
