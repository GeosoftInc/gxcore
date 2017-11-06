//*** extends 'gxlib_empty.h'


//*** block Header
//** NOTICE: Do not edit anything here, it is generated code

/**
* @file dgw_gxlib.h
* @date 2017-11-06
* @brief File containing DGW GX C API constant and function declarations
*/

/**
* @defgroup DGW_Module DGW
* Provides access to dialog boxes for user I/O. You can
* use this class to store to, or retrieve information from
* the current workspace parameter block via dialog boxes
*
* Notes:
*
* Setting Fonts in GX dialogs.
* 
* By default, "new look" GX dialogs uses the "Tahoma" font. This font can be
* overridden by updating the application settings. This can be done programmatically
* using the GlobalSet_SYS function using the following parameters:
* 
* MONTAJ.GX_FONT="Font_name"
* 
* This sets the default font to "Font_name". It applies to text in all
* components of the dialog.
* 
* Additional customization of individual components can be accomplished
* using the following parameters:
* 
* MONTAJ.GX_CAPTION_FONT="Caption_Font": Font for the field captions (labels)
* MONTAJ.GX_BUTTON_FONT="Button_Font"  : Font for buttons, including the "Browse" button
* MONTAJ.GX_TITLE_FONT="Title_Font"    : Font for special titles (see SetTitle_DGW).
* 
* The font used for the text in edit windows remains the default, or the
* value specified using MONTAJ.GX_FONT.
* 
* Note that the "OK" button, and the Title, use "Bold" versions of the
* specified font. If the bolded version does not exist as a normal font,
* then the operating system may provide its own alternative which may not
* appear the same as you expect.
* 
* Before version 6.2. there used to be a parameter, MONTAJ.GX_CHARSET, that
* affected characters above ASCII 127. 6.2. introduced Unicode in the core
* montaj engine that eliminated the need for such a setting. All strings
* on the GX API level are encoded in UTF8 during runtime which makes it possible
* to represent all possible characters without using character sets.
*
* @{
*/

#pragma once
#ifndef HDGW_H_DEFINED
#define HDGW_H_DEFINED

#ifdef __cplusplus
extern "C" {
#endif
//*** endblock Header


//*** block Generated
//** NOTICE: Do not edit anything here, it is generated code


/**
* @name DGW_OBJECT Definitions
* 
* Dialog object defines
* INFO TYPE   EDIT   FEDIT  LEDIT  CEDIT  EBUT
* =========   =====  =====  =====  =====  =====
* LABEL       RW     RW     RW     RW     RW          R - can use GetInfo_DGW
* TEXT        RW     RW     RW     RW     .           W - can use SetInfo_DGW
* PATH        .      RW     .      .      .
* FILEPATH    .      RW     .      .      .
* LISTVAL     .      .      R      .      .
* LISTALIAS   .      .      RW     .      .
*/
///@{
/** 
* DGW_LABEL
* 
* The text label tied to each Dialog component.
*/
#define DGW_LABEL 0
/** 
* DGW_TEXT
* 
* The edit field text.
*/
#define DGW_TEXT 1
/** 
* DGW_PATH
* 
* The file edit path.
*/
#define DGW_PATH 2
/** 
* DGW_FILEPATH
* 
* The complete file name, path included.
*/
#define DGW_FILEPATH 3
/** 
* DGW_LISTVAL
* 
* The alias value associated with the list entry.
*/
#define DGW_LISTVAL 4
/** 
* DGW_LISTALIAS
* 
* The text value associated with the list entry.
*/
#define DGW_LISTALIAS 5
/** 
* DGW_EXT
* 
* The extension associated with a filename entry.
*/
#define DGW_EXT 7
/** 
* DGW_HIDE
* 
* Hide the button or entry and its label, if string is not "0"
*/
#define DGW_HIDE 8
///@}


/**
* @name Miscellaneous Functions 
*/
///@{

/**
* This method creates a Dialog window from a specified
* resource. The Resource is loaded into memory but not displayed.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  name TODO
* @return Handle to the DGW object.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_Create_DGW(void* p_geo, const char* name);

/**
* Destroys a Dialog Window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_Destroy_DGW(void* p_geo, const int32_t* dlg);

/**
* Copies the Dialog information to a META attribute.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @param[in]  obj TODO
* @param[in]  dlg_obj_type TODO
* @param[in]  meta TODO
* @param[in]  meta_obj TODO
* @param[in]  meta_attrib TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetInfoMETA_DGW(void* p_geo, const int32_t* dlg, const int32_t* obj, const int32_t* dlg_obj_type, const int32_t* meta, const int32_t* meta_obj, const int32_t* meta_attrib);

/**
* This method uses the information in a Dialog box to
* set a SYS variable.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @param[in]  id TODO
* @param[in]  info TODO
* @param[in]  group TODO
* @param[in]  field TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GetInfoSYS_DGW(void* p_geo, const int32_t* dlg, const int32_t* id, const int32_t* info, const char* group, const char* field);

/**
* This method retrieves the list (LST) object associated
* with a Dialog object.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @param[in]  id TODO
* @return The List Object
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_GetList_DGW(void* p_geo, const int32_t* dlg, const int32_t* id);

/**
* This method fills the specified string with the text from
* the text object specified.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @param[in]  id TODO
* @param[in]  info TODO
* @param[out] buff TODO
* @param[in]  size TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_GtInfo_DGW(void* p_geo, const int32_t* dlg, const int32_t* id, const int32_t* info, char* buff, const int32_t* size);

/**
* This method runs the Dialog window.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @return The Exit Code of the Dialog window.
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT int32_t App_iRunDialogue_DGW(void* p_geo, const int32_t* dlg);

/**
* This method sets the string of a text object. If the string
* is too long it will be truncated.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @param[in]  id TODO
* @param[in]  info TODO
* @param[in]  buff TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetInfo_DGW(void* p_geo, const int32_t* dlg, const int32_t* id, const int32_t* info, const char* buff);

/**
* This sets a text object to the text found in a META attribute.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @param[in]  obj TODO
* @param[in]  dlg_obj_type TODO
* @param[in]  meta TODO
* @param[in]  meta_obj TODO
* @param[in]  meta_attrib TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetInfoMETA_DGW(void* p_geo, const int32_t* dlg, const int32_t* obj, const int32_t* dlg_obj_type, const int32_t* meta, const int32_t* meta_obj, const int32_t* meta_attrib);

/**
* This sets a text object to the text found in a system
* parameter variable. If the variable has not been set,
* the text is not set.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @param[in]  id TODO
* @param[in]  info TODO
* @param[in]  group TODO
* @param[in]  field TODO
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetInfoSYS_DGW(void* p_geo, const int32_t* dlg, const int32_t* id, const int32_t* info, const char* group, const char* field);

/**
* Changes the title of the dialog.
*
* @param[in]  p_geo GX Context Pointer
* @param[in]  dlg TODO
* @param[in]  title TODO
**
* @par Note 
*      A "Special", additional title can be added to a dialog by passing a title
*      to SetTitle_DGW with the following syntax:
*      
*      "Window Title\nAdditional Title"
*      
*      In the title argument, a line break character '\n' is used to
*      separate the parts.
*      
*      The window title free_appears as the title in the upper bar of the dialog.
*      The additional title free_appears below this, in the main body of the
*      dialog, and is separated from the rest of the fields by a horizontal
*      line. It is printed in the bold version of the default font (or of the
*      special font specified using the MONTAJ.GX_TITLE_FONT parameter noted
*      above in "Setting Fonts in GX dialogs."
*
* @par License 
*      <a href="https://geosoftgxdev.atlassian.net/wiki/spaces/GD/pages/2359406/License#License-GeosoftOpenLicense">Geosoft Open License</a>
* @par Limitations 
*      May not be available while executing a command line program.

* @version 5.0
*/
GX_EXPORT void App_SetTitle_DGW(void* p_geo, const int32_t* dlg, const char* title);

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
