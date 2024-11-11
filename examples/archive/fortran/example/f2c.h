// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
#define C_MICROSOFT

#include <math.h>

#include <gx_define.h>
#include <gx_lib.h>
#include <gx_extern.h>

// --- CDECL must be defined as cdecl ---

#ifdef pascal
#undef pascal
#endif
#define pascal __cdecl
#define GS_CDECL __cdecl
#define GS_EXPORT __declspec(dllexport)
#define GS_EXPDLL __cdecl
#define inline _inline
#define NULL_FUNC_CALL NULL

#define DEBUG_STACK
#define DEBUG_UNSTACK
#define GS_RETURN(A) return (A)
#define GS_VOID_RETURN return

#include <f2clib.h>
#include <forlib.h>


// Include files here that are called between the original f2c'd Fortran files.
