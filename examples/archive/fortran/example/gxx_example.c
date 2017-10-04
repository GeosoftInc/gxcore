//=========================================================================
//
//   gxx_example.c
//
//   Example FORTRAN method wrapper.
//
//=========================================================================

#define C_MICROSOFT

// The following include files define Geosoft constants
//  and library functions prototypes

#include <gx_define.h>
#include <gx_lib.h>
#include <gx_extern.h>

// The following include file contains the prototype for the "example" routine,
// as well as the definition of the global structure.

#include "wrappers.h"


//---------------------------------------------------------------------------

GX_WRAPPER_FUNC GX_LONG GX_WRAPPER_CALL
IYOUR_Example(void* pGeo,
              const char* pcInfile,
              long* plInfile_len,
              const char* pcOutfile,
              long* plOutfile_len,
              double* pdMult)
{
   const char* modn = "IYOUR_Example";

   float fMult;
   long lErr = 0;

   // --- Load the global structure ---

   InitGlobals(pGeo);

   // --- Convert doubles to floats for REAL*4 ---

   fMult = (float)*pdMult;

   // --- Process the grid ---

   example_((char*)pcInfile, &fMult, (char*)pcOutfile,
            &lErr, *plInfile_len, *plOutfile_len);

   return 0;
}
