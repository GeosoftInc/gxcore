//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file str_gxlib.h
* @date 2017-11-06
* @brief File containing STR GX C API constant and function declarations
*/

/**
* @defgroup STR_Module STR
* This library is not a class. Use the STR library functions
* to work with and manipulate string variables. Since the
* GX Programming Language does not provide string literal
* tokens, you must use these functions for any string operations
* you want to perform.
* @{
*/

#pragma once
#ifndef HSTR_H_DEFINED
#define HSTR_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name FILE_EXT Definitions
* 
* Extension option
*/
///@{
/** 
* FILE_EXT_ADD_IF_NONE
* 
* Will add the extension only if no extension is present.
*/
#define FILE_EXT_ADD_IF_NONE 0
/** 
* FILE_EXT_FORCE
* 
* Will cause a renaming of the file extension to the new extension.
*/
#define FILE_EXT_FORCE 1
///@}

/**
* @name STR_CASE Definitions
* 
* Case sensitivity
*/
///@{
/** 
* STR_CASE_TOLERANT
*/
#define STR_CASE_TOLERANT 0
/** 
* STR_CASE_SENSITIVE
*/
#define STR_CASE_SENSITIVE 1
///@}

/**
* @name STR_ESCAPE Definitions
* 
* How to handle escape
*/
///@{
/** 
* ESCAPE_CONVERT
* 
* Converts non-standard characters in a string to escape sequences.
*/
#define ESCAPE_CONVERT 0
/** 
* ESCAPE_REPLACE
* 
* Replaces escape sequences with original characters.
*/
#define ESCAPE_REPLACE 1
///@}

/**
* @name STR_FILE_PART Definitions
* 
* Parts of a path string
*/
///@{
/** 
* STR_FILE_PART_NAME
* 
* File Name
*/
#define STR_FILE_PART_NAME 0
/** 
* STR_FILE_PART_EXTENSION
* 
* Extension
*/
#define STR_FILE_PART_EXTENSION 1
/** 
* STR_FILE_PART_DIRECTORY
* 
* Directory
*/
#define STR_FILE_PART_DIRECTORY 2
/** 
* STR_FILE_PART_VOLUME
* 
* Drive
*/
#define STR_FILE_PART_VOLUME 3
/** 
* STR_FILE_PART_QUALIFIERS
* 
* Qualifiers
*/
#define STR_FILE_PART_QUALIFIERS 4
/** 
* STR_FILE_PART_NAME_EXTENSION
* 
* Name and the Extension together
*/
#define STR_FILE_PART_NAME_EXTENSION 5
/** 
* STR_FILE_PART_FULLPATH_NO_QUALIFIERS
* 
* Full name of file with no qualifiers
*/
#define STR_FILE_PART_FULLPATH_NO_QUALIFIERS 6
///@}

/**
* @name STR_JUSTIFY Definitions
* 
* String justification style
*/
///@{
/** 
* STR_JUSTIFY_LEFT
*/
#define STR_JUSTIFY_LEFT 0
/** 
* STR_JUSTIFY_CENTER
*/
#define STR_JUSTIFY_CENTER 1
/** 
* STR_JUSTIFY_RIGHT
*/
#define STR_JUSTIFY_RIGHT 2
///@}

/**
* @name STR_TRIM Definitions
* 
* What to trim
*/
///@{
/** 
* STR_TRIMRIGHT
*/
#define STR_TRIMRIGHT 1
/** 
* STR_TRIMLEFT
*/
#define STR_TRIMLEFT 2
/** 
* STR_TRIMBOTH
*/
#define STR_TRIMBOTH 3
///@}


/**
* @name Data Input Functions 
*/
///@{

/**
* Convert a string to a GX int.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @return Resulting Integer, iDUMMY is bad integer
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT int32_t iScanI_STR(void* p_geo, const char* str_val);

/**
* Convert a date string to a GX real.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @param[in]  type TODO
* @return Resulting Real, rDUMMY if conversion fails.
**
* @par Note 
*      OLD usage, use ScanForm_STR instead.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rScanDate_STR(void* p_geo, const char* str_val, const int32_t* type);

/**
* Convert a formated string to a real.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @param[in]  type TODO
* @return Resulting Real, rDUMMY if conversion fails.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rScanForm_STR(void* p_geo, const char* str_val, const int32_t* type);

/**
* Convert a string to a GX real.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @return Resulting Real, rDUMMY if bad string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rScanR_STR(void* p_geo, const char* str_val);

/**
* Convert a time string to a GX real.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @param[in]  type TODO
* @return Resulting Real, rDUMMY if conversion fails.
**
* @par Note 
*      OLD usage, use ScanForm_STR instead.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0.1
*/
GX_EXPORT double rScanTime_STR(void* p_geo, const char* str_val, const int32_t* type);

///@}

/**
* @name File Name Functions 
*/
///@{

/**
* Combine file parts to build a file name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  drive TODO
* @param[in]  dir TODO
* @param[in]  file TODO
* @param[in]  ext TODO
* @param[in]  qual TODO
* @param[out] file_name TODO
* @param[in]  length TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFileCombineParts_STR(void* p_geo, const char* drive, const char* dir, const char* file, const char* ext, const char* qual, char* file_name, const int32_t* length);

/**
* Add a file extension onto a file name string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ifile TODO
* @param[in]  ext TODO
* @param[out] ofile TODO
* @param[in]  opt TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFileExt_STR(void* p_geo, const char* ifile, const char* ext, char* ofile, const int32_t* opt, const int32_t* size);

/**
* Get part of a file name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  file TODO
* @param[out] file_part TODO
* @param[in]  length TODO
* @param[in]  part TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFileNamePart_STR(void* p_geo, const char* file, char* file_part, const int32_t* length, const int32_t* part);

/**
* Get the indexed filepath from a multiple filepath string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  in_str TODO
* @param[out] out_str TODO
* @param[in]  size TODO
* @param[in]  index TODO
**
* @par Note 
*      The multifile string must use '|' as a delimiter.
*      Do not pass a string after calling iTokenize_STR.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetMFile_STR(void* p_geo, const char* in_str, char* out_str, const int32_t* size, const int32_t* index);

/**
* Remove file qualifiers from a file name
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  ifile TODO
* @param[out] ofile TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0.1
*/
GX_EXPORT void IRemoveQualifiers_STR(void* p_geo, const char* ifile, char* ofile, const int32_t* size);

///@}

/**
* @name Formating Functions 
*/
///@{

/**
* Convert a GX CRC value to a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  pul_crc TODO
* @param[out] buff TODO
* @param[in]  size TODO
* @param[in]  width TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFormatCRC_STR(void* p_geo, const int32_t* pul_crc, char* buff, const int32_t* size, const int32_t* width);

/**
* Convert a GX real to a date string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  real TODO
* @param[out] buff TODO
* @param[in]  size TODO
* @param[in]  width TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFormatDate_STR(void* p_geo, const double* real, char* buff, const int32_t* size, const int32_t* width, const int32_t* type);

/**
* Convert a GX int to a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  int TODO
* @param[out] buff TODO
* @param[in]  size TODO
* @param[in]  width TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFormatI_STR(void* p_geo, const int32_t* int, char* buff, const int32_t* size, const int32_t* width);

/**
* Convert a GX real to a string with significant digits.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  real TODO
* @param[out] buff TODO
* @param[in]  size TODO
* @param[in]  width TODO
* @param[in]  sig TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFormatR_STR(void* p_geo, const double* real, char* buff, const int32_t* size, const int32_t* width, const int32_t* sig);

/**
* Convert a GX real to a string with given decimals.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  real TODO
* @param[out] buff TODO
* @param[in]  size TODO
* @param[in]  width TODO
* @param[in]  sig TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFormatR2_STR(void* p_geo, const double* real, char* buff, const int32_t* size, const int32_t* width, const int32_t* sig);

/**
* Convert a GX real to a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  real TODO
* @param[out] buff TODO
* @param[in]  size TODO
* @param[in]  type TODO
* @param[in]  width TODO
* @param[in]  dec TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFormatReal_STR(void* p_geo, const double* real, char* buff, const int32_t* size, const int32_t* type, const int32_t* width, const int32_t* dec);

/**
* Convert a GX real to a time string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  real TODO
* @param[out] buff TODO
* @param[in]  size TODO
* @param[in]  width TODO
* @param[in]  deci TODO
* @param[in]  type TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IFormatTime_STR(void* p_geo, const double* real, char* buff, const int32_t* size, const int32_t* width, const int32_t* deci, const int32_t* type);

///@}

/**
* @name General Functions 
*/
///@{

/**
* Convert/replace escape sequences in strings.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  length TODO
* @param[in]  opt TODO
**
* @par Note 
*      Escape characters:
*      
*      \a      bell
*      \b      backspace
*      \f      formfeed
*      \n      new line
*      \r      carriage return
*      \t      tab
*      \v      vertical tab
*      \"      quote character
*      \x      take 'x' literally
*      \      backslash
*      \ooo    octal up to 3 characters
*      \xhh    hex up to 2 characters
*      
*      A common use of this function is to convert double-quote characters in
*      a user unput string to \" so the string can be placed in a tokenized
*      string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.6
*/
GX_EXPORT void _Escape_STR(void* p_geo, char* str_val, const int32_t* length, const int32_t* opt);

/**
* Returns the ASCII value of a character.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @return ASCII value of first character in string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iChar_STR(void* p_geo, const char* str_val);

/**
* Returns the ASCII value of the n'th character.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @param[in]  c TODO
* @param[in]  max TODO
* @return ASCII value of n'th character in string.
* The first character is 0.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t IiCharN_STR(void* p_geo, const char* str_val, const int32_t* c, const int32_t* max);

/**
* Justify a string
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  in_str TODO
* @param[out] out_str TODO
* @param[in]  width TODO
* @param[in]  just TODO
* @param[in]  length TODO
**
* @par Note 
*      If the string is too big to fit in the number of display characters,
*      the output string will be "**" justified as specified.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IJustify_STR(void* p_geo, const char* in_str, char* out_str, const int32_t* width, const int32_t* just, const int32_t* length);

/**
* Replaces all occurances of match string by replacement string with case insensitive.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] istr TODO
* @param[in]  old TODO
* @param[in]  new TODO
* @param[in]  size TODO
**
* @par Note 
*      If the replacement string is "" (NULL character)
*      then the string to replace is removed from the
*      input string, and the string is shortened.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0.1
*/
GX_EXPORT void IReplaceiMatchString_STR(void* p_geo, char* istr, const char* old, const char* new, const int32_t* size);

/**
* Replaces all occurances of match string by replacement string with case sensitive.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] istr TODO
* @param[in]  old TODO
* @param[in]  new TODO
* @param[in]  size TODO
**
* @par Note 
*      If the replacement string is "" (NULL character)
*      then the string to replace is removed from the
*      input string, and the string is shortened.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.0.1
*/
GX_EXPORT void IReplaceMatchString_STR(void* p_geo, char* istr, const char* old, const char* new, const int32_t* size);

/**
* Set the n'th character of a string using an ASCII value
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  c TODO
* @param[in]  size TODO
* @param[in]  ascii TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.4
*/
GX_EXPORT void ISetCharN_STR(void* p_geo, char* str_val, const int32_t* c, const int32_t* size, const int32_t* ascii);

/**
* Splits a string in two on a character.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] origstr TODO
* @param[in]  ch TODO
* @param[out] split TODO
* @param[in]  length TODO
**
* @par Note 
*      The original string is modified by terminating it
*      at the character split.
*      
*      The part of the string past the character split is
*      copied to the split string.
*      
*      Split characters in quoted strings are ignored.
*      
*      This function is mainly intended to separate comments
*      from control file strings.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ISplitString_STR(void* p_geo, char* origstr, const char* ch, char* split, const int32_t* length);

/**
* This method contatinates a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] dest TODO
* @param[in]  orig TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IStrcat_STR(void* p_geo, char* dest, const char* orig, const int32_t* size);

/**
* This method compares two strings and returns these values
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  first TODO
* @param[in]  second TODO
* @param[in]  mode TODO
* @return A  <  B           -1
* A ==  B            0
* A  >  B            1
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iStrcmp_STR(void* p_geo, const char* first, const char* second, const int32_t* mode);

/**
* This method copies a string into another string.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] dest TODO
* @param[in]  orig TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IStrcpy_STR(void* p_geo, char* dest, const char* orig, const int32_t* size);

/**
* Case insensitive comparison of two strings.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mask TODO
* @param[in]  test TODO
* @return 0 if string does not match mask.
* 1 if string matches mask.
**
* @par Note 
*      Mask characters '*' - matches any one or more up to
*      next character
*      '?' - matches one character
*      
*      Test is case insensitive
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iStriMask_STR(void* p_geo, const char* mask, const char* test);

/**
* This method inserts a string at a specified position.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] dest TODO
* @param[in]  ins TODO
* @param[in]  orig TODO
* @param[in]  size TODO
**
* @par Note 
*      If the specified position does not fall within the current string
*      the source string will simply be Concatenated.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void IStrins_STR(void* p_geo, char* dest, const int32_t* ins, const char* orig, const int32_t* size);

/**
* Returns the length of a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @return String length.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iStrlen_STR(void* p_geo, const char* str_val);

/**
* Case sensitive comparison of two strings.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  mask TODO
* @param[in]  test TODO
* @return 0 if string does not match mask.
* 1 if string matches mask.
**
* @par Note 
*      Mask characters '*' - matches any one or more up to
*      next character
*      '?' - matches one character
*      
*      Test is case sensitive
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iStrMask_STR(void* p_geo, const char* mask, const char* test);

/**
* Remove spaces and tabs and return length
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @return String length.
**
* @par Note 
*      String may be modified. This function should not be
*      used to determine if a file name string is defined, because
*      a valid file name can contain spaces, and once "tested" the
*      name will be altered. Instead, use iStrMin2_STR, or use
*      iFileExist_SYS to see if the file actually exists.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iStrMin_STR(void* p_geo, char* str_val);

/**
* Length less spaces and tabs, string unchanged.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @return String length.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iStrMin2_STR(void* p_geo, const char* str_val);

/**
* Compares two strings to a given number of characters.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  first TODO
* @param[in]  second TODO
* @param[in]  n_char TODO
* @param[in]  mode TODO
* @return A  <  B           -1
* A ==  B            0
* A  >  B            1
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.5
*/
GX_EXPORT int32_t iStrncmp_STR(void* p_geo, const char* first, const char* second, const int32_t* n_char, const int32_t* mode);

/**
* Scan a string for the occurrence of a given substring.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @param[in]  sub TODO
* @param[in]  mode TODO
* @return -1 if the substring does not occur in the string
* Index of first matching location if found
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.6
*/
GX_EXPORT int32_t iStrStr_STR(void* p_geo, const char* str_val, const char* sub, const int32_t* mode);

/**
* Extract part of a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] dest TODO
* @param[in]  size TODO
* @param[in]  orig TODO
* @param[in]  start TODO
* @param[in]  length TODO
**
* @par Note 
*      The destination string length will be less than the
*      requested length if the substring is not fully enclosed
*      in the origin string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.2
*/
GX_EXPORT void ISubstr_STR(void* p_geo, char* dest, const int32_t* size, const char* orig, const int32_t* start, const int32_t* length);

/**
* Convert a string to lower case.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IToLower_STR(void* p_geo, char* str_val, const int32_t* size);

/**
* Convert a string to upper case.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IToUpper_STR(void* p_geo, char* str_val, const int32_t* size);

/**
* Make a valid XYZ line name from a valid DB line name.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  line TODO
* @param[out] xyz TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IXYZLine_STR(void* p_geo, const char* line, char* xyz, const int32_t* size);

/**
* Turns all non alpha-numeric characters into an _.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
**
* @par Note 
*      THE STRING IS MODIFIED.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.8
*/
GX_EXPORT void MakeAlpha_STR(void* p_geo, char* str_val);

/**
* Variable Argument PrintF function
*
* @param[in]  p_geo GX Context Pointer
* @param[out] dest TODO
* @param[in]  size TODO
* @param[in]  mask TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 7.3
*/
GX_EXPORT void Printf_STR(void* p_geo, char* dest, const int32_t* size, const char* mask);

/**
* Replaces characters in a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] istr TODO
* @param[in]  old TODO
* @param[in]  new TODO
**
* @par Note 
*      If the input replacement character is "", then the
*      string will be truncated at the first character to replace.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void ReplaceChar_STR(void* p_geo, char* istr, const char* old, const char* new);

/**
* Replaces characters in a string, supports simple removal.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] istr TODO
* @param[in]  old TODO
* @param[in]  new TODO
**
* @par Note 
*      If the replacement character is "" (NULL character)
*      then the character to replace is removed from the
*      input string, and the string is shortened.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.3
*/
GX_EXPORT void ReplaceChar2_STR(void* p_geo, char* istr, const char* old, const char* new);

/**
* Replaces multiple characters in a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] istr TODO
* @param[in]  old TODO
* @param[in]  new TODO
**
* @par Note 
*      The number of characters to replace must equal
*      the number of replacement characters.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.5
*/
GX_EXPORT void ReplaceMultiChar_STR(void* p_geo, char* istr, const char* old, const char* new);

/**
* Replace non-ASCII characters in a string.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  rpl TODO
**
* @par Note 
*      All characthers > 127 will be replaced by the first character
*      of the replacement string.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 6.0
*/
GX_EXPORT void ReplaceNonASCII_STR(void* p_geo, char* str_val, const char* rpl);

/**
* Set a string's first character using an ASCII value of a character.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  ascii TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.4
*/
GX_EXPORT void SetChar_STR(void* p_geo, char* str_val, const int32_t* ascii);

/**
* Remove double quotes.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
**
* @par Note 
*      THE STRING IS MODIFIED.
*      This method goes through the string and removes all spaces in a
*      string except those enclosed in quotes. It then removes
*      any quotes. It is usfull for trimming unwanted spaces from
*      an input string but allows the user to use quotes as well.
*      If a quote follows a backslash, the quote is retained and
*      the backslash is deleted. These quotes are NOT treated as
*      delimiters.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void TrimQuotes_STR(void* p_geo, char* str_val);

/**
* Remove leading and/or trailing whitespace.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  trim TODO
**
* @par Note 
*      THE STRING IS MODIFIED.
*      Whitespace characters are defined as space, tab, carriage return,
*      new line, vertical tab or formfeed (0x09 to 0x0D, 0x20)
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void TrimSpace_STR(void* p_geo, char* str_val, const int32_t* trim);

/**
* Remove double quotes from string
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
**
* @par Note 
*      THE STRING IS MODIFIED.
*      The pointers will be advanced past a first character
*      quote and a last character quote will be set to .\0'.
*      Both first and last characters must be quotes for the
*      triming to take place.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void UnQuote_STR(void* p_geo, char* str_val);

///@}

/**
* @name Misc Functions 
*/
///@{

/**
* Generate a group name string
* from type string, database and channel(optional) strings..
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  istr1 TODO
* @param[in]  istr2 TODO
* @param[in]  istr3 TODO
* @param[out] ostr TODO
* @param[in]  size TODO
**
* @par Note 
*      The output group name string is formed in the way of typestr_dbstr_chstr.
*      If the database/channel strings is too long to fit the output string
*      (max total length of 1040, including the NULL ending), then
*      the typestr will always be kept the full length to be the first part,
*      while the dbstr and/or chstr will be shortened to be the
*      second and/or third part of the output string.
*
* @par See also 
*      GenNewGroupName_MVIEW
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.1.4
*/
GX_EXPORT void IGenGroupName_STR(void* p_geo, const char* istr1, const char* istr2, const char* istr3, char* ostr, const int32_t* size);

///@}

/**
* @name Tokenizing Functions 
*/
///@{

/**
* Counts number of tokens.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @param[in]  delims TODO
* @return Number of tokens in the string.
**
* @par Note 
*      Delimiters are "soft" in that one or more delimiters
*      is considered a single delimiter, and preceding and
*      trailing delimiters are ignored.
*      
*      DO NOT use this function except in GXC code. The corresponding
*      IGetToken_STR function will not operate correctly in GX.Net code.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iCountTokens_STR(void* p_geo, const char* str_val, const char* delims);

/**
* Get a token from a tokenized string.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] dest TODO
* @param[in]  size TODO
* @param[in]  orig TODO
* @param[in]  tok TODO
**
* @par Note 
*      Call iTokens_STR  to prepare the tokenized
*      string.
*      You MUST NOT get tokens beyond number of tokens returned
*      by iTokens_STR or iTokens2_STR.
*      The first token has index 0.
*      
*      DO NOT use this function except in GXC code.
*      IGetToken_STR function will not operate correctly in GX.Net code.
*
* @par See also 
*      iTokens_STR, GetToken_STR
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT void IGetToken_STR(void* p_geo, char* dest, const int32_t* size, const char* orig, const int32_t* tok);

/**
* Tokenize a string based on any characters.
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  soft TODO
* @param[in]  hard TODO
* @param[in]  esc TODO
* @param[in]  quote TODO
* @return Number of tokens
**
* @par Note 
*      This uses a finite state machine to tokenize on these
*      rules:
*      
*      1. Any one character following an escape delimiter is
*      treated as a normal character.
*      
*      2. Any characters inside a quote string are treated as
*      normal characters.
*      
*      3. Any number of Soft delimiters in sequence without a
*      hard delimiter are treated as one hard delimited.
*      
*      4. Any number of soft delimiters can preceed or follow
*      a hard delimiter and are ignored.
*      
*      
*      EXAMPLE
*      
*      Soft = [ ]   Hard = [,]   Escape = [\]    Quote = ["]
*      
*      [this is a , , the "test," of   ,  \,\" my delimite  fi,]
*      
*      Results in:
*      
*      [this] [is] [a] [] [the] ["test,"] [of] [\,\"] [my] [delimite] [fi] []
*      
*      
*      NOT use this function except in GXC code. The corresponding
*      etToken_STR function will not operate correctly in GX.Net code.
*
* @par See also 
*      GetToken_STR
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iTokenize_STR(void* p_geo, char* str_val, const char* soft, const char* hard, const char* esc, const char* quote);

/**
* Tokenize a string
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  delims TODO
* @return Number of tokens, maximum is 2048
**
* @par Note 
*      Delimiters in the string are reduced to a single NULL.
*      Delimiters withing double quoted strings are ignored.
*      Use GetToken_STR to extract tokens.
*      
*      DO NOT use this function except in GXC code. The corresponding
*      IGetToken_STR function will not operate correctly in GX.Net code.
*
* @par See also 
*      iTokens2_STR, GetToken_STR
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iTokens_STR(void* p_geo, char* str_val, const char* delims);

/**
* General tokenize a string
*
* @param[in]  p_geo GX Context Pointer
* @param[out] str_val TODO
* @param[in]  soft TODO
* @param[in]  hard TODO
* @param[in]  esc TODO
* @param[in]  quote TODO
* @return Number of Tokens
**
* @par Note 
*      This function is for old GX compatibility only.
*      See iTokenize_STR.
*      
*      DO NOT use this function except in GXC code. The corresponding
*      IGetToken_STR function will not operate correctly in GX.Net code.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0
*/
GX_EXPORT int32_t iTokens2_STR(void* p_geo, char* str_val, const char* soft, const char* hard, const char* esc, const char* quote);

/**
* Parse a tokenized list to get a selection list.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  str_val TODO
* @param[in]  gvv TODO
**
* @par Note 
*      Given a list such as "1,3,4,6-9,12", it fills the
*      input buffer with 1 if the number is selected,
*      0 if not. The items are delimited with spaces
*      or commas, and ranges are acceptable, either using
*      a "-" or ":", e.g.  3-6 and 3:6 both mean 3,4,5, and 6.
*      Only values from 0 to one less than the buffer length
*      are used.  Out-of-range values are ignored.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @version 5.0.1
*/
GX_EXPORT void ParseList_STR(void* p_geo, const char* str_val, const int32_t* gvv);

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
