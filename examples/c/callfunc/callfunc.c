// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
//--------------------------------------------------------------------
//
// callfunc.c   Sample code to create a DLL that can be called from a GX.
//
// See callfunc.gxh for the GX prototype headers that describe the calling
// parameters for these functions.
//
//    iSum_CALLFUNC      Return the sum of two long integers
//    Sum_CALLFUNC       Return the sum of integers in a variable
//    ChanBase_CALLFUNC  Add a base value to a channel of a database
//
//    iSumAandB_CALLFUNC    Add two numbers
//    ShowMessage_CALLFUNC  Call An APP Function
//
//--------------------------------------------------------------------

// --- STANDARD INCLUDES ---

#include <stdlib.h>

// --- Required Includes ---

#define C_MICROSOFT
#include <geoengine.core.gxlib.h>
#include <geoengine.core.gxdefine.h>
#include <gx_extern.h>


// --- iSum_CALLFUNC ---

__declspec(dllexport) long __cdecl iSum_CALLFUNC(  // returns sum of two numbers
   GX_OBJECT_PTR pGeo,                             // geosoft handle
   const long* pl1,                                // first number
   const long* pl2)                                // second number
{
   return (*pl1 + *pl2);
}


// --- Sum_CALLFUNC ---

__declspec(dllexport) void __cdecl Sum_CALLFUNC(
   GX_OBJECT_PTR pGeo,  // geosoft handle
   const long* pl1,     // first number
   const long* pl2,     // second number
   long* plSum)         // returned sum
{
   *plSum = *pl1 + *pl2;
}


// --- ChanBase_CALLFUNC ---

__declspec(dllexport) void __cdecl ChanBase_CALLFUNC(  // add two channels
   GX_OBJECT_PTR pGeo,                                 // geosoft handle
   const long* phDB,                                   // database handle
   const char* pcChan,                                 // channel name
   const double* pdValue)                              // base value to add to channel

{
   GX_HANDLE hVV = 0;  // uninitialized handles set to 0
   GX_HANDLE hVM = 0;
   GX_HANDLE hVA = 0;

   long hChan, hLine;    // database symbols
   long lVA;             // number of VA elements, 1 for a VV
   long lVV;             // number of VV elements
   short sGeoError = 0;  // error flag, 0 - no error
   double* pd;           // working double pointer
   long l;               // counter
   char szErr[64];       // my error message


   // --- initially no error ---

   *szErr = '\0';


   // --- Get the channel Channel handle --

   hChan = FindSymb_DB(pGeo, phDB, pcChan, _l(DB_SYMB_CHAN));
   GEO_ERROR;
   if (hChan == -1)
   {
      // --- channel does not exist ---

      IStrcpy_STR(pGeo, szErr, pcChan, _l(sizeof(szErr)));
      IStrcat_STR(pGeo, szErr, " < channel does not exist.", _l(sizeof(szErr)));
      sGeoError = 1;
      goto GEO_EXIT;
   }


   // --- Lock Channel for read-write ---

   LockSymb_DB(pGeo, phDB, &hChan, _l(DB_LOCK_READWRITE), _l(DB_WAIT_NONE));
   GEO_ERROR;


   // --- do we need a VV or a VA? ---

   lVA = iGetColVA_DB(pGeo, phDB, &hChan);  // number of elements in a VA, 1 if its a VV
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


   // --- Go through all selected Lines ---

   hLine = FirstSelLine_DB(pGeo, phDB);
   GEO_ERROR;

   do
   {
      // --- break if line is not a valid line ---

      if (!iIsLineValid_DB(pGeo, phDB, &hLine)) break;
      GEO_ERROR;


      // --- Read Data ---

      if (lVA == 1)
      {
         // --- get VV data ---

         GetChanVV_DB(pGeo, phDB, &hLine, &hChan, &hVV);
         GEO_ERROR;
      }
      else
      {
         // --- get VA data ---

         GetChanVA_DB(pGeo, phDB, &hLine, &hChan, &hVA);
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

      lVV = iLength_VV(pGeo, &hVV);
      GEO_ERROR;


      // --- add the base value to each element ---

      for (l = 0; l < lVV; l++, pd++)
         *pd += *pdValue;


      // --- Put the VM data back in the VV ---

      CopyVMtoVV_VV(pGeo, &hVV, &hVM);
      GEO_ERROR;


      // --- Write data back to the database ---

      if (lVA == 1)
      {
         PutChanVV_DB(pGeo, phDB, &hLine, &hChan, &hVV);
         GEO_ERROR;
      }
      else
      {
         // ---
         // Since the VA owned the VV, changing the VV data is the same as
         // changing toe VA data.  All I need to do is write the VA data.
         // ---

         PutChanVA_DB(pGeo, phDB, &hLine, &hChan, &hVA);
         GEO_ERROR;
      }


      // --- Advance to Next Line ---

      hLine = NextSelLine_DB(pGeo, phDB, _l(hLine));
      GEO_ERROR;

   } while (1);


   // --- Cleanup ---

   UnLockSymb_DB(pGeo, phDB, &hChan);
   GEO_ERROR;


   // ---
   // Destroy any handles that were created.  This is not really necessary since
   // all handles will be destroyed when a GX ends.  However, we consider
   // it good practice to destroy your own instances since it ensures you are
   // thinking about what instances you have created.  You really do not want to
   // keep class instances longer than you need them since they consume system
   // resources that could be better used by other parts of your application.
   // ---

   if (hVM) Destroy_VM(pGeo, &hVM);
   GEO_ERROR;


   // --- be careful not to try to destroy a VV owned by a VA ---

   if (hVV && (lVA != 1)) Destroy_VV(pGeo, &hVV);
   if (hVA) Destroy_VA(pGeo, &hVA);

   GEO_ERROR;


// --- Done ---

GEO_EXIT:

   // --- terminate the GX if an error occured ---

   if (sGeoError != 0)
   {
      if (*szErr)
         _Abort_SYS(pGeo, szErr);
      else
         _Abort_SYS(pGeo, "An error occured in BaseChan_CALLFUNC.");
   }

   return;
}


__declspec(dllexport) long __cdecl iSumAandB_CALLFUNC(void* pGeosoft)
{
   char szA[16];
   char szB[16];
   long lS1, lS2;

   // --- get string values from parameter block ---

   lS1 = sizeof(szA);
   GtString_SYS(pGeosoft, "SUM", "A", szA, &lS1);
   if (iCheckError_SYS(pGeosoft))
      goto SUM_ERROR;

   lS2 = sizeof(szB);
   GtString_SYS(pGeosoft, "SUM", "B", szB, &lS2);
   if (iCheckError_SYS(pGeosoft))
      goto SUM_ERROR;

   // --- return the sum ---

   return ((long)(atoi(szA) + atoi(szB)));

SUM_ERROR:
   return (0);
}


__declspec(dllexport) long __cdecl ShowMessage_CALLFUNC(void* pGeosoft)
{
   App_DisplayMessage_SYS(pGeosoft, "My Message", "This is the message");
   return (0);
}
