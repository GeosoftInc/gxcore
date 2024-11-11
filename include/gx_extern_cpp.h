// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
//---------------------------------------------------------------------------------
//
// GeoExtern C++ module:  These functions are for Geosoft internal use and are 
//								  not supported for 3rd parties at this stage.
//
//---------------------------------------------------------------------------------

#ifndef GX_EXTERN_CPP_H
#define GX_EXTERN_CPP_H

#include <utf8macros.h>

int snprintf_GS(char* const pc, size_t const buffer_count, char const* const format, ...);
void wsnprintf_GS(wchar_t* wszDest, size_t size, const char* pcFmt, ...);

#ifdef  _AFX
template <typename... Args>
inline CString Format2CString(const char* pcFormat, Args... args)
{
   char szDest[4096];
 
   snprintf_GS(szDest, sizeof(szDest), pcFormat, args...);
   
   return GC2W(szDest);
}
#endif

#endif
