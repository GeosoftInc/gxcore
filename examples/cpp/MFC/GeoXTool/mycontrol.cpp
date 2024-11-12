// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
#include "stdafx.h"

extern "C" {
#undef DB_NULL
#include "geoxtool.h"
#include <gx_extern.h>
#include <gx_define.h>
#include <gx_lib.h>
}

#include "mycontrol.h"

//===========================================================================
// MyControl Implementation
//===========================================================================


//===========================================================================
//                           CREATION/DESTRUCTION
//===========================================================================

//---------------------------------------------------------------------------

CMyControl::CMyControl()
{
   bLocationSet = FALSE;
   bAreaSet = FALSE;
}


//---------------------------------------------------------------------------

CMyControl::~CMyControl()
{
}


//===========================================================================
//                           MESSAGE MAP
//===========================================================================

BEGIN_MESSAGE_MAP(CMyControl, CWnd)
//{{AFX_MSG_MAP(CMyControl)
ON_WM_CREATE()
ON_WM_SIZE()
ON_BN_CLICKED(MYCONTROL_GX, OnGX)
ON_BN_CLICKED(MYCONTROL_JUMP, OnJump)
ON_BN_CLICKED(MYCONTROL_SHRINK, OnShrink)
//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// -------------------------------------------------------------

static void _cdecl HandleChangeProjection_GEOXTOOL(void* pO, long lIPJ)
{
   TCHAR szProj[256];
   TCHAR szDatum[256];
   TCHAR szMethod[256];
   TCHAR szUnit[256];
   TCHAR szLocal[256];

   // --- Get our Object ---

   CMyControl* pControl;
   pControl = (CMyControl*)pO;


   // --- Turn Projection into a string ---

   IGetGXF_IPJ(pControl->m_hGEO, &lIPJ, szProj, szDatum, szMethod, szUnit, szLocal, _l(sizeof(szProj)));


   // --- Update Window ---

   pControl->View_Projection.SetWindowText(szProj);
}


// -------------------------------------------------------------

static void _cdecl HandleChangeLocation_GEOXTOOL(void* pO, double dX, double dY, double dZ)
{
   CMyControl* pControl;
   pControl = (CMyControl*)pO;

   // --- Generate String ---

   CString str;
   if (dZ != rDUMMY)
      str.Format(_T("%.2f,%.2f,%.2f"), dX, dY, dZ);
   else
      str.Format(_T("%.2f,%.2f"), dX, dY);


   // --- Save Values ---

   pControl->m_dX = dX;
   pControl->m_dY = dY;
   pControl->m_dZ = dZ;
   pControl->bLocationSet = TRUE;


   // --- Update Text ---

   pControl->View_Location.SetWindowText(str);
}


// -------------------------------------------------------------

static void _cdecl HandleChangeArea_GEOXTOOL(void* pO, double dMinX, double dMinY, double dMaxX, double dMaxY)
{
   CMyControl* pControl;
   pControl = (CMyControl*)pO;

   // --- Generate String ---

   CString str;
   str.Format(_T("[%.2f,%.2f] to [%.2f,%.2f]"), dMinX, dMinY, dMaxX, dMaxY);

   // --- Save Values ---

   pControl->m_dMinX = dMinX;
   pControl->m_dMinY = dMinY;
   pControl->m_dMaxX = dMaxX;
   pControl->m_dMaxY = dMaxY;
   pControl->bAreaSet = TRUE;


   // --- Update Text ---

   pControl->View_Area.SetWindowText(str);
}


// -------------------------------------------------------------

static void _cdecl HandleGeneralInfo_GEOXTOOL(void* pO, const wchar_t* pcClass, const wchar_t* pcInfo)
{
   CMyControl* pControl;
   pControl = (CMyControl*)pO;

   // --- Generate String ---

   CString str;
   str.Format(_T("[%s][%s]"), pcClass, pcInfo);

   // --- Update Text ---

   pControl->View_Area.SetWindowText(str);
}


//===========================================================================
//                        Message Handlers
//===========================================================================

//---------------------------------------------------------------------------

BOOL CMyControl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   RECT Rect;


   // --- Get initial size from structure ---

   Rect.left = 0;
   Rect.top = 0;
   Rect.right = lpCreateStruct->cx;
   Rect.bottom = lpCreateStruct->cy;


   // ---- Create child controls ---

   Rect.right = 100;
   Rect.bottom = Rect.top + 15;
   Static_Projection.Create(_T("Projection"), WS_CHILD | WS_VISIBLE, Rect, this, 1001);

   Rect.top = Rect.bottom + 2;
   Rect.bottom = Rect.top + 15;
   View_Projection.Create(_T(""), WS_CHILD | WS_VISIBLE, Rect, this, 1002);

   Rect.top = Rect.bottom + 2;
   Rect.bottom = Rect.top + 15;
   Static_Location.Create(_T("Location"), WS_CHILD | WS_VISIBLE, Rect, this, 1003);

   Rect.top = Rect.bottom + 2;
   Rect.bottom = Rect.top + 15;
   View_Location.Create(_T(""), WS_CHILD | WS_VISIBLE, Rect, this, 1004);

   Rect.top = Rect.bottom + 2;
   Rect.bottom = Rect.top + 15;
   Static_Area.Create(_T("Area"), WS_CHILD | WS_VISIBLE, Rect, this, 1005);

   Rect.top = Rect.bottom + 2;
   Rect.bottom = Rect.top + 15;
   View_Area.Create(_T(""), WS_CHILD | WS_VISIBLE, Rect, this, 1006);

   Rect.right = 50;
   Rect.top = Rect.bottom + 2;
   Rect.bottom = Rect.top + 15;
   Button_GX.Create(_T("GX"), WS_CHILD | WS_VISIBLE, Rect, this, MYCONTROL_GX);

   Rect.top = Rect.bottom + 2;
   Rect.bottom = Rect.top + 15;
   Button_Jump.Create(_T("Jump"), WS_CHILD | WS_VISIBLE, Rect, this, MYCONTROL_JUMP);

   Rect.top = Rect.bottom + 2;
   Rect.bottom = Rect.top + 15;
   Button_Shrink.Create(_T("Shrink"), WS_CHILD | WS_VISIBLE, Rect, this, MYCONTROL_SHRINK);


   // --- Message Handlers ---

   m_pFuncs->HandleChangeProjection_GEOXTOOL = HandleChangeProjection_GEOXTOOL;
   m_pFuncs->HandleChangeLocation_GEOXTOOL = HandleChangeLocation_GEOXTOOL;
   m_pFuncs->HandleChangeArea_GEOXTOOL = HandleChangeArea_GEOXTOOL;
   m_pFuncs->HandleGeneralInfo_GEOXTOOL = HandleGeneralInfo_GEOXTOOL;


   // --- Set Functions ---

   return (TRUE);
}


//---------------------------------------------------------------------------

void CMyControl::OnSize(UINT nType, int cx, int cy)
{
   if (cx > 0 && cy > 0)
   {
      RECT Rect;

      Static_Projection.GetWindowRect(&Rect);
      ScreenToClient(&Rect);
      Rect.right = cx;
      Static_Projection.MoveWindow(&Rect, TRUE);

      View_Projection.GetWindowRect(&Rect);
      ScreenToClient(&Rect);
      Rect.right = cx;
      View_Projection.MoveWindow(&Rect, TRUE);

      Static_Location.GetWindowRect(&Rect);
      ScreenToClient(&Rect);
      Rect.right = cx;
      Static_Location.MoveWindow(&Rect, TRUE);

      View_Location.GetWindowRect(&Rect);
      ScreenToClient(&Rect);
      Rect.right = cx;
      View_Location.MoveWindow(&Rect, TRUE);

      Static_Area.GetWindowRect(&Rect);
      ScreenToClient(&Rect);
      Rect.right = cx;
      Static_Area.MoveWindow(&Rect, TRUE);

      View_Area.GetWindowRect(&Rect);
      ScreenToClient(&Rect);
      Rect.right = cx;
      View_Area.MoveWindow(&Rect, TRUE);
   }
}

//===========================================================================
//                          Button Handlers
//===========================================================================

//---------------------------------------------------------------------------

void CMyControl::OnGX()
{
   // --- Run a GX ---

   iRunGX_SYS(m_hGEO, _T("copy.gx"));
}

//---------------------------------------------------------------------------

void CMyControl::OnJump()
{
   if (bLocationSet)
   {
      double dX, dY;

      // --- Compute Random Jump ---

      dX = (double)(rand() % 200) - 100.0;
      dY = (double)(rand() % 200) - 100.0;


      // --- Update Location ---

      m_dX += dX;
      m_dY += dY;


      // --- Force the Jump ---

      m_API.ChangeLocation_GEOXTOOLAPI(m_API.pHandle, m_dX, m_dY, m_dZ);
   }
}


//---------------------------------------------------------------------------

void CMyControl::OnShrink()
{
   if (bAreaSet)
   {
      double dX, dY;

      // --- Compute 25% increase ---

      dX = (m_dMaxX - m_dMinX) / 4.0;
      dY = (m_dMaxY - m_dMinY) / 4.0;


      // --- Update Area ---

      m_dMinX -= dX;
      m_dMinY -= dY;
      m_dMaxX += dX;
      m_dMaxX += dY;


      // --- Change the Area ---

      m_API.ChangeArea_GEOXTOOLAPI(m_API.pHandle, m_dMinX, m_dMinY, m_dMaxX, m_dMaxY);
   }
}


//===========================================================================
//                      CUSTOM WINDOW REGISTRATION
//===========================================================================

//---------------------------------------------------------------------------

BOOL CMyControl::bHasBeenRegistered = CMyControl::bRegisterMyControl();


//---------------------------------------------------------------------------

BOOL CMyControl::bRegisterMyControl()
{
   // --- Setup WNDCLASS structure ---

   WNDCLASS wc;
   wc.style = CS_GLOBALCLASS | CS_VREDRAW | CS_HREDRAW | CS_DBLCLKS;
   wc.lpfnWndProc = ::DefWindowProc;
   wc.cbClsExtra = 0;
   wc.cbWndExtra = 0;
   wc.hInstance = NULL;
   wc.hIcon = NULL;
   wc.hCursor = NULL;
   wc.hbrBackground = NULL;
   wc.lpszMenuName = NULL;
   wc.lpszClassName = MYCONTROL_CLASS_NAME;
   if (!::RegisterClass(&wc))
   {
      ASSERT(0);
      return FALSE;
   }

   // --- Window has been registered ---

   return TRUE;
}


//===========================================================================
//                            CREATE FUNCTION
//===========================================================================


//---------------------------------------------------------------------------

BOOL CMyControl::CreateMyControl(void* hGEO,
                                 long lMETA,
                                 RECT Rect,
                                 const GEOXTOOL_API* pAPI,
                                 GEOXTOOL_INTERFACE* pFuncs,
                                 CWnd* pParent)
{
   // --- Store Values ---

   m_hGEO = hGEO;
   m_lMETA = lMETA;
   m_API = *pAPI;
   m_pFuncs = pFuncs;


   // --- Create the window - base class handles return ---

   return (CWnd::Create(MYCONTROL_CLASS_NAME, NULL, WS_VISIBLE | WS_CHILD, Rect, pParent, 1000));
}
