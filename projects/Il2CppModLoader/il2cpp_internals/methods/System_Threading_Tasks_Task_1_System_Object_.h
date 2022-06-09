#include <interception_macros.h>

namespace app::methods::System_Threading_Tasks::Task_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02A5BCF0, app::String *, get_DebuggerDisplayResultDescription, (app::Task_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A5BDA0, app::String *, get_DebuggerDisplayMethodDescription, (app::Task_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A5A760, app::Object *, get_Result, (app::Task_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04749FA8, Task_1_System_Object__get_Result__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Object *, get_ResultOnSuccess, (app::Task_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0277FA00, app::TaskFactory_1_System_Object_ *, get_Factory, ());
    IL2CPP_REGISTER_METHOD(0x02A5ACF0, void, __ctor_1, (app::Task_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A5ADA0, void, __ctor_2, (app::Task_1_System_Object_ * this_ptr, app::Object * state, app::TaskCreationOptions__Enum options));
    IL2CPP_REGISTER_METHOD(0x02A5AE70, void, __ctor_3, (app::Task_1_System_Object_ * this_ptr, app::Object * result));
    IL2CPP_REGISTER_METHOD(0x02A5AF90, void, __ctor_4, (app::Task_1_System_Object_ * this_ptr, bool canceled, app::Object * result, app::TaskCreationOptions__Enum creation_options, app::CancellationToken ct));
    IL2CPP_REGISTER_METHOD(0x02A5B080, void, __ctor_5, (app::Task_1_System_Object_ * this_ptr, app::Func_2_Object_Object_ * function, app::Object * state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options));
    IL2CPP_REGISTER_METHOD(0x02A5B1C0, void, __ctor_6, (app::Task_1_System_Object_ * this_ptr, app::Func_1_Object_ * value_selector, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHOD(0x02A5B2F0, void, __ctor_7, (app::Task_1_System_Object_ * this_ptr, app::Func_1_Object_ * value_selector, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler));
    IL2CPP_REGISTER_METHODINFO(0x04701AF0, Task_1_System_Object___ctor_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A5B440, void, __ctor_8, (app::Task_1_System_Object_ * this_ptr, app::Func_2_Object_Object_ * value_selector, app::Object * state, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHOD(0x02A5B570, void, __ctor_9, (app::Task_1_System_Object_ * this_ptr, app::Delegate * value_selector, app::Object * state, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler));
    IL2CPP_REGISTER_METHODINFO(0x0477A5F8, Task_1_System_Object___ctor_8__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A5B6D0, app::Task_1_System_Object_ *, StartNew_1, (app::Task * parent, app::Func_1_Object_ * function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHODINFO(0x0475FE08, Task_1_System_Object__StartNew__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A5B9E0, app::Task_1_System_Object_ *, StartNew_2, (app::Task * parent, app::Func_2_Object_Object_ * function, app::Object * state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHODINFO(0x047552E0, Task_1_System_Object__StartNew_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A5BE90, bool, TrySetResult, (app::Task_1_System_Object_ * this_ptr, app::Object * result));
    IL2CPP_REGISTER_METHOD(0x02A5A710, void, DangerousSetResult, (app::Task_1_System_Object_ * this_ptr, app::Object * result));
    IL2CPP_REGISTER_METHOD(0x02A5A7B0, app::Object *, GetResultCore, (app::Task_1_System_Object_ * this_ptr, bool wait_completion_notification));
    IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (app::Task_1_System_Object_ * this_ptr, app::Object * exception_object));
    IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled_1, (app::Task_1_System_Object_ * this_ptr, app::CancellationToken token_to_record));
    IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled_2, (app::Task_1_System_Object_ * this_ptr, app::CancellationToken token_to_record, app::Object * cancellation_exception));
    IL2CPP_REGISTER_METHOD(0x02A5A860, void, InnerInvoke, (app::Task_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter_1_System_Object_, GetAwaiter, (app::Task_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0277FBD0, app::ConfiguredTaskAwaitable_1_System_Object_, ConfigureAwait, (app::Task_1_System_Object_ * this_ptr, bool continue_on_captured_context));
    IL2CPP_REGISTER_METHOD(0x02A5BF40, app::Task *, ContinueWith_1, (app::Task_1_System_Object_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__2 * continuation_action));
    IL2CPP_REGISTER_METHOD(0x02A5C040, app::Task *, ContinueWith_2, (app::Task_1_System_Object_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__2 * continuation_action, app::TaskScheduler * scheduler, app::CancellationToken cancellation_token, app::TaskContinuationOptions__Enum continuation_options, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHODINFO(0x04788B30, Task_1_System_Object__ContinueWith_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01542810, app::Task_1_System_Object_ *, ContinueWith_3, (app::Task_1_System_Object_ * this_ptr, app::Func_2_System_Threading_Tasks_Task_1_Object_ * continuation_function));
    IL2CPP_REGISTER_METHOD(0x01542910, app::Task_1_System_Object_ *, ContinueWith_4, (app::Task_1_System_Object_ * this_ptr, app::Func_2_System_Threading_Tasks_Task_1_Object_ * continuation_function, app::TaskScheduler * scheduler, app::CancellationToken cancellation_token, app::TaskContinuationOptions__Enum continuation_options, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHODINFO(0x0474A1D8, Task_1_System_Object__ContinueWith_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02780010, void, __cctor, ());
}
