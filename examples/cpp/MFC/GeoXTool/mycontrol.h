// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
//===========================================================================
// MyControl Header File
//===========================================================================


// --- Custom window registration name ---

#define MYCONTROL_CLASS_NAME _T("MYCONTROL_3RDPARTY")


// --- Control ID's ---

#define MYCONTROL_GX 2000
#define MYCONTROL_JUMP 2001
#define MYCONTROL_SHRINK 2002


// --- Main Class ---

class CMyControl : public CWnd
{
public:
   CMyControl();
   ~CMyControl();


   //===========================================================================
   //                            CREATE FUNCTION
   //===========================================================================

   //---------------------------------------------------------------------------
   // CreatePropToolWnd    This function creates the window and all its children
   //                      at the location specified
   //
   // Returns              TRUE - Window created successfully
   //                      FALSE - Error occurred

   BOOL CreateMyControl(void*,                // GEO handle
                        long,                 // META Handle
                        RECT,                 // Rect
                        const GEOXTOOL_API*,  // API Functions
                        GEOXTOOL_INTERFACE*,  // Functions
                        CWnd*);               // Parent window


   //===========================================================================
   //                      CUSTOM WINDOW REGISTRATION
   //===========================================================================

   static BOOL bHasBeenRegistered;    // Static - registered on startup
   static BOOL bRegisterMyControl();  // Static - registered on startup


   //===========================================================================
   //                                 VARIABLES
   //===========================================================================

   // --- Functions ---

   GEOXTOOL_INTERFACE* m_pFuncs;


   // --- General ---

   void* m_hGEO;        // Geosoft Object
   GEOXTOOL_API m_API;  // Programming API
   long m_lMETA;        // META for Data


   // --- Location ---

   BOOL bLocationSet;
   double m_dX;
   double m_dY;
   double m_dZ;


   // --- Location ---

   BOOL bAreaSet;
   double m_dMinX;
   double m_dMinY;
   double m_dMaxX;
   double m_dMaxY;


   // --- Controls ---

   CStatic Static_Projection;
   CStatic View_Projection;

   CStatic Static_Location;
   CStatic View_Location;

   CStatic Static_Area;
   CStatic View_Area;

   CButton Button_GX;
   CButton Button_Jump;
   CButton Button_Shrink;


   //===========================================================================
   //                            MESSAGE FUNCTIONS
   //===========================================================================

   // Generated message map functions
   //{{AFX_MSG(CMyControl)
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   afx_msg void OnSize(UINT nType, int cx, int cy);
   afx_msg void OnGX();
   afx_msg void OnJump();
   afx_msg void OnShrink();
   //}}AFX_MSG
   DECLARE_MESSAGE_MAP()
};
