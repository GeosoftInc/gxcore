// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
//=========================================================================
//
// gridstat.c
//
// Display grid information.
//
// This is a sample C program that illustrates how to connect to the GX
// developer environment from a stand-alone program.  In this case, there
// the following basic steps:
//
//    1. Get (create) a GX Object Pointer.
//
//    2. Call GX function GridStat_IMU to get grid information.
//
//    3. Format and display grid information.
//
//    4. Destroy the GX Object Pointer.
//
//=========================================================================

// --- STANDARD INCLUDES ---

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- GX includes ---
//
// gx_lib.h contains C prototypes for the entire GX library.
// The C_MICROSOFT define will cause Microsoft C prototype
// syntax to be defined.  If you use a non-Microsoft development
// environment, you may have to add your own prototype syntax
// definitions (see the GX_... defines at the top of gx_lib.h).
//
// gx_extern.h contains prototypes to create and destroy the GX
// object pointer, and methods for handling error in the Geosoft
// libraries.  This file must be included after gx_lib.h.
//
// gx_define.h contains constant definitions used in GX developer.
// If the constant definitions conflict with your own, you should
// not include this file and instead use explicit values in your
// code.
//
// ---

#define C_MICROSOFT
#include <gx_lib.h>
#include <gx_extern.h>
#include <gx_define.h>


// --- Main Function ---

int _cdecl main(short argc, char** argv)
{
   // ---
   // this is the GX Object Pointer which must be passed as the first
   // argument to all GX functions.  It should always be initialized
   // to NULL.
   // ---

   GX_OBJECT_PTR pGX = NULL;
   short sError = 0;

   char szError[2048];
   char szGrid[255];
   char sz[255];
   double dDx, dDy, dXo, dYo, dRot, dBase, dMult;
   long lNX, lNY, lKX, lType;


   // --- display usage ---

   if (argc < 2)
   {
      printf("usage: gridstat file.grd\n");
      goto GEO_EXIT;
   }


   // --- get the GX Object pointer,  ---

   pGX = pCreate_GEO("GRIDSTAT", "V1", 0, NULL, 0, szError, _countof(szError));
   if (pGX == NULL)
   {
      // --- this should never happen ---

      printf("Unable to start Geosoft Session: %s\n", szError);
      goto GEO_EXIT;
   }


   // ---
   // Get grid statistics. See GridStat_IMU in IMU.GXH.
   // Note that the pGX pointer is added as the first argument,
   // and that all other arguments are passed by reference
   // ---

   strcpy_s(szGrid, _countof(szGrid), argv[1]);
   GridStat_IMU(pGX, szGrid, &lType, &lNX, &lNY, &dDx, &dDy, &lKX, &dXo, &dYo, &dRot, &dBase, &dMult);


   // ---
   // After any call to a GX function, you must check if any errors occured
   // by calling iCheckError_SYS.  If errors have occured, you must deal with
   // them by either displaying the errors ( ShowError_GEO() ), or getting
   // each error ( sGetError_GEO() ) and deciding what to do.
   // ShowError_GEO() will clear the GC+X error stack.  sGetError_GEO() will
   // return and remove the top error from the GX error stack.
   // ---

   if (iCheckError_SYS(pGX)) goto GEO_EXIT;


   // --- format and display grid header ---

   switch (lType)
   {
   case 0:
      strcpy_s(sz, _countof(sz), "BYTE");
      break;
   case 1:
      strcpy_s(sz, _countof(sz), "USHORT");
      break;
   case 2:
      strcpy_s(sz, _countof(sz), "SHORT");
      break;
   case 3:
      strcpy_s(sz, _countof(sz), "LONG");
      break;
   case 4:
      strcpy_s(sz, _countof(sz), "FLOAT");
      break;
   case 5:
      strcpy_s(sz, _countof(sz), "DOUBLE");
      break;
   }


   printf("Grid Info\n");
   printf(" element type...........ET: %15s\n", sz);
   printf(" elements in X..........NX: %15ld\n", lNX);
   printf(" elements in Y..........NY: %15ld\n", lNY);
   printf(" element separation X...DX: %15f\n", dDx);
   printf(" element separation Y...DX: %15f\n", dDy);
   printf(" orientation............KX: %15ld\n", lKX);
   printf(" X Offset...............XO: %15e\n", dXo);
   printf(" Y Offset...............YO: %15e\n", dYo);
   printf(" grid rotation.........ROT: %15f\n", dRot);
   printf(" base removed...........ZB: %15e\n", dBase);
   printf(" multiplied by..........ZM: %15e\n", dMult);

GEO_EXIT:
   if (pGX)
   {
      ShowError_GEO(pGX);  // does nothing if there are no errors
      Destroy_GEO(pGX);    // destroy the GX Object Pointer
   }
   return (0);
}
