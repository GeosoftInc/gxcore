#ifndef _WRAPPERS_DEF
#define _WRAPPERS_DEF

// The Global structure definition

typedef struct
{
   short sErrFile;
   char szErrFile[GS_MAX_PATH];
   void* pGeo;

} WF_GLOBALS;

// Functions in WFUNCS.C

void InitGlobals(void* pGeo);

long registererr_wf__(long* ierr, char* modn, long lLen);
long seterrparmi_wf__(long* iparm, long* iVal);
long seterrparms_wf__(long* iparm, char* pcVal, long lLen);
long seterrparmr_wf__(long* iparm, float* pfVal);

long progname_wf__(char* pcName, long* lReset);
long progupdate_wf__(long* lVal);
long progupdatel_wf__(long* lVal, long* lN);
long checkstop_wf__(long* ierr);

long opengrid_wf__(char* filename, long* iunit, long* ierr, long filename_len);

long openbinaryfile_wf__(char* filename, long* iunit, long* ierr, long filename_len);

long getrow_wf__(long* iunit, long* irow, long* ncol, float* row, long* ierr);

long putrow_wf__(long* iunit, long* irow, long* ncol, float* row, long* ierr);
long closegrid_wf__(long* iunit, long* ierr);
long closebinaryfile_wf__(long* iunit, long* ierr);

long newgrid_wf__(long* plIMG, char* pcName, long* ncol, long* nrow,
                  float* xo, float* yo, float* dx, float* dy, float* rot,
                  long* ierr, long lFilenamelen);

long getgridinfo_wf__(long* plIMG, long* ncol, long* nrow,
                      float* xo, float* yo, float* dx, float* dy,
                      float* rot, long* ierr);

// Converted FORTRAN functions in EXAMPLE.C

int example_(char* pcInfile, float* fmult, char* pcOutfile,
             long* ierr, long infile_len, long outfile_len);

#endif
