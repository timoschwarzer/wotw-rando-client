#include <interception_macros.h>

namespace app::methods::System_Threading_Tasks::Task_1_Task_ {
IL2CPP_REGISTER_METHOD(0x0277FBD0, ConfiguredTaskAwaitable_1_System_Threading_Tasks_Task_, ConfigureAwait, (app::Task_1_Task_ * this_ptr, bool continue_on_captured_context));
IL2CPP_REGISTER_METHODINFO(0x0478C260, Task_1_Task__ConfigureAwait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277FA00, TaskFactory_1_Task_ *, get_Factory, ());
IL2CPP_REGISTER_METHODINFO(0x04701080, Task_1_Task__get_Factory__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5ACF0, void, __ctor, (app::Task_1_Task_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04711590, Task_1_Task___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5BE90, bool, TrySetResult, (app::Task_1_Task_ * this_ptr, app::Task * result));
IL2CPP_REGISTER_METHODINFO(0x0478B978, Task_1_Task__TrySetResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C50A0, TaskAwaiter_1_System_Threading_Tasks_Task_, GetAwaiter, (app::Task_1_Task_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475FD90, Task_1_Task__GetAwaiter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5BF40, Task *, ContinueWith, (app::Task_1_Task_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__5 * continuation_action));
IL2CPP_REGISTER_METHODINFO(0x04747660, Task_1_Task__ContinueWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5A760, Task *, get_Result, (app::Task_1_Task_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0476CB90, Task_1_Task__get_Result__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5A860, void, InnerInvoke, (app::Task_1_Task_ * this_ptr));
}
