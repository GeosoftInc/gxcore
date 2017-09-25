//=============================================================================
//
// gridstat.cpp
//
// Get statistics for a grid
//
// This is a sample C++ program that illustrates how to connect to the GX
// developer environment from a stand-alone program.  In this case, there
// the following basic steps:
//
//   1. Get (create) a GX Object handle.
//
//   2. Create handles to an input grid.
//
//   3. Get and print statistics
//
//   4. No need to destroy any created GX objects (handles): their destructors are
//      automatically called on scope exit
//
//=============================================================================

#define PROGRAM L"GRIDSTAT"
#define VERSION L"v1.0"
#define DEFINIT L"Get statistics for a grid"


#include "stdafx.h"


// sample function declaration
void GetGridStatistics(gx_string_type& gridName);


// entry point
int wmain(int nargs, TCHAR** args)
{
   try
   {
      // greetings
      wchar_t* buffer = _wgetcwd(NULL, 0);
      wprintf(PROGRAM L" " VERSION L" - " DEFINIT L"\n\nWorking directory = %s\n\n", buffer);
      free(buffer);

      // check script parameters
      if (nargs < 2) throw "Script parameters ERROR - an input grid name is required\n";

      // print script parameters
      printf("Parameters:\n");
      for (int i = 0; i < nargs; i++)
         wprintf(L"  Argv[%d] = %s\n", i, args[i]);

      // run an example
      gx_string_type gridName = args[1];
      GetGridStatistics(gridName);
   }

   // GX API error
   catch (GXAPIError error)
   {
      wprintf(error.message().c_str());
   }

   // other exceptions
   catch (std::exception e)
   {
      printf(e.what());
   }

   catch (char* p)
   {
      printf(p);
   }

   catch (gx_string_type error)
   {
      wprintf(error.c_str());
   }

   catch (...)
   {
      printf("Fatal error");
   }

   // successfully completed
   return 0;
}


// sample function definition
void GetGridStatistics(gx_string_type& gridName)
{
   // get (create) a GX Object handle
   GXContextPtr ctx = GXContext::create(std::wstring(L"GridStat"), std::wstring(L"Geosoft Inc."));

   try
   {
      // get statistics
      double minvalue = 0;
      double maxvalue = 0;
      double meanvalue = 0;
      double deviation = 0;
      int nDummies = 0;
      int nValidItems = 0;

      GXIMU::grid_stat_ext(gridName, IMU_STAT_FORCED_YES, nValidItems,
                           nDummies, minvalue, maxvalue, meanvalue, deviation);

      // get grid info
      int32_t nx;
      int32_t ny;
      double xstep, ystep;
      double x_left_bottom, y_left_bottom;
      double angle;
      int32_t orient;
      int32_t elemType;
      double base;
      double multiplier;

      GXIMU::grid_stat(gridName, elemType, nx, ny, xstep, ystep, orient,
                       x_left_bottom, y_left_bottom, angle, base, multiplier);

      // print grid info
      wprintf(L"\nGrid info:\n");
      wprintf(L"  grid file:             %s \n", gridName.c_str());
      wprintf(L"  size (nx x ny):        %d x %d\n", nx, ny);
      wprintf(L"  x separation:          %lf\n", xstep);
      wprintf(L"  y separation:          %lf\n", ystep);
      wprintf(L"  left/bottom:           (%lf, %lf)\n", x_left_bottom, y_left_bottom);
      wprintf(L"  rotation angle:        %lf\n", angle);

      // print grid statistics
      wprintf(L"\nGrid statistics:\n");
      wprintf(L"  number of valid items: %d \n", nValidItems);
      wprintf(L"  minimum value:         %lf\n", minvalue);
      wprintf(L"  maximum value:         %lf\n", maxvalue);
      wprintf(L"  mean value:            %lf\n", meanvalue);
      wprintf(L"  deviation:             %lf\n", deviation);
   } catch (GXExit)
   {
      printf("Exited");
   } catch (GXCancel)
   {
      printf("Cancelled");
   } catch (GXError& e)
   {
      wprintf(e.message().c_str());
   }
}
