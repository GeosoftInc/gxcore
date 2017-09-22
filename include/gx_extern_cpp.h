//---------------------------------------------------------------------------------
//
// GeoExtern C++ module:  These functions are for Geosoft internal use and are 
//								  not supported for 3rd parties at this stage.
//
//---------------------------------------------------------------------------------

#ifndef GX_EXTERN_CPP_H
#define GX_EXTERN_CPP_H

#include <utf8macros.h>

int vsnprintf_LANG(char *, size_t, const char *, va_list);
long snprintf_GS(char *, long, const char *, ...);
void wsnprintf_GS(wchar_t *, size_t, const char *, ...);

#ifdef  _AFX
inline CString Format2CString(const char *pcFormat, ...)
{
	va_list ap;
	char szDest[4096];

	va_start(ap, pcFormat);

	vsnprintf_LANG(szDest, sizeof(szDest), pcFormat, ap);

	va_end(ap);

	return GC2W(szDest);
}
#endif

#endif
