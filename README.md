# Call methods C# from C++ 

Магия C++ b C#.

Была задача, реализовать хук на С++ который отслеживал бы нашу мышку и вызывал метод из C#


Magic C# and C++ 
```cs
#CS file 
[UnmanagedFunctionPointer(CallingConvention.StdCall)]
public delegate void ___event_callback(int value);

#---- Dll import 
#Path Dynamic Dll
[DllImport(@"calllib.dll")] 
public static extern void ___cell(
   [MarshalAs(UnmanagedType.FunctionPtr)] ___event_callback ___event_callback
   );
```


Create a new file in the project "Helper.cpp"
```cpp
#ifdef __cplusplus
extern "C"
{
    #Каша которою я плохо понимаю 
#endif
#define DLL __declspec(dllexport)
	typedef int(__stdcall* ___event_callback_INT)();
	typedef void(__stdcall* ___event_callback)(int);

	DLL void ___cell_function(___event_callback ___event_callback, ___event_callback_INT ___event_callback_int);
	DLL void ___cell(___event_callback ___event_callback);
#ifdef __cplusplus
}
#endif

#Дгика нашей функции которую мы вызываем из под С# которая 
#послу вызывает наш метот из C# 

DLL void ___cell_function(___event_callback_INT ___event_callback_int, ___event_callback ___event_callback)
{
	if (___event_callback)
	{
		int __id_ = ___event_callback_int();
		___event_callback(__id_);
	}
}

```