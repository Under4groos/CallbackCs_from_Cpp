

#include "pch.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define DLL __declspec(dllexport)
	typedef int(__stdcall* ___event_callback_INT)();
	typedef void(__stdcall* ___event_callback)(int);


	DLL void ___cell_function(___event_callback ___event_callback, ___event_callback_INT ___event_callback_int);
	DLL void ___cell(___event_callback ___event_callback);
#ifdef __cplusplus
}
#endif 

DLL void ___cell_function(___event_callback_INT ___event_callback_int, ___event_callback ___event_callback)
{
	if (___event_callback)
	{
		int __id_ = ___event_callback_int();
		___event_callback(__id_);
	}
}
