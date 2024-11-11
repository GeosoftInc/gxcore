// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
// geogdbview.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"  // main symbols


// CgeogdbviewApp:
// See geogdbview.cpp for the implementation of this class
//

class CgeogdbviewApp : public CWinApp
{
public:
   CgeogdbviewApp();

   // Overrides
public:
   virtual BOOL InitInstance();

   // Implementation

   DECLARE_MESSAGE_MAP()
};

extern CgeogdbviewApp theApp;
