c
      subroutine example(infile, factor, outfile, ierr)
c
c   This example program reads an input grid, multiplies it by
c   a constant factor, and creates a new output grid.
c   It demonstrates how FORTRAN code may be modified to a format
c   suitable for conversion by F2C to C code that is callable
c   from a GX.
c

      parameter (maxcol=1000)

      character*(*) infile, outfile
      real*4 factor, dummy
      real*4 a(maxcol)
      integer*4 ierr, ingrid, outgrid
      data dummy/-1.0e32/
      data ingrid/0/,outgrid/0/

c
c  Input the grid. Supply the grid name.
c
      call OpenGrid_WF(infile, ingrid, ierr)
      if(ierr.eq.1) goto 9999

c
c  Get information about the grid
c
      call GetGridInfo_WF(ingrid, ncol, nrow, x0, y0, dx, dy, rot, 
     &                     ierr)
      if(ierr.eq.1) goto 9999

c
c  Check grid dimensions and register an error if it is too big to handle
c
      if(ncol.gt.maxcol) then
         call RegisterErr_WF(2000,'example')
         call SetErrParmI_WF(1,ncol)
         call SetErrParmI_WF(2,maxcol)
         ierr = 1
         goto 9999
      endif

c
c  Open the output grid. Supply the grid name and size.
c
      call NewGrid_WF(outgrid, outfile, ncol, nrow, x0, y0, dx, dy, 
     &                rot, ierr)
      if(ierr.eq.1) goto 9999

c
c  Grid values are accessed through the global structure's PG. Because the PG
c  is a direct access structure, the grid row or column must be specified.
c  In addition, the size of the array must be specified. The first row is row "1",
c  to conform to the default FORTRAN convention. 
c

c Add a % progress indicator, call it every inc iterations

      call ProgName_WF('Processing Grid',1)
      call ProgUpdate_WF(0)
      inc = (nrow-2)/150       
      if(inc.lt.2) inc=0

c  Loop over the grid

      do i=1,nrow

c  Track progress

         if(inc.eq.0 .or. MOD(i,inc).eq.0) then
            call ProgUpdateL_WF(i-1,nrow)
            call CheckStop_WF(ierr)
            if(ierr.eq.1) goto 9999
         endif

         call GetRow_WF(ingrid,i,ncol,a,ierr)
         if(ierr.eq.1) goto 9999

         do j=1,ncol
            if(a(j).ne.dummy) then
               a(j) = a(j) * factor
            endif
         enddo

         call PutRow_WF(outgrid,i,ncol,a,ierr)
         if(ierr.eq.1) goto 9999

      enddo

      call ProgUpdate_WF(100)

c Premature exit statement...

9999  continue 

      if(ingrid.ne.0) then
         call CloseGrid_WF(ingrid, ierr)
      endif

      if(outgrid.ne.0) then
         call CloseGrid_WF(outgrid, ierr)
      endif

      return
      end
