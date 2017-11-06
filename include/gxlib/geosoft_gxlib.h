//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file geosoft_gxlib.h
* @date 2017-11-06
* @brief File containing GEOSOFT GX C API constant and function declarations
*/

/**
* @defgroup GEOSOFT_Module GEOSOFT
* This is not a class but a collection of global defines. It
* is used by all functions.
*
* Notes:
*
* The following defines are not used by any methods but
* are useful in general:
* 
* GEO_VAR
* GEO_DUMMY
* GEO_LIMITS
* GEO_FULL_LIMITS
* GEO_STRING_SIZE
*
* @{
*/

#pragma once
#ifndef HGEOSOFT_H_DEFINED
#define HGEOSOFT_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name CRC_INIT_VALUE Definitions
* 
* Initial value for starting a CRC
*/
///@{
/** 
* CRC_INIT_VALUE
* 
* 0xFFFFFFFF
*/
#define CRC_INIT_VALUE 4294967295
///@}

/**
* @name DATE_FORMAT Definitions
* 
* Old Date formats
*/
///@{
/** 
* DATE_FORMAT_YYYYMMDD
* 
* Standard Date (YYYY/MM/DD, YY/MM/DD, YYYYMMDD or YYMMDD, space or / delimited)
*/
#define DATE_FORMAT_YYYYMMDD 1
/** 
* DATE_FORMAT_DDMMYYYY
* 
* Date (DD/MM/YYYY or DD/MM/YY century 20 if YY>50, DISC compliant)
*/
#define DATE_FORMAT_DDMMYYYY 2
/** 
* DATE_FORMAT_MMDDYYYY
* 
* Date (MM/DD/YYYY or MM/DD/YY century 19)
*/
#define DATE_FORMAT_MMDDYYYY 3
///@}

/**
* @name GEO_DUMMY Definitions
* 
* Special numbers indicating NULLL
*/
///@{
/** 
* iDUMMY
* 
* Integer Dummy (-2147483647)
*/
#define iDUMMY -2147483647
/** 
* rDUMMY
* 
* Floating Point Dummy (-1.0E32)
*/
#define rDUMMY -1.0E32
///@}

/**
* @name GEO_FULL_LIMITS Definitions
* 
* Data ranges of all Geosoft types
*/
///@{
/** 
* GS_S1MX
* 
* (signed char   )   127
*/
#define GS_S1MX 127
/** 
* GS_S1MN
* 
* (signed char   )  -126
*/
#define GS_S1MN -126
/** 
* GS_S1DM
* 
* (signed char   )  -127
*/
#define GS_S1DM -127
/** 
* GS_U1MX
* 
* (unsigned char )   254U
*/
#define GS_U1MX 254U
/** 
* GS_U1MN
* 
* (unsigned char )   0U
*/
#define GS_U1MN 0U
/** 
* GS_U1DM
* 
* (unsigned char )   255U
*/
#define GS_U1DM 255U
/** 
* GS_S2MX
* 
* (short         )   32767
*/
#define GS_S2MX 32767
/** 
* GS_S2MN
* 
* (short         )  -32766
*/
#define GS_S2MN -32766
/** 
* GS_S2DM
* 
* (short         )  -32767
*/
#define GS_S2DM -32767
/** 
* GS_U2MX
* 
* (unsigned short)   65534U
*/
#define GS_U2MX 65534U
/** 
* GS_U2MN
* 
* (unsigned short)   0U
*/
#define GS_U2MN 0U
/** 
* GS_U2DM
* 
* (unsigned short)   65535U
*/
#define GS_U2DM 65535U
/** 
* GS_S4MX
* 
* 2147483647L
*/
#define GS_S4MX 2147483647L
/** 
* GS_S4MN
* 
* -2147483646L
*/
#define GS_S4MN -2147483646L
/** 
* GS_S4DM
* 
* -2147483647L
*/
#define GS_S4DM -2147483647L
/** 
* GS_U4MX
* 
* (unsigned long )   0xFFFFFFFE
*/
#define GS_U4MX 0xFFFFFFFE
/** 
* GS_U4MN
* 
* (unsigned long )   0x00000000
*/
#define GS_U4MN 0x00000000
/** 
* GS_U4DM
* 
* (unsigned long )   0xFFFFFFFF
*/
#define GS_U4DM 0xFFFFFFFF
/** 
* GS_S8MX
* 
* (__GS_INT64    )   0x7FFFFFFFFFFFFFFF
*/
#define GS_S8MX 0x7FFFFFFFFFFFFFFF
/** 
* GS_S8MN
* 
* (__GS_INT64    )   0x8000000000000001
*/
#define GS_S8MN 0x8000000000000001
/** 
* GS_S8DM
* 
* (__GS_INT64    )   0x8000000000000000
*/
#define GS_S8DM 0x8000000000000000
/** 
* GS_U8MX
* 
* (__GS_UINT64   )   0xFFFFFFFFFFFFFFFE
*/
#define GS_U8MX 0xFFFFFFFFFFFFFFFE
/** 
* GS_U8MN
* 
* (__GS_UINT64   )   0x0000000000000000
*/
#define GS_U8MN 0x0000000000000000
/** 
* GS_U8DM
* 
* (__GS_UINT64   )   0xFFFFFFFFFFFFFFFF
*/
#define GS_U8DM 0xFFFFFFFFFFFFFFFF
/** 
* GS_R4MX
* 
* (float         )   1.0E32   (In C these must be declared as external constants:)
*/
#define GS_R4MX 1.0E32f
/** 
* GS_R4MN
* 
* (float         )  -0.9E32     const float r4min=(float)-0.9E32,
*/
#define GS_R4MN -0.9E32f
/** 
* GS_R4DM
* 
* (float         )  -1.0E32                 r4max=(float)1.0E32,
* r4dum=(float)-1.0E32;
*/
#define GS_R4DM -1.0E32f
/** 
* GS_R8MX
* 
* (double        )   1.0E32
*/
#define GS_R8MX 1.0E32
/** 
* GS_R8MN
* 
* (double        )  -0.9E32
*/
#define GS_R8MN -0.9E+32
/** 
* GS_R8DM
* 
* (double        )  -1.0E32
*/
#define GS_R8DM -1.0E+32
/** 
* GS_R4EPSILON
* 
* (float         )   1.0E-32
*/
#define GS_R4EPSILON 1.0E-32f
/** 
* GS_R8EPSILON
* 
* (double        )   1.0E-32
*/
#define GS_R8EPSILON 1.0E-32
///@}

/**
* @name GEO_LIMITS Definitions
* 
* Data ranges of numbers
*/
///@{
/** 
* iMIN
* 
* Smallest Integer (-2147483646)
*/
#define iMIN -2147483646
/** 
* iMAX
* 
* Largest Integer (2147483647)
*/
#define iMAX 2147483647
/** 
* rMIN
* 
* Smallest Floating Point (-0.9E32)
*/
#define rMIN -0.9E32
/** 
* rMAX
* 
* Largest Floating Point (1.0E32)
*/
#define rMAX 1.0E32
///@}

/**
* @name GEO_STRING_SIZE Definitions
* 
* Default string sized for different uses
* GX's must use these unless there is a
* very good reason not to. The path strings
* here are generally larger than what is possible
* in the OS, but it is defined as such for Unicode
* conversion reasons.
*/
///@{
/** 
* STR_DEFAULT
* 
* Default Size for almost everything (128 characters)
*/
#define STR_DEFAULT 128
/** 
* STR_DEFAULT_SHORT
* 
* Default Size for a short string (64 characters)
*/
#define STR_DEFAULT_SHORT 64
/** 
* STR_DEFAULT_LONG
* 
* Default Size for a long string (1024 characters)
*/
#define STR_DEFAULT_LONG 1024
/** 
* STR_ERROR
* 
* Default Size for an error string (2048 characters)
*/
#define STR_ERROR 2048
/** 
* STR_VERY_LONG
* 
* Default Size for a long string (16384 characters)
*/
#define STR_VERY_LONG 16384
/** 
* STR_VIEW
* 
* Name of a View (2080)
*/
#define STR_VIEW 2080
/** 
* STR_GROUP
* 
* Name of a Group (1040)
*/
#define STR_GROUP 1040
/** 
* STR_VIEW_GROUP
* 
* Combined View/Group Name (2080)
*/
#define STR_VIEW_GROUP 2080
/** 
* STR_FILE
* 
* Name of a file (1040)
*/
#define STR_FILE 1040
/** 
* STR_MULTI_FILE
* 
* Name of multiple files (16384)
*/
#define STR_MULTI_FILE 16384
/** 
* STR_DB_SYMBOL
* 
* Name of database symbol (64)
*/
#define STR_DB_SYMBOL 64
/** 
* STR_GXF
* 
* Size of strings for GXF projection info (160).
*/
#define STR_GXF 160
/** 
* STR_MAX_PATH
* 
* Maximum path length (1040)
*/
#define STR_MAX_PATH 1040
/** 
* STR_MULTI_PATH
* 
* Multi-file path (16384)
*/
#define STR_MULTI_PATH 16384
/** 
* GS_MAX_PATH
* 
* Same as STR_FILE
*/
#define GS_MAX_PATH STR_FILE
/** 
* GS_MULTI_PATH
* 
* Same as STR_MULTI_FILE
*/
#define GS_MULTI_PATH STR_MULTI_FILE
///@}

/**
* @name GEO_VAR Definitions
* 
* Variable types.
* Use -X for strings of X length
*/
///@{
/** 
* GS_INT
* 
* Integer (long)
*/
#define GS_INT 0
/** 
* GS_REAL
* 
* Floating Point (double)
*/
#define GS_REAL 1
///@}

/**
* @name GS_FORMATS Definitions
* 
* Special use data types. String are indicated by a
* negative maximum string length (including NULL).
*/
///@{
/** 
* FORMAT_DECIMAL
* 
* Standard numbers (-134.534)
*/
#define FORMAT_DECIMAL 0
/** 
* FORMAT_SIG_DIG
* 
* Decimals imply number of significant digits
*/
#define FORMAT_SIG_DIG 5
/** 
* FORMAT_EXP
* 
* Exponential notation (-1.345e45)
*/
#define FORMAT_EXP 1
/** 
* FORMAT_TIME_COLON
* 
* Standard Time (HH:MM:SS.SSSS)
*/
#define FORMAT_TIME_COLON 2
/** 
* FORMAT_TIME_HMS
* 
* Time (HH.MMSSSSSSS)
*/
#define FORMAT_TIME_HMS 8
/** 
* FORMAT_TIME_HHMMSS
* 
* Time (HHMMSS)
*/
#define FORMAT_TIME_HHMMSS 9
/** 
* FORMAT_DATE_YYYYMMDD
* 
* Standard Date (YYYY/MM/DD, YY/MM/DD, YYYYMMDD or YYMMDD, space or / delimited)
*/
#define FORMAT_DATE_YYYYMMDD 3
/** 
* FORMAT_DATE_DDMMYYYY
* 
* Date (DD/MM/YYYY or DD/MM/YY century 20 if YY>50, DISC compliant)
*/
#define FORMAT_DATE_DDMMYYYY 6
/** 
* FORMAT_DATE_MMDDYYYY
* 
* Date (MM/DD/YYYY or MM/DD/YY century 19)
*/
#define FORMAT_DATE_MMDDYYYY 7
/** 
* FORMAT_GEOGRAPHIC
* 
* Standard Geographical (DEG.MM.SS.SSS)
*/
#define FORMAT_GEOGRAPHIC 4
/** 
* FORMAT_GEOGRAPHIC_1
* 
* GeoGraph (DEG:MM:SS.SSS)
*/
#define FORMAT_GEOGRAPHIC_1 10
/** 
* FORMAT_GEOGRAPHIC_2
* 
* GeoGraph (DEG.MMSSSSS)
*/
#define FORMAT_GEOGRAPHIC_2 11
/** 
* FORMAT_GEOGRAPHIC_3
* 
* GeoGraph (DEGMMmmmm or DEGMM.mmmm or DEG.MM.mmmm)  (mmmm: decimal minute)
*/
#define FORMAT_GEOGRAPHIC_3 12
///@}

/**
* @name GS_TYPES Definitions
* 
* Special use data types. String are indicated by a
* negative maximum string length (including NULL).
*/
///@{
/** 
* GS_BYTE
* 
* Signed Byte
*/
#define GS_BYTE 0
/** 
* GS_USHORT
* 
* Unsigned Short
*/
#define GS_USHORT 1
/** 
* GS_SHORT
* 
* Signed Short
*/
#define GS_SHORT 2
/** 
* GS_LONG
* 
* Signed Long
*/
#define GS_LONG 3
/** 
* GS_FLOAT
* 
* 32-Bit floating point
*/
#define GS_FLOAT 4
/** 
* GS_DOUBLE
* 
* 64-Bit floating point
*/
#define GS_DOUBLE 5
/** 
* GS_UBYTE
* 
* Unsigned byte
*/
#define GS_UBYTE 6
/** 
* GS_ULONG
* 
* Unsigned Long
*/
#define GS_ULONG 7
/** 
* GS_LONG64
* 
* 64-Bit signed long
*/
#define GS_LONG64 8
/** 
* GS_ULONG64
* 
* 64-Bit unsigned long
*/
#define GS_ULONG64 9
/** 
* GS_FLOAT3D
* 
* 3 x 32-Bit floating point
*/
#define GS_FLOAT3D 10
/** 
* GS_DOUBLE3D
* 
* 3 x 64-Bit floating point
*/
#define GS_DOUBLE3D 11
/** 
* GS_FLOAT2D
* 
* 2 x 32-Bit floating point
*/
#define GS_FLOAT2D 12
/** 
* GS_DOUBLE2D
* 
* 2 x 64-Bit floating point
*/
#define GS_DOUBLE2D 13
/** 
* GS_MAXTYPE
* 
* Maximum supported type (GS_DOUBLE2D)
*/
#define GS_MAXTYPE 13
/** 
* GS_TYPE_DEFAULT
* 
* Default. Can be used only when a method specifically allows a default type.
*/
#define GS_TYPE_DEFAULT -32767
///@}

/**
* @name SYS_CRYPT_KEY Definitions
* 
* Special Encryption Keys
*/
///@{
/** 
* SYS_CRYPT_LICENSE_KEY
* 
* Using the current license key
*/
#define SYS_CRYPT_LICENSE_KEY "{***LICENSE_KEY***}"
/** 
* SYS_CRYPT_COMPUTER_ID
* 
* Use the current computer ID
*/
#define SYS_CRYPT_COMPUTER_ID "{***COMPUTER_ID***}"
/** 
* SYS_CRYPT_GLOBAL_ID
* 
* Use the non-changing computer ID
*/
#define SYS_CRYPT_GLOBAL_ID "{***GLOBAL_COMPUTER_ID***}"
///@}

/**
* @name TIME_FORMAT Definitions
* 
* Old Time formats
*/
///@{
/** 
* TIME_FORMAT_COLON
* 
* Standard Time (HH:MM:SS.SSSS)
*/
#define TIME_FORMAT_COLON 1
/** 
* TIME_FORMAT_HMS
* 
* Time (HH.MMSSSSSSS)
*/
#define TIME_FORMAT_HMS 2
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
