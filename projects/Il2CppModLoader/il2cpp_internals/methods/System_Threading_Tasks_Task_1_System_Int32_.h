#include <interception_macros.h>

namespace app::methods::System_Threading_Tasks::Task_1_System_Int32_ {
IL2CPP_REGISTER_METHOD(0x02A58F00, int32_t, get_Result, (app::Task_1_System_Int32_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04743AD0, Task_1_System_Int32__get_Result__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C50A0, TaskAwaiter_1_System_Int32_, GetAwaiter, (app::Task_1_System_Int32_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473F888, Task_1_System_Int32__GetAwaiter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A57EC0, void, __ctor_1, (app::Task_1_System_Int32_ * this_ptr, bool canceled, int32_t result, app::TaskCreationOptions__Enum creation_options, app::CancellationToken ct));
IL2CPP_REGISTER_METHODINFO(0x0475DEF0, Task_1_System_Int32___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A57FB0, void, __ctor_2, (app::Task_1_System_Int32_ * this_ptr, app::Func_2_Object_Int32_ * function, app::Object * state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options));
IL2CPP_REGISTER_METHODINFO(0x04759638, Task_1_System_Int32___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277FBD0, ConfiguredTaskAwaitable_1_System_Int32_, ConfigureAwait, (app::Task_1_System_Int32_ * this_ptr, bool continue_on_captured_context));
IL2CPP_REGISTER_METHODINFO(0x04711150, Task_1_System_Int32__ConfigureAwait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A57C20, void, __ctor_3, (app::Task_1_System_Int32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A57CD0, void, __ctor_4, (app::Task_1_System_Int32_ * this_ptr, app::Object * state, app::TaskCreationOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x02A57DA0, void, __ctor_5, (app::Task_1_System_Int32_ * this_ptr, int32_t result));
IL2CPP_REGISTER_METHOD(0x02A580F0, void, __ctor_6, (app::Task_1_System_Int32_ * this_ptr, app::Func_1_Int32_ * value_selector, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
IL2CPP_REGISTER_METHOD(0x02A58220, void, __ctor_7, (app::Task_1_System_Int32_ * this_ptr, app::Func_1_Int32_ * value_selector, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x0477AC30, Task_1_System_Int32___ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A58370, void, __ctor_8, (app::Task_1_System_Int32_ * this_ptr, app::Func_2_Object_Int32_ * value_selector, app::Object * state, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
IL2CPP_REGISTER_METHOD(0x02A584A0, void, __ctor_9, (app::Task_1_System_Int32_ * this_ptr, app::Delegate * value_selector, app::Object * state, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x04763500, Task_1_System_Int32___ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A58600, Task_1_System_Int32_ *, StartNew_1, (app::Task * parent, app::Func_1_Int32_ * function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
IL2CPP_REGISTER_METHODINFO(0x04777E30, Task_1_System_Int32__StartNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A58910, Task_1_System_Int32_ *, StartNew_2, (app::Task * parent, app::Func_2_Object_Int32_ * function, app::Object * state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
IL2CPP_REGISTER_METHODINFO(0x04791940, Task_1_System_Int32__StartNew_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A58C20, String *, get_DebuggerDisplayResultDescription, (app::Task_1_System_Int32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A58D10, String *, get_DebuggerDisplayMethodDescription, (app::Task_1_System_Int32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A58E00, bool, TrySetResult, (app::Task_1_System_Int32_ * this_ptr, int32_t result));
IL2CPP_REGISTER_METHOD(0x02A58EB0, void, DangerousSetResult, (app::Task_1_System_Int32_ * this_ptr, int32_t result));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_ResultOnSuccess, (app::Task_1_System_Int32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A58F50, int32_t, GetResultCore, (app::Task_1_System_Int32_ * this_ptr, bool wait_completion_notification));
IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (app::Task_1_System_Int32_ * this_ptr, app::Object * exception_object));
IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled_1, (app::Task_1_System_Int32_ * this_ptr, app::CancellationToken token_to_record));
IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled_2, (app::Task_1_System_Int32_ * this_ptr, app::CancellationToken token_to_record, app::Object * cancellation_exception));
IL2CPP_REGISTER_METHOD(0x0277FA00, TaskFactory_1_System_Int32_ *, get_Factory, ());
IL2CPP_REGISTER_METHOD(0x02A58FF0, void, InnerInvoke, (app::Task_1_System_Int32_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A590C0, Task *, ContinueWith_1, (app::Task_1_System_Int32_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__7 * continuation_action));
IL2CPP_REGISTER_METHOD(0x02A591C0, Task *, ContinueWith_2, (app::Task_1_System_Int32_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__7 * continuation_action, app::TaskScheduler * scheduler, app::CancellationToken cancellation_token, app::TaskContinuationOptions__Enum continuation_options, app::StackCrawlMark__Enum * stack_mark));
IL2CPP_REGISTER_METHODINFO(0x0472C248, Task_1_System_Int32__ContinueWith_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02780010, void, __cctor, ());
}
