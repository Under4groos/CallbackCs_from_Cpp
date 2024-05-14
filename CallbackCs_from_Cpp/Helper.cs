using System.Runtime.InteropServices;

namespace CallbackCs_from_Cpp
{
    public static class Helper
    {
        [UnmanagedFunctionPointer(CallingConvention.StdCall)]
        public delegate void ___event_callback(int value);

        [DllImport(@"C:\Users\UnderKo\source\repos\CallbackCs_from_Cpp\x64\Release\calllib.dll")]
        public static extern void ___cell(
           [MarshalAs(UnmanagedType.FunctionPtr)] ___event_callback ___event_callback
           );

    }
}
