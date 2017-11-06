//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file lst_gxlib.h
* @date 2017-11-06
* @brief File containing LST GX C API constant and function declarations
*/

/**
* @defgroup LST_Module LST
* The LST class is used to create and retrieve lists,
* and to perform specific actions on lists, including
* retrieving list items, sorting lists and adding or
* removing list items.
* @{
*/

#pragma once
#ifndef HLST_H_DEFINED
#define HLST_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name LST_ITEM Definitions
* 
* LST data access
*/
///@{
/** 
* LST_ITEM_NAME
* 
* Access the "Name" part of the LST item.
*/
#define LST_ITEM_NAME 0
/** 
* LST_ITEM_VALUE
* 
* Access the "Value" part of the LST item.
*/
#define LST_ITEM_VALUE 1
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* Adds an item to the end of the list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  name TODO
* @param[in]  val TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddItem_LST(void* p_geo, const int32_t* lst, const char* name, const char* val);

/**
* Adds a channel/line/blob name and symbol to a list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  name TODO
* @param[in]  symb TODO
**
* @par Note 
*      A number of DB functions return LSTs with the channel
*      or line name in the "Name" part of a LST, and the
*      handle (DB_SYMB) in the value part. This function lets
*      you quickly add a new item without the need of coverting
*      the handle into a string value.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void AddSymbItem_LST(void* p_geo, const int32_t* lst, const char* name, const int32_t* symb);

/**
* Adds a unique item to the end of the list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  name TODO
* @param[in]  val TODO
**
* @par Note 
*      Existing items that match the name are first removed.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void AddUniqueItem_LST(void* p_geo, const int32_t* lst, const char* name, const char* val);

/**
* Add the items in one list to another list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  lst2 TODO
**
* @par Note 
*      Item names and values are added using "AddUniqueItem_LST",
*      so that existing items with the same name are replaced, and if
*      items are duplicated in the appended LST, the last one will be
*      the one to remain after the process is complete.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void Append_LST(void* p_geo, const int32_t* lst, const int32_t* lst2);

/**
* Create a LST of assay channel mask strings from file.
*
* @param[in]  p_geo GX Context Pointer
* @return LST Object
**
* @par Note 
*      Searches the local directory, then user\etc, then \etc to see
*      if the file "assaylist.csv" exists.
*      The file contains strings of those channel names which are
*      to be interpreted as assay channels for geochemical processes.
*      Items can be on the same line, separated by commas, or on
*      separate lines (and combinations of both).
*      If this function is used in combination with the lFindItemMask_LST
*      function, then you can use mask-strings such as "*ppm"
*      The following is a sample file:
*      
*      *ppm, *(ppm), *PPM, *(PPM), FeCl, MnO2
*      "Fe %"
*      FeO
*      
*      If the file is not found, or if no items are parsed, the list
*      is returned with zero size.
*      
*      See the "assaylist.csv" file in the oasismontaj\etc directory
*      for more details.
*
* @par See also 
*      iFindItemMask_LST
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t AssayChannel_LST(void* p_geo);

/**
* Clear a list object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Clear_LST(void* p_geo, const int32_t* lst);

/**
* Load a LST with items from a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  buff TODO
**
* @par Note 
*      Items in the input buffer must be separated with
*      commas.
*      Both the Name and Value in the list are set to the
*      item.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void ConvertFromCSVString_LST(void* p_geo, const int32_t* lst, const char* buff);

/**
* Copy one LST object to another.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dest TODO
* @param[in]  source TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Copy_LST(void* p_geo, const int32_t* dest, const int32_t* source);

/**
* creates a user controllable list. The list
* is empty when created.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  width TODO
* @return Handle to the List Object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t Create_LST(void* p_geo, const int32_t* width);

/**
* Create LST from serialized source.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  bf TODO
* @return LST object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t CreateS_LST(void* p_geo, const int32_t* bf);

/**
* Removes an item from the list. All items below
* it are shifted up one.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  item TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void DelItem_LST(void* p_geo, const int32_t* lst, const int32_t* item);

/**
* Destroys a list object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Destroy_LST(void* p_geo, const int32_t* lst);

/**
* Searches a LST for items in a second LST, returns indices of those found.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @param[in]  lst2 TODO
* @param[in]  vv TODO
**
* @par Note 
*      This is a much more efficient way of determining if items in
*      one LST are found in a second, than by calling iFindItem_LST
*      repeatedly in a loop.
*      The returned INT VV contains the same number of items as
*      the "search items" LST, and contains -1 for items where the
*      value is not found, and the index of items that are found.
*      Comparisons are case-tolerant.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void FindItems_LST(void* p_geo, const int32_t* lst, const int32_t* type, const int32_t* lst2, const int32_t* vv);

/**
* This places the specified item into the buffer provided.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @param[in]  item TODO
* @param[out] buff TODO
* @param[in]  size TODO
**
* @par Note 
*      If item number is not in the list, the buffer will be "".
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void GtItem_LST(void* p_geo, const int32_t* lst, const int32_t* type, const int32_t* item, char* buff, const int32_t* size);

/**
* Returns a channel/line/blob name and symbol from a list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  item TODO
* @param[out] name TODO
* @param[in]  size TODO
* @param[out] symb TODO
**
* @par Note 
*      A number of DB functions return LSTs with the channel
*      or line name in the "Name" part of a LST, and the
*      handle (DB_SYMB) in the value part. This function lets
*      you quickly retrieve both the name and symbol handle
*      for a given item, which needing to convert between types.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void GtSymbItem_LST(void* p_geo, const int32_t* lst, const int32_t* item, char* name, const int32_t* size, int32_t* symb);

/**
* Load a string with names from a LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[out] buff TODO
* @param[in]  size TODO
**
* @par Note 
*      The list name values are put into a string,
*      items separated by commas.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void IConvertToCSVString_LST(void* p_geo, const int32_t* lst, char* buff, const int32_t* size);

/**
* Searches the list for a specified item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @param[in]  name TODO
* @return x  - Item Number
* -1 - Not Found
**
* @par Note 
*      Comparisons are case-tolerant.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iFindItem_LST(void* p_geo, const int32_t* lst, const int32_t* type, const char* name);

/**
* Searches the list for a specified item, list contains masks.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @param[in]  name TODO
* @return x  - Item Number
* -1 - Not Found
**
* @par Note 
*      Comparsions are case-intolerant (unlike iFindItem_LST).
*      This means items in the list such as "*(ppm)" will be
*      found if the input search string is "Ni (ppm)" or "Ni(ppm)",
*      but not if it is "Ni (PPM)", so you should include
*      both "*ppm*" and "*PPM*".
*      
*      It is NOT the input string that should be the mask, but
*      the LST items themselves
*      
*      This function was designed originally for geochemical
*      processes in order to identify if a given channel name
*      indicates that the channel should be given the "Assay" class.
*
* @par See also 
*      AssayChannel_LST
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t iFindItemMask_LST(void* p_geo, const int32_t* lst, const int32_t* type, const char* name);

/**
* Get an integer item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @param[in]  item TODO
* @return Integer, iDUMMY if conversion fails or string is empty.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT int32_t iGetInt_LST(void* p_geo, const int32_t* lst, const int32_t* type, const int32_t* item);

/**
* Adds an item at a given location in the list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  item TODO
* @param[in]  name TODO
* @param[in]  val TODO
**
* @par Note 
*      Index must be 0 >= index >= list size.
*      Items above the list index are shifted up one index value.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT void InsertItem_LST(void* p_geo, const int32_t* lst, const int32_t* item, const char* name, const char* val);

/**
* Get the number of items in the list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @return x - Number of items in the list.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iSize_LST(void* p_geo, const int32_t* lst);

/**
* Load a list with data from a CSV file
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  csv TODO
* @param[in]  name_field TODO
* @param[in]  value_field TODO
**
* @par Note 
*      Both the Item and Value fields must be specified.
*      The CSV file must be comma delimited, and have
*      a header line with the field names.
*      Leading and trailing spaces are removed in the names and values.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void LoadCSV_LST(void* p_geo, const int32_t* lst, const char* csv, const char* name_field, const char* value_field);

/**
* Set up a list from a list file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  file TODO
**
* @par Note 
*      A list file is an ASCII file that contains list entries.
*      Each line for the file contains a list item name and an
*      optional list item value.  The name and value must be
*      delimited by a space, tab or comma.
*      If the item name or value contains spaces, tabs or commas,
*      it must be contined in quotes.
*      blank lines and lines that begin with a '/' character are
*      ignored.
*      
*      The default extension is .lst.  If the file cannot
*      be found in the local directory, the GEOSOFT\etc directory
*      is searched.
*      If it cannot be found, the list will be
*      empty.  Not finding a file is not an error.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void LoadFile_LST(void* p_geo, const int32_t* lst, const char* file);

/**
* Load a GX List Resource into this list object.  The
* entries are placed at the end of the list and are not
* sorted.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  res TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Resource_LST(void* p_geo, const int32_t* lst, const char* res);

/**
* Get a real item.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @param[in]  item TODO
* @return Real, rDUMMY if conversion fails or string is empty.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.2
*/
GX_EXPORT double rGetReal_LST(void* p_geo, const int32_t* lst, const int32_t* type, const int32_t* item);

/**
* Save a list to a file.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  file TODO
**
* @par Note 
*      A list file is an ASCII file that contains list entries.
*      Each line for the file contains a list item name and an
*      optional list item value.  The name and value must be
*      delimited by a space, tab or comma.
*      If the item name or value contains spaces, tabs or commas,
*      it must be contined in quotes.
*      blank lines and lines that begin with a '/' character are
*      ignored.
*      
*      The default extension is .lst.  If the file has a full path
*      it will be created as specified.  Otherwise we look for the
*      file in the local then the GEOSOFT\etc directory.  If the file
*      does not exist it will be created in the GEOSOFT\etc directory.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void SaveFile_LST(void* p_geo, const int32_t* lst, const char* file);

/**
* Load a LST with items from a second LST found in a CSV string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ls_ti TODO
* @param[in]  buff TODO
* @param[in]  ls_to TODO
**
* @par Note 
*      Items in the input string must be separated with
*      commas. Parsing uses the sCommaTokens_GS function.
*      Both the name and value of the input LST items whose
*      name matches an item in the input string are
*      copied to the output LST.
*      Items are copied in the same order they appear in the
*      input string. Items in the string not found in the input LST
*      are ignored, and no error is registered.
*      Item matches are case-tolerant.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void SelectCSVStringItems_LST(void* p_geo, const int32_t* ls_ti, const char* buff, const int32_t* ls_to);

/**
* Serialize LST to a BF.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  bf TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Serial_LST(void* p_geo, const int32_t* lst, const int32_t* bf);

/**
* Place an item at a specified point in the LST.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @param[in]  item TODO
* @param[in]  buff TODO
**
* @par Note 
*      The existing item at the given index will be replaced.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void SetItem_LST(void* p_geo, const int32_t* lst, const int32_t* type, const int32_t* item, const char* buff);

/**
* Sorts a list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  lst TODO
* @param[in]  type TODO
* @param[in]  ord TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void Sort_LST(void* p_geo, const int32_t* lst, const int32_t* type, const int32_t* ord);

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
