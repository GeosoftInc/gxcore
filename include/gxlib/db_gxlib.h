//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file db_gxlib.h
* @date 2017-11-06
* @brief File containing DB GX C API constant and function declarations
*/

/**
* @defgroup DB_Module DB
* The DB class is used to create, open and work with databases and database symbols.
* Database symbols are objects inside databases, such as lines, channels and blobs
*
* Notes:
*
* The following defines are not used by any methods but are
* used by GX's:
* 
* DB_ACTIVITY_BLOB
*
* @{
*/

#pragma once
#ifndef HDB_H_DEFINED
#define HDB_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DB_ACTIVITY_BLOB Definitions
* 
* Activity Blob
*/
///@{
/** 
* DB_ACTIVITY_BLOB
*/
#define DB_ACTIVITY_BLOB "OE.DB_ACTIVITY_LOG"
///@}

/**
* @name DB_CATEGORY_BLOB Definitions
* 
* Blob Categories
*/
///@{
/** 
* DB_CATEGORY_BLOB_NORMAL
*/
#define DB_CATEGORY_BLOB_NORMAL 0
///@}

/**
* @name DB_CATEGORY_CHAN Definitions
* 
* Channel Categories
* For STRING type channels, use negative integers
* to specify channel width. For example, use -10
* to define a string channel with up to 10 characters.
* Use the GS_SIMPLE_TYPE() macro to convert to INT,REAL or string.
*/
///@{
/** 
* DB_CATEGORY_CHAN_BYTE
*/
#define DB_CATEGORY_CHAN_BYTE GS_BYTE
/** 
* DB_CATEGORY_CHAN_USHORT
*/
#define DB_CATEGORY_CHAN_USHORT GS_USHORT
/** 
* DB_CATEGORY_CHAN_SHORT
*/
#define DB_CATEGORY_CHAN_SHORT GS_SHORT
/** 
* DB_CATEGORY_CHAN_LONG
*/
#define DB_CATEGORY_CHAN_LONG GS_LONG
/** 
* DB_CATEGORY_CHAN_FLOAT
*/
#define DB_CATEGORY_CHAN_FLOAT GS_FLOAT
/** 
* DB_CATEGORY_CHAN_DOUBLE
*/
#define DB_CATEGORY_CHAN_DOUBLE GS_DOUBLE
/** 
* DB_CATEGORY_CHAN_UBYTE
*/
#define DB_CATEGORY_CHAN_UBYTE GS_UBYTE
/** 
* DB_CATEGORY_CHAN_ULONG
*/
#define DB_CATEGORY_CHAN_ULONG GS_ULONG
/** 
* DB_CATEGORY_CHAN_LONG64
*/
#define DB_CATEGORY_CHAN_LONG64 GS_LONG64
/** 
* DB_CATEGORY_CHAN_ULONG64
*/
#define DB_CATEGORY_CHAN_ULONG64 GS_ULONG64
///@}

/**
* @name DB_CATEGORY_LINE Definitions
* 
* Line Categories
*/
///@{
/** 
* DB_CATEGORY_LINE_FLIGHT
*/
#define DB_CATEGORY_LINE_FLIGHT 100
/** 
* DB_CATEGORY_LINE_GROUP
*/
#define DB_CATEGORY_LINE_GROUP 200
/** 
* DB_CATEGORY_LINE_NORMAL
* 
* Same as DB_CATEGORY_LINE_FLIGHT
*/
#define DB_CATEGORY_LINE_NORMAL DB_CATEGORY_LINE_FLIGHT
///@}

/**
* @name DB_CATEGORY_USER Definitions
* 
* User Categories
*/
///@{
/** 
* DB_CATEGORY_USER_NORMAL
*/
#define DB_CATEGORY_USER_NORMAL 0
///@}

/**
* @name DB_CHAN_FORMAT Definitions
* 
* Channel formats
*/
///@{
/** 
* DB_CHAN_FORMAT_NORMAL
*/
#define DB_CHAN_FORMAT_NORMAL FORMAT_DECIMAL
/** 
* DB_CHAN_FORMAT_EXP
*/
#define DB_CHAN_FORMAT_EXP FORMAT_EXP
/** 
* DB_CHAN_FORMAT_TIME
*/
#define DB_CHAN_FORMAT_TIME FORMAT_TIME_COLON
/** 
* DB_CHAN_FORMAT_DATE
*/
#define DB_CHAN_FORMAT_DATE FORMAT_DATE_YYYYMMDD
/** 
* DB_CHAN_FORMAT_GEOGR
*/
#define DB_CHAN_FORMAT_GEOGR FORMAT_GEOGRAPHIC
/** 
* DB_CHAN_FORMAT_SIGDIG
*/
#define DB_CHAN_FORMAT_SIGDIG FORMAT_SIG_DIG
/** 
* DB_CHAN_FORMAT_HEX
*/
#define DB_CHAN_FORMAT_HEX 6
///@}

/**
* @name DB_CHAN_PROTECTION Definitions
* 
* Channel Read-only Protection Status
*/
///@{
/** 
* DB_CHAN_UNPROTECTED
*/
#define DB_CHAN_UNPROTECTED 0
/** 
* DB_CHAN_PROTECTED
*/
#define DB_CHAN_PROTECTED 1
///@}

/**
* @name DB_CHAN_SYMBOL Definitions
* 
* Channel symbol for special channels
*/
///@{
/** 
* DB_CHAN_X
*/
#define DB_CHAN_X 0
/** 
* DB_CHAN_Y
*/
#define DB_CHAN_Y 1
/** 
* DB_CHAN_Z
*/
#define DB_CHAN_Z 2
///@}

/**
* @name DB_COMP Definitions
* 
* Supported compression levels
*/
///@{
/** 
* DB_COMP_NONE
*/
#define DB_COMP_NONE 0
/** 
* DB_COMP_SPEED
*/
#define DB_COMP_SPEED 1
/** 
* DB_COMP_SIZE
*/
#define DB_COMP_SIZE 2
///@}

/**
* @name DB_COORDPAIR Definitions
*/
///@{
/** 
* DB_COORDPAIR_NONE
*/
#define DB_COORDPAIR_NONE 0
/** 
* DB_COORDPAIR_X
*/
#define DB_COORDPAIR_X 1
/** 
* DB_COORDPAIR_Y
*/
#define DB_COORDPAIR_Y 2
///@}

/**
* @name DB_GROUP_CLASS_SIZE Definitions
* 
* Class name max size
*/
///@{
/** 
* DB_GROUP_CLASS_SIZE
*/
#define DB_GROUP_CLASS_SIZE 16
///@}

/**
* @name DB_INFO Definitions
* 
* Integer Database Information
*/
///@{
/** 
* DB_INFO_BLOBS_MAX
* 
* Maximum Number of Blobs in the Database
*/
#define DB_INFO_BLOBS_MAX 0
/** 
* DB_INFO_LINES_MAX
* 
* Maximum number of lines in the database
*/
#define DB_INFO_LINES_MAX 1
/** 
* DB_INFO_CHANS_MAX
* 
* Maximum Number of Channels in the Database
*/
#define DB_INFO_CHANS_MAX 2
/** 
* DB_INFO_USERS_MAX
* 
* Maximum number of Users
*/
#define DB_INFO_USERS_MAX 3
/** 
* DB_INFO_BLOBS_USED
* 
* Number of Blobs currently used
*/
#define DB_INFO_BLOBS_USED 4
/** 
* DB_INFO_LINES_USED
* 
* Number of Lines currently used
*/
#define DB_INFO_LINES_USED 5
/** 
* DB_INFO_CHANS_USED
* 
* Number of Channels currently used
*/
#define DB_INFO_CHANS_USED 6
/** 
* DB_INFO_USERS_USED
* 
* Number of Users in the database
*/
#define DB_INFO_USERS_USED 7
/** 
* DB_INFO_PAGE_SIZE
* 
* Size of the smallest database block in bytes
*/
#define DB_INFO_PAGE_SIZE 8
/** 
* DB_INFO_DATA_SIZE
* 
* Number of Blocks in Entire Database
*/
#define DB_INFO_DATA_SIZE 9
/** 
* DB_INFO_LOST_SIZE
* 
* Number of Lost Blocks in the Database
*/
#define DB_INFO_LOST_SIZE 10
/** 
* DB_INFO_FREE_SIZE
* 
* Number of Free Blocks in the Database
*/
#define DB_INFO_FREE_SIZE 11
/** 
* DB_INFO_COMP_LEVEL
* 
* Compression Level in use
*/
#define DB_INFO_COMP_LEVEL 16
/** 
* DB_INFO_BLOB_SIZE
* 
* Number of pages given to blobs
*/
#define DB_INFO_BLOB_SIZE 19
/** 
* DB_INFO_FILE_SIZE
* 
* Entire Size of File (in kbytes)
*/
#define DB_INFO_FILE_SIZE 17
/** 
* DB_INFO_INDEX_SIZE
* 
* Size of Index (in kbytes)
*/
#define DB_INFO_INDEX_SIZE 18
/** 
* DB_INFO_MAX_BLOCK_SIZE
* 
* Naximum number of bytes in a block
*/
#define DB_INFO_MAX_BLOCK_SIZE 20
/** 
* DB_INFO_CHANGESLOST
* 
* Will changes to this database be lost when this database is closed?
*/
#define DB_INFO_CHANGESLOST 21
///@}

/**
* @name DB_LINE_LABEL_FORMAT Definitions
* 
* Line Label Formats
*/
///@{
/** 
* DB_LINE_LABEL_FORMAT_LINE
*/
#define DB_LINE_LABEL_FORMAT_LINE 1
/** 
* DB_LINE_LABEL_FORMAT_VERSION
*/
#define DB_LINE_LABEL_FORMAT_VERSION 2
/** 
* DB_LINE_LABEL_FORMAT_TYPE
*/
#define DB_LINE_LABEL_FORMAT_TYPE 4
/** 
* DB_LINE_LABEL_FORMAT_FLIGHT
*/
#define DB_LINE_LABEL_FORMAT_FLIGHT 8
/** 
* DB_LINE_LABEL_FORMAT_FULL
*/
#define DB_LINE_LABEL_FORMAT_FULL 15
/** 
* DB_LINE_LABEL_FORMAT_DATE
*/
#define DB_LINE_LABEL_FORMAT_DATE 16
/** 
* DB_LINE_LABEL_FORMAT_LINK
*/
#define DB_LINE_LABEL_FORMAT_LINK 7
///@}

/**
* @name DB_LINE_SELECT Definitions
* 
* Select modes
*/
///@{
/** 
* DB_LINE_SELECT_INCLUDE
*/
#define DB_LINE_SELECT_INCLUDE 0
/** 
* DB_LINE_SELECT_EXCLUDE
*/
#define DB_LINE_SELECT_EXCLUDE 1
///@}

/**
* @name DB_LINE_TYPE Definitions
* 
* Line types
*/
///@{
/** 
* DB_LINE_TYPE_NORMAL
*/
#define DB_LINE_TYPE_NORMAL 0
/** 
* DB_LINE_TYPE_BASE
*/
#define DB_LINE_TYPE_BASE 1
/** 
* DB_LINE_TYPE_TIE
*/
#define DB_LINE_TYPE_TIE 2
/** 
* DB_LINE_TYPE_TEST
*/
#define DB_LINE_TYPE_TEST 3
/** 
* DB_LINE_TYPE_TREND
*/
#define DB_LINE_TYPE_TREND 4
/** 
* DB_LINE_TYPE_SPECIAL
*/
#define DB_LINE_TYPE_SPECIAL 5
/** 
* DB_LINE_TYPE_RANDOM
*/
#define DB_LINE_TYPE_RANDOM 6
///@}

/**
* @name DB_LOCK Definitions
* 
* Lock Modes
*/
///@{
/** 
* DB_LOCK_NONE
* 
* Used only by GetSymbLock_DB
*/
#define DB_LOCK_NONE -1
/** 
* DB_LOCK_READONLY
*/
#define DB_LOCK_READONLY 0
/** 
* DB_LOCK_READWRITE
*/
#define DB_LOCK_READWRITE 1
///@}

/**
* @name DB_NAME Definitions
* 
* Get Database file names
*/
///@{
/** 
* DB_NAME_FILE
*/
#define DB_NAME_FILE 0
///@}

/**
* DB_NULL
*
* Database Null
*/
#define DB_NULL 0

/**
* @name DB_OWN Definitions
* 
* Symbol Ownership
*/
///@{
/** 
* DB_OWN_SHARED
*/
#define DB_OWN_SHARED 0
/** 
* DB_OWN_USER
*/
#define DB_OWN_USER 1
///@}

/**
* @name DB_SYMB_TYPE Definitions
* 
* Symbol types
*/
///@{
/** 
* DB_SYMB_BLOB
*/
#define DB_SYMB_BLOB 0
/** 
* DB_SYMB_LINE
*/
#define DB_SYMB_LINE 1
/** 
* DB_SYMB_CHAN
*/
#define DB_SYMB_CHAN 2
/** 
* DB_SYMB_USER
*/
#define DB_SYMB_USER 3
///@}

/**
* @name DB_SYMB_NAME_SIZE Definitions
* 
* Size of Symbol Names
*/
///@{
/** 
* DB_SYMB_NAME_SIZE
* 
* Same STR_DB_SYMBOL
*/
#define DB_SYMB_NAME_SIZE STR_DB_SYMBOL
///@}

/**
* @name DB_WAIT Definitions
* 
* Wait Times
*/
///@{
/** 
* DB_WAIT_NONE
*/
#define DB_WAIT_NONE 0
/** 
* DB_WAIT_INFINITY
*/
#define DB_WAIT_INFINITY -1
///@}

/**
* @name DB_ARRAY_BASETYPE Definitions
*/
///@{
/** 
* DB_ARRAY_BASETYPE_NONE
*/
#define DB_ARRAY_BASETYPE_NONE 0
/** 
* DB_ARRAY_BASETYPE_TIME_WINDOWS
*/
#define DB_ARRAY_BASETYPE_TIME_WINDOWS 1
/** 
* DB_ARRAY_BASETYPE_TIMES
*/
#define DB_ARRAY_BASETYPE_TIMES 2
/** 
* DB_ARRAY_BASETYPE_FREQUENCIES
*/
#define DB_ARRAY_BASETYPE_FREQUENCIES 3
/** 
* DB_ARRAY_BASETYPE_ELEVATIONS
*/
#define DB_ARRAY_BASETYPE_ELEVATIONS 4
/** 
* DB_ARRAY_BASETYPE_DEPTHS
*/
#define DB_ARRAY_BASETYPE_DEPTHS 5
/** 
* DB_ARRAY_BASETYPE_VELOCITIES
*/
#define DB_ARRAY_BASETYPE_VELOCITIES 6
/** 
* DB_ARRAY_BASETYPE_DISCRETE_TIME_WINDOWS
*/
#define DB_ARRAY_BASETYPE_DISCRETE_TIME_WINDOWS 7
///@}

/**
* @name NULLSYMB Definitions
* 
* Database Null
*/
///@{
/** 
* NULLSYMB
*/
#define NULLSYMB -1
///@}


/**
* @name Channel Functions 
*/
///@{

/**
* This method makes a brand new database identical to the input
* Database in-size.
* The database is opened in ReadWrite Mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CreateDup_DB(void* p_geo, const int32_t* db, const char* file);

/**
* This method makes a brand new database identical to the input
* Database in-size except it changes the compression.
* The database is opened in ReadWrite Mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
* @param[in]  level TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CreateDupComp_DB(void* p_geo, const int32_t* db, const char* file, const int32_t* level);

/**
* Create a new Symbol by duplicating an existing symbol.
* exactly the same type but in output database. The symbol must
* not already exist in the output database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dbi TODO
* @param[in]  dbo TODO
* @param[in]  symb TODO
* @return New Symbol Handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t DupSymbAcross_DB(void* p_geo, const int32_t* dbi, const int32_t* dbo, const int32_t* symb);

/**
* Adds a Maker to the database symbol based on current GX
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  name TODO
* @param[in]  groups TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void EasyMakerSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* name, const char* groups);

/**
* Get individual elements in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  ind TODO
* @param[out] str_val TODO
* @param[in]  length TODO
**
* @par Note 
*      These methods are slow and should only be used when
*      performance is not an issue.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetChanStr_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* ind, char* str_val, const int32_t* length);

/**
* Place the contents of a channel in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  vv TODO
**
* @par Note 
*      If a VA channel is specified, then element [0] of this
*      VA channel is used to populated the VV.
*
* @par See also 
*      VV class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetChanVV_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* vv);

/**
* Read a channel into a VV. If the channel is a VA channel it is
* treaded as a VV channel with multiple values per fid and the FID expation
* is set to the array size.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  vv TODO
**
* @par Note 
*      This method is to be used in conjunction with the ReFidVV_VV method
*      that will honor the FID Expansion setting.
*
* @par See also 
*      VV class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void GetChanVVExpanded_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* vv);

/**
* Get georeference information in an IPJ.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  ipj TODO
**
* @par Note 
*      If the channel does not have an IPJ, the IPJ that is
*      returned will have an unknown projection.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetIPJ_DB(void* p_geo, const int32_t* db, const int32_t* ch, const int32_t* ipj);

/**
* Get ITR for a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  itr TODO
**
* @par Note 
*      If a channel does not have an ITR, GetITR_DB will not change
*      the passed ITR.
*      Channel must be locked for READONLY or READWRITE.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetITR_DB(void* p_geo, const int32_t* db, const int32_t* ch, const int32_t* itr);

/**
* Get a REG object from a symbol
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  reg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetRegSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb, const int32_t* reg);

/**
* Get a REG string setting from a symbol reg
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  name TODO
* @param[out] setting TODO
* @param[in]  length TODO
**
* @par Note 
*      The symbol REG is used to store a variety of attribute
*      about the symbol.  Following a conventionally used entries:
*      
*      UNITS                   - channel units
*      CLASS                   - symbol class name (i.e. "Assay")
*      _PJ_ipj                 - projection blob name
*      _PJ_x                   - projection coordinate pair
*      _PJ_y
*      _PJ_name                - projection GXF-style info
*      _PJ_ellipsoid
*      _PJ_projection
*      _PJ_units
*      _PJ_datum_transform
*      
*      This is a convenient but low-performance way to get/set REG
*      settings.  If performance is an issue, and more than one
*      setting is to be Get and or Set, use the REG directly.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetRegSymbSetting_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* name, char* setting, const int32_t* length);

/**
* Place the contents of a specific part of a channel in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  vv TODO
* @param[in]  offset TODO
* @param[in]  items TODO
**
* @par Note 
*      If a VA channel is specified, then element [0] of this
*      VA channel is used to populated the VV.
*
* @par See also 
*      VV class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void GetVaChanVV_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* vv, const int32_t* offset, const int32_t* items);

/**
* Gets Maximum Number of Blobs in the Database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return Maximum Number of Blobs in the Database
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iBlobsMax_DB(void* p_geo, const int32_t* db);

/**
* Gets Maximum Number of Channels in the Database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return Maximum Number of Channels in the Database
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iChansMax_DB(void* p_geo, const int32_t* db);

/**
* Format a real value based on a channel format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  val TODO
* @param[out] str_val TODO
* @param[in]  size TODO
**
* @par Note 
*      If the passed string is too short, the result will be
*      "**".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFormatChan_DB(void* p_geo, const int32_t* db, const int32_t* chan, const double* val, char* str_val, const int32_t* size);

/**
* This method Gets a channel's array size for a
* given channel handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return Channel type
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iGetChanArraySize_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* This method gets a channel's label
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[out] cl TODO
* @param[in]  length TODO
**
* @par Note 
*      The channel label is stored in the "CLASS" parameter
*      of the channel reg. If no class is defined, then an
*      empty string is returned.
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void IGetChanClass_DB(void* p_geo, const int32_t* db, const int32_t* chan, char* cl, const int32_t* length);

/**
* This method gets a channel's number of digits displayed
* to the right of the decimal point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return Number of digits displayed to right of decimal
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iGetChanDecimal_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* This method Gets a channel's display format for a
* given channel handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return Channel display format
**
* @par Note 
*      The returned format is one of the DB_CHAN_FORMAT.
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iGetChanFormat_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* Get individual elements in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  ind TODO
* @return Value, or dummy if out of range.
* For settings, terminates if error.
**
* @par Note 
*      These methods are slow and should only be used when
*      performance is not an issue.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetChanInt_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* ind);

/**
* This method gets a channel's label
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[out] label TODO
* @param[in]  length TODO
**
* @par Note 
*      The channel label is stored in the "LABEL" parameter
*      of the channel reg.  If the setting is empty, the
*      channel name is returned.
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetChanLabel_DB(void* p_geo, const int32_t* db, const int32_t* chan, char* label, const int32_t* length);

/**
* This method Gets a channel's name for a
* given channel handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[out] name TODO
* @param[in]  length TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetChanName_DB(void* p_geo, const int32_t* db, const int32_t* chan, char* name, const int32_t* length);

/**
* This method gets a channel's read-only protection status.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return DB_CHAN_PROTECTION
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iGetChanProtect_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* This method Gets a channel's type for a
* given channel handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return Channel type
**
* @par Note 
*      The type returned is one of the DB_CATEGORY_CHAN.
*      Use the GS_SIMPLE_TYPE() macro to convert to INT,REAL
*      or string types.
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iGetChanType_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* This method Gets a channel's unit
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[out] unit TODO
* @param[in]  length TODO
**
* @par Note 
*      The unit label is stored in the "UNITS" parameter
*      of the channel reg.
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetChanUnit_DB(void* p_geo, const int32_t* db, const int32_t* chan, char* unit, const int32_t* length);

/**
* This method gets a channel's display width for a
* given channel handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return Channel display width
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iGetChanWidth_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* Gets a name from the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  name TODO
* @param[out] psz_name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetName_DB(void* p_geo, const int32_t* db, const int32_t* name, char* psz_name, const int32_t* length);

/**
* Get an integer-valued REG setting from a symbol reg
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  name TODO
* @return The setting, or iDUMMY if not found or not convertable.
**
* @par Note 
*      Same as GetRegSymbSetting_DB, but converts
*      the setting automatically to an integer value.
*      
*      This is a convenient but low-performance way to get/set REG
*      settings.  If performance is an issue, and more than one
*      setting is to be Get and or Set, use the REG directly.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t iGetRegSymbSetting_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* name);

/**
* This method gets a symbol's name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[out] name TODO
* @param[in]  length TODO
**
* @par Note 
*      See GetChanName_DB for more information
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT void IGetSymbName_DB(void* p_geo, const int32_t* db, const int32_t* symb, char* name, const int32_t* length);

/**
* Returns TRUE if channel has an ITR.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
**
* @par Note 
*      If a channel has an ITR, the ITR colors are used to
*      display channel values in the spreadsheet.
*      
*      If a channel does not have an ITR, GetITR_DB will not change
*      the passed ITR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iHaveITR_DB(void* p_geo, const int32_t* db, const int32_t* ch);

/**
* Get the matching coordinate pair of a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[out] pair TODO
* @param[in]  length TODO
* @return DB_COORDPAIR
**
* @par Note 
*      If the channel does not have a matching coordinate
*      pair, or of the channel does not exist, the returned
*      string will be empty.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t IiCoordPair_DB(void* p_geo, const int32_t* db, const char* chan, char* pair, const int32_t* length);

/**
* Gets Maximum number of lines in the database
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return Maximum number of lines in the database
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iLinesMax_DB(void* p_geo, const int32_t* db);

/**
* Gets Maximum number of Users
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return Maximum number of Users
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iUsersMax_DB(void* p_geo, const int32_t* db);

/**
* Adds a Maker to the database symbol
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  prog TODO
* @param[in]  name TODO
* @param[in]  groups TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void MakerSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* prog, const char* name, const char* groups);

/**
* Place the contents of a VV in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  vv TODO
**
* @par Note 
*      If a VA channel is specified, then element [0] of this
*      VA channel will be populated with the VV.
*      
*      There is a limit of 2000 elements for non-licensed users.
*
* @par See also 
*      VV class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PutChanVV_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* vv);

/**
* Place the contents of a VV at a specific part of a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  vv TODO
* @param[in]  offset TODO
* @param[in]  items TODO
**
* @par Note 
*      If a VA channel is specified, then element [0] of this
*      VA channel will be populated with the VV.
*
* @par See also 
*      VV class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void PutVaChanVV_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* vv, const int32_t* offset, const int32_t* items);

/**
* Read a blob from a database into a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadBlobBF_DB(void* p_geo, const int32_t* db, const int32_t* symb, const int32_t* bf);

/**
* Get individual elements in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  ind TODO
* @return Value, or dummy if out of range.
* For settings, terminates if error.
**
* @par Note 
*      These methods are slow and should only be used when
*      performance is not an issue.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetChanReal_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* ind);

/**
* Get a real-valued REG setting from a symbol reg
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  name TODO
* @return The setting, or rDUMMY if not found or not convertable.
**
* @par Note 
*      Same as GetRegSymbSetting_DB, but converts
*      the setting automatically to a real value.
*      
*      This is a convenient but low-performance way to get/set REG
*      settings.  If performance is an issue, and more than one
*      setting is to be Get and or Set, use the REG directly.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT double rGetRegSymbSetting_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* name);

/**
* This method sets all the channels' read-only protection status.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  prot TODO
**
* @par Note 
*      Value to set must be either DB_CHAN_PROTECTED or
*      DB_CHAN_UNPROTECTED
*      This method does its own channel locking/unlocking.
*      Channels already lock DB_LOCK_READONLY are ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void SetAllChanProtect_DB(void* p_geo, const int32_t* db, const int32_t* prot);

/**
* Set a channel class
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  cl TODO
**
* @par Note 
*      The channel class is stored in the "CLASS" parameter
*      of the channel reg.
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void SetChanClass_DB(void* p_geo, const int32_t* db, const int32_t* chan, const char* cl);

/**
* This method sets a channel's number of digits displayed
* to the right of the decimal point.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  dec TODO
**
* @par Note 
*      The number of display digits must be from 0 to 50.
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanDecimal_DB(void* p_geo, const int32_t* db, const int32_t* chan, const int32_t* dec);

/**
* This method sets a channel's display format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  format TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanFormat_DB(void* p_geo, const int32_t* db, const int32_t* chan, const int32_t* format);

/**
* Set individual elements in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  ind TODO
* @param[in]  val TODO
**
* @par Note 
*      These methods are slow and should only be used when
*      performance is not an issue.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanInt_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* ind, const int32_t* val);

/**
* Set a channel label
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  label TODO
**
* @par Note 
*      The channel label is stored in the "LABEL" parameter
*      of the channel reg.
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanLabel_DB(void* p_geo, const int32_t* db, const int32_t* chan, const char* label);

/**
* This method sets a channel's name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  name TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanName_DB(void* p_geo, const int32_t* db, const int32_t* chan, const char* name);

/**
* This method sets a channel's read-only protection
* status.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  prot TODO
**
* @par Note 
*      Value to set must be either DB_CHAN_PROTECTED or
*      DB_CHAN_UNPROTECTED
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanProtect_DB(void* p_geo, const int32_t* db, const int32_t* chan, const int32_t* prot);

/**
* Set individual elements in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  ind TODO
* @param[in]  val TODO
**
* @par Note 
*      These methods are slow and should only be used when
*      performance is not an issue.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanReal_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* ind, const double* val);

/**
* Set individual elements in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  ind TODO
* @param[in]  str_val TODO
**
* @par Note 
*      These methods are slow and should only be used when
*      performance is not an issue.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanStr_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* ind, const char* str_val);

/**
* This method sets a channel's unit for a
* given channel handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  unit TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanUnit_DB(void* p_geo, const int32_t* db, const int32_t* chan, const char* unit);

/**
* This method sets a channel's display width
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  width TODO
**
* @par Note 
*      The number of display digits must be from 0 to 50.
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetChanWidth_DB(void* p_geo, const int32_t* db, const int32_t* chan, const int32_t* width);

/**
* Set a REG object into a symbol
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch1 TODO
* @param[in]  ch2 TODO
* @param[in]  ipj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetIPJ_DB(void* p_geo, const int32_t* db, const int32_t* ch1, const int32_t* ch2, const int32_t* ipj);

/**
* Set ITR for a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  itr TODO
**
* @par Note 
*      Use ITR_NULL to clear the channel ITR.
*      Channel must be locked for READONLY or READWRITE.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetITR_DB(void* p_geo, const int32_t* db, const int32_t* ch, const int32_t* itr);

/**
* Set a REG object into a symbol
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  reg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetRegSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb, const int32_t* reg);

/**
* Set a REG string setting in a symbol reg
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  name TODO
* @param[in]  setting TODO
**
* @par Note 
*      The symbol REG is used to store a variety of attribute
*      about the symbol.  Following a conventionally used entries:
*      
*      UNITS                   - channel units
*      CLASS                   - symbol class name (i.e. "Assay")
*      _PJ_ipj                 - projection blob name
*      _PJ_x                   - projection coordinate pair
*      _PJ_y
*      _PJ_name                - projection GXF-style info
*      _PJ_ellipsoid
*      _PJ_projection
*      _PJ_units
*      _PJ_datum_transform
*      
*      This is a convenient but low-performance way to get/set REG
*      settings.  If performance is an issue, and more than one
*      setting is to be Get and or Set, use the REG directly.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetRegSymbSetting_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* name, const char* setting);

/**
* Write a blob from a file into a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteBlobBF_DB(void* p_geo, const int32_t* db, const int32_t* symb, const int32_t* bf);

///@}

/**
* @name Control Functions 
*/
///@{

/**
* This method forces all changes to the database to be saved.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Commit_DB(void* p_geo, const int32_t* db);

/**
* Removes any extra space from the database. This will
* reduce the database to its smallest size.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void Compact_DB(void* p_geo, const int32_t* db);

/**
* This method makes a brand new database of the specified size.
* The database is opened in ReadWrite Mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  lines TODO
* @param[in]  chans TODO
* @param[in]  blobs TODO
* @param[in]  users TODO
* @param[in]  cache TODO
* @param[in]  super TODO
* @param[in]  password TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Create_DB(void* p_geo, const char* file, const int32_t* lines, const int32_t* chans, const int32_t* blobs, const int32_t* users, const int32_t* cache, const char* super, const char* password);

/**
* This method makes a brand new database of the specified size.
* The database is opened in ReadWrite Mode. Also allows you to
* set paging size and the Compression Level.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  lines TODO
* @param[in]  chans TODO
* @param[in]  blobs TODO
* @param[in]  users TODO
* @param[in]  cache TODO
* @param[in]  super TODO
* @param[in]  password TODO
* @param[in]  page TODO
* @param[in]  level TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CreateComp_DB(void* p_geo, const char* file, const int32_t* lines, const int32_t* chans, const int32_t* blobs, const int32_t* users, const int32_t* cache, const char* super, const char* password, const int32_t* page, const int32_t* level);

/**
* This method makes a brand new database of the specified size.
* The database is opened in ReadWrite Mode. Also allows you to
* set paging size.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  lines TODO
* @param[in]  chans TODO
* @param[in]  blobs TODO
* @param[in]  users TODO
* @param[in]  cache TODO
* @param[in]  super TODO
* @param[in]  password TODO
* @param[in]  page TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CreateEx_DB(void* p_geo, const char* file, const int32_t* lines, const int32_t* chans, const int32_t* blobs, const int32_t* users, const int32_t* cache, const char* super, const char* password, const int32_t* page);

/**
* Delete Empty Line 0.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
**
* @par Note 
*      A new database is created with a single, empty line L0, but many processes
*      create databases then create their own lines, so the empty line L0 may remain
*      after the process finishes. This function will delete a line L0
*      a) If it exists and is empty
*      b) It is not the only line in the database.
*
* @par See also 
*      DelLine0_EDB - deletes an empty line 0 from the currently edited database.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void DelLine0_DB(void* p_geo, const int32_t* db);

/**
* This method closes a database and destroys the DB object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
**
* @par Note 
*      This method has been largely superseded by the use of the EDB object,
*      which when locked returns a DB object that must NOT be destroyed.
*      
*      It may still be reasonably used to destroy a DB handle returned when
*      a database is opened using a call to Open_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_DB(void* p_geo, const int32_t* db);

/**
* This method discards all changes made to the database since
* the last commit or opening.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Discard_DB(void* p_geo, const int32_t* db);

/**
* Enlarges the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  lines TODO
* @param[in]  chans TODO
* @param[in]  blobs TODO
* @param[in]  users TODO
* @param[in]  cache TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void Grow_DB(void* p_geo, const char* file, const int32_t* lines, const int32_t* chans, const int32_t* blobs, const int32_t* users, const int32_t* cache);

/**
* This method checks whether it is possible to open a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  user TODO
* @param[in]  password TODO
**
* @par Note 
*      This method is useful to determine if another session already locked a database.
*      By using this method before an Open_DB a GX may handle errors like this more gracefully.
*
* @par See also 
*      Open_DB, OpenReadOnly_DB, iCanOpenReadOnly_DB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT int32_t iCanOpen_DB(void* p_geo, const char* file, const char* user, const char* password);

/**
* This method checks whether it is possible to open a database in read-only mode.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  user TODO
* @param[in]  password TODO
**
* @par Note 
*      This method is useful to determine if another session already locked a database.
*      By using this method before an OpenReadOnly_DB a GX may handle errors like this more gracefully.
*
* @par See also 
*      Open_DB, OpenReadOnly_DB, iCanOpen_DB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4.2
*/
GX_EXPORT int32_t iCanOpenReadOnly_DB(void* p_geo, const char* file, const char* user, const char* password);

/**
* Does an integrity check of the data in the database to
* ensure it is valid.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return 0 - Ok
* 1 - Invalid Blocks in the Database
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iCheck_DB(void* p_geo, const int32_t* db);

/**
* See if a database contains only empty lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return 1 if the database contains only empty lines.
**
* @par Note 
*      This function does not check for other information or blobs,
*      it merely looks at all lines in the database to see if they
*      are empty. If all are empty, it returns 1.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT int32_t iIsEmpty_DB(void* p_geo, const int32_t* db);

/**
* See if a specific line in the database is empty.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @return 1 if the database contains only empty lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT int32_t iIsLineEmpty_DB(void* p_geo, const int32_t* db, const int32_t* symb);

/**
* This method opens a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  user TODO
* @param[in]  password TODO
* @return DB Object
*
* @par See also 
*      OpenReadOnly_DB, iCanOpen_DB, iCanOpenReadOnly_DB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Open_DB(void* p_geo, const char* file, const char* user, const char* password);

/**
* This method opens a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  user TODO
* @param[in]  password TODO
* @return DB Object
**
* @par Note 
*      This method is useful to open multiple reader instances on the same database. This call will fail
*      if a DB has already been opened with Open_DB or locked in the application with Lock_EDB.
*
* @par See also 
*      Open_DB, iCanOpen_DB, iCanOpenReadOnly_DB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4.2
*/
GX_EXPORT int32_t OpenReadOnly_DB(void* p_geo, const char* file, const char* user, const char* password);

/**
* Cleans the database by removing invalid blocks
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void Repair_DB(void* p_geo, const char* file);

/**
* Syncronize the Metadata from this database to the XML
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT void Sync_DB(void* p_geo, const int32_t* db);

///@}

/**
* @name Data Functions 
*/
///@{

/**
* This method copies the data from one channel to another on
* on the specified line. The data is converted if such
* conversion in neccessary.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_chan TODO
* @param[in]  o_chan TODO
**
* @par Note 
*      All the data in the destination channel is destroyed along
*      with the fiducial start and increment.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void CopyData_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_chan, const int32_t* o_chan);

/**
* Returns the # of columns in a VA channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return # of columns
* 0 if error
**
* @par Note 
*      If the channel is VV, this function returns 1.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetColVA_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* Returns the # of elements in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @return # of elements
**
* @par Note 
*      Returns the actual number of data items (rows) in a channel. For VA channels no correction is
*      necessary for the number of columns.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.1
*/
GX_EXPORT int32_t iGetChannelLength_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan);

/**
* This method returns the fiducial increment value of a
* specified Channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @return Fiducial Start.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetFidIncr_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan);

/**
* This method returns the fiducial start value of a
* specified Channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @return Fiducial Start.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetFidStart_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan);

/**
* This method allows the user to set the fiducial start and
* increment of a channel. The Increment should never be 0.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  start TODO
* @param[in]  incr TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetFid_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const double* start, const double* incr);

/**
* Copy a window of data in a channel into a new channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  col_s TODO
* @param[in]  col_e TODO
**
* @par Note 
*      This function normally used for VA channels. A copy of the
*      original channel will be made if start and end column
*      numbers to copy are dummies.
*      All the columns including start and end columns will be copied
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WindowVACh_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* col_s, const int32_t* col_e);

/**
* Copy a windowed version of data in a channel into a new channel
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  i_ch TODO
* @param[in]  o_ch TODO
* @param[in]  gvv TODO
**
* @par Note 
*      Similar to WindowVACh_DB, but the input and output channels must
*      contain the same number of columns. The input VV tells which columns
*      to copy over; 0 values indicate that the output column is to be
*      dummied, and non-zero values indicate the column is to be copied.
*      The VV length must be the same as the number of columns.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.1
*/
GX_EXPORT void WindowVACh2_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* i_ch, const int32_t* o_ch, const int32_t* gvv);

///@}

/**
* @name Line Functions 
*/
///@{

/**
* Set the selection status for a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  mode TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT void SetLineSelection_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* mode);

/**
* Get the selection status for a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return One of DB_LINE_SELECT
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.0
*/
GX_EXPORT int32_t iGetLineSelection_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* This method will return a handle to the first selected
* line in the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return Line Handle (use iIsLineValid method to see if valid)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t FirstSelLine_DB(void* p_geo, const int32_t* db);

/**
* This method gets a line map clip fiducial.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[out] start TODO
* @param[out] end TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void GetLineMapFid_DB(void* p_geo, const int32_t* db, const int32_t* line, double* start, double* end);

/**
* Gets the Line Selections.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return Selections Object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t GetSelect_DB(void* p_geo, const int32_t* db);

/**
* This method counts the number of selected lines in
* the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return x - Number of selected lines in the database
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iCountSelLines_DB(void* p_geo, const int32_t* db);

/**
* Is this a valid channel name?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  chan TODO
* @return 1 if it is a valid channel name
* 0 if it is not a valid channel name
**
* @par Note 
*      Channel names must only contain alpha-numeric characters or the
*      underscore character "_", and the first letter must be a letter
*      or an underscore.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.2
*/
GX_EXPORT int32_t iIsChanName_DB(void* p_geo, const char* chan);

/**
* This method checks to see if the channel handle is a
* valid channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return 0 - Not a valid channel
* 1 - Valid
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iIsChanValid_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* Is this a valid line name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  line TODO
* @return 1 if it is a valid line name
* 0 if it is not a valid line name
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iIsLineName_DB(void* p_geo, const char* line);

/**
* This method checks to see if the line handle returned by
* the Line methods is a valid line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return 0 - Not a valid line
* 1 - Valid
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iIsLineValid_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* This method returns the category (group, line) of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return DB_CATEGORY_LINE or iDUMMY.
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLineCategory_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* This method returns the flight number of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return Line Flight Number.
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLineFlight_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* Create a line label
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[out] label TODO
* @param[in]  length TODO
* @param[in]  format TODO
**
* @par Note 
*      Label formats.
*      
*      example full format is
*      "L1023.4 13"   type "L"
*      number "1023"
*      version "4"
*      flight "13"
*      
*      formats can be added to get combined format
*      
*      Use LINK format to create a database link label.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ILineLabel_DB(void* p_geo, const int32_t* db, const int32_t* line, char* label, const int32_t* length, const int32_t* format);

/**
* This method returns the number of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return Line Number.
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLineNumber_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* Returns the string form of the line number (can be alphanumeric)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[out] line_number TODO
* @param[in]  length TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ILineNumber2_DB(void* p_geo, const int32_t* db, const int32_t* line, char* line_number, const int32_t* length);

/**
* This method returns the type of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return DB_LINE_TYPE
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLineType_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* This method returns the version number of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return Line Number.
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iLineVersion_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* This method sets up a line name given the line's number,
* type, and version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  num TODO
* @param[in]  type TODO
* @param[in]  ver TODO
* @param[out] name TODO
* @param[in]  size TODO
**
* @par Note 
*      This MUST be called to generate a line name when calls
*      are made to iExistSymb_DB, CreateSymb_DB or DeleteSymb_DB
*      for an operation on a line.
*      See also SetLineName2_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ISetLineName_DB(void* p_geo, const int32_t* num, const int32_t* type, const int32_t* ver, char* name, const int32_t* size);

/**
* Like SetLineName_DB, but can use alphanumeric for line number
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  al_num TODO
* @param[in]  type TODO
* @param[in]  ver TODO
* @param[out] name TODO
* @param[in]  size TODO
**
* @par Note 
*      This MUST be called to generate a line name when calls
*      are made to iExistSymb_DB, CreateSymb_DB or DeleteSymb_DB
*      for an operation on a line.
*      The line number can be any combination of letters and numbers,
*      i.e. XU324, 98765, A, 23NGV etc.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ISetLineName2_DB(void* p_geo, const char* al_num, const int32_t* type, const int32_t* ver, char* name, const int32_t* size);

/**
* Load selections to from a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadSelect_DB(void* p_geo, const int32_t* db, const char* file);

/**
* This method will advance to the next selected line based
* on the currently selected line handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  prev TODO
* @return Line Handle (use iIsLineValid method to see if valid).
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t NextSelLine_DB(void* p_geo, const int32_t* db, const int32_t* prev);

/**
* This method returns the bearing of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return Bearing value, rDUMMY if not set.
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*      
*      This function simply returns a value set using the SetLineBearing_DB
*      function. It returns rDUMMY for line categories other than
*      DB_CATEGORY_LINE_FLIGHT.
*      
*      To calculate the line azimuth based on the first and
*      last non-dummy locations, use the rDirection_DU function.
*
* @par See also 
*      SetLineBearing_DB, rDirection_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT double rLineBearing_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* This method returns the date of a line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @return Date value.
**
* @par Note 
*      The channel must be locked DB_LOCK_READONLY or DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rLineDate_DB(void* p_geo, const int32_t* db, const int32_t* line);

/**
* Saves current selections to a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SaveSelect_DB(void* p_geo, const int32_t* db, const char* file);

/**
* Select/deselect lines based on selection string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  select TODO
* @param[in]  mode TODO
**
* @par Note 
*      Selections/deselections are cumulative. If lines had already
*      been selected, then any further selection/deselection will
*      affect that set of selections.
*      
*      E.g. "L99:800" is the string to select all normal lines from
*      99 to 800. If Select_DB is called again to select "L1000",
*      then lines 99 to 800 and 1000 would all be selected.
*      
*      Use a "T" prefix for Tie lines.
*      Use an "F" prefix to specify lines of a specific flight.
*      E.g. "F10" would select all lines of flight 10.
*      Use an empty string ("") to select/deselect ALL lines.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Select_DB(void* p_geo, const int32_t* db, const char* select, const int32_t* mode);

/**
* Sets a line's bearing.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  bearing TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*      
*      This function simply sets a value in the line's metadata
*      that is retrieved using the rLineBearing_DB
*      function. It terminates for line categories other than
*      DB_CATEGORY_LINE_FLIGHT.
*
* @par See also 
*      rLineBearing_DB, rDirection_DU
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void SetLineBearing_DB(void* p_geo, const int32_t* db, const int32_t* line, const double* bearing);

/**
* This method sets a line's date.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  date TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLineDate_DB(void* p_geo, const int32_t* db, const int32_t* line, const double* date);

/**
* This method sets a line's flight.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  fl TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLineFlight_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* fl);

/**
* This method changes a line map clip fiducial.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  start TODO
* @param[in]  end TODO
**
* @par Note 
*      for full range, set Start Fid to rMIN and End Fid to rMAX.
*      for no data, set Start and End Fids to rDUMMY.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLineMapFid_DB(void* p_geo, const int32_t* db, const int32_t* line, const double* start, const double* end);

/**
* This method sets a line's number.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  num TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLineNum_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* num);

/**
* This method sets a line's type.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  type TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLineType_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* type);

/**
* This method sets a line's version.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  ver TODO
**
* @par Note 
*      The channel must be locked DB_LOCK_READWRITE
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetLineVer_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* ver);

/**
* Sets the Line Selections.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  sel TODO
**
* @par Note 
*      This method also destroys the DB_SELECT object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetSelect_DB(void* p_geo, const int32_t* db, const int32_t* sel);

///@}

/**
* @name META Functions 
*/
///@{

/**
* Get the metadata of a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void GetMETA_DB(void* p_geo, const int32_t* db, const int32_t* meta);

/**
* Set the metadata of a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void SetMETA_DB(void* p_geo, const int32_t* db, const int32_t* meta);

///@}

/**
* @name Symbols Functions 
*/
///@{

/**
* Load a LST object with array (VA) channel symbols.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ArrayLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Load a LST object with array (VA) channel symbols with a particular number of columns.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  columns TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void ArraySizeLST_DB(void* p_geo, const int32_t* db, const int32_t* columns, const int32_t* lst);

/**
* Load a LST with database channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Populates a LST with channel symbols.
*      The name is put into the "Name" part of the LST (0),
*      and the handle, an integer value written as a string, is
*      placed in the value part of the LST (1).
*      Array channels are included, as well as virtual channels (array channel single columns loaded in the database like \"Chan[1]\".
*      
*      The LST is cleared first, and the items are sorted by name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void ChanLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Load a LST with non-array database channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Like ChanLST_DB, but does not include array channels or virtual channels.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void NormalChanLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Load a LST with channels in a particular class.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  cl TODO
**
* @par Note 
*      The Name of the symbol is placed in the
*      item name and the item value is set to the symbol handle.
*      Only channels with the given class name are included,
*      e.g. use "ASSAY" for assay channels in CHIMERA.
*      
*      The LST is cleared first, and the items are sorted by name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.3
*/
GX_EXPORT void ClassChanLST_DB(void* p_geo, const int32_t* db, const int32_t* lst, const char* cl);

/**
* Load a LST with group lines in a particular class.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  cl TODO
**
* @par Note 
*      The Name of the symbol is placed in the
*      item name and the item value is set to the symbol handle.
*      Only group lines with the given class name are included,
*      e.g. use "TARGETS" for UX-Detect Target groups.
*      
*      The LST is cleared first, and the items are sorted by name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void ClassGroupLST_DB(void* p_geo, const int32_t* db, const int32_t* lst, const char* cl);

/**
* Create a new Symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  name TODO
* @param[in]  symb TODO
* @param[in]  owner TODO
* @param[in]  category TODO
* @return DB_SYMB Object
**
* @par Note 
*      If symbol already exits, and it is the same type
*      simply returns a handle to the existing symbol.
*      
*      This method simple calls CreateSymbEx_DB with the
*      extra info set to 1.
*      
*      STRING-type channels: To create a string-type channel,
*      enter a negative number for the channel category below.
*      For instance, "-32" will create a string channel with
*      32 characters per item.
*      
*      BLOBS: Blobs (Binary Large Objects) can be used for storing
*      miscellaneous data which does not fit well into any of the
*      other various storage objects, such as a REG. Generally,
*      one or more objects is serialized to a BF object, which
*      is then written to the blob using the sWriteBlobBF_DB()
*      function. Retrieval is done in the reverse order, using
*      sWriteBlobBF_DB() first, then extracting the objects from the
*      BF object.
*      To avoid namespace problems, Geosoft reserves the following
*      name prefixes:
*      
*      OE.   (Core functions)
*      GS.   (Applications)
*      CS.   (Custom Solutions applications)
*      
*      Programmers should avoid using the above prefixes as the starting
*      letters of their blob names to avoid any possible conflicts.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateSymb_DB(void* p_geo, const int32_t* db, const char* name, const int32_t* symb, const int32_t* owner, const int32_t* category);

/**
* Create a new Symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  name TODO
* @param[in]  symb TODO
* @param[in]  owner TODO
* @param[in]  category TODO
* @param[in]  extra TODO
* @return DB_SYMB handle.
**
* @par Note 
*      If symbol already exits it is returned.
*      
*      STRING-type channels: To create a string-type channel,
*      enter a negative number for the channel category below.
*      For instance, "-32" will create a string channel with
*      32 characters per item.
*      
*      Symbol name for DB_CATEGORY_LINE_FLIGHT must conform to
*      the following line naming syntax:
*      
*      [type][number.version:flight]
*      
*      Type can be: L - normal line
*      B - base line
*      T - tie line
*      R - trend line
*      S - test line
*      P - special line
*      
*      Examples: L100,
*      T100.1:16
*      
*      Note the "Flight" is any whole number that may be useful
*      to differentiate processing tasks.
*      
*      The ability to create a VA channel is not available in the
*      free interface and requires a Montaj license.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateSymbEx_DB(void* p_geo, const int32_t* db, const char* name, const int32_t* symb, const int32_t* owner, const int32_t* category, const int32_t* extra);

/**
* Load a LST with channels in a comma-separated list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  channels TODO
**
* @par Note 
*      The Name of the symbol is placed in the
*      item name and the item value is set to the symbol handle.
*      Only channels in the list which are present in the database
*      are included.
*      
*      The LST is cleared first.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void CSVChanLST_DB(void* p_geo, const int32_t* db, const int32_t* lst, const char* channels);

/**
* This method destroys a symbol in the database and all
* the data associated with it. The symbol's lock is
* automatically removed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DeleteSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb);

/**
* Duplicate a line symbol from a group or line symbol.
* The new name must not already exist in the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  new TODO
* @return New Symbol Handle
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t DupLineSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* new);

/**
* New Symbol by duplicating an existing symbol, LOCKED
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  new TODO
* @return New Symbol Handle
**
* @par Note 
*      The symbol will be locked READWRITE.
*      The new name must not already exist in the database.
*
* @par See also 
*      DupSymbNoLock_DB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t DupSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* new);

/**
* New Symbol by duplicating an existing symbol, NO LOCK.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  new TODO
* @return New Symbol Handle
**
* @par Note 
*      The symbol will be NOT be locked.
*      The new name must not already exist in the database.
*
* @par See also 
*      DupSymb_DB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t DupSymbNoLock_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* new);

/**
* Get handle to the specified channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return Channel Handle, NULLSYMB if not defined
**
* @par Note 
*      To work with a specific column from a VA channel,
*      specify the VA element number in square brackets as part
*      of the VA channel name (e.g. "EM[3]" will treat the fourth
*      column of the VA channel as a VV).
*      
*      See notes for FindSymb_DB.
*      Introduced in v5.1.3.
*      The new FindChan_DB searches using the exact channel name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t FindChan_DB(void* p_geo, const int32_t* db, const char* chan);

/**
* Get handle to the specified symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  type TODO
* @return Symbol Handle, NULLSYMB if not defined
**
* @par Note 
*      To work with a specific column from a VA channel,
*      specify the VA element number in square brackets as part
*      of the VA channel name (e.g. "EM[3]" will treat the fourth
*      column of the VA channel as a VV).
*      
*      For backward compatibility with GXs not employing the
*      GetXYZChanSymb_DB function, the following behaviour has
*      been introduced as of v5.1.3:  (also true for "Y").
*      
*      FindSymb_DB(hDB, "X", DB_SYMB_CHAN) is now equivalent to:
*      
*      GetXYZChanSymb_DB(hDB, DB_CHAN_X);
*      
*      In other words, the current X or Y is searched for, not
*      necessarily the literal "X" or "Y". This ensures that newer
*      databases, which might have "Easting" and "Northing"
*      (or other similar names) instead of "X" and "Y" will still
*      work with older GXs expecting "X" and "Y".
*      
*      The new FindChan_DB searches using the exact channel name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t FindSymb_DB(void* p_geo, const int32_t* db, const char* symb, const int32_t* type);

/**
* This method gets the channel display order for a
* database. The list will be stored in an LST object.
* In order to modify this displayed channels list,
* call SetChanOrderLST_DB after.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void GetChanOrderLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Searches for current X, Y or Z channel symbol
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return x - Symbol Handle
* NULLSYMB - Symbol not found
* 
* searches for the "current" X, Y or Z channel.
* If none is defined, then looks for "X", "Y" or "Z" channel
* If the channel is defined, but not present, returns NULLSYMB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t GetXYZChanSymb_DB(void* p_geo, const int32_t* db, const int32_t* chan);

/**
* Place a list of channels for a given class in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  vv TODO
* @param[in]  cl TODO
* @return Number of symbols.
**
* @par Note 
*      This method generates a list of symbols in the database
*      and places their handles into a VV. The list is not
*      sorted.
*      Only channels with the given class name are included,
*      e.g. use "ASSAY" for assay channels used in CHIMERA.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT int32_t iClassChanList_DB(void* p_geo, const int32_t* db, const int32_t* vv, const char* cl);

/**
* See if the specified channel exists in the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @return 0 - Symbol does not exist in the database
* 1 - Symbol Exists
**
* @par Note 
*      See notes for iExistSymb_DB.
*      Introduced in v5.1.3.
*      iExistChan_DB searches using the exact channel name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t iExistChan_DB(void* p_geo, const int32_t* db, const char* chan);

/**
* This method checks to see if the specified symbol exists
* in the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  type TODO
* @return 0 - Symbol does not exist in the database
* 1 - Symbol Exists
**
* @par Note 
*      For backward compatibility with GXs not employing the
*      GetXYZChan_DB function, the following behaviour has
*      been introduced as of v5.1.3:  (also true for "Y").
*      
*      iExistSymb_DB(hDB, "X", DB_SYMB_CHAN) is now equivalent to:
*      
*      GetXYZChan_DB(hDB, DB_CHAN_X, sXCh);
*      iExistSymb_DB(hDB, sXCh, DB_SYMB_CHAN);
*      
*      In other words, the current X or Y is searched for, not
*      necessarily the literal "X" or "Y". This ensures that newer
*      databases, which might have "Easting" and "Northing"
*      (or other similar names) instead of "X" and "Y" will still
*      work with older GXs expecting "X" and "Y".
*      
*      The new iExistChan_DB searches using the exact channel name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iExistSymb_DB(void* p_geo, const int32_t* db, const char* symb, const int32_t* type);

/**
* This method checks to see if the specified symbol is a valid symbol in the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  type TODO
* @return 0 - Invalid symbol 
* 1 - Symbol is valid
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 9.1
*/
GX_EXPORT int32_t iValidSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb, const int32_t* type);

/**
* Determines if a symbol is locked
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @return DB_LOCK
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT int32_t iGetSymbLock_DB(void* p_geo, const int32_t* db, const int32_t* symb);

/**
* Gets current X, Y or Z channel name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan_symb TODO
* @param[out] chan TODO
* @param[in]  size TODO
**
* @par Note 
*      searches for the "current" X, Y or Z channel.
*      If none is defined, then returns "X", "Y" or "Z".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void IGetXYZChan_DB(void* p_geo, const int32_t* db, const int32_t* chan_symb, char* chan, const int32_t* size);

/**
* Place a list of symbols in a VV.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  vv TODO
* @param[in]  symb TODO
* @return Number of symbols.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iSymbList_DB(void* p_geo, const int32_t* db, const int32_t* vv, const int32_t* symb);

/**
* Load a LST with database lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Populates a LST with channel symbols.
*      The name is put into the "Name" part of the LST (0),
*      and the handle, an integer value written as a string, is
*      placed in the value part of the LST (1).
*      The LST is cleared first, and the items are sorted in logical line order.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void LineLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Locks a symbol for READONLY or READWRITE.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  lock TODO
* @param[in]  wait TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LockSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb, const int32_t* lock, const int32_t* wait);

/**
* Load a LST with mask channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      Loads a LST with all channels with CLASS "MASK", as well
*      as all channels containing the string "MASK", as long
*      as the CLASS for these channels is not set to something
*      other than "" or "MASK".
*      
*      This function is a duplicate of the MaskChanLST_CHIMERA
*      function, and can be used if CHIMERA is not installed.
*      
*      The LST is cleared first, and the items are sorted by name.
*      "None" is added at the end, with a handle value of "-1".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void MaskChanLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Load a LST with the selected lines.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      This method populates a LST object with all of the symbols
*      of the selected lines in the database.
*      The name is put into the "Name" part of the LST (0),
*      and the handle, an integer value written as a string, is
*      placed in the value part of the LST (1).
*      
*      Symbols are automatically sorted in logical line order.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT void SelectedLineLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* This method sets the channel display order for a
* database. The list to modify will be stored in an LST
* object. Call GetChanOrderLST_DB to populate the LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void SetChanOrderLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Sets current X, Y or Z channel name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan_symb TODO
* @param[in]  chan TODO
**
* @par Note 
*      If the value specified is "", the internally stored value
*      is cleared, and GetXYZChan_DB will return "X", "Y" or "Z"
*      
*      This can be used, for instance, to make "Easting" and "Northing"
*      the current X and Y channels, and have GXs using the
*      GetXYZChanSymb_DB function to load "X" and "Y" work as desired.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void SetXYZChan_DB(void* p_geo, const int32_t* db, const int32_t* chan_symb, const char* chan);

/**
* Load a LST with string-type channels.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
**
* @par Note 
*      The Name of the symbol is placed in the
*      item name and the item value is set to the symbol handle.
*      Only channels with the string-type data (sChanType_DB < 0)
*      are included.
*      
*      The LST is cleared first, and the items are sorted by name.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void StringChanLST_DB(void* p_geo, const int32_t* db, const int32_t* lst);

/**
* Populate a LST with database symbols.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  lst TODO
* @param[in]  type TODO
**
* @par Note 
*      Populates a LST with channel, line, blob or user symbols.
*      The name is put into the "Name" part of the LST (0),
*      and the handle, an integer value written as a string, is
*      placed in the value part of the LST (1).
*      
*      Line symbols are automatically sorted in logical line order.
*      
*      NOTE: The LST is NOT cleared before being filled. If you
*      want to clear the LST and get sorted values, use the
*      ChanLST_DB and LineLST_DB functions.
*
* @par See also 
*      ChanLST_DB, LineLST_DB, SelectedLineLST_DB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SymbLST_DB(void* p_geo, const int32_t* db, const int32_t* lst, const int32_t* type);

/**
* UnLocks all symbols.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void UnLockAllSymb_DB(void* p_geo, const int32_t* db);

/**
* UnLocks a symbol.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void UnLockSymb_DB(void* p_geo, const int32_t* db, const int32_t* symb);

///@}

/**
* @name VA Channels Functions 
*/
///@{

/**
* Add this channel to the auto-load feature of the group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  group TODO
* @param[in]  chan TODO
**
* @par Note 
*      If the channel is not yet associated, it is first associated.
*      If the channel is already in the associated-load list, this
*      does nothing.
*      
*      As of v6.0, the load-status of channels is no longer stored
*      in the database, but in the project, so this function is
*      equivalent to calling Associate_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddAssociatedLoad_DB(void* p_geo, const int32_t* db, const int32_t* group, const int32_t* chan);

/**
* Add a comment with a string to the activity log of the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  comment TODO
* @param[in]  str_val TODO
* @param[in]  indent TODO
**
* @par Note 
*      The comment is written in the form:
*      
*      Comment: String2
*      
*      and is followed by a carriage return.
*      The activity log is created automatically if it does not exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void AddComment_DB(void* p_geo, const int32_t* db, const char* comment, const char* str_val, const int32_t* indent);

/**
* Add a comment with an integer to the activity log of the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  comment TODO
* @param[in]  val TODO
* @param[in]  indent TODO
**
* @par Note 
*      The comment is written in the form:
*      
*      Comment: Value
*      
*      and is followed by a carriage return.
*      The activity log is created automatically if it does not exist.
*      
*      See Notes in AddComment_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void AddIntComment_DB(void* p_geo, const int32_t* db, const char* comment, const int32_t* val, const int32_t* indent);

/**
* Add a comment with a float value to the activity log of the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  comment TODO
* @param[in]  val TODO
* @param[in]  indent TODO
**
* @par Note 
*      The comment is written in the form:
*      
*      Comment: Value
*      
*      and if followed by a carriage return.
*      The activity log is created automatically if it does not exist.
*      
*      See Notes in AddComment_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void AddRealComment_DB(void* p_geo, const int32_t* db, const char* comment, const double* val, const int32_t* indent);

/**
* Add a comment with the date and time to the activity log of the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  comment TODO
* @param[in]  indent TODO
**
* @par Note 
*      The comment is written in the form:
*      
*      Comment: 2001/12/31 23:59:59
*      
*      and is followed by a carriage return.
*      The activity log is created automatically if it does not exist.
*      
*      See Notes in AddComment_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void AddTimeComment_DB(void* p_geo, const int32_t* db, const char* comment, const int32_t* indent);

/**
* Associate a channel with a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  group TODO
* @param[in]  chan TODO
**
* @par Note 
*      If it is already associated, or if the group has no
*      defined group class, does nothing.
*      
*      As of v6.3, if a group line has no class defined, then ALL
*      channels are assumed to be associated with it. This means
*      that you need to associate a new channel with a group only in
*      those cases where the group class is defined.
*      
*      If this function is used on a group with a group class, then
*      the channel is added to class's association list, and the
*      channel will be recognized as being associated with all
*      groups of that class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Associate_DB(void* p_geo, const int32_t* db, const int32_t* group, const int32_t* chan);

/**
* Associate all channels with a group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  group TODO
**
* @par Note 
*      As of v6.3, if a group line has no class defined, then ALL
*      channels are already assumed to be associated with it, and this
*      function does nothing.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AssociateAll_DB(void* p_geo, const int32_t* db, const int32_t* group);

/**
* Associate a channel with all groups of a specific class.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  chan TODO
* @param[in]  cl TODO
**
* @par Note 
*      As of v6.3, if a group line has no class defined, then ALL
*      channels are automatically assumed to be associated with it.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void AssociateClass_DB(void* p_geo, const int32_t* db, const int32_t* chan, const char* cl);

/**
* Generate a valid channel name from a name candidate
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_in TODO
* @param[out] str_out TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GenValidChanSymb_DB(void* p_geo, const char* str_in, char* str_out, const int32_t* length);

/**
* Generate a valid line symb name string from given string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_in TODO
* @param[out] str_out TODO
* @param[in]  length TODO
**
* @par Note 
*      The returned name is either the same size as the input
*      or shorter. Escapes, leading and trailing spaces are removed, then
*      all illegal characters are replaced with an underscore.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.4
*/
GX_EXPORT void GenValidLineSymb_DB(void* p_geo, const char* str_in, char* str_out, const int32_t* length);

/**
* Place the contents of a channel in a VA.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  va TODO
*
* @par See also 
*      VA class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetChanVA_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* va);

/**
* Get base and range for VA channel cell display.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[out] base TODO
* @param[out] range TODO
**
* @par Note 
*      See SetVAScaling_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void GetVAScaling_DB(void* p_geo, const int32_t* db, const int32_t* ch, double* base, double* range);

/**
* Get the range of windows displayed for a VA channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[out] min_w TODO
* @param[out] max_w TODO
**
* @par Note 
*      See SetVAWindows_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void GetVAWindows_DB(void* p_geo, const int32_t* db, const int32_t* ch, int32_t* min_w, int32_t* max_w);

/**
* Set the array channel base coordinate type, offset and values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  domain TODO
* @param[in]  base TODO
* @param[in]  vv TODO
* @param[in]  units TODO
* @param[in]  allow_changes TODO
**
* @par Note 
*      See GetVABaseCoordinateInfo_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void SetVABaseCoordinateInfo_DB(void* p_geo, const int32_t* db, const int32_t* ch, const int32_t* domain, const double* base, const int32_t* vv, const char* units, const int32_t* allow_changes);

/**
* Set the array channel base coordinate type, offset and values.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[out] domain TODO
* @param[out] base TODO
* @param[in]  vv TODO
* @param[out] units TODO
* @param[in]  size TODO
**
* @par Note 
*      See SetVABaseCoordinateInfo_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void GetVABaseCoordinateInfo_DB(void* p_geo, const int32_t* db, const int32_t* ch, int32_t* domain, double* base, const int32_t* vv, char* units, const int32_t* size);

/**
* Set the Class name for a group line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[out] cl TODO
* @param[in]  size TODO
**
* @par Note 
*      This method fails if the line is not a group line.
*      Group classes are used to identify group lines used for
*      special purposes, e.g.: "COLLAR" for the Wholeplot collar table,
*      or "TARGETS" for the UX-Detect Targets list.
*
* @par See also 
*      iLineCategory_DB - to see if a line is a group line.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void IGetGroupClass_DB(void* p_geo, const int32_t* db, const int32_t* symb, char* cl, const int32_t* size);

/**
* Get information about the database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  item TODO
* @return x - Return Value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0
*/
GX_EXPORT int32_t iGetInfo_DB(void* p_geo, const int32_t* db, const int32_t* item);

/**
* Get colors for a VA channel when displayed in the profile window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[out] file TODO
* @param[in]  size TODO
**
* @par Note 
*      See SetVAProfColorFile_DB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void IGetVAProfColorFile_DB(void* p_geo, const int32_t* db, const int32_t* ch, char* file, const int32_t* size);

/**
* Get the display options of VA channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[out] option TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void IGetVAProfSectOption_DB(void* p_geo, const int32_t* db, const int32_t* ch, char* option, const int32_t* size);

/**
* Get colors for a VA channel when displayed section in the profile window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[out] file TODO
* @param[in]  size TODO
**
* @par Note 
*      Fails in the channel is not an array channel
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void IGetVASectColorFile_DB(void* p_geo, const int32_t* db, const int32_t* ch, char* file, const int32_t* size);

/**
* Check to see if a channel is associated with group.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  group TODO
* @param[in]  chan TODO
* @return 0 if not a group line, or if the channel is not associated.
* 
* As of v6.3, if a group line has no class defined, then ALL
* channels are automatically assumed to be associated with it.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t iIsAssociated_DB(void* p_geo, const int32_t* db, const int32_t* group, const int32_t* chan);

/**
* Is this a Wholeplot database?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return 1 if it is a Wholeplot database
* 0 if it is not.
**
* @par Note 
*      Currently checks to see if the DH_COLLAR line exists.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iIsWholeplot_DB(void* p_geo, const int32_t* db);

/**
* Place the contents of a VA in a channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  line TODO
* @param[in]  chan TODO
* @param[in]  va TODO
*
* @par See also 
*      VA class.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void PutChanVA_DB(void* p_geo, const int32_t* db, const int32_t* line, const int32_t* chan, const int32_t* va);

/**
* Set the Class name for a group line.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  symb TODO
* @param[in]  cl TODO
**
* @par Note 
*      This method fails if the line is not a group line.
*      Group classes are used to identify group lines used for
*      special purposes. All group lines with the same class share
*      the same list of associated channels.
*      
*      As of v6.3, if a group line has no class defined, then ALL
*      channels are assumed to be associated with it. This means
*      that a group class should only be defined when you wish to
*      associate a subset of the available channels to group line.
*
* @par See also 
*      iLineCategory_DB - to see if a line is a group line.
*      Associate_DB - Associate a channel with a group.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void SetGroupClass_DB(void* p_geo, const int32_t* db, const int32_t* symb, const char* cl);

/**
* Set colors for a VA channel when displayed in the profile window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  file TODO
**
* @par Note 
*      Fails in the channel is not an array channel, if the
*      file does not exist, or if it is not a valid color zone file.
*      
*      The individual columns in the array channel are displayed using the input
*      zone file colors. A linear ITR from 0 to 1 is created on the color zones
*      to map to individual channel indices (expressed as a fraction as shown below).
*      
*      For instance, for a file with 8 colors the ranges are as follows:
*      
*      Color Range
*      Color 1    0        > value >=  0.125
*      Color 2    0.125    > value >=  0.25
*      Color 3    0.25     > value >=  0.375
*      Color 4    0.375    > value >=  0.5
*      Color 5    0.5      > value >=  0.625
*      Color 6    0.625    > value >=  0.75
*      Color 7    0.75     > value >=  0.875
*      Color 8    0.875    > value >=  1.0
*      
*      When an array channel is displayed, the index of each element (column) is mapped
*      into the corresponding range above using the following formula:
*      
*      value = (column index) / (# of columns - 1)
*      
*      For an array with 8 columns, you get the following values:
*      
*      Column   Value    Color
*      0        0        1
*      1        0.14     2
*      2        0.28     3
*      3        0.43     4
*      4        0.57     5
*      5        0.71     6
*      6        0.86     7
*      7        1.0      8
*      
*      The color file search path is: Local directory, then oasismontaj\tbl.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void SetVAProfColorFile_DB(void* p_geo, const int32_t* db, const int32_t* ch, const char* file);

/**
* Set the display options of VA channels
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  option TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetVAProfSectOption_DB(void* p_geo, const int32_t* db, const int32_t* ch, const char* option);

/**
* Set base and range for VA channel cell display.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  base TODO
* @param[in]  range TODO
**
* @par Note 
*      By default, VA profiles autoscale to fit in the database cell.
*      This lets the user set a single base and range for all cells.
*      If either input is a dummy, both are set as dummies, and autoscaling
*      is used.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void SetVAScaling_DB(void* p_geo, const int32_t* db, const int32_t* ch, const double* base, const double* range);

/**
* Set colors for a VA channel when displayed section in the profile window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  file TODO
**
* @par Note 
*      Fails in the channel is not an array channel, if the
*      file does not exist, or if it is not a valid color zone file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetVASectColorFile_DB(void* p_geo, const int32_t* db, const int32_t* ch, const char* file);

/**
* Set the range of windows to display for a VA channel.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @param[in]  ch TODO
* @param[in]  min_w TODO
* @param[in]  max_w TODO
**
* @par Note 
*      Use to display a subset of the VA channel windows in the GDB.
*      Windows index from 0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void SetVAWindows_DB(void* p_geo, const int32_t* db, const int32_t* ch, const int32_t* min_w, const int32_t* max_w);

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
