//---------------------------------------------------------------------------------
//
// GeoExtern module:  This module is used by 3rd party developers wishing to build
//                    applications that access geosoft functions. This module holds
//                    the functions needed to start a geosoft session.
//
//---------------------------------------------------------------------------------

#ifndef GX_EXTERN_H
#define GX_EXTERN_H


#ifdef __cplusplus
extern "C" {
#endif


//************************************************************
//Virtual Memory
//
//When creating the montaj library it may be necessary to limit the amount of memory montaj uses.
//
//---------------------------------------------------------------------
//No limit
//---------------------------------------------------------------------
#define GEO_MEM_NOLIMIT   0
		
#define CREATE_GEO_FLAG_NEWPROGRESS   1 // Use New Progress Bar (obsolete)

//************************************************************
//Geosoft Directory Support
//
//In a 3rd party application, it is important to identify where the program files
// are located. The Geosoft library can be setup to in two ways:
//
//      Montaj
//
//         Find all files in the standard installed Oasis Montaj version if it is
//         present. This allows a 3rd party app to call any functions licensed to
//         the user.
//
//      OwnDir
//
//         All files are found based on the location of the EXE.
//
//              Program Files\My App\bin\myapp.exe
//                                  \user\etc\...
//                                  \user\lic\...
//                                  \temp\...
//
//         or if the EXE is not in a directory called "bin":
//
//              Program Files\My App\myapp.exe
//                                  \user\etc\...
//                                  \user\lic\...
//                                  \temp\...
//
//---------------------------------------------------------------------
//Use our own directories instead of Oasis Montaj's
//---------------------------------------------------------------------
#define CREATE_GEO_FLAG_OWNDIR   2
//************************************************************

//************************************************************
//Geosoft Document as Controls Support
//
// These flags enable using Geosoft documents as windowed controls. If the flags are set
// the EMAP, EMAPTEMPLATE and EDB functions below can be used to load Geosoft Maps, Map Templates GDBs 
// into existing windows. This is done through a process called subclassing. Although any
// child window can be used the best type of window to use for this kind of subclassing 
// is a button because it already routes most of the keyboard and mouse messages properly. 
// 
// Here are two examples of how to obtain apropriate HWND handles for use in the functions:
//
// 1. Pure Windows API
//
//    hWnd = CreateWindow("BUTTON", "", WS_CHILD | WS_VISIBLE, x, y, nWidth, nHeight, hParentWnd, NULL, NULL, NULL); 
//
// 2. MFC (e.g. inside OnInitDialog)
//
//    GetDlgItem(IDC_BUTTON1, &hWnd);
//
// 
// Note that calls to the regular non-control EMAP, EMAPTEMPLATE and EDB loading counterparts will fail 
// if any of these flags are set. If a flag for a particular type is not set some functions 
// including the non-control loading counterparts will work by loading the documents invisibly 
// in the background.
//
// It is possible to activate certain modes (like zooming, panning etc.) by using the App_DoCommand_SYS 
// function. Consult the GX developer documentation and inspect the Oasis montaj omn, smn and 
// geobar files to see what is available.
//

#define CREATE_GEO_GDB_CONTROLS				4		// Load GDBs as controls
#define CREATE_GEO_MAP_CONTROLS				8		// Load Maps as controls
#define CREATE_GEO_MAPTEMPLATE_CONTROLS   16		// Load Map Templates as controls
#define CREATE_GEO_PERSIST_SETTINGS			32		// Persist INI settings in the geosoft.ini file in the user\ini directory
#define CREATE_GEO_FLAG_SUPRESS_PROGRESS  64		// Suppress progress bar messages
#define CREATE_GEO_FLAG_SUPRESS_GUIPROG   128	// Suppress GUI progress bar but maintain console updates

#define _GEO_DEPRECATE_TEXT(_Text) __declspec(deprecated(_Text))
#define _GEO_INSECURE_DEPRECATE(_Replacement) _GEO_DEPRECATE_TEXT("This function is deprecated. Consider using " #_Replacement " instead. See online help for details.")
/*---------------- pCreate_GEO[_public] ----------------*/

#if defined(_UNICODE) && !defined(GEO_UTF8)
	__declspec(dllexport) void* _cdecl
		pCreate_GEOW(const wchar_t*,
		const wchar_t*,
		long,
		void*,
		long,
		wchar_t*,
		long);
#define pCreate_GEO pCreate_GEOW
#else
	__declspec(dllexport) void* _cdecl
		pCreate_GEO(const char*,
		const char*,
		long,
		void*,
		long,
		char*,
		long);
#endif



#if defined(_UNICODE) && !defined(GEO_UTF8)
	void* _stdcall
		Std_pCreate_GEOW(const wchar_t*,
		const wchar_t*,
		long,
		void*,
		long,
		wchar_t*,
		long);
#define Std_pCreate_GEO Std_pCreate_GEOW
#else
	void* _stdcall
		Std_pCreate_GEO(const char*,
		const char*,
		long,
		void*,
		long,
		char*,
		long);
#endif

/*---------------- Create_GEO[_public] ----------------*/

#if defined(_UNICODE) && !defined(GEO_UTF8)
_GEO_INSECURE_DEPRECATE(pCreate_GEOW) __declspec(dllexport) void* _cdecl
Create_GEOW(const wchar_t*,
           const wchar_t*,
           long,
           void*,
           long);
#define Create_GEO Create_GEOW
#else
_GEO_INSECURE_DEPRECATE(pCreate_GEO) __declspec(dllexport) void* _cdecl
Create_GEO(const char*,
           const char*,
           long,
           void*,
           long);
#endif



#if defined(_UNICODE) && !defined(GEO_UTF8)
_GEO_INSECURE_DEPRECATE(Std_pCreate_GEOW) void* _stdcall
Std_Create_GEOW(const wchar_t*,
           const wchar_t*,
           long,
           void*,
           long);
#define Std_Create_GEO Std_Create_GEOW
#else
_GEO_INSECURE_DEPRECATE(Std_pCreate_GEO) void* _stdcall
Std_Create_GEO(const char*,
           const char*,
           long,
           void*,
           long);
#endif


/*---------------- Destroy_GEO[_public] ----------------*/

__declspec(dllexport) void _cdecl
Destroy_GEO(void*);



void _stdcall
Std_Destroy_GEO(void*);



//----------------------------------------------------------------------------
// Access to window handles. 
// hGetMainWnd_GEO returns main window handle (or NULL)
// hGetActiveMainWnd_GEO Returns currently active window (main window, floating document or other popup)
// EnableApplicationWindows_GEO can be used by external applications to prevent user interaction while showing modal windows
// with APIs where it might be hard to use proper Windows parenting (e.g. in Python with PyQt, tkinter, wxPython etc.).

#ifdef __cplusplus
__declspec(dllexport) HWND _cdecl hGetMainWnd_GEO();
__declspec(dllexport) HWND _cdecl hGetActiveMainWnd_GEO();
__declspec(dllexport) void _cdecl EnableApplicationWindows_GEO(bool bEnable);

HWND _stdcall Std_hGetMainWnd_GEO();
HWND _stdcall Std_hGetActiveMainWnd_GEO();
void _stdcall Std_EnableApplicationWindows_GEO(bool bEnable);
#endif

#ifdef __cplusplus
}
#endif

//----------------------------------------------------------------------------
//                         Standard Macros/Functions
//----------------------------------------------------------------------------

#define GEO_ERROR      if (iCheckError_SYS(pGeo)) { sGeoError = 1;  goto GEO_EXIT; } else NULL
#define GEO_STD_ERROR  if (Std_iCheckError_SYS(pGeo)) { sGeoError = 1;  goto GEO_EXIT; } else NULL
#define GEO_MAX_PARMS 64

static long   __lParms[GEO_MAX_PARMS];
static double __dParms[GEO_MAX_PARMS];

static long   __lCurParm = 0;
static long   __dCurParm = 0;

//----------------------------------------------------------------------------
// _l   This function returns a pointer to the long contant passed in. This is
//      usefull because in C you cannot pass a pointer to a constant
//      directly. 
//      
//      This should not be used in a recursive function call or in a call
//      that takes more than GEO_MAX_PARMS paramters.
//

static long   * _l(long   a) 
{ 
   if (__lCurParm >= GEO_MAX_PARMS) __lCurParm = 0;
   __lParms[__lCurParm] = a; 
   return(__lParms+__lCurParm++); 
}


//----------------------------------------------------------------------------
// _d   This function returns a pointer to the double contant passed.
//      see _l.

static double * _d(double a) 
{ 
   if (__dCurParm >= GEO_MAX_PARMS) __dCurParm = 0;
    __dParms[__dCurParm] = a; 
    return(__dParms+__dCurParm++); 
}

#ifndef _n

// These functions are for Geosoft internal use and are not supported for 3rd parties at this stage.

#define _n(STRING)  (STRING)
#define _nL(STRING)  (L ## STRING)

__declspec(dllexport) const char* _cdecl CTranslateString(const char* domain, const char* msg_ctxt_id, const char* inStr);
__declspec(dllexport) const wchar_t* _cdecl CTranslateStringW(const char* domain, const char* msg_ctxt_id, const wchar_t* inStr);

#define _(text)	CTranslateString(LANGUAGE_DOMAIN, MESSAGE_CONTEXT, text)
#define _L(text)	CTranslateStringW(LANGUAGE_DOMAIN, MESSAGE_CONTEXT, L ## text)

#endif

#endif
