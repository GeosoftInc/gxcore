// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
// OMScript.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"  // main symbols


// COMScriptApp:
// See OMScript.cpp for the implementation of this class
//

class COMScriptApp : public CWinApp
{
public:
   COMScriptApp();

   // Overrides
public:
   virtual BOOL InitInstance();

   // Implementation

   DECLARE_MESSAGE_MAP()
};

extern COMScriptApp theApp;
