static char* __THIS_FILE_NAME__ = __FILE__;
/* .\example.f -- translated by f2c (version of 24 September 1993  0:51:26).
   You must link the resulting object file with the libraries:
   -lf2c -lm   (in that order)
*/

#include "f2c.h"

/* Table of constant values */

static integer c__2000 = 2000;
static integer c__1 = 1;
static integer c__2 = 2;
static integer c__1000 = 1000;
static integer c__0 = 0;
static integer c__100 = 100;


int example_(char* infile, real* factor, char* outfile, integer* ierr, ftnlen
                                                                          infile_len,
             ftnlen outfile_len)
{
   const char* modn = "fortran_example_";
   DEBUG_STACK
   /* Initialized data */

   static real dummy = -1e32f;
   static integer ingrid = 0;
   static integer outgrid = 0;

   /* System generated locals */
   integer i__1, i__2;

   /* Local variables */
   static real a[1000];
   static integer i, j;
   static real x0, y0;
   extern int getrow_wf__(integer*, integer*, integer*, real*, integer*), putrow_wf__(integer*, integer*, integer*, real*, integer*);
   static real dx, dy;
   extern int newgrid_wf__(integer*, char*, integer*, integer*, real*,
                           real*, real*, real*, real*, integer*, ftnlen);
   static integer inc;
   static real rot;
   extern int opengrid_wf__(char*, integer*, integer*, ftnlen),
      progname_wf__(char*, integer*, ftnlen);
   static integer ncol, nrow;
   extern int closegrid_wf__(integer*, integer*), checkstop_wf__(integer*), progupdate_wf__(integer*), getgridinfo_wf__(integer*, integer
                                                                                                                                     *,
                                                                                                                        integer*, real*, real*, real*, real*, real*, integer*),
      progupdatel_wf__(integer*, integer*), registererr_wf__(integer*, char*, ftnlen), seterrparmi_wf__(integer*, integer*);


   /*   This example program reads an input grid, multiplies it by */
   /*   a constant factor, and creates a new output grid. */
   /*   It demonstrates how FORTRAN code may be modified to a format */
   /*   suitable for conversion by F2C to C code that is callable */
   /*   from a GX. */


   /*  Input the grid. Supply the grid name. */

   opengrid_wf__(infile, &ingrid, ierr, infile_len);
   if (*ierr == 1)
   {
      goto L9999;
   }

   /*  Get information about the grid */

   getgridinfo_wf__(&ingrid, &ncol, &nrow, &x0, &y0, &dx, &dy, &rot, ierr);
   if (*ierr == 1)
   {
      goto L9999;
   }

   /*  Check grid dimensions and register an error if it is too big to handle
 */

   if (ncol > 1000)
   {
      registererr_wf__(&c__2000, "example", 7L);
      seterrparmi_wf__(&c__1, &ncol);
      seterrparmi_wf__(&c__2, &c__1000);
      *ierr = 1;
      goto L9999;
   }

   /*  Open the output grid. Supply the grid name and size. */

   newgrid_wf__(&outgrid, outfile, &ncol, &nrow, &x0, &y0, &dx, &dy, &rot,
                ierr, outfile_len);
   if (*ierr == 1)
   {
      goto L9999;
   }

   /* Grid values are accessed through the global structure's PG. Because the
 PG*/
   /* is a direct access structure, the grid row or column must be specified.
*/
   /* In addition, the size of the array must be specified. The first row is 
row "1",*/
   /*  to conform to the default FORTRAN convention. */

   /* Add a % progress indicator, call it every inc iterations */
   progname_wf__("Processing Grid", &c__1, 15L);
   progupdate_wf__(&c__0);
   inc = (nrow - 2) / 150;
   if (inc < 2)
   {
      inc = 0;
   }
   /*  Loop over the grid */
   i__1 = nrow;
   for (i = 1; i <= i__1; ++i)
   {
      /*  Track progress */
      if (inc == 0 || i % inc == 0)
      {
         i__2 = i - 1;
         progupdatel_wf__(&i__2, &nrow);
         checkstop_wf__(ierr);
         if (*ierr == 1)
         {
            goto L9999;
         }
      }
      getrow_wf__(&ingrid, &i, &ncol, a, ierr);
      if (*ierr == 1)
      {
         goto L9999;
      }
      i__2 = ncol;
      for (j = 1; j <= i__2; ++j)
      {
         if (a[j - 1] != dummy)
         {
            a[j - 1] *= *factor;
         }
      }
      putrow_wf__(&outgrid, &i, &ncol, a, ierr);
      if (*ierr == 1)
      {
         goto L9999;
      }
   }
   progupdate_wf__(&c__100);
/* Premature exit statement... */
L9999:
   if (ingrid != 0)
   {
      closegrid_wf__(&ingrid, ierr);
   }
   if (outgrid != 0)
   {
      closegrid_wf__(&outgrid, ierr);
   }
   GS_RETURN(0);
   DEBUG_UNSTACK
} /* example_ */
