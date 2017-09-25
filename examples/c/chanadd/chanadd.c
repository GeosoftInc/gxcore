//=========================================================================
//
//  CHANADD.c   v2
//
//  This program requires GX Developer v7.6 or later
//
//=========================================================================

// --- STANDARD INCLUDES ---

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <tchar.h>

// --- Required Includes ---

#define C_MICROSOFT

#include <gx_lib.h>
#include <gx_define.h>
#include <gx_extern.h>

//----------------------------------------------------------------------------

#define FRENCH_T L"Added French: Économie"
#define CHINESE_T L"Added Chinese: 复制"
#define CHINESE_LONG_T L" 复制数据专复制数据专复制数据专复制数据专复制数据专复制数据"

//----------------------------------------------------------------------------

void UNICODE_TO_UTF8(const wchar_t* pwUnicode, char* pcUTF8, long lUTF8Size)
{
   long lConv;
   lConv = WideCharToMultiByte(CP_UTF8, 0, pwUnicode, (int)wcslen(pwUnicode), pcUTF8, lUTF8Size, NULL, NULL);
   pcUTF8[max(0, min(lUTF8Size - 1, lConv))] = '\0';
}

#ifdef GEO_ANSI
void UNICODE_TO_ACP(const wchar_t* pwUnicode, char* pcANSI, long lANSISize)
{
   long lConv;
   lConv = WideCharToMultiByte(CP_ACP, 0, pwUnicode, (int)wcslen(pwUnicode), pcANSI, lANSISize, NULL, NULL);
   pcANSI[max(0, min(lANSISize - 1, lConv))] = '\0';
}

void ANSI_TO_UTF8(const char* pcANSI, char* pcUTF8, long lUTF8Size)
{
   wchar_t wcWide[512];
   long lConv;
   lConv = MultiByteToWideChar(CP_ACP, 0, pcANSI, (int)strlen(pcANSI), wcWide, sizeof(wcWide));
   wcWide[max(0, min(_countof(wcWide) - 1, lConv))] = '\0';
   lConv = WideCharToMultiByte(CP_UTF8, 0, wcWide, (int)wcslen(wcWide), pcUTF8, lUTF8Size, NULL, NULL);
   pcUTF8[max(0, min(lUTF8Size - 1, lConv))] = '\0';
}

void UTF8_TO_ANSI(const char* pcUTF8, char* pcANSI, long lANSISize)
{
   wchar_t wcWide[512];
   long lConv;
   lConv = MultiByteToWideChar(CP_UTF8, 0, pcUTF8, (int)strlen(pcUTF8), wcWide, sizeof(wcWide));
   wcWide[max(0, min(_countof(wcWide) - 1, lConv))] = '\0';
   lConv = WideCharToMultiByte(CP_ACP, 0, wcWide, (int)wcslen(wcWide), pcANSI, lANSISize, NULL, NULL);
   pcANSI[max(0, min(lANSISize - 1, lConv))] = '\0';
}
#endif

//----------------------------------------------------------------------------
//                                Main Function
//----------------------------------------------------------------------------

int _cdecl _tmain(short argc, TCHAR** argv)
{
   // --- Required variables ---

   void* pGeo = NULL;    // Geosoft Session Object
   short sGeoError = 0;  // Error flag


   // --- Program variables ---

   long hDB = 0;  // handles set to 0 to indicate they are uninitialized
   long hVV = 0;
   long hVM = 0;
   long hVA = 0;
   long hLST = 0;

   long hChan, hLine;  // database symbols

   long lVA, lL, lLines, l, lS;
   double *pd, dValue;

   FILE* pFile;
   TCHAR szFrench[64];
   TCHAR szChinese[64];
   TCHAR szFile[256];
   TCHAR szError[2048];

   // --- Usage ---

   if (argc < 4)
   {
      _tprintf(__T("usage: chanadd database channel value\n"));
      goto GEO_EXIT;
   }


   // --- Initialize ---

   pGeo = pCreate_GEO(__T("CHANADD"), __T("V1"), GEO_MEM_NOLIMIT, NULL, 0, szError, _countof(szError));
   if (pGeo == NULL)
   {
      _tprintf(__T("Unable to start Geosoft Session: %s\n"), szError);
      goto GEO_EXIT;
   }


   // ---
   // Open a database.
   // Note that all databases created by normal Geosoft users will have
   // user name "SUPER" with password "".  Third-party or custom applications
   // may create databases that require a user-name and password, in which
   // case you require these values to open the database.
   // ---

   hDB = Open_DB(pGeo, argv[1], __T("SUPER"), __T(""));
   GEO_ERROR;


   // --- List the Channels ---

   hLST = Create_LST(pGeo, _l(4096));
   GEO_ERROR;

   SymbLST_DB(pGeo, &hDB, &hLST, _l(DB_SYMB_CHAN));
   GEO_ERROR;

// --- Add 2 Strings at the end ---

#ifdef _UNICODE
   _tcscpy_s(szChinese, _countof(szChinese), CHINESE_T);
   _tcscpy_s(szFrench, _countof(szFrench), FRENCH_T);
#elif GEO_ANSI
   UNICODE_TO_ACP(FRENCH_T, szFrench, sizeof(szFrench));
   UNICODE_TO_ACP(CHINESE_T, szChinese, sizeof(szChinese));
#else
   UNICODE_TO_UTF8(FRENCH_T, szFrench, sizeof(szFrench));
   UNICODE_TO_UTF8(CHINESE_T, szChinese, sizeof(szChinese));
#endif

   AddItem_LST(pGeo, &hLST, szFrench, __T(""));
   AddItem_LST(pGeo, &hLST, szChinese, __T(""));


   // --- Get the strings and save them ourselves ---
   // --- Note that the output file is going to be UTF8 ---
   // --- So I will add the UTF8 header and it should ---
   // --- be viewed in a UTF8 enabled editor (notepad). ---

   _tcscpy_s(szFile, _countof(szFile), argv[1]);
   _tcscat_s(szFile, _countof(szFile), _T(".chanlist"));
   auto err = _tfopen_s(&pFile, szFile, _T("wt"));
   if (pFile)
   {
      long l, lN;
      TCHAR szBuff[1024];


      // --- Output UTF8 Signature to file ---

      fputc(0xEF, pFile);
      fputc(0xBB, pFile);
      fputc(0xBF, pFile);


      // --- Get List Size ---

      lN = iSize_LST(pGeo, &hLST);


      // --- Ouput All Strings ---

      for (l = 0; l < lN; l++)
      {
         GtItem_LST(pGeo, &hLST, _l(0), _l(l), szBuff, _l(sizeof(szBuff)));
#ifdef _UNICODE
         {
            char szUTF8[256];

            // --- Convert UNICODE to UTF8 and Print ---

            UNICODE_TO_UTF8(szBuff, szUTF8, sizeof(szUTF8));
            fprintf(pFile, "%s\n", szUTF8);
         }
#elif GEO_ANSI
         {
            char szUTF8[256];

            // --- Take ANSI To UTF8 ---

            ANSI_TO_UTF8(szBuff, szUTF8, sizeof(szUTF8));
            fprintf(pFile, "%s\n", szUTF8);
         }
#else
         // --- Native UTF8 ---

         _ftprintf(pFile, __T("%s\n"), szBuff);
#endif
      }
      fclose(pFile);
   }


   // --- Special INI tests ---

   _tcscpy_s(szFile, _countof(szFile), argv[1]);
   _tcscat_s(szFile, _countof(szFile), _T(".ini"));
   if (iFileExist_SYS(pGeo, szFile))
   {
      TCHAR szText[50];
      TCHAR sz[50];
      TCHAR szT[100];
      long l;

      // --- Load the Settings ---

      LoadParm_SYS(pGeo, szFile, _T(""));


      // --- Get Settings ---

      for (l = 1; l < 50; l++)
      {
         _stprintf_s(sz, _countof(sz), __T("RESULT%d"), l);
         memset(szText, 0, sizeof(szText));
         GtString_SYS(pGeo, _T("MAIN"), _T("SETTING30"), szText, _l(l * sizeof(szText[0])));
         SetString_SYS(pGeo, _T("MAIN"), sz, szText);
      }


// --- Special Test ---


#ifdef _UNICODE
      _tcscpy_s(szT, _countof(szT), CHINESE_LONG_T);
#elif GEO_ANSI
      UNICODE_TO_ACP(CHINESE_LONG_T, szT, sizeof(szT));
#else
      UNICODE_TO_UTF8(CHINESE_LONG_T, szT, sizeof(szT));
#endif

      l = iStrMin_STR(pGeo, szT);
      SetString_SYS(pGeo, _T("MAIN"), _T("SPECIAL"), szT);


      // --- Save INI ---

      SaveParm_SYS(pGeo, szFile, _l(0), _T(""));
   }


   // --- Get the channel Channel handle --

   hChan = FindSymb_DB(pGeo, &hDB, argv[2], _l(DB_SYMB_CHAN));
   GEO_ERROR;
   if (hChan == -1)
   {
      _tprintf(__T("\n\"%s\" channel not found in database \"%s\".\n"), argv[2], argv[1]);
      goto GEO_EXIT;
   }

   // --- Lock Channel for read-write ---

   LockSymb_DB(pGeo, &hDB, &hChan, _l(DB_LOCK_READWRITE), _l(DB_WAIT_NONE));
   GEO_ERROR;


   // --- do we need a VV or a VA? ---

   lVA = iGetColVA_DB(pGeo, &hDB, &hChan);  // number of elements in a VA, 1 if its a VV
   GEO_ERROR;

   if (lVA == 1)
   {
      // --- Create VV to hold data array ---

      hVV = CreateExt_VV(pGeo, _l(GS_DOUBLE), _l(0));
      GEO_ERROR;
   }
   else
   {
      // --- its a VA channel ---

      hVA = CreateExt_VA(pGeo, _l(GS_DOUBLE), _l(0), &lVA);
      GEO_ERROR;
   }


   // --- get a real VM to to hold the data in memory ---

   hVM = Create_VM(pGeo, _l(GS_REAL), _l(0));
   GEO_ERROR;


   // --- Get Value to add to data ---

   dValue = _tstof(argv[3]);


   // --- Count selected lines ---

   lLines = iCountSelLines_DB(pGeo, &hDB);
   GEO_ERROR;


   // --- Go through all selected Lines ---

   lL = 0;
   hLine = FirstSelLine_DB(pGeo, &hDB);
   GEO_ERROR;

   do
   {
      // --- break if line is not a valid line ---

      if (!iIsLineValid_DB(pGeo, &hDB, &hLine)) break;
      GEO_ERROR;


      // --- Update Progress ---

      _tprintf(__T("\rChanAdd %ld of %ld Complete    "), lL + 1, lLines);


      // --- Read Data ---

      if (lVA == 1)
      {
         // --- get VV data ---

         GetChanVV_DB(pGeo, &hDB, &hLine, &hChan, &hVV);
         GEO_ERROR;
      }
      else
      {
         // --- get VA data ---

         GetChanVA_DB(pGeo, &hDB, &hLine, &hChan, &hVA);
         GEO_ERROR;


         // ---
         // Get the VV to the VA data.  This VV contains all VA data
         // by element, then by row.  The VV is owned by the VA, so you
         // cannot destroy the VA or the VV will become invalid.
         // ---

         hVV = GetFullVV_VA(pGeo, &hVA);
         GEO_ERROR;
      }

      // ---
      // Get data VM from the VV.  This will re-size the VM to
      // hold all the data in the VV.
      // ---

      CopyVVtoVM_VV(pGeo, &hVM, &hVV);
      GEO_ERROR;


      // --- now get a pointer to the data ---

      pd = (double*)GetPtrVM_GEO(pGeo, &hVM);
      GEO_ERROR;


      //-----------------------------------------------------------------------
      //                             MAIN MATH CODE
      //-----------------------------------------------------------------------

      lS = iLength_VV(pGeo, &hVV);
      GEO_ERROR;

      for (l = 0; l < lS; l++, pd++)
         *pd += dValue;


      // --- Put the VM data back in the VV ---

      CopyVMtoVV_VV(pGeo, &hVV, &hVM);
      GEO_ERROR;


      // --- Write data back to the database ---

      if (lVA == 1)
      {
         PutChanVV_DB(pGeo, &hDB, &hLine, &hChan, &hVV);
         GEO_ERROR;
      }
      else
      {
         // ---
         // Since the VA owned the VV, changing the VV data is the same as
         // changing toe VA data.  All I need to do is write the VA data.
         // ---

         PutChanVA_DB(pGeo, &hDB, &hLine, &hChan, &hVA);
         GEO_ERROR;
      }


      // --- Advance to Next Line ---

      hLine = NextSelLine_DB(pGeo, &hDB, _l(hLine));
      GEO_ERROR;

      lL++;

   } while (1);

   _tprintf(__T("\nChanAdd Complete\n"));


   // --- Cleanup ---

   UnLockSymb_DB(pGeo, &hDB, &hChan);
   GEO_ERROR;


   // ---
   // Destroy any handles that were created.  This is not really necessary since
   // destroying a pGeo handle will destroy all classes.  However, we considere it
   // good practice to destroy your own instances since it ensures you are
   // thinking about what instances you have created.  You really do not want to
   // keep class instances longer than you need them since they consume system
   // resources that could be better used by other parts of your application.
   // ---

   if (hDB) Destroy_DB(pGeo, &hDB);
   GEO_ERROR;


   if (hVM) Destroy_VM(pGeo, &hVM);
   GEO_ERROR;

   // --- be careful not to try to destroy a VV owned by a VA ---

   if (hVV && (lVA != 1)) Destroy_VV(pGeo, &hVV);
   GEO_ERROR;

   if (hVA) Destroy_VA(pGeo, &hVA);
   GEO_ERROR;


// --- Done ---

GEO_EXIT:

   if (pGeo)
   {
      TCHAR szMod[64];
      TCHAR szErr[4096];
      long lErr;

      while (sGetError_GEO(pGeo, szMod, sizeof(szMod), szErr, sizeof(szErr), &lErr))
         _tprintf(__T("\n%s:%s\n"), szMod, szErr);

      Destroy_GEO(pGeo);
   }
   return (0);
}
