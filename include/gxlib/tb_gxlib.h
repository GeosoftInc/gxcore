//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file tb_gxlib.h
* @date 2017-11-06
* @brief File containing TB GX C API constant and function declarations
*/

/**
* @defgroup TB_Module TB
* The TB class is a high-performance table class used to
* perform table-based processing, such as leveling data in
* an OASIS database. The LTB class is recommended for use
* with small tables produced from short lists such as the
* different geographic projections and their defining parameters.
* @{
*/

#pragma once
#ifndef HTB_H_DEFINED
#define HTB_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name TB_SEARCH Definitions
* 
* TB Searching mode
*/
///@{
/** 
* TB_SEARCH_BINARY
* 
* Random searches in a table.
*/
#define TB_SEARCH_BINARY 0
/** 
* TB_SEARCH_LINEAR
* 
* Linear searches up or down a table (Default).
*/
#define TB_SEARCH_LINEAR 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Set the search mode of a table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  mode TODO
**
* @par Note 
*      If performance is an issue, you may want to test which search
*      mode provides the best performance with typical data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void _SetSearchMode_TB(void* p_geo, const int32_t* tb, const int32_t* mode);

/**
* Loads a table into memory and return a table handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return TB Object
**
* @par Note 
*      If the table contains fewer data columns than are defined by the
*      the table header, the TB object will read in the table and dummy
*      the elements of the missing data columns.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_TB(void* p_geo, const char* name);

/**
* Create a table from a database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  db TODO
* @return TB Object
**
* @par Note 
*      The table will contain fields for all channels in
*      the database.
*      
*      The database is not loaded with data.  Use the LoadDB_TB
*      function to load data into the table.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateDB_TB(void* p_geo, const int32_t* db);

/**
* Create a table from an LTB database.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ltb TODO
* @return TB Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateLTB_TB(void* p_geo, const int32_t* ltb);

/**
* This method destroys a table resource.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_TB(void* p_geo, const int32_t* tb);

/**
* Get a field handle.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  name TODO
* @return The handle to the field (must be present)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Field_TB(void* p_geo, const int32_t* tb, const char* name);

/**
* Gets a string value from a table element.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[out] val TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GetString_TB(void* p_geo, const int32_t* tb, const int32_t* row, const int32_t* col, char* val, const int32_t* size);

/**
* Returns the data type for the specified column.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  col TODO
* @return DB_CATEGORY_CHAN
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.1
*/
GX_EXPORT int32_t iDataType_TB(void* p_geo, const int32_t* tb, const int32_t* col);

/**
* Finds a column's name by its index.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  idx TODO
* @param[out] name TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void IFindColByIndex_TB(void* p_geo, const int32_t* tb, const int32_t* idx, char* name, const int32_t* size);

/**
* Finds a column's index by its name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  name TODO
* @return Index of column.
* -1 if not found.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFindColByName_TB(void* p_geo, const int32_t* tb, const char* name);

/**
* Returns the channel format for the specified column.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  col TODO
* @return DB_CHAN_FORMAT
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.1
*/
GX_EXPORT int32_t iFormat_TB(void* p_geo, const int32_t* tb, const int32_t* col);

/**
* Gets an integer value from a table element.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @return Value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iGetInt_TB(void* p_geo, const int32_t* tb, const int32_t* row, const int32_t* col);

/**
* Gets the number of data fields (columns) in a table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @return Number of columns
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNumColumns_TB(void* p_geo, const int32_t* tb);

/**
* Gets the number of data rows in a table.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @return Number of rows
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iNumRows_TB(void* p_geo, const int32_t* tb);

/**
* Load a database into a TB
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  db TODO
* @param[in]  line TODO
**
* @par Note 
*      The line is appended to the data already in the table.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadDB_TB(void* p_geo, const int32_t* tb, const int32_t* db, const int32_t* line);

/**
* Gets an real value from a table element.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @return Value
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT double rGetReal_TB(void* p_geo, const int32_t* tb, const int32_t* row, const int32_t* col);

/**
* Saves the data in a table to a file. The table header will be
* in ASCII and the data will be in BINARY format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Save_TB(void* p_geo, const int32_t* tb, const char* name);

/**
* Save a TB in a database line
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  db TODO
* @param[in]  line TODO
**
* @par Note 
*      Missing channels are created.
*      Data in existing channels on the line will be replaced.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SaveDB_TB(void* p_geo, const int32_t* tb, const int32_t* db, const int32_t* line);

/**
* Saves the data in a table to a file. The table header will be
* in ASCII and the data will be in ASCII format.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  name TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SaveToAscii_TB(void* p_geo, const int32_t* tb, const char* name);

/**
* Sets an integer value into a table element.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[in]  val TODO
**
* @par Note 
*      The table field containing the element to be set MUST be
*      of type GS_BYTE, GS_USHORT, GS_SHORT, or GS_LONG.
*      If the field is GS_BYTE, GS_USHORT, or GS_LONG, the new data
*      value will cause an overflow if the value is out of range of
*      the data type. The new element value will then be invalid.
*      
*      If the row of the new element exceeds the number of rows in
*      the table, then the table will AUTOMATICALLY be EXPANDED to
*      exactly as many rows needed to hold the new element. The new
*      element is placed in the proper field of the last row, and
*      all other field elements have invalid data. All fields of
*      the new rows up to the new element's row will also contain
*      invalid data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetInt_TB(void* p_geo, const int32_t* tb, const int32_t* row, const int32_t* col, const int32_t* val);

/**
* Sets an real value into a table element.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[in]  val TODO
**
* @par Note 
*      The table field containing the element to be set MUST be
*      of type GS_FLOAT or GS_DOUBLE.
*      If the field is GS_FLOAT the new data value will cause an
*      overflow if the value is out of range of the data type.
*      The new element value will then be invalid.
*      
*      If the row of the new element exceeds the number of rows in
*      the table, then the table will AUTOMATICALLY be EXPANDED to
*      exactly as many rows needed to hold the new element. The new
*      element is placed in the proper field of the last row, and
*      all other field elements have invalid data. All fields of
*      the new rows up to the new element's row will also contain
*      invalid data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetReal_TB(void* p_geo, const int32_t* tb, const int32_t* row, const int32_t* col, const double* val);

/**
* Sets a string value into a table element.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  row TODO
* @param[in]  col TODO
* @param[in]  val TODO
**
* @par Note 
*      The table field containing the element to be set MUST be
*      of 'string'.
*      
*      If the row of the new element exceeds the number of rows in
*      the table, then the table will AUTOMATICALLY be EXPANDED to
*      exactly as many rows needed to hold the new element. The new
*      element is placed in the proper field of the last row, and
*      all other field elements have invalid data. All fields of
*      the new rows up to the new element's row will also contain
*      invalid data.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SetString_TB(void* p_geo, const int32_t* tb, const int32_t* row, const int32_t* col, const char* val);

/**
* Sorts a table by a specified column.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  tb TODO
* @param[in]  col TODO
**
* @par Note 
*      If the column to sort by contains duplicated values, the
*      sorted table is NOT guaranteed to retain the ordering of
*      the duplicated values/
*      E.g. Given 2 rows of values:   xx   yy   1
*      bb   aa   1
*      If the table is sorted on column 3, the second row
*      may or may not come after the first row in the sorted
*      table.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Sort_TB(void* p_geo, const int32_t* tb, const int32_t* col);

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
