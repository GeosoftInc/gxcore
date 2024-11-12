// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
// geomapxprtDlg.cpp : implementation file
//

#include "stdafx.h"
#include "geomapxprt.h"

#define C_MICROSOFT
extern "C" {
#undef DB_NULL
#include <gx_lib.h>
#include <gx_define.h>
#include <gx_extern.h>
}

#include "geomapxprtDlg.h"
#include ".\geomapxprtdlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
   CAboutDlg();

   // Dialog Data
   enum { IDD = IDD_ABOUTBOX };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);  // DDX/DDV support

   // Implementation
protected:
   DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg()
   : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// CCustomGripper resizing gripper
CCustomGripper::CCustomGripper(){};

CCustomGripper::~CCustomGripper(){};

BEGIN_MESSAGE_MAP(CCustomGripper, CScrollBar)
ON_WM_NCHITTEST()
END_MESSAGE_MAP()

LRESULT CCustomGripper::OnNcHitTest(CPoint point)
{
   LRESULT ht = CScrollBar::OnNcHitTest(point);
   if (ht == HTCLIENT)
   {
      ht = HTBOTTOMRIGHT;
   }
   return ht;
}


// CgeomapxprtDlg dialog


CgeomapxprtDlg::CgeomapxprtDlg(CWnd* pParent /*=NULL*/)
   : CDialog(CgeomapxprtDlg::IDD, pParent)
{
   m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
   m_pGEO = NULL;
   m_lEMAP = 0;
   m_bInit = FALSE;
}

CgeomapxprtDlg::~CgeomapxprtDlg()
{
   if (m_pGEO) Destroy_GEO(m_pGEO);
}
void CgeomapxprtDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CgeomapxprtDlg, CDialog)
ON_WM_SYSCOMMAND()
ON_WM_PAINT()
ON_WM_ERASEBKGND()
ON_WM_SIZE()
ON_WM_CREATE()
ON_WM_QUERYDRAGICON()
ON_WM_DESTROY()
ON_BN_CLICKED(IDC_SHAD, OnBnClickedShad)
ON_BN_CLICKED(IDC_ZOOM, OnBnClickedZoom)
ON_BN_CLICKED(IDC_FULL, OnBnClickedFull)
ON_BN_CLICKED(IDC_EXPORT, OnBnClickedExport)
ON_BN_CLICKED(IDC_REFRESH, OnBnClickedRefresh)
ON_BN_CLICKED(IDC_NORMAL, OnBnClickedNormal)
ON_BN_CLICKED(IDC_BROWSE, OnBnClickedBrowse)
ON_BN_CLICKED(IDC_AOI, OnBnClickedAoi)
END_MESSAGE_MAP()


// CgeomapxprtDlg message handlers

#define App_iFileOpen_GUI(A, B, C, D, E) App_IiGenFileForm_GUI(A, B, _l(0), C, D, E, _l(sizeof(E)), _l(FILE_FORM_OPEN), _l(FALSE))


BOOL CgeomapxprtDlg::OnInitDialog()
{
   short sGeoError = 0;
   char szFile[MAX_PATH];
   long lRet = 0;

   CDialog::OnInitDialog();

   // Add "About..." menu item to system menu.

   // IDM_ABOUTBOX must be in the system command range.
   ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
   ASSERT(IDM_ABOUTBOX < 0xF000);

   CMenu* pSysMenu = GetSystemMenu(FALSE);
   if (pSysMenu != NULL)
   {
      CString strAboutMenu;
      strAboutMenu.LoadString(IDS_ABOUTBOX);
      if (!strAboutMenu.IsEmpty())
      {
         pSysMenu->AppendMenu(MF_SEPARATOR);
         pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
      }
   }

   // Set the icon for this dialog.  The framework does this automatically
   //  when the application's main window is not a dialog
   SetIcon(m_hIcon, TRUE);   // Set big icon
   SetIcon(m_hIcon, FALSE);  // Set small icon

   // Create a resize gripper
   CRect initRect;
   GetClientRect(initRect);
   initRect.left = initRect.right - GetSystemMetrics(SM_CXHSCROLL);
   initRect.top = initRect.bottom - GetSystemMetrics(SM_CYVSCROLL);

   m_SizeGrip.Create(WS_CHILD | SBS_SIZEBOX | SBS_SIZEBOXBOTTOMRIGHTALIGN | SBS_SIZEGRIP | WS_VISIBLE, initRect, this, AFX_IDW_SIZE_BOX);

   lRet = App_iFileOpen_GUI(m_pGEO, "Choose Geosoft Map to manipulate...", _l(FILE_FILTER_MAP), "", szFile);
   CHECK_GEO_ERROR;
   if (lRet == 0)
   {
      m_lEMAP = App_LoadControl_EMAP(m_pGEO, szFile, GetDlgItem(IDC_MAP)->m_hWnd);
      CHECK_GEO_ERROR;
   }
   else
      EndDialog(IDCANCEL);

   RepositionControls();
   m_bInit = TRUE;

GEO_EXIT:

   if (sGeoError)
   {
      ShowError_GEO(m_pGEO);
      EndDialog(IDABORT);
   }
   return TRUE;  // return TRUE  unless you set the focus to a control
}

void CgeomapxprtDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
   if ((nID & 0xFFF0) == IDM_ABOUTBOX)
   {
      CAboutDlg dlgAbout;
      dlgAbout.DoModal();
   }
   else
   {
      CDialog::OnSysCommand(nID, lParam);
   }
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CgeomapxprtDlg::OnPaint()
{
   if (IsIconic())
   {
      CPaintDC dc(this);  // device context for painting

      SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

      // Center icon in client rectangle
      int cxIcon = GetSystemMetrics(SM_CXICON);
      int cyIcon = GetSystemMetrics(SM_CYICON);
      CRect rect;
      GetClientRect(&rect);
      int x = (rect.Width() - cxIcon + 1) / 2;
      int y = (rect.Height() - cyIcon + 1) / 2;

      // Draw the icon
      dc.DrawIcon(x, y, m_hIcon);
   }
   else
   {
      CDialog::OnPaint();
   }
}
BOOL CgeomapxprtDlg::OnEraseBkgnd(CDC* pDC)
{
   CRect rc;
   CRgn clientRgn;
   CRgn childRgn;
   CRgn updateRgn;
   CBrush* pBrush = CBrush::FromHandle(GetSysColorBrush(COLOR_3DFACE));

   //  This code reduces flicker by not painting where the child map document would be
   GetClientRect(&rc);
   clientRgn.CreateRectRgnIndirect(&rc);
   GetDlgItem(IDC_MAP)->GetWindowRect(&rc);
   ScreenToClient(&rc);
   childRgn.CreateRectRgnIndirect(&rc);

   updateRgn.CreateRectRgn(0, 0, 1, 1);
   updateRgn.CombineRgn(&clientRgn, &childRgn, RGN_DIFF);

   pDC->FillRgn(&updateRgn, pBrush);

   return TRUE;
}

void CgeomapxprtDlg::RepositionControls()
{
   CRect rc;
   GetClientRect(rc);

   m_SizeGrip.MoveWindow(rc.right - GetSystemMetrics(SM_CXHSCROLL),
                         rc.bottom - GetSystemMetrics(SM_CYVSCROLL),
                         GetSystemMetrics(SM_CXHSCROLL), GetSystemMetrics(SM_CXVSCROLL),
                         TRUE);
   GetDlgItem(IDC_SHAD)->MoveWindow(5, rc.bottom - 30, 55, 25, TRUE);
   GetDlgItem(IDC_ZOOM)->MoveWindow(65, rc.bottom - 30, 55, 25, TRUE);
   GetDlgItem(IDC_FULL)->MoveWindow(125, rc.bottom - 30, 55, 25, TRUE);
   GetDlgItem(IDC_REFRESH)->MoveWindow(185, rc.bottom - 30, 55, 25, TRUE);

   GetDlgItem(IDC_NORMAL)->MoveWindow(260, rc.bottom - 30, 55, 25, TRUE);
   GetDlgItem(IDC_BROWSE)->MoveWindow(320, rc.bottom - 30, 55, 25, TRUE);
   GetDlgItem(IDC_AOI)->MoveWindow(380, rc.bottom - 30, 55, 25, TRUE);

   GetDlgItem(IDC_EXPORT)->MoveWindow(455, rc.bottom - 30, 55, 25, TRUE);
   GetDlgItem(IDOK)->MoveWindow(515, rc.bottom - 30, 55, 25, TRUE);
   GetDlgItem(IDC_MAP)->MoveWindow(5, 5, rc.right - 10, rc.bottom - 40, TRUE);
}

void CgeomapxprtDlg::OnSize(UINT nType, int cx, int cy)
{
   CDialog::OnSize(nType, cx, cy);
   if (m_bInit && nType != SIZE_MINIMIZED && cx > 0 && cy > 0)
   {
      RepositionControls();
   }
}

int CgeomapxprtDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CDialog::OnCreate(lpCreateStruct) == 0)
   {
      char szError[2048];
      m_pGEO = pCreate_GEO("GeoMapXPRT", "1.0", 0, this->m_hWnd, CREATE_GEO_FLAG_NEWPROGRESS | CREATE_GEO_MAP_CONTROLS, szError, _countof(szError));
      if (m_pGEO != NULL)
         return 0;
      else
      {
         MessageBox(szError, "Unable to start Geosoft Session", MB_ICONERROR | MB_OK);
         return -1;
      }
   }
   else
      return (-1);
}

void CgeomapxprtDlg::OnDestroy()
{
   GetDlgItem(IDC_MAP)->DestroyWindow();
   CDialog::OnDestroy();
   if (m_pGEO) Destroy_GEO(m_pGEO);
   m_pGEO = NULL;
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CgeomapxprtDlg::OnQueryDragIcon()
{
   return static_cast<HCURSOR>(m_hIcon);
}

void CgeomapxprtDlg::OnBnClickedShad()
{
   App_DoCommand_SYS(m_pGEO, "[ID] ID_MEDIT_SHADOWSEL");
}

void CgeomapxprtDlg::OnBnClickedZoom()
{
   App_DoCommand_SYS(m_pGEO, "[ID] ID_MAPNAV_ZOOM");
}

void CgeomapxprtDlg::OnBnClickedFull()
{
   App_DoCommand_SYS(m_pGEO, "[ID] ID_MAPNAV_FULLMAP");
}

void CgeomapxprtDlg::OnBnClickedExport()
{
   App_DoCommand_SYS(m_pGEO, "[ID] ID_MAP_EXPORT");
}

void CgeomapxprtDlg::OnBnClickedRefresh()
{
   App_DoCommand_SYS(m_pGEO, "[ID] ID_MEDIT_REDRAW");
}

void CgeomapxprtDlg::OnBnClickedNormal()
{
   App_SetViewportMode_EMAP(m_pGEO, _l(m_lEMAP), _l(EMAP_VIEWPORT_NORMAL));
}

void CgeomapxprtDlg::OnBnClickedBrowse()
{
   App_SetViewportMode_EMAP(m_pGEO, _l(m_lEMAP), _l(EMAP_VIEWPORT_BROWSEZOOM));
}

void CgeomapxprtDlg::OnBnClickedAoi()
{
   App_SetViewportMode_EMAP(m_pGEO, _l(m_lEMAP), _l(EMAP_VIEWPORT_BROWSEAOI));
}
