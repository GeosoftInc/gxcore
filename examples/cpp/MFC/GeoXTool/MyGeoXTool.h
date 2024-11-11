// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
// GeoXTool.h : main header file for the GeoXTool DLL
//

#pragma once

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"  // main symbols


// CGeoXToolApp
// See GeoXTool.cpp for the implementation of this class
//

class CGeoXToolApp : public CWinApp
{
public:
   CGeoXToolApp();

   // Overrides
public:
   virtual BOOL InitInstance();

   DECLARE_MESSAGE_MAP()
};
