#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::Task_1_System::Boolean_ {
IL2CPP_REGISTER_METHOD(0x004C50A0, TaskAwaiter_1_System_Boolean_, GetAwaiter, (Task_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A320, Task_1_System_Boolean__GetAwaiter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277E780, void, __ctor, (Task_1_System_Boolean_ * __this, bool canceled, bool result, TaskCreationOptions__Enum creationOptions, CancellationToken ct));
IL2CPP_REGISTER_METHODINFO(0x0472C720, Task_1_System_Boolean___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277FBD0, ConfiguredTaskAwaitable_1_System_Boolean_, ConfigureAwait, (Task_1_System_Boolean_ * __this, bool continueOnCapturedContext));
IL2CPP_REGISTER_METHODINFO(0x0476C710, Task_1_System_Boolean__ConfigureAwait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277E4E0, void, __ctor, (Task_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E788, Task_1_System_Boolean___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277F6C0, bool, TrySetResult, (Task_1_System_Boolean_ * __this, bool result));
IL2CPP_REGISTER_METHODINFO(0x04700F80, Task_1_System_Boolean__TrySetResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277E590, void, __ctor, (Task_1_System_Boolean_ * __this, Object * state, TaskCreationOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x0277E660, void, __ctor, (Task_1_System_Boolean_ * __this, bool result));
IL2CPP_REGISTER_METHOD(0x0277E870, void, __ctor, (Task_1_System_Boolean_ * __this, Func_2_Object_Boolean_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHOD(0x0277E9B0, void, __ctor, (Task_1_System_Boolean_ * __this, Func_1_Boolean_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x0277EAE0, void, __ctor, (Task_1_System_Boolean_ * __this, Func_1_Boolean_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x04790048, Task_1_System_Boolean___ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277EC30, void, __ctor, (Task_1_System_Boolean_ * __this, Func_2_Object_Boolean_ * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x0277ED60, void, __ctor, (Task_1_System_Boolean_ * __this, Delegate * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x04769D88, Task_1_System_Boolean___ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277EEC0, Task_1_System_Boolean_ *, StartNew, (Task * parent, Func_1_Boolean_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x047560B8, Task_1_System_Boolean__StartNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277F1D0, Task_1_System_Boolean_ *, StartNew, (Task * parent, Func_2_Object_Boolean_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x047399A8, Task_1_System_Boolean__StartNew_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277F4E0, String *, get_DebuggerDisplayResultDescription, (Task_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHOD(0x0277F5D0, String *, get_DebuggerDisplayMethodDescription, (Task_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHOD(0x0277F770, void, DangerousSetResult, (Task_1_System_Boolean_ * __this, bool result));
IL2CPP_REGISTER_METHOD(0x0277F7C0, bool, get_Result, (Task_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_ResultOnSuccess, (Task_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHOD(0x0277F810, bool, GetResultCore, (Task_1_System_Boolean_ * __this, bool waitCompletionNotification));
IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (Task_1_System_Boolean_ * __this, Object * exceptionObject));
IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled, (Task_1_System_Boolean_ * __this, CancellationToken tokenToRecord));
IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled, (Task_1_System_Boolean_ * __this, CancellationToken tokenToRecord, Object * cancellationException));
IL2CPP_REGISTER_METHOD(0x0277FA00, TaskFactory_1_System_Boolean_ *, get_Factory, ());
IL2CPP_REGISTER_METHOD(0x0277FB00, void, InnerInvoke, (Task_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHOD(0x0277FC50, Task *, ContinueWith, (Task_1_System_Boolean_ * __this, Action_1_System_Threading_Tasks_Task_1__6 * continuationAction));
IL2CPP_REGISTER_METHOD(0x0277FD50, Task *, ContinueWith, (Task_1_System_Boolean_ * __this, Action_1_System_Threading_Tasks_Task_1__6 * continuationAction, TaskScheduler * scheduler, CancellationToken cancellationToken, TaskContinuationOptions__Enum continuationOptions, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x047454C0, Task_1_System_Boolean__ContinueWith_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02780010, void, __cctor, ());
}
