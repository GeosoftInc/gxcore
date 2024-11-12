// Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
#ifndef GX_DISPOSABLE_MANAGED_H
#define GX_DISPOSABLE_MANAGED_H

#include "gx_disposable.h"

using namespace System;
using namespace System::Runtime::InteropServices;

public ref class GXDisposableManaged
{
private:
	delegate void DisposeOfGXDisposableManagedDelegate(IntPtr ptr_to_managed);
	static void DisposeOfGXDisposableManaged(IntPtr ptr_to_managed)
	{
		auto this_managed_disposable = (GXDisposableManaged^)(GCHandle::FromIntPtr(ptr_to_managed).Target);
		this_managed_disposable->release(true);
	}

	IDisposable^ m_disposable;
	GXDisposable* m_gx_disposable = nullptr;
	GCHandle m_gch;
	DisposeOfGXDisposableManagedDelegate^ m_dispose_delegate;

	void release(bool call_disposable)
	{
		if (call_disposable && m_disposable)
			delete m_disposable;
		m_disposable = nullptr;
		if (m_gx_disposable)
			delete m_gx_disposable;
		m_gx_disposable = nullptr;
		m_dispose_delegate = nullptr;
		if (m_gch.IsAllocated)
			m_gch.Free();
	}

public:
	GXDisposableManaged(IDisposable^ disposable)
	{
		m_disposable = disposable;
		m_dispose_delegate = gcnew DisposeOfGXDisposableManagedDelegate(DisposeOfGXDisposableManaged);
		auto fp_gch_delegate = Marshal::GetFunctionPointerForDelegate(m_dispose_delegate);
		m_gx_disposable = new GXDisposable();
		m_gch = GCHandle::Alloc(this);
		m_gx_disposable->pHandle = static_cast<IntPtr>(m_gch).ToPointer();
		m_gx_disposable->disposeCallback = static_cast<GX_DISPOSABLE_CALLBACK>(fp_gch_delegate.ToPointer());
	}


	IntPtr get_gx_disposable() {
		return IntPtr(m_gx_disposable);
	}

	~GXDisposableManaged() { this->!GXDisposableManaged(); }
	!GXDisposableManaged() {
		release(false);
	}
};

#endif // GX_DISPOSABLE_MANAGED_H
