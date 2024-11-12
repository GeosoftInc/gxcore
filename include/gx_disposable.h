// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
#ifndef GX_DISPOSABLE_H
#define GX_DISPOSABLE_H

typedef void(__stdcall* GX_DISPOSABLE_CALLBACK)(void*);

typedef struct
{
	void* pHandle;
	GX_DISPOSABLE_CALLBACK disposeCallback;
} GXDisposable;



#endif // GX_DISPOSABLE_H
