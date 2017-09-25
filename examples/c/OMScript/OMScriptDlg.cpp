// OMScriptDlg.cpp : implementation file
//

#include "stdafx.h"
#include "OMScript.h"
#include "OMScriptDlg.h"
#include ".\omscriptdlg.h"

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


// COMScriptDlg dialog


COMScriptDlg::COMScriptDlg(CWnd* pParent /*=NULL*/)
   : CDialog(COMScriptDlg::IDD, pParent), szScript(_T(""))
{
   m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void COMScriptDlg::DoDataExchange(CDataExchange* pDX)
{
   CDialog::DoDataExchange(pDX);
   DDX_Text(pDX, IDC_SCRIPT, szScript);
}

BEGIN_MESSAGE_MAP(COMScriptDlg, CDialog)
ON_WM_SYSCOMMAND()
ON_WM_PAINT()
ON_WM_QUERYDRAGICON()
//}}AFX_MSG_MAP
ON_BN_CLICKED(IDC_EXECUTE, OnBnClickedExecute)
END_MESSAGE_MAP()


// COMScriptDlg message handlers

BOOL COMScriptDlg::OnInitDialog()
{
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

   // TODO: Add extra initialization here

   return TRUE;  // return TRUE  unless you set the focus to a control
}

void COMScriptDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void COMScriptDlg::OnPaint()
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

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR COMScriptDlg::OnQueryDragIcon()
{
   return static_cast<HCURSOR>(m_hIcon);
}


// --- Include Header Files ---

#define C_MICROSOFT
#undef DB_NULL
extern "C" {
#include <gx_lib.h>
#include <gx_extern.h>
#include <gx_define.h>
}


void COMScriptDlg::OnBnClickedExecute()
{
   char sz[256];
   char szError[2048];
   GetDlgItem(IDC_SCRIPT)->GetWindowText(sz, sizeof(sz));
   void* pGeo;

   // --- Create the Geosoft System ---

   pGeo = pCreate_GEO("OMScript", "1.0", 0, AfxGetApp()->m_pMainWnd->m_hWnd, 0, szError, _countof(szError));
   if (pGeo != NULL)
   {
      char szU[256];

      // --- Is this a GX or a GS ? ---

      strcpy(szU, sz);
      _strupr(szU);


      // --- Run the GX or Script ---

      if (strstr(szU, ".GX"))
         iRunGX_SYS(pGeo, sz);
      else
         iRunGS_SYS(pGeo, sz);


      // --- Cleanup The Geosoft Object ---

      ShowError_GEO(pGeo);
      Destroy_GEO(pGeo);
   }
   else
      MessageBox(szError, "Unable to start Geosoft Session", MB_ICONERROR | MB_OK);
}
