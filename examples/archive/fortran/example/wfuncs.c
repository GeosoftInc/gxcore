// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
//=========================================================================
//
//   wfuncs.c
//
//   Geosoft Library FORTRAN method wrappers.
//
//=========================================================================

#define C_MICROSOFT

#include <gx_define.h>
#include <gx_lib.h>
#include <gx_extern.h>

#include "wrappers.h"

static WF_GLOBALS Globals;

#define CHECK_STOP                        \
   if (sCheckTerminate_GEO(Globals.pGeo)) \
   {                                      \
      *ierr = 1;                          \
      goto GS_EXIT;                       \
      return 0;                           \
   }

void InitGlobals(void* pGeo)
{
   long lSize;

   Globals.pGeo = pGeo;
   lSize = sizeof(Globals.szErrFile);
   IStrcpy_STR(pGeo, Globals.szErrFile, "example.err", &lSize);
}

long registererr_wf__(long* ierr, char* modn, long lLen)
{
   Error_SYS(Globals.pGeo, Globals.szErrFile, modn, ierr);
   return 0;
}

long seterrparmi_wf__(long* iparm, long* plVal)
{
   char szVal[20], szParm[12];
   long lSize, lVal, lWid;

   // --- Create replaceable parameter like "%1" ---

   lSize = sizeof(szParm);
   IStrcpy_STR(Globals.pGeo, szParm, "%", &lSize);
   lVal = sizeof(szVal);
   lWid = lVal - 1;
   IFormatI_STR(Globals.pGeo, iparm, szVal, &lVal, &lWid);
   IStrcat_STR(Globals.pGeo, szParm, szVal, &lSize);

   // --- Put the value into a string, then replace ---

   IFormatI_STR(Globals.pGeo, plVal, szVal, &lVal, &lWid);
   ErrorTag_SYS(Globals.pGeo, szParm, szVal);

   return 0;
}

long seterrparmr_wf__(long* iparm, float* pfVal)
{
   char szVal[20], szParm[12];
   double dVal;
   long lSig, lSize, lVal, lWid;

   // --- Create replaceable parameter like "%1" ---

   lSize = sizeof(szParm);
   IStrcpy_STR(Globals.pGeo, szParm, "%", &lSize);
   lVal = sizeof(szVal);
   lWid = lVal - 1;
   IFormatI_STR(Globals.pGeo, iparm, szVal, &lVal, &lWid);
   IStrcat_STR(Globals.pGeo, szParm, szVal, &lSize);

   // --- Put the value into a string, then replace ---

   dVal = *pfVal;
   lSig = 5;
   IFormatR_STR(Globals.pGeo, &dVal, szVal, &lVal, &lWid, &lSig);
   ErrorTag_SYS(Globals.pGeo, szParm, szVal);

   return 0;
}

long seterrparms_wf__(long* iparm, char* pcVal, long lValLen)
{
   char szParm[12], szVal[20];
   long lSize, lWid, lVal;

   lSize = sizeof(szParm);
   lVal = sizeof(szVal);
   lWid = lVal - 1;

   // --- Create replaceable parameter like "%1" ---

   IStrcpy_STR(Globals.pGeo, szParm, "%", &lSize);
   IFormatI_STR(Globals.pGeo, iparm, szVal, &lVal, &lWid);
   IStrcat_STR(Globals.pGeo, szParm, szVal, &lSize);

   // --- Put the value into a string, then replace ---

   ErrorTag_SYS(Globals.pGeo, szParm, pcVal);

   return 0;
}

long progname_wf__(char* pcName, long* lReset)
{
   ProgName_SYS(Globals.pGeo, pcName, lReset);
   return 0;
}

long progupdate_wf__(long* lVal)
{
   ProgUpdate_SYS(Globals.pGeo, lVal);
   return 0;
}

long progupdatel_wf__(long* lVal, long* lN)
{
   ProgUpdateL_SYS(Globals.pGeo, lVal, lN);
   return 0;
}

long checkstop_wf__(long* ierr)
{
   if (iCheckStop_SYS(Globals.pGeo)) *ierr = 1;
   return 0;
}

long opengrid_wf__(char* filename, long* plIMG, long* ierr, long filename_len)
{
   char* modn = "OpenGrid_WF";
   long lType, lMode;

   lType = GS_FLOAT;
   lMode = IMG_FILE_READONLY;
   *plIMG = CreateFile_IMG(Globals.pGeo, &lType, filename, &lMode);
   CHECK_STOP;

GS_EXIT:

   if (*ierr)
   {
      if (*plIMG) Destroy_IMG(Globals.pGeo, plIMG);
      *plIMG = 0;
   }

   return 0;
}

long getgridinfo_wf__(long* plIMG, long* ncol, long* nrow,
                      float* xo, float* yo, float* dx, float* dy,
                      float* rot, long* ierr)
{
   char* modn = "GetGridInfo_WF";
   double dDx, dDy, dX0, dY0, dRot;

   *ncol = iNX_IMG(Globals.pGeo, plIMG);
   *nrow = iNY_IMG(Globals.pGeo, plIMG);

   GetInfo_IMG(Globals.pGeo, plIMG, &dDx, &dDy, &dX0, &dY0, &dRot);
   CHECK_STOP;

   *xo = (float)dX0;
   *yo = (float)dY0;
   *dx = (float)dDx;
   *dy = (float)dDy;
   *rot = (float)dRot;

GS_EXIT:

   return 0;
}

long getrow_wf__(long* plIMG, long* irow, long* ncol, float* row, long* ierr)
{
   char* modn = "GetRow_WF";
   long l, lZero = 0, lVV = 0, lType, lSize, lRow;
   double dVal;

   // --- Create a VV to transfer data ---

   lType = 1;
   lSize = *ncol;
   lVV = Create_VV(Globals.pGeo, &lType, &lSize);
   CHECK_STOP;

   lRow = *irow - 1;
   ReadY_IMG(Globals.pGeo, plIMG, &lRow, &lZero, ncol, &lVV);
   CHECK_STOP;

   // --- Transfer the values from the VV to the vector ---

   for (l = 0; l < *ncol; l++)
   {
      dVal = rGetReal_VV(Globals.pGeo, &lVV, &l);

      row[l] = (float)dVal;
   }

GS_EXIT:

   if (lVV) Destroy_VV(Globals.pGeo, &lVV);

   return 0;
}

long newgrid_wf__(long* plIMG, char* pcName, long* ncol, long* nrow,
                  float* xo, float* yo, float* dx, float* dy, float* rot,
                  long* ierr, long lFilenamelen)
{
   char* modn = "NewGrid_WF";
   long lType, lOne = 1;
   double dX0, dY0, dDx, dDy, dRot;

   lType = GS_FLOAT;
   *plIMG = CreateNewFile_IMG(Globals.pGeo, &lType, &lOne, ncol, nrow, pcName);
   CHECK_STOP;


   dX0 = *xo;
   dY0 = *yo;
   dDx = *dx;
   dDy = *dy;
   dRot = *rot;

   SetInfo_IMG(Globals.pGeo, plIMG, &dDx, &dDy, &dX0, &dY0, &dRot);
   CHECK_STOP;

GS_EXIT:

   return 0;
}

long putrow_wf__(long* plIMG, long* irow, long* ncol, float* row, long* ierr)
{
   char* modn = "PutRow_WF";
   long l, lZero = 0, lVV = 0, lType, lSize, lRow;
   double dVal;

   // --- Create a VV to transfer data ---

   lType = 1;
   lSize = *ncol;
   lVV = Create_VV(Globals.pGeo, &lType, &lSize);
   CHECK_STOP;

   // --- Transfer the values to the VV from the vector ---

   for (l = 0; l < *ncol; l++)
   {
      dVal = row[l];
      SetReal_VV(Globals.pGeo, &lVV, &l, &dVal);
   }


   lRow = *irow - 1;
   WriteY_IMG(Globals.pGeo, plIMG, &lRow, &lZero, ncol, &lVV);
   CHECK_STOP;

GS_EXIT:

   if (lVV) Destroy_VV(Globals.pGeo, &lVV);

   return 0;
}


long closegrid_wf__(long* plIMG, long* ierr)
{
   if (*plIMG) Destroy_IMG(Globals.pGeo, plIMG);
   CHECK_STOP;
   *plIMG = 0;

GS_EXIT:
   return 0;
}

// --- The following two wrappers can be used to open and close a binary file ---

long openbinaryfile_wf__(char* filename, long* plBF, long* ierr, long filename_len)
{
   char* modn = "OpenBinaryFile_WF";
   long lMode;

   lMode = BF_READWRITE_NEW;
   *plBF = Create_BF(Globals.pGeo, filename, &lMode);
   CHECK_STOP;

GS_EXIT:

   if (*ierr)
   {
      lMode = BF_KEEP;
      if (*plBF) Destroy_BF(Globals.pGeo, plBF, &lMode);
      *plBF = 0;
   }

   return 0;
}

long closebinaryfile_wf__(long* plBF, long* ierr)
{
   long lMode = BF_KEEP;

   if (*plBF) Destroy_BF(Globals.pGeo, plBF, &lMode);
   CHECK_STOP;
   *plBF = 0;

GS_EXIT:
   return 0;
}

#undef C_MICROSOFT
