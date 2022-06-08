#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Process {
IL2CPP_REGISTER_METHOD(0x01FFE840, void, __ctor, (Process * __this));
IL2CPP_REGISTER_METHOD(0x01FFE900, void, __ctor, (Process * __this, String * machineName, bool isRemoteMachine, int32_t processId, ProcessInfo * processInfo));
IL2CPP_REGISTER_METHOD(0x01FFE9E0, bool, get_Associated, (Process * __this));
IL2CPP_REGISTER_METHOD(0x01FFE9F0, bool, get_HasExited, (Process * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B248, Process_get_HasExited__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFEE00, void *, get_Handle, (Process * __this));
IL2CPP_REGISTER_METHOD(0x01FFEF30, int32_t, get_Id, (Process * __this));
IL2CPP_REGISTER_METHOD(0x01FFEF50, ProcessStartInfo *, get_StartInfo, (Process * __this));
IL2CPP_REGISTER_METHOD(0x01FFF1D0, ISynchronizeInvoke *, get_SynchronizingObject, (Process * __this));
IL2CPP_REGISTER_METHOD(0x01FFF330, StreamWriter *, get_StandardInput, (Process * __this));
IL2CPP_REGISTER_METHODINFO(0x0478CDF8, Process_get_StandardInput__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFF400, StreamReader *, get_StandardOutput, (Process * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D8D0, Process_get_StandardOutput__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFF520, void, ReleaseProcessHandle, (Process * __this, SafeProcessHandle * handle));
IL2CPP_REGISTER_METHOD(0x01FFF550, void, CompletionCallback, (Process * __this, Object * context, bool wasSignaled));
IL2CPP_REGISTER_METHODINFO(0x04733628, Process_CompletionCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFF570, void, Dispose, (Process * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01FFF5C0, void, Close, (Process * __this));
IL2CPP_REGISTER_METHOD(0x01FFF7B0, void, EnsureState, (Process * __this, Process_State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x047358D0, Process_EnsureState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFFA10, void, EnsureWatchingForExit, (Process * __this));
IL2CPP_REGISTER_METHODINFO(0x04716BF8, Process_EnsureWatchingForExit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFFD40, Process *, GetCurrentProcess, ());
IL2CPP_REGISTER_METHOD(0x01FFFF20, void, OnExited, (Process * __this));
IL2CPP_REGISTER_METHOD(0x02000160, SafeProcessHandle *, GetProcessHandle, (Process * __this, int32_t access, bool throwIfExited));
IL2CPP_REGISTER_METHODINFO(0x0475EEE0, Process_GetProcessHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02000670, SafeProcessHandle *, GetProcessHandle, (Process * __this, int32_t access));
IL2CPP_REGISTER_METHOD(0x02000680, SafeProcessHandle *, OpenProcessHandle, (Process * __this, int32_t access));
IL2CPP_REGISTER_METHODINFO(0x047476C8, Process_OpenProcessHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02000790, void, Refresh, (Process * __this));
IL2CPP_REGISTER_METHOD(0x020007B0, void, SetProcessHandle, (Process * __this, SafeProcessHandle * processHandle));
IL2CPP_REGISTER_METHOD(0x020007D0, void, SetProcessId, (Process * __this, int32_t processId));
IL2CPP_REGISTER_METHOD(0x020007E0, bool, Start, (Process * __this));
IL2CPP_REGISTER_METHODINFO(0x047341A0, Process_Start__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020008F0, void, Kill, (Process * __this));
IL2CPP_REGISTER_METHODINFO(0x0471BC80, Process_Kill__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02000A70, void, StopWatchingForExit, (Process * __this));
IL2CPP_REGISTER_METHOD(0x02000B80, String *, ToString, (Process * __this));
IL2CPP_REGISTER_METHOD(0x02000CE0, bool, WaitForExit, (Process * __this, int32_t milliseconds));
IL2CPP_REGISTER_METHOD(0x02001070, void, WaitForExit, (Process * __this));
IL2CPP_REGISTER_METHOD(0x02001080, String *, ProcessName_internal, (void * handle));
IL2CPP_REGISTER_METHOD(0x02001180, String *, ProcessName_internal, (SafeProcessHandle * handle));
IL2CPP_REGISTER_METHOD(0x020013D0, String *, get_ProcessName, (Process * __this));
IL2CPP_REGISTER_METHODINFO(0x047754D0, Process_get_ProcessName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShellExecuteEx_internal, (ProcessStartInfo * startInfo, Process_ProcInfo * procInfo));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CreateProcess_internal, (ProcessStartInfo * startInfo, void * stdin_1, void * stdout_1, void * stderr_1, Process_ProcInfo * procInfo));
IL2CPP_REGISTER_METHOD(0x02001630, bool, StartWithShellExecuteEx, (Process * __this, ProcessStartInfo * startInfo));
IL2CPP_REGISTER_METHODINFO(0x0478BC48, Process_StartWithShellExecuteEx__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02001A20, void, CreatePipe, (void * * read, void * * write, bool writeDirection));
IL2CPP_REGISTER_METHODINFO(0x0471EBC0, Process_CreatePipe__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02001DA0, bool, get_IsWindows, ());
IL2CPP_REGISTER_METHOD(0x02001DE0, bool, StartWithCreateProcess, (Process * __this, ProcessStartInfo * startInfo));
IL2CPP_REGISTER_METHODINFO(0x0474FAF0, Process_StartWithCreateProcess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02003370, void, FillUserInfo, (ProcessStartInfo * startInfo, Process_ProcInfo * procInfo));
IL2CPP_REGISTER_METHOD(0x020034F0, void, RaiseOnExited, (Process * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
