//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file meta_gxlib.h
* @date 2017-11-06
* @brief File containing META GX C API constant and function declarations
*/

/**
* @defgroup META_Module META
* A META object contains hierarchical organized metadata
* of any type, including other objects.  META information
* is organized in an XML-like structure based on a data
* schema that describes the data hierarchy.   META objects
* are used by many entities that need to store metadata
* specific to the entities or to the application.
* 
* Metadata can be saved in databases and maps, as well as in
* channels, lines, views and groups.  Oasis montaj objects
* can be queried for their associated metadata, and if it
* exists, the metadata can be retrieved and utilized by
* other Oasis montaj processes.
* @{
*/

#pragma once
#ifndef HMETA_H_DEFINED
#define HMETA_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name H_META_INVALID_TOKEN Definitions
* 
* META Invalid Token
*/
///@{
/** 
* H_META_INVALID_TOKEN
*/
#define H_META_INVALID_TOKEN -1
///@}

/**
* @name META_CORE_ATTRIB Definitions
* 
* META Core Attributes
*/
///@{
/** 
* META_CORE_ATTRIB_Class_Description
* 
* Description of this class
*/
#define META_CORE_ATTRIB_Class_Description -300
/** 
* META_CORE_ATTRIB_Class_Application
* 
* Application that created this class
*/
#define META_CORE_ATTRIB_Class_Application -301
/** 
* META_CORE_ATTRIB_Class_ReferenceURL
* 
* URL that defines this class
*/
#define META_CORE_ATTRIB_Class_ReferenceURL -302
/** 
* META_CORE_ATTRIB_Class_Type
* 
* Type of Class
*/
#define META_CORE_ATTRIB_Class_Type -303
/** 
* META_CORE_ATTRIB_Type_Description
* 
* Description of this type
*/
#define META_CORE_ATTRIB_Type_Description -304
/** 
* META_CORE_ATTRIB_Type_ReferenceURL
* 
* URL that defines this type
*/
#define META_CORE_ATTRIB_Type_ReferenceURL -305
/** 
* META_CORE_ATTRIB_Type_FixedSize
* 
* Fixed size of this type (in bytes)
*/
#define META_CORE_ATTRIB_Type_FixedSize -306
/** 
* META_CORE_ATTRIB_Type_ByteOrder
* 
* Byte order for this type
*/
#define META_CORE_ATTRIB_Type_ByteOrder -307
/** 
* META_CORE_ATTRIB_Type_MinValue
* 
* Minimum Value for this type
*/
#define META_CORE_ATTRIB_Type_MinValue -308
/** 
* META_CORE_ATTRIB_Type_MaxValue
* 
* Maximum Value for this type
*/
#define META_CORE_ATTRIB_Type_MaxValue -309
/** 
* META_CORE_ATTRIB_Type_MaxSize
* 
* Maximum Size in bytes for this type
*/
#define META_CORE_ATTRIB_Type_MaxSize -310
/** 
* META_CORE_ATTRIB_Type_ObjectClass
* 
* Object class that manages this type
*/
#define META_CORE_ATTRIB_Type_ObjectClass -311
/** 
* META_CORE_ATTRIB_Type_hCreatS_Func
* 
* Object creating function
*/
#define META_CORE_ATTRIB_Type_hCreatS_Func -312
/** 
* META_CORE_ATTRIB_Type_sSerial_Func
* 
* Object serializationg function
*/
#define META_CORE_ATTRIB_Type_sSerial_Func -313
/** 
* META_CORE_ATTRIB_Type_Enum_Value
* 
* Enumeration Value
*/
#define META_CORE_ATTRIB_Type_Enum_Value -314
/** 
* META_CORE_ATTRIB_Attrib_Visible
* 
* Is this attribute visible to the user
*/
#define META_CORE_ATTRIB_Attrib_Visible -315
/** 
* META_CORE_ATTRIB_Attrib_Editable
* 
* Is this atttribute editable by the user
*/
#define META_CORE_ATTRIB_Attrib_Editable -316
/** 
* META_CORE_ATTRIB_Attrib_FlatName
* 
* The flat name of this attribute
*/
#define META_CORE_ATTRIB_Attrib_FlatName -317
///@}

/**
* @name META_CORE_CLASS Definitions
* 
* Meta Core Class Objects
*/
///@{
/** 
* META_CORE_CLASS_Base
* 
* All Classes are subordinate to this class
*/
#define META_CORE_CLASS_Base -100
/** 
* META_CORE_CLASS_Predefined
* 
* All Predefined symbols are in this class
*/
#define META_CORE_CLASS_Predefined -101
/** 
* META_CORE_CLASS_Attributes
*/
#define META_CORE_CLASS_Attributes -102
/** 
* META_CORE_CLASS_ClassAttributes
*/
#define META_CORE_CLASS_ClassAttributes -103
/** 
* META_CORE_CLASS_TypeAttributes
*/
#define META_CORE_CLASS_TypeAttributes -104
/** 
* META_CORE_CLASS_ObjectAttributes
*/
#define META_CORE_CLASS_ObjectAttributes -105
/** 
* META_CORE_CLASS_EnumAttributes
*/
#define META_CORE_CLASS_EnumAttributes -106
/** 
* META_CORE_CLASS_AttributeAttributes
*/
#define META_CORE_CLASS_AttributeAttributes -107
/** 
* META_CORE_CLASS_ItemAttributes
*/
#define META_CORE_CLASS_ItemAttributes -108
/** 
* META_CORE_CLASS_Types
*/
#define META_CORE_CLASS_Types -109
/** 
* META_CORE_CLASS_Enums
*/
#define META_CORE_CLASS_Enums -110
/** 
* META_CORE_CLASS_Enum_Bool
*/
#define META_CORE_CLASS_Enum_Bool -111
/** 
* META_CORE_CLASS_Enum_ClassType
*/
#define META_CORE_CLASS_Enum_ClassType -112
///@}

/**
* @name META_CORE_TYPE Definitions
* 
* META Core Data Types
*/
///@{
/** 
* META_CORE_TYPE_Bytes
* 
* Data Bytes (Base type)
*/
#define META_CORE_TYPE_Bytes -200
/** 
* META_CORE_TYPE_Bool
* 
* Boolean
*/
#define META_CORE_TYPE_Bool -201
/** 
* META_CORE_TYPE_I1
* 
* Signed character
*/
#define META_CORE_TYPE_I1 -202
/** 
* META_CORE_TYPE_U1
* 
* Unsigned character
*/
#define META_CORE_TYPE_U1 -203
/** 
* META_CORE_TYPE_I2
* 
* Signed short
*/
#define META_CORE_TYPE_I2 -204
/** 
* META_CORE_TYPE_U2
* 
* Unsigned short
*/
#define META_CORE_TYPE_U2 -205
/** 
* META_CORE_TYPE_I4
* 
* Signed long
*/
#define META_CORE_TYPE_I4 -206
/** 
* META_CORE_TYPE_U4
* 
* Unsigned long
*/
#define META_CORE_TYPE_U4 -207
/** 
* META_CORE_TYPE_I8
* 
* Singed long long (64 bit int)
*/
#define META_CORE_TYPE_I8 -208
/** 
* META_CORE_TYPE_U8
* 
* Unsigned long long
*/
#define META_CORE_TYPE_U8 -209
/** 
* META_CORE_TYPE_R4
* 
* Float (32bit)
*/
#define META_CORE_TYPE_R4 -210
/** 
* META_CORE_TYPE_R8
* 
* Double (64bit)
*/
#define META_CORE_TYPE_R8 -211
/** 
* META_CORE_TYPE_String
* 
* String
*/
#define META_CORE_TYPE_String -212
/** 
* META_CORE_TYPE_Object
* 
* Predefined Object (ITR,IPJ)
*/
#define META_CORE_TYPE_Object -213
/** 
* META_CORE_TYPE_Enum
* 
* Enumeration
*/
#define META_CORE_TYPE_Enum -214
/** 
* META_CORE_TYPE_ClassType
*/
#define META_CORE_TYPE_ClassType -215
///@}


/**
* @name Attribute Functions 
*/
///@{

/**
* Create an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  name TODO
* @param[in]  ph_class TODO
* @param[in]  ph_type TODO
* @return x - Attribute Token
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT int32_t CreateAttrib_META(void* p_geo, const int32_t* meta, const char* name, const int32_t* ph_class, const int32_t* ph_type);

/**
* Delete Attrib from META.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_attribute TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DeleteAttrib_META(void* p_geo, const int32_t* meta, const int32_t* ph_attribute);

///@}

/**
* @name Browser Functions 
*/
///@{

/**
* Allow/disallow an attribute to be editable in the browser
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_attribute TODO
* @param[in]  editable TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetAttributeEditable_META(void* p_geo, const int32_t* meta, const int32_t* ph_attribute, const int32_t* editable);

/**
* Allow/disallow an attribute to be visible in the browser
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_attribute TODO
* @param[in]  visible TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetAttributeVisible_META(void* p_geo, const int32_t* meta, const int32_t* ph_attribute, const int32_t* visible);

///@}

/**
* @name Class Functions 
*/
///@{

/**
* Create a class
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  name TODO
* @param[in]  ph_class TODO
* @return x - Class Token
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT int32_t CreateClass_META(void* p_geo, const int32_t* meta, const char* name, const int32_t* ph_class);

/**
* Delete Class from META.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_class TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DeleteClass_META(void* p_geo, const int32_t* meta, const int32_t* ph_class);

///@}

/**
* @name Core Functions 
*/
///@{

/**
* Copy a META to another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest_meta TODO
* @param[in]  source_meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void Copy_META(void* p_geo, const int32_t* dest_meta, const int32_t* source_meta);

/**
* Create
*
* @param[in]  p_geo GX Context Pointer
* @return META Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT int32_t Create_META(void* p_geo);

/**
* Create a META Object from a BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return META Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT int32_t CreateS_META(void* p_geo, const int32_t* bf);

/**
* Destroy
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.8
*/
GX_EXPORT void Destroy_META(void* p_geo, const int32_t* meta);

/**
* Serialize an META to a BF
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void Serial_META(void* p_geo, const int32_t* meta, const int32_t* bf);

///@}

/**
* @name Get Data Functions 
*/
///@{

/**
* Does this meta/attribute have a value ?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @return x  - Data Value
* H_META_INVALID_TOKEN - No
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t FindData_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib);

/**
* Get a boolean value to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[out] value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void GetAttribBool_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, int32_t* value);

/**
* Get an enum value to an attribute (as an integer)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[out] value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void GetAttribEnum_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, int32_t* value);

/**
* Get an integer value to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[out] value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void GetAttribInt_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, int32_t* value);

/**
* Get an integer value to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[out] value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void GetAttribReal_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, double* value);

/**
* Get a string value to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[out] value TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void IGetAttribString_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, char* value, const int32_t* size);

/**
* Does this meta/attribute have a value set?
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iHasValue_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib);

///@}

/**
* @name Import/Export Functions 
*/
///@{

/**
* Export all items in a class as a CSV
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_class TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void ExportTableCSV_META(void* p_geo, const int32_t* meta, const int32_t* ph_class, const char* file);

/**
* Import a CSV into a class as items.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_class TODO
* @param[in]  file TODO
**
* @par Note 
*      Field names in the CSV file that match attribute names in the class will be
*      imported into table entries in the class.  Usually this will be used with
*      a class created using the hCreateTable_SCHEMA method so that the contents of
*      class can be viewed as a table.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void ImportTableCSV_META(void* p_geo, const int32_t* meta, const int32_t* ph_class, const char* file);

/**
* Write the entire meta as a text file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  wa TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void WriteText_META(void* p_geo, const int32_t* meta, const int32_t* wa);

///@}

/**
* @name Item Functions 
*/
///@{

/**
* Delete all items in this class.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_class TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void DeleteAllItems_META(void* p_geo, const int32_t* meta, const int32_t* ph_class);

/**
* Delete item from META.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_item TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DeleteItem_META(void* p_geo, const int32_t* meta, const int32_t* ph_item);

/**
* Creates item in Class.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  name TODO
* @param[in]  ph_class TODO
* @return x                    - Next Item
* H_META_INVALID_TOKEN - Error
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t hCreatItem_META(void* p_geo, const int32_t* meta, const char* name, const int32_t* ph_class);

/**
* Count the number of items in a class
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_class TODO
* @param[in]  ph_token TODO
* @return x                    - Next Item
* H_META_INVALID_TOKEN - No more items
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT int32_t hGetNextItem_META(void* p_geo, const int32_t* meta, const int32_t* ph_class, const int32_t* ph_token);

///@}

/**
* @name Object Functions 
*/
///@{

/**
* Get an object from an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[in]  obj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void GetAttribOBJ_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, const int32_t* obj);

/**
* Set an object to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[in]  obj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void SetAttribOBJ_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, const int32_t* obj);

///@}

/**
* @name Set Data Functions 
*/
///@{

/**
* Set a boolean value to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetAttribBool_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, const int32_t* value);

/**
* Set an enum value to an attribute (as an integer)
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void SetAttribEnum_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, const int32_t* value);

/**
* Set an integer value to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void SetAttribInt_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, const int32_t* value);

/**
* Set an integer value to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void SetAttribReal_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, const double* value);

/**
* Set a string value to an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
* @param[in]  value TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT void SetAttribString_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib, const char* value);

/**
* Set an empty attribute data holder
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[in]  ph_attrib TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void SetEmptyAttrib_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, const int32_t* ph_attrib);

///@}

/**
* @name Transfer Functions 
*/
///@{

/**
* Copy an Attribute from one META to another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest_meta TODO
* @param[in]  source_meta TODO
* @param[in]  ph_attribute TODO
* @return x                  - Handle of Attribute
* META_INVALID_TOKEN - No visible data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t hCopyAcrossAttribute_META(void* p_geo, const int32_t* dest_meta, const int32_t* source_meta, const int32_t* ph_attribute);

/**
* Copy a Class from one META to another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest_meta TODO
* @param[in]  source_meta TODO
* @param[in]  ph_class TODO
* @return x                  - Handle of Class
* META_INVALID_TOKEN - No visible data anywhere
**
* @par Note 
*      This will copy all parent classes as well.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t hCopyAcrossClass_META(void* p_geo, const int32_t* dest_meta, const int32_t* source_meta, const int32_t* ph_class);

/**
* Copy a Data value from one META to another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest_meta TODO
* @param[in]  source_meta TODO
* @param[in]  ph_data TODO
* @return x                  - Handle of Data value
* META_INVALID_TOKEN - No visible data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t hCopyAcrossData_META(void* p_geo, const int32_t* dest_meta, const int32_t* source_meta, const int32_t* ph_data);

/**
* Copy an Item from one META to another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest_meta TODO
* @param[in]  source_meta TODO
* @param[in]  ph_item TODO
* @return x                  - Handle of Item
* META_INVALID_TOKEN - No visible data
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t hCopyAcrossItem_META(void* p_geo, const int32_t* dest_meta, const int32_t* source_meta, const int32_t* ph_item);

/**
* Copy a Type from one META to another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest_meta TODO
* @param[in]  source_meta TODO
* @param[in]  ph_type TODO
* @return x                  - Handle of type
* META_INVALID_TOKEN - No visible data anywhere
**
* @par Note 
*      Classes and parent types will also be copied.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t hCopyAcrossType_META(void* p_geo, const int32_t* dest_meta, const int32_t* source_meta, const int32_t* ph_type);

/**
* Moves data items from one META to another
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest_meta TODO
* @param[in]  source_meta TODO
* @param[in]  ph_i_obj TODO
* @param[in]  ph_o_obj TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void MoveDatasAcross_META(void* p_geo, const int32_t* dest_meta, const int32_t* source_meta, const int32_t* ph_i_obj, const int32_t* ph_o_obj);

///@}

/**
* @name Type Functions 
*/
///@{

/**
* Create an attribute
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  name TODO
* @param[in]  ph_class TODO
* @param[in]  ph_type TODO
* @return x - Type Token
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT int32_t CreateType_META(void* p_geo, const int32_t* meta, const char* name, const int32_t* ph_class, const int32_t* ph_type);

/**
* Delete Data from META.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_data TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DeleteData_META(void* p_geo, const int32_t* meta, const int32_t* ph_data);

/**
* Delete Type from META.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void DeleteType_META(void* p_geo, const int32_t* meta, const int32_t* ph_type);

///@}

/**
* @name UMN Functions 
*/
///@{

/**
* Get the name of this item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  ph_object TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.3
*/
GX_EXPORT void IGetObjName_META(void* p_geo, const int32_t* meta, const int32_t* ph_object, char* name, const int32_t* size);

/**
* Resolve a Unique Meta Name (UMN) and find the token
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  meta TODO
* @param[in]  umn TODO
* @return x                    - Token
* H_META_INVALID_TOKEN - Not found
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT int32_t ResolveUMN_META(void* p_geo, const int32_t* meta, const char* umn);

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
