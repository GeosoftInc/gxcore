// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
//=========================================================================
//
// gridcopy.c
//
// Copy the contents of one grid to another.
//
// This is a sample C program that illustrates how to connect to the GX
// developer environment from a stand-alone program.  In this case, there
// the following basic steps:
//
//    1. Get (create) a GX Object Pointer.
//
//    2. Create handles to an input and output image.
//
//    3. Loop through each grid row, read input grid row and write the
//       output grid row.
//
//    4. Destroy any created handles, then the GX Object Pointer.
//
// This example also shows how to get the actual grid data from each row.
//
//=========================================================================

#define PROGRAM "GRIDCOPY"
#define VERSION "v1.0"

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


// --- define error test ---

#define GX_ERROR_TEST \
   if (iCheckError_SYS(pGX)) goto GEO_EXIT


// --- Main Test Function ---

int _cdecl main(short argc, char** argv)
{
   // ---
   // this is the GX Object Pointer which must be passed as the first
   // argument to all GX functions.  It should always be initialized
   // to NULL.
   // ---

   GX_OBJECT_PTR pGX = NULL;


   // --- image handles ---

   GX_HANDLE hImgI = 0;
   GX_HANDLE hImgO = 0;


   // --- VV working array handle

   GX_HANDLE hVV = 0;


   // --- working variables ---

   long l, lNx, lNy;


   // --- data buffer ---

   double* pdData = NULL;

   char szError[2048];


   // --- display usage ---

   if (argc < 3)
   {
      printf("\nusage: gridcopy from.grd(...) to.grd(...)\n\n");
      printf("       (...) are optional grid name qualifiers which are\n");
      printf("       described in dat_xgd.doc in the geosoft directory.\n\n");
      printf("Examples:\n\n");
      printf("   gridcopy mag.grd magdos.grd(GRD;type=short)\n");
      printf("   Converts a grid to Geosoft DOS compatible 16-bit grid.\n\n");
      printf("   gridcopy mag.grd magerm(ERM)\n\n");
      printf("   Converts a grid to ER Mapper format.\n\n");
      goto GEO_EXIT;
   }


   // --- get the GX Object pointer,  ---

   pGX = pCreate_GEO(PROGRAM, VERSION, GEO_MEM_NOLIMIT, NULL, 0, szError, _countof(szError));
   if (pGX == NULL)
   {
      // --- this should never happen ---

      printf("Unable to start Geosoft Session: %s\n", szError);
      goto GEO_EXIT;
   }


   // --- create input and output grid image handles. ---

   hImgI = CreateFile_IMG(pGX, _l(GS_DOUBLE), argv[1], _l(0));
   GX_ERROR_TEST;
   hImgO = CreateOutFile_IMG(pGX, _l(GS_DOUBLE), argv[2], &hImgI);
   GX_ERROR_TEST;

   Progress_SYS(pGX, _l(1));
   GX_ERROR_TEST;
   ProgName_SYS(pGX, "Copy/convert grids...", _l(1));
   GX_ERROR_TEST;


   // --- get size information ---

   lNx = iNX_IMG(pGX, &hImgI);
   GX_ERROR_TEST;
   lNy = iNY_IMG(pGX, &hImgI);
   GX_ERROR_TEST;


   // --- create a double VV to hold a grid row ---

   hVV = CreateExt_VV(pGX, _l(GS_DOUBLE), _l(0));
   GX_ERROR_TEST;


   // --- get a data buffer to hold a data row ---

   pdData = (double*)malloc((size_t)(lNx * sizeof(*pdData)));
   if (pdData == NULL)
   {
      // --- a real program should do better than this ---

      printf("Failed to allocate memory.\n");
      goto GEO_EXIT;
   }


   // ---
   // Copy/convert the grids by read/writing each row.
   //
   // Note that you could also just call Copy_IMG, but this example
   // also shows you how to access the grid data.
   //
   // ---


   for (l = 0; l < lNy; l++)
   {
      // --- read the row ---

      ReadY_IMG(pGX, &hImgI, &l, _l(0), &lNx, &hVV);
      GX_ERROR_TEST;


      // ---
      // This sample code that shows how you can get the
      // data for use in your own application.  In this case, we
      // just print the first data value in each row.
      // ---

      if (iGetData_VV(pGX, &hVV, 0, lNx, (void*)pdData, GS_DOUBLE))
         goto GEO_EXIT;


      // --- pdData now contains the data, print the middle value ---

      printf("\nRow %d: %g", l, pdData[lNy / 2]);


      // --- write the row ---

      WriteY_IMG(pGX, &hImgO, &l, _l(0), &lNx, &hVV);
      GX_ERROR_TEST;
   }


GEO_EXIT:
   if (pGX)
   {
      // --- Destroy the Images ---

      if (hImgI) Destroy_IMG(pGX, &hImgI);
      if (hImgO) Destroy_IMG(pGX, &hImgO);
      if (hVV) Destroy_VV(pGX, &hVV);
      if (pdData) free(pdData);

      ShowError_GEO(pGX);  // does nothing if there are no errors
      Destroy_GEO(pGX);    // destroy the GX Object Pointer
   }
   return (0);
}
