// geogdbviewDlg.h : header file
//

#pragma once

// CCustomGripper resizing gripper
class CCustomGripper : public CScrollBar
{
public:
   CCustomGripper();

public:
   virtual ~CCustomGripper();

protected:
   afx_msg LRESULT OnNcHitTest(CPoint point);

   DECLARE_MESSAGE_MAP()
};


// CgeogdbviewDlg dialog
class CgeogdbviewDlg : public CDialog
{
   // Construction
public:
   CgeogdbviewDlg(CWnd* pParent = NULL);  // standard constructor
   ~CgeogdbviewDlg();

   // Dialog Data
   enum { IDD = IDD_GEOGDBVIEW_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);  // DDX/DDV support

   // Implementation
protected:
   BOOL m_bInit;
   HICON m_hIcon;
   void* m_pGEO;
   long m_lEDB;
   CCustomGripper m_SizeGrip;

   void RepositionControls();

   // Generated message map functions
   virtual BOOL OnInitDialog();
   afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
   afx_msg void OnSize(UINT nType, int cx, int cy);
   afx_msg void OnPaint();
   afx_msg BOOL OnEraseBkgnd(CDC* pDC);
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   afx_msg HCURSOR OnQueryDragIcon();
   afx_msg void OnDestroy();
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnBnClickedRefresh();
};

#define CHECK_GEO_ERROR         \
   if (iCheckError_SYS(m_pGEO)) \
   {                            \
      sGeoError = 1;            \
      goto GEO_EXIT;            \
   }                            \
   else                         \
      NULL
