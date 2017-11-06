//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file bf_gxlib.h
* @date 2017-11-06
* @brief File containing BF GX C API constant and function declarations
*/

/**
* @defgroup BF_Module BF
* The BF class is used to access (or create) Binary files and remove
* (or destroy) files from use. You can also perform a variety of
* additional tasks, such as positioning within files, reading from
* files and writing to files.
* @{
*/

#pragma once
#ifndef HBF_H_DEFINED
#define HBF_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name BF_BYTEORDER Definitions
* 
* Byte order for read/write
*/
///@{
/** 
* BF_BYTEORDER_LSB
* 
* Least significant byte first (Intel, Windows)
*/
#define BF_BYTEORDER_LSB 256
/** 
* BF_BYTEORDER_MSB
* 
* Most significant byte first (Mororola, Sun)
*/
#define BF_BYTEORDER_MSB 512
///@}

/**
* @name BF_CLOSE Definitions
* 
* Close Flags
*/
///@{
/** 
* BF_KEEP
*/
#define BF_KEEP 0
/** 
* BF_DELETE
*/
#define BF_DELETE 1
///@}

/**
* @name BF_ENCODE Definitions
* 
* The way a string is encoded
*/
///@{
/** 
* BF_ENCODE_ANSI
* 
* String is stored as ANSI code page
*/
#define BF_ENCODE_ANSI 0
/** 
* BF_ENCODE_UTF8
* 
* String is stored as UTF8
*/
#define BF_ENCODE_UTF8 1
///@}

/**
* @name BF_OPEN_MODE Definitions
* 
* Open Status
*/
///@{
/** 
* BF_READ
* 
* Read only
*/
#define BF_READ 0
/** 
* BF_READWRITE_NEW
* 
* Erases existing file
*/
#define BF_READWRITE_NEW 1
/** 
* BF_READWRITE_OLD
* 
* File must pre-exist
*/
#define BF_READWRITE_OLD 2
/** 
* BF_READWRITE_APP
* 
* Open and append onto pre-existing file (cannot be read from)
*/
#define BF_READWRITE_APP 4
///@}

/**
* @name BF_SEEK Definitions
* 
* Seek Location
*/
///@{
/** 
* BF_SEEK_START
*/
#define BF_SEEK_START 0
/** 
* BF_SEEK_CURRENT
*/
#define BF_SEEK_CURRENT 1
/** 
* BF_SEEK_EOF
*/
#define BF_SEEK_EOF 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Read data from a BF stream into memory
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  buff TODO
* @param[in]  nbytes TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadBuff_BF(void* p_geo, const int32_t* bf, void* buff, int32_t nbytes);

/**
* Write data from memory into a BF stream
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  buff TODO
* @param[in]  nbytes TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteBuff_BF(void* p_geo, const int32_t* bf, const void* buff, int32_t nbytes);

/**
* Changes the size of a file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _ChSize_BF(void* p_geo, const int32_t* bf, const int32_t* size);

/**
* Moves file position
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  offset TODO
* @param[in]  ref TODO
**
* @par Note 
*      Terminates if attempt to move past the end of
*      a read-only file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _Seek_BF(void* p_geo, const int32_t* bf, const int32_t* offset, const int32_t* ref);

/**
* Copy entire contents of a source BF to a destination BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  b_fr TODO
* @param[in]  b_fw TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_BF(void* p_geo, const int32_t* b_fr, const int32_t* b_fw);

/**
* Compute CRC of a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  size TODO
* @param[in]  crc TODO
* @return CRC Value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CRC_BF(void* p_geo, const int32_t* bf, const int32_t* size, const int32_t* crc);

/**
* Create BF object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  status TODO
* @return BF Object
**
* @par Note 
*      Run-time specific directory paths may be added the the front of file names
*      as follows:
*      
*      <geosoft>      the main Geosoft installation directory
*      <geosoft2>     the secondary Geosoft installation directory
*      <geotemp>      the Geosoft temporary file directory
*      <windows>      the operating system Windows directory
*      <system>       the operating system system directory
*      <other>        other environment variables
*      
*      For example "<geosoft>/user/csv/datum.csv"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_BF(void* p_geo, const char* file, const int32_t* status);

/**
* Create BF object inside an SBF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  sbf TODO
* @param[in]  file TODO
* @param[in]  status TODO
* @return BF Object
**
* @par Note 
*      see sbf.gxh
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateSBF_BF(void* p_geo, const int32_t* sbf, const char* file, const int32_t* status);

/**
* Destroy BF handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  status TODO
**
* @par Note 
*      The DestroyEx call implies BF_KEEP
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_BF(void* p_geo, const int32_t* bf, const int32_t* status);

/**
* Destroy BF handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void DestroyEx_BF(void* p_geo, const int32_t* bf);

/**
* Returns 1 if at the end of the file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return 1 if at the end of the file,
* 0 if not at the end of the file
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iEOF_BF(void* p_geo, const int32_t* bf);

/**
* Check if you can write to the BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return 0 - No
* 1 - Yes
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iQueryWrite_BF(void* p_geo, const int32_t* bf);

/**
* Reads string data from current position in BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  bytes TODO
* @param[in]  encoding TODO
* @param[out] data TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void IReadBinaryString_BF(void* p_geo, const int32_t* bf, const int32_t* bytes, const int32_t* encoding, char* data, const int32_t* size);

/**
* Returns the file length
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return File size in bytes.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iSize_BF(void* p_geo, const int32_t* bf);

/**
* Returns current position of file pointer in bytes
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return Current file pointer location
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iTell_BF(void* p_geo, const int32_t* bf);

/**
* Reads int data from current position in BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  type TODO
* @param[out] data TODO
**
* @par Note 
*      If the data source may be in byte order different from that
*      required by the reader, you can add the source byte-order
*      to the BF elelment type.  The byte order will be swapped
*      if required.  For example, to write out a real number 3.5
*      with Most-Significant_Byte first (Mortorola) convention:
*      
*      WriteReal_BF(hBF,BF_BYTEORDER_MSB+GS_REAL,3.5).
*      
*      If a byte order is not specified, the source is assumed to be
*      in the native byte order of the reading/writing computer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadInt_BF(void* p_geo, const int32_t* bf, const int32_t* type, int32_t* data);

/**
* Reads real data from current position in BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  type TODO
* @param[out] data TODO
**
* @par Note 
*      If the data source may be in byte order different from that
*      required by the reader, you can add the source byte-order
*      to the BF elelment type.  The byte order will be swapped
*      if required.  For example, to write out a real number 3.5
*      with Most-Significant_Byte first (Mortorola) convention:
*      
*      WriteReal_BF(hBF,BF_BYTEORDER_MSB+GS_REAL,3.5).
*      
*      If a byte order is not specified, the source is assumed to be
*      in the native byte order of the reading/writing computer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadReal_BF(void* p_geo, const int32_t* bf, const int32_t* type, double* data);

/**
* Read data to a VM from current position in BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  type TODO
* @param[in]  vm TODO
**
* @par Note 
*      If the data source may be in byte order different from that
*      required by the reader, you can add the source byte-order
*      to the BF elelment type.  The byte order will be swapped
*      if required.  For example, to write out a real number 3.5
*      with Most-Significant_Byte first (Mortorola) convention:
*      
*      WriteReal_BF(hBF,BF_BYTEORDER_MSB+GS_REAL,3.5).
*      
*      If a byte order is not specified, the source is assumed to be
*      in the native byte order of the reading/writing computer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadVM_BF(void* p_geo, const int32_t* bf, const int32_t* type, const int32_t* vm);

/**
* Read data to a VV from current position in BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  type TODO
* @param[in]  vv TODO
**
* @par Note 
*      If the data source may be in byte order different from that
*      required by the reader, you can add the source byte-order
*      to the BF elelment type.  The byte order will be swapped
*      if required.  For example, to write out a real number 3.5
*      with Most-Significant_Byte first (Mortorola) convention:
*      
*      WriteReal_BF(hBF,BF_BYTEORDER_MSB+GS_REAL,3.5).
*      
*      If a byte order is not specified, the source is assumed to be
*      in the native byte order of the reading/writing computer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReadVV_BF(void* p_geo, const int32_t* bf, const int32_t* type, const int32_t* vv);

/**
* Set the flag to delete the file on close
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  status TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void SetDestroyStatus_BF(void* p_geo, const int32_t* bf, const int32_t* status);

/**
* Write a binary string to a BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  encoding TODO
* @param[in]  data TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void WriteBinaryString_BF(void* p_geo, const int32_t* bf, const int32_t* encoding, const char* data);

/**
* Writes a null byte (0) to BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteDataNull_BF(void* p_geo, const int32_t* bf);

/**
* Writes int to the BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  type TODO
* @param[in]  data TODO
**
* @par Note 
*      See comments on byte order for the Read.. functions if you
*      want to enforce a certain byte order.
*      
*      If a byte order is not specified, the data is written
*      in the native byte order of the writing computer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteInt_BF(void* p_geo, const int32_t* bf, const int32_t* type, const int32_t* data);

/**
* Writes real to the BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  type TODO
* @param[in]  data TODO
**
* @par Note 
*      See comments on byte order for the Read.. functions if you
*      want to enforce a certain byte order.
*      
*      If a byte order is not specified, the data is written
*      in the native byte order of the writing computer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteReal_BF(void* p_geo, const int32_t* bf, const int32_t* type, const double* data);

/**
* Writes VM to the BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  type TODO
* @param[in]  vm TODO
**
* @par Note 
*      See comments on byte order for the Read.. functions if you
*      want to enforce a certain byte order.
*      
*      If a byte order is not specified, the data is written
*      in the native byte order of the writing computer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteVM_BF(void* p_geo, const int32_t* bf, const int32_t* type, const int32_t* vm);

/**
* Writes VV to the BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @param[in]  type TODO
* @param[in]  vv TODO
**
* @par Note 
*      See comments on byte order for the Read.. functions if you
*      want to enforce a certain byte order.
*      
*      If a byte order is not specified, the data is written
*      in the native byte order of the writing computer.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void WriteVV_BF(void* p_geo, const int32_t* bf, const int32_t* type, const int32_t* vv);

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
