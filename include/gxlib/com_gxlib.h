//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file com_gxlib.h
* @date 2017-11-06
* @brief File containing COM GX C API constant and function declarations
*/

/**
* @defgroup COM_Module COM
* This class is used to communicate with external serial devices. It allows the setting of timeouts.
* @{
*/

#pragma once
#ifndef HCOM_H_DEFINED
#define HCOM_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name COM_BAUD Definitions
* 
* Connection Speed
*/
///@{
/** 
* COM_BAUD_110
*/
#define COM_BAUD_110 0
/** 
* COM_BAUD_300
*/
#define COM_BAUD_300 1
/** 
* COM_BAUD_600
*/
#define COM_BAUD_600 2
/** 
* COM_BAUD_1200
*/
#define COM_BAUD_1200 3
/** 
* COM_BAUD_2400
*/
#define COM_BAUD_2400 4
/** 
* COM_BAUD_4800
*/
#define COM_BAUD_4800 5
/** 
* COM_BAUD_9600
*/
#define COM_BAUD_9600 6
/** 
* COM_BAUD_14400
*/
#define COM_BAUD_14400 7
/** 
* COM_BAUD_19200
*/
#define COM_BAUD_19200 8
/** 
* COM_BAUD_56000
*/
#define COM_BAUD_56000 9
/** 
* COM_BAUD_57600
*/
#define COM_BAUD_57600 10
/** 
* COM_BAUD_115200
*/
#define COM_BAUD_115200 11
/** 
* COM_BAUD_128000
*/
#define COM_BAUD_128000 12
/** 
* COM_BAUD_256000
*/
#define COM_BAUD_256000 13
/** 
* COM_BAUD_38400
*/
#define COM_BAUD_38400 14
///@}

/**
* @name COM_DATASIZE Definitions
* 
* Data Bits
*/
///@{
/** 
* COM_DATASIZE_FIVE
*/
#define COM_DATASIZE_FIVE 5
/** 
* COM_DATASIZE_SIX
*/
#define COM_DATASIZE_SIX 6
/** 
* COM_DATASIZE_SEVEN
*/
#define COM_DATASIZE_SEVEN 7
/** 
* COM_DATASIZE_EIGHT
*/
#define COM_DATASIZE_EIGHT 8
///@}

/**
* @name COM_FLOWCONTROL Definitions
* 
* Flow Control Options
*/
///@{
/** 
* COM_FLOWCONTROL_NONE
*/
#define COM_FLOWCONTROL_NONE 0
/** 
* COM_FLOWCONTROL_RTS_CTS
*/
#define COM_FLOWCONTROL_RTS_CTS 1
/** 
* COM_FLOWCONTROL_DTR_DSR
*/
#define COM_FLOWCONTROL_DTR_DSR 2
/** 
* COM_FLOWCONTROL_XON_XOFF
*/
#define COM_FLOWCONTROL_XON_XOFF 3
///@}

/**
* @name COM_PARITY Definitions
* 
* Parity
*/
///@{
/** 
* COM_PARITY_EVEN
*/
#define COM_PARITY_EVEN 0
/** 
* COM_PARITY_NARK
*/
#define COM_PARITY_NARK 1
/** 
* COM_PARITY_NONE
*/
#define COM_PARITY_NONE 2
/** 
* COM_PARITY_ODD
*/
#define COM_PARITY_ODD 3
/** 
* COM_PARITY_SPACE
*/
#define COM_PARITY_SPACE 4
///@}

/**
* @name COM_STOPBITS Definitions
* 
* Stop Bits
*/
///@{
/** 
* COM_STOPBITS_ONE
*/
#define COM_STOPBITS_ONE 0
/** 
* COM_STOPBITS_ONE5
*/
#define COM_STOPBITS_ONE5 1
/** 
* COM_STOPBITS_TWO
*/
#define COM_STOPBITS_TWO 2
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Create COM object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  port TODO
* @param[in]  baud TODO
* @param[in]  data_size TODO
* @param[in]  parity TODO
* @param[in]  stop_bits TODO
* @param[in]  flow_control TODO
* @param[in]  time_out TODO
* @return COM Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_COM(void* p_geo, const char* port, const int32_t* baud, const int32_t* data_size, const int32_t* parity, const int32_t* stop_bits, const int32_t* flow_control, const int32_t* time_out);

/**
* Create COM object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  port TODO
* @param[in]  baud TODO
* @param[in]  data_size TODO
* @param[in]  parity TODO
* @param[in]  stop_bits TODO
* @param[in]  flow_control TODO
* @param[in]  time_out TODO
* @return COM Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0
*/
GX_EXPORT int32_t CreateNoTerminate_COM(void* p_geo, const char* port, const int32_t* baud, const int32_t* data_size, const int32_t* parity, const int32_t* stop_bits, const int32_t* flow_control, const int32_t* time_out);

/**
* Destroy COM handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_COM(void* p_geo, const int32_t* com);

/**
* Reads a Line from the COM
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[out] line TODO
* @param[in]  size TODO
* @return 0 - if successful in reading a line
* 1 - if an error was encountered
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t IiReadLineNoTerminate_COM(void* p_geo, const int32_t* com, char* line, const int32_t* size);

/**
* Reads characters from the COM, times out and does not terminate
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[out] line TODO
* @param[in]  size TODO
* @return 0 - if successful
* 1 - if time out or error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iReadCharsNoTerminate_COM(void* p_geo, const int32_t* com, char* line, const int32_t* size);

/**
* Reads a Line from the COM
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[out] line TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void IReadLine_COM(void* p_geo, const int32_t* com, char* line, const int32_t* size);

/**
* Writes characters to the COM.  Does not terminate upon error
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[in]  line TODO
* @return 0 - if successful in writing a string
* 1 - if time out or error was encountered
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iWriteCharsNoTerminate_COM(void* p_geo, const int32_t* com, const char* line);

/**
* Purges the input and output buffers.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.1.8
*/
GX_EXPORT void PurgeComm_COM(void* p_geo, const int32_t* com);

/**
* Reads characters from the COM
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[out] line TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ReadChars_COM(void* p_geo, const int32_t* com, char* line, const int32_t* size);

/**
* Reads Lines from the COM to a WA: Geonics EM61 only
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[in]  lines TODO
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ReadEM61LinesWA_COM(void* p_geo, const int32_t* com, const int32_t* lines, const int32_t* wa);

/**
* Reads entire dataset from the COM to a WA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ReadFile2WA_COM(void* p_geo, const int32_t* com, const int32_t* wa);

/**
* Reads Lines from the COM to a WA
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[in]  lines TODO
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void ReadLinesWA_COM(void* p_geo, const int32_t* com, const int32_t* lines, const int32_t* wa);

/**
* Set the timeout value.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[in]  time_out TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void SetTimeOut_COM(void* p_geo, const int32_t* com, const int32_t* time_out);

/**
* Writes characters to the COM
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[in]  line TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void WriteChars_COM(void* p_geo, const int32_t* com, const char* line);

/**
* Writes a Line to the COM
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  com TODO
* @param[in]  line TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftDesktopLicense">Geosoft End-User License</a>
* @version 5.0
*/
GX_EXPORT void WriteLine_COM(void* p_geo, const int32_t* com, const char* line);

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
