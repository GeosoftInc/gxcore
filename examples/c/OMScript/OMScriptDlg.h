// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
// OMScriptDlg.h : header file
//

#pragma once


// COMScriptDlg dialog
class COMScriptDlg : public CDialog
{
   // Construction
public:
   COMScriptDlg(CWnd* pParent = NULL);  // standard constructor

   // Dialog Data
   enum { IDD = IDD_OMSCRIPT_DIALOG };

protected:
   virtual void DoDataExchange(CDataExchange* pDX);  // DDX/DDV support


   // Implementation
protected:
   HICON m_hIcon;

   // Generated message map functions
   virtual BOOL OnInitDialog();
   afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
   afx_msg void OnPaint();
   afx_msg HCURSOR OnQueryDragIcon();
   DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnBnClickedExecute();
   CString szScript;
};
