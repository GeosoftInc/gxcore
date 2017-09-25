//=============================================================================
//
// gridcopy.cpp
//
// Copy the contents of one grid to another.
//
// This is a sample C++ program that illustrates how to connect to the GX
// developer environment from a stand-alone program.  In this case, there
// the following basic steps:
//
//   1. Get (create) a GX Object handle.
//
//   2. Create handles to an input and output grid-images.
//
//   3. Copy a grid
//
//   4. No need to destroy any created GX objects (handles): their destructors are
//      automatically called on scope exit
//
//=============================================================================

#define PROGRAM L"GRIDCOPY"
#define VERSION L"v1.0"
#define DEFINIT L"Copy the contents of one grid to another"


#include "stdafx.h"


// sample function declaration
void CopyGrid(gx_string_type& gridName);


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
      CopyGrid(gridName);

      wprintf(L"\nGrid was copied successfully\n");
   }

   // Geosoft API error
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
   } catch (...)
   {
      printf("Fatal error");
   }

   // successfully completed
   return 0;
}


// sample function definition
void CopyGrid(gx_string_type& gridName)
{
   // name of output grid
   gx_string_type outGridName = gridName + L" (exact copy).grd";

   // get (create) a GX Object handle
   GXContextPtr ctx = GXContext::create(std::wstring(L"GridCopy"), std::wstring(L"Geosoft Inc."));

   try
   {
      // load an existing grid and create new ones
      GXIMGPtr grid = GXIMG::create_file(GS_TYPES::GS_TYPE_DEFAULT, gridName, IMG_FILE::IMG_FILE_READONLY);
      GXIMGPtr outGrid = GXIMG::create_out_file(GS_TYPES::GS_TYPE_DEFAULT, outGridName, grid);

      //copy grid
      grid->copy(outGrid);
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
