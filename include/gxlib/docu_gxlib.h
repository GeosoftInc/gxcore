//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file docu_gxlib.h
* @date 2017-11-06
* @brief File containing DOCU GX C API constant and function declarations
*/

/**
* @defgroup DOCU_Module DOCU
* Class to work with documents
* @{
*/

#pragma once
#ifndef HDOCU_H_DEFINED
#define HDOCU_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DOCU_OPEN Definitions
* 
* How to open document
*/
///@{
/** 
* DOCU_OPEN_VIEW
*/
#define DOCU_OPEN_VIEW 0
/** 
* DOCU_OPEN_EDIT
*/
#define DOCU_OPEN_EDIT 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Copy DOCU
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  doc_ud TODO
* @param[in]  doc_us TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void Copy_DOCU(void* p_geo, const int32_t* doc_ud, const int32_t* doc_us);

/**
* Create a document onject
*
* @param[in]  p_geo GX Context Pointer
* @return DOCU Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t Create_DOCU(void* p_geo);

/**
* Create from a serialized source
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return DOCU Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t CreateS_DOCU(void* p_geo, const int32_t* bf);

/**
* Destroy
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void Destroy_DOCU(void* p_geo, const int32_t* docu);

/**
* Get the document and place in a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void GetFile_DOCU(void* p_geo, const int32_t* docu, const char* file);

/**
* Get the document and place in a file with metadata.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[in]  file TODO
**
* @par Note 
*      If this document is only a URL link, the URL link will
*      be resolved and the document downloaded from the appropriate
*      server using the protocol specified.
*      
*      The document has metadata, and the native document does not
*      support metadata, the metadata will be placed in an associated
*      file "filename.extension.GeosoftMeta"
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void GetFileMeta_DOCU(void* p_geo, const int32_t* docu, const char* file);

/**
* Get the document's meta
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void GetMETA_DOCU(void* p_geo, const int32_t* docu, const int32_t* meta);

/**
* The document name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void IDocName_DOCU(void* p_geo, const int32_t* docu, char* name, const int32_t* length);

/**
* The original document file name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[out] name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void IFileName_DOCU(void* p_geo, const int32_t* docu, char* name, const int32_t* length);

/**
* Checks if a document has metadata.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT int32_t iHaveMETA_DOCU(void* p_geo, const int32_t* docu);

/**
* Is the document only a reference (a URL) ?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @return 1 - Yes, 0 - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t iIsReference_DOCU(void* p_geo, const int32_t* docu);

/**
* Open a document in the document viewer
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[in]  mode TODO
**
* @par Note 
*      On Windows, the default application for the file extension is
*      used to open the file.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void Open_DOCU(void* p_geo, const int32_t* docu, const int32_t* mode);

/**
* Serialize DOCU
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void Serial_DOCU(void* p_geo, const int32_t* docu, const int32_t* bf);

/**
* Set the document from a file source.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[in]  type TODO
* @param[in]  name TODO
* @param[in]  file TODO
**
* @par Note 
*      Document types are normally identified by their extension.  If you
*      leave the document type blank, the extension of the document file
*      will be used as the document type.
*      
*      To resolve conflicting types, you can define your own unique type
*      by entering your own type "extension" string.
*      
*      The following types are pre-defined (as are any normal Geosoft
*      file types):
*      
*         "htm"       HTML
*         "html"      HTML
*         "txt"       ASCII text file
*         "doc"       Word for Windows document
*         "pdf"       Adobe PDF
*         "map"       Geosoft map file
*         "mmap"      Mapinfo map file (real extension "map")
*         "grd"       Geosoft grid file
*         "gdb"       Geosoft database
*      
*      URL Document Links
*      
*      The document name can be a URL link to the document using one of
*      the supported protocols. The following protocols are supported:
*      
*         http://www.mywebserver.com/MyFile.doc                 - HTTP
*         dap://my.dap.server.com/dcs?DatasetName?MyFile.doc    - DAP (DAP Document Access)
*         ftp://my.ftp.server.com/Dir1/MyFile.doc               - FTP protocol
*      
*      The full file name will be stored but no data will be stored with
*      the DOCU class and the document can be retrieved using the sGetFile_DOCU
*      method.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void SetFile_DOCU(void* p_geo, const int32_t* docu, const char* type, const char* name, const char* file);

/**
* Set the document from a file source with metadata.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[in]  type TODO
* @param[in]  name TODO
* @param[in]  file TODO
**
* @par Note 
*      See SetFile_DOCU.
*      This function is the same as sSetFile_DOCU, plus insures that a
*      META exists that includes the "Data" class.  If the file has
*      associated metadata, either supported natively in the file, or
*      through an associated file "filename.extension.GeosoftMeta",
*      that metadata will be loaded into the DOCU meta, and a Data
*      class will be constructed if one does not exist.
*      
*      Also, the Document type Extension is very important in that it
*      specifies the document types that natively have metadata. The
*      ones currently supported are:
*      
*         "map"       Geosoft map file
*         "gdb"       Geosoft database
*         "grd"       Geosoft grid file
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void SetFileMeta_DOCU(void* p_geo, const int32_t* docu, const char* type, const char* name, const char* file);

/**
* Set the document's meta
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  docu TODO
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.1
*/
GX_EXPORT void SetMETA_DOCU(void* p_geo, const int32_t* docu, const int32_t* meta);

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
