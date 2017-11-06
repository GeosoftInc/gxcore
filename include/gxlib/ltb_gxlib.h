//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file ltb_gxlib.h
* @date 2017-11-06
* @brief File containing LTB GX C API constant and function declarations
*/

/**
* @defgroup LTB_Module LTB
* An LTB object is typically created from a CSV (comma-separated values)
* file, and is a table of information that may be accessed by row
* or column. The LTB class is recommended for use with small tables
* produced from short lists (of the order of 1000's or records) such
* as the different geographic projections and their defining parameters.
* Large tables, such as those required for table-lookup functions, should
* be accessed using the TB class.
*
* Notes:
*
* An LTB ASCII table file has the following structure:
* 
* / comments
* key_name,col_1,col_2,col_3,etc...    /field names
* key_1,token,token,token,etc...       /data lines
* key_2,token,token,token,etc...
* etc...
* 
* The first column must be the key column (all entries unique).
* 
* The header line is optional and can be used to find entries.
* 
* Comment and empty lines are ignored.
*
* @{
*/

#pragma once
#ifndef HLTB_H_DEFINED
#define HLTB_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name LTB_CASE Definitions
* 
* Case handling of LTB strings
*/
///@{
/** 
* LTB_CASE_INSENSITIVE
* 
* Ignore case
*/
#define LTB_CASE_INSENSITIVE 0
/** 
* LTB_CASE_SENSITIVE
* 
* Case is used
*/
#define LTB_CASE_SENSITIVE 1
///@}

/**
* @name LTB_CONLST Definitions
* 
* Matching types
*/
///@{
/** 
* LTB_CONLST_EXACT
*/
#define LTB_CONLST_EXACT 0
/** 
* LTB_CONLST_ANY
*/
#define LTB_CONLST_ANY 1
///@}

/**
* @name LTB_DELIM Definitions
* 
* Types of LTB Delimiters
*/
///@{
/** 
* LTB_DELIM_SPACE
* 
* Spaces
*/
#define LTB_DELIM_SPACE 0
/** 
* LTB_DELIM_COMMA
* 
* Commas
*/
#define LTB_DELIM_COMMA 1
/** 
* LTB_DELIM_SPACECOMMA
* 
* Spaces and Commas
*/
#define LTB_DELIM_SPACECOMMA 2
///@}

/**
* @name LTB_TYPE Definitions
* 
* Types of LTB Headers
*/
///@{
/** 
* LTB_TYPE_HEADER
* 
* Has a header
*/
#define LTB_TYPE_HEADER 0
/** 
* LTB_TYPE_NOHEADER
* 
* Has no header
*/
#define LTB_TYPE_NOHEADER 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Add a new record.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  key TODO
* @param[out] rec TODO
**
* @par Note 
*      If the record exists, the existing record is cleared
*      and the record number is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddRecord_LTB(void* p_geo, const int32_t* ltb, const char* key, int32_t* rec);

/**
* Contract the contents of two same-key and same-fields tables.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lt_bm TODO
* @param[in]  lt_bc TODO
* @return x    - Handle to LTB object
* NULL - Error of some kind
**
* @par Note 
*      The "Key" of the child must be the same as the "Key" of the Master.
*      The fields of two LTB must be the same.
*      
*      Contracting takes place as follows:
*      
*      1. The Master LTB is copied to the New LTB.
*      2. All records in the contract LIB are deleted from the New LTB (if there are any)
*      3. The New LTB is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1
*/
GX_EXPORT int32_t Contract_LTB(void* p_geo, const int32_t* lt_bm, const int32_t* lt_bc);

/**
* Creates a LTB object from a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  type TODO
* @param[in]  delim TODO
* @param[in]  key TODO
* @return x    - Handle to LTB object
* NULL - Error of some kind
**
* @par Note 
*      If the file has no header, field names are assumed to be "0", "1", etc.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_LTB(void* p_geo, const char* file, const int32_t* type, const int32_t* delim, const char* key);

/**
* Creates a LTB object from an encrypted file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  type TODO
* @param[in]  delim TODO
* @param[in]  case TODO
* @param[in]  key TODO
* @param[in]  crypt TODO
* @return x    - Handle to LTB object
* NULL - Error of some kind
**
* @par Note 
*      If the file has no header, field names are assumed to be "0", "1", etc.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT int32_t CreateCrypt_LTB(void* p_geo, const char* file, const int32_t* type, const int32_t* delim, const int32_t* case, const char* key, const char* crypt);

/**
* Creates a LTB object from a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[in]  type TODO
* @param[in]  delim TODO
* @param[in]  case TODO
* @param[in]  key TODO
* @return x    - Handle to LTB object
* NULL - Error of some kind
**
* @par Note 
*      If the file has no header, field names are assumed to be "0", "1", etc.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.1
*/
GX_EXPORT int32_t CreateEx_LTB(void* p_geo, const char* file, const int32_t* type, const int32_t* delim, const int32_t* case, const char* key);

/**
* Delete a record.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  rec TODO
**
* @par Note 
*      Record numbers after the deleted record will be reduced
*      by 1.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DeleteRecord_LTB(void* p_geo, const int32_t* ltb, const int32_t* rec);

/**
* Destroy
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_LTB(void* p_geo, const int32_t* ltb);

/**
* Populate a LST with LTB names from matching fields.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  fld TODO
* @param[in]  match TODO
* @param[in]  match_type TODO
* @param[in]  lst TODO
**
* @par Note 
*      The LST object will be in the order of the file.
*      The LST names will be the LTB key fields and the
*      LST values will be the LTB record numbers.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetConLST_LTB(void* p_geo, const int32_t* ltb, const int32_t* fld, const char* match, const int32_t* match_type, const int32_t* lst);

/**
* Populate an LST with LTB names
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  fld TODO
* @param[in]  lst TODO
**
* @par Note 
*      The LST object will be in the order of the file.
*      The LST names will be the LTB fields and the
*      LST values will be the LTB record numbers.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetLST_LTB(void* p_geo, const int32_t* ltb, const int32_t* fld, const int32_t* lst);

/**
* Populate an LST with LTB names and values
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  fld_n TODO
* @param[in]  fld_v TODO
* @param[in]  lst TODO
**
* @par Note 
*      The LST object will be in the order of the file.
*      The LST names will come from the LTB name field and the
*      LST values will come from value field specified.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetLST2_LTB(void* p_geo, const int32_t* ltb, const int32_t* fld_n, const int32_t* fld_v, const int32_t* lst);

/**
* Get number of fields.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @return Number of fields in the LTB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFields_LTB(void* p_geo, const int32_t* ltb);

/**
* Return the field number for the specified field.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  field TODO
* @return -1 if field does not exist.
* field number if field does exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFindField_LTB(void* p_geo, const int32_t* ltb, const char* field);

/**
* Return the key index of a record.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  key TODO
* @return -1 if key does not exist.
* record number if key does exist.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFindKey_LTB(void* p_geo, const int32_t* ltb, const char* key);

/**
* Get a field name by index.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  field_num TODO
* @param[out] field TODO
* @param[in]  length TODO
**
* @par Note 
*      If the record or field are out of range, an empty string is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetField_LTB(void* p_geo, const int32_t* ltb, const int32_t* field_num, char* field, const int32_t* length);

/**
* Get a int entry from the LTB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  record TODO
* @param[in]  field TODO
* @return If the record or field are out of range,
* an empty string or dummy value is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetInt_LTB(void* p_geo, const int32_t* ltb, const int32_t* record, const int32_t* field);

/**
* Get an entry from the LTB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  record TODO
* @param[in]  field TODO
* @param[out] token TODO
* @param[in]  length TODO
**
* @par Note 
*      If the record or field are out of range,
*      an empty string or dummy value is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetString_LTB(void* p_geo, const int32_t* ltb, const int32_t* record, const int32_t* field, char* token, const int32_t* length);

/**
* Get the English entry from the LTB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  record TODO
* @param[in]  field TODO
* @param[out] token TODO
* @param[in]  length TODO
**
* @par Note 
*      If the record or field are out of range,
*      an empty string or dummy value is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 8.2
*/
GX_EXPORT void IGetEnglishString_LTB(void* p_geo, const int32_t* ltb, const int32_t* record, const int32_t* field, char* token, const int32_t* length);

/**
* Get number of records in LTB.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @return Number of records in the LTB.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iRecords_LTB(void* p_geo, const int32_t* ltb);

/**
* Search for a record containing field value
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  rec TODO
* @param[in]  fld TODO
* @param[in]  field TODO
* @return -1 if search failed.
* record number if search succeeds
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iSearch_LTB(void* p_geo, const int32_t* ltb, const int32_t* rec, const int32_t* fld, const char* field);

/**
* Merge the contents of two same-key tables.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lt_bm TODO
* @param[in]  lt_bc TODO
* @return x    - Handle to LTB object
* NULL - Error of some kind
**
* @par Note 
*      Merging takes place as follows:
*      
*      1. The "Key" of the child must be the same as the "Key" of the Master.
*      2. The fields of the Master LTB are collected in-order.
*      3. Any new fields of the Child LTB are added to the end of the list.
*      4. A new LTB is created to contain the new field list (in-order).
*      5. The Child table contents are added to the New LTB.
*      6. The Master table contents are added/replace the New LTB.
*      7. The New LTB is returned.
*      
*      If the fields of the Master and Child are the same, steps 4, 5, 6 are
*      replaced by:
*      
*      4. The Master LTB is copied to the New LTB.
*      5. Any New records found in the child are added to the New LTB
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Merge_LTB(void* p_geo, const int32_t* lt_bm, const int32_t* lt_bc);

/**
* Get a real entry from the LTB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  record TODO
* @param[in]  field TODO
* @return If the record or field are out of range,
* an empty string or dummy value is returned.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetReal_LTB(void* p_geo, const int32_t* ltb, const int32_t* record, const int32_t* field);

/**
* Save LTB changes to existing or new file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  file TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Save_LTB(void* p_geo, const int32_t* ltb, const char* file);

/**
* Save LTB to a new file using encryption
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  file TODO
* @param[in]  crypt TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void SaveCrypt_LTB(void* p_geo, const int32_t* ltb, const char* file, const char* crypt);

/**
* Set a long entry
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  record TODO
* @param[in]  field TODO
* @param[in]  data TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInt_LTB(void* p_geo, const int32_t* ltb, const int32_t* record, const int32_t* field, const int32_t* data);

/**
* Set a double entry
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  record TODO
* @param[in]  field TODO
* @param[in]  data TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReal_LTB(void* p_geo, const int32_t* ltb, const int32_t* record, const int32_t* field, const double* data);

/**
* Set an entry
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @param[in]  record TODO
* @param[in]  field TODO
* @param[in]  token TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetString_LTB(void* p_geo, const int32_t* ltb, const int32_t* record, const int32_t* field, const char* token);

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
