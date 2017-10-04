// geomapxprtDlg.h : header file
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


// CgeomapxprtDlg dialog
class CgeomapxprtDlg : public CDialog
{
   // Construction
public:
   CgeomapxprtDlg(CWnd* pParent = NULL);  // standard constructor
   ~CgeomapxprtDlg();

   // Dialog Data
   enum { IDD = IDD_GEOMAPXPRT_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);  // DDX/DDV support

   // Implementation
protected:
   BOOL m_bInit;
   HICON m_hIcon;
   void* m_pGEO;
   long m_lEMAP;
   CCustomGripper m_SizeGrip;

   void RepositionControls();

   // Overrides
   virtual BOOL OnInitDialog();

   // Generated message map functions
public:
   afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
   afx_msg void OnSize(UINT nType, int cx, int cy);
   afx_msg void OnPaint();
   afx_msg BOOL OnEraseBkgnd(CDC* pDC);
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   afx_msg HCURSOR OnQueryDragIcon();
   afx_msg void OnDestroy();
   afx_msg void OnBnClickedShad();
   afx_msg void OnBnClickedZoom();
   afx_msg void OnBnClickedFull();
   afx_msg void OnBnClickedExport();
   afx_msg void OnBnClickedRefresh();
   afx_msg void OnBnClickedNormal();
   afx_msg void OnBnClickedBrowse();
   afx_msg void OnBnClickedAoi();

   DECLARE_MESSAGE_MAP()
};

#define CHECK_GEO_ERROR         \
   if (iCheckError_SYS(m_pGEO)) \
   {                            \
      sGeoError = 1;            \
      goto GEO_EXIT;            \
   }                            \
   else                         \
      NULL
