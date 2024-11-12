// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
// GeoXTool.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "mygeoxtool.h"

extern "C" {
#undef DB_NULL
#include "geoxtool.h"
#include <gx_extern.h>
#include <gx_define.h>
#include <gx_lib.h>
}

#include "mycontrol.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGeoXToolApp

BEGIN_MESSAGE_MAP(CGeoXToolApp, CWinApp)
END_MESSAGE_MAP()


// CGeoXToolApp construction

CGeoXToolApp::CGeoXToolApp()
{
   // TODO: add construction code here,
   // Place all significant initialization in InitInstance
}


// The one and only CGeoXToolApp object

CGeoXToolApp theApp;


// CGeoXToolApp initialization

BOOL CGeoXToolApp::InitInstance()
{
   CWinApp::InitInstance();

   return TRUE;
}


// -------------------------------------------------------------

static void _cdecl Destr_GEOXTOOL(void* pO)
{
   // --- Get Control Pointer ---

   CMyControl* pControl;
   pControl = (CMyControl*)pO;


   // --- Destroy the Window ---

   pControl->DestroyWindow();


   // --- Delete Control ---

   delete pControl;
}


// -------------------------------------------------------------

static void _cdecl Flush_GEOXTOOL(void* pO)
{
}


// -------------------------------------------------------------

static void _cdecl ShowHelp_GEOXTOOL(void* pO)
{
}


// -------------------------------------------------------------------

extern "C" __declspec(dllexport) void* _cdecl hCreate_GEOXTOOL(void* hGEO,                  // Geosoft Handle
                                                               HWND hParent,                // Parent Window
                                                               long lMETA,                  // META object to get info from
                                                               HWND* phWND,                 // Filled with new HWND of your tool
                                                               const GEOXTOOL_API* pAPI,    // API Functions
                                                               GEOXTOOL_INTERFACE* pFuncs,  // Filled with function pointers
                                                               wchar_t* wcToolName,         // Buffer for the name of the tool
                                                               long lToolNameSize)          // Size in characters of Tool Name Buffer
{
   CMyControl* pControl = NULL;
   CWnd* pParent;
   RECT Rect;

   // --- Set the ToolName ---

   wcscpy_s(wcToolName, lToolNameSize, L"GeoXTool");


   // --- Create my own CWnd objects ---

   pParent = CWnd::FromHandle(hParent);


   // --- Register My Control ---

   if (CMyControl::bHasBeenRegistered == FALSE) return (NULL);


   // --- Set the Size ---

   Rect.left = 0;
   Rect.right = 200;
   Rect.top = 0;
   Rect.bottom = 200;


   // --- Create Control ---

   pControl = new CMyControl();
   pControl->CreateMyControl(hGEO, lMETA, Rect, pAPI, pFuncs, pParent);


   // --- Save hWND Pointer ---

   *phWND = pControl->m_hWnd;


   // --- Setup the Pointers ---

   pFuncs->Destr_GEOXTOOL = Destr_GEOXTOOL;
   pFuncs->Flush_GEOXTOOL = Flush_GEOXTOOL;
   pFuncs->ShowHelp_GEOXTOOL = ShowHelp_GEOXTOOL;


   // --- Done ---

   return (pControl);
}
