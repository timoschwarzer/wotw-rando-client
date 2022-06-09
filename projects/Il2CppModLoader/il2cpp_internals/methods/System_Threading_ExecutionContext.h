#include <interception_macros.h>

namespace app::methods::System_Threading::ExecutionContext {
    IL2CPP_REGISTER_METHOD(0x027DBB80, bool, get_isNewCapture, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027DBB90, void, set_isNewCapture, (app::ExecutionContext * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x027DBBB0, bool, get_isFlowSuppressed, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027DBBC0, void, set_isFlowSuppressed, (app::ExecutionContext * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x027DBBE0, app::ExecutionContext *, get_PreAllocatedDefault, ());
    IL2CPP_REGISTER_METHOD(0x027DBC80, bool, get_IsPreAllocatedDefault, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027DBC90, void, __ctor_2, (app::ExecutionContext * this_ptr, bool is_pre_allocated_default));
    IL2CPP_REGISTER_METHOD(0x027DBCA0, app::Object *, GetLocalValue, (app::IAsyncLocal * local));
    IL2CPP_REGISTER_METHOD(0x027DBCE0, void, SetLocalValue, (app::IAsyncLocal * local, app::Object * new_value, bool need_change_notifications));
    IL2CPP_REGISTER_METHOD(0x027DC250, void, OnAsyncLocalContextChanged, (app::ExecutionContext * previous, app::ExecutionContext * current));
    IL2CPP_REGISTER_METHOD(0x027DC710, app::LogicalCallContext *, get_LogicalCallContext, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_LogicalCallContext, (app::ExecutionContext * this_ptr, app::LogicalCallContext * value));
    IL2CPP_REGISTER_METHOD(0x027DC860, app::IllogicalCallContext *, get_IllogicalCallContext, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_IllogicalCallContext, (app::ExecutionContext * this_ptr, app::IllogicalCallContext * value));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::SynchronizationContext *, get_SynchronizationContext, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SynchronizationContext, (app::ExecutionContext * this_ptr, app::SynchronizationContext * value));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::SynchronizationContext *, get_SynchronizationContextNoFlow, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SynchronizationContextNoFlow, (app::ExecutionContext * this_ptr, app::SynchronizationContext * value));
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Dispose, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027DC9B0, void, Run_1, (app::ExecutionContext * execution_context, app::ContextCallback * callback, app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x04719548, ExecutionContext_Run__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027DCB00, void, Run_2, (app::ExecutionContext * execution_context, app::ContextCallback * callback, app::Object * state, bool preserve_sync_ctx));
    IL2CPP_REGISTER_METHOD(0x027DCBE0, void, RunInternal, (app::ExecutionContext * execution_context, app::ContextCallback * callback, app::Object * state, bool preserve_sync_ctx));
    IL2CPP_REGISTER_METHOD(0x027DCEE0, void, EstablishCopyOnWriteScope_1, (app::ExecutionContextSwitcher * ecsw));
    IL2CPP_REGISTER_METHOD(0x027DCFB0, void, EstablishCopyOnWriteScope_2, (app::Thread * current_thread, bool known_null_windows_identity, app::ExecutionContextSwitcher * ecsw));
    IL2CPP_REGISTER_METHOD(0x027DCFE0, app::ExecutionContextSwitcher, SetExecutionContext, (app::ExecutionContext * execution_context, bool preserve_sync_ctx));
    IL2CPP_REGISTER_METHODINFO(0x047453C0, ExecutionContext_SetExecutionContext__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027DD160, app::ExecutionContext *, CreateCopy, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04763EE8, ExecutionContext_CreateCopy__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027DD380, app::ExecutionContext *, CreateMutableCopy, (app::ExecutionContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027DD6B0, bool, IsFlowSuppressed, ());
    IL2CPP_REGISTER_METHOD(0x027DD6E0, app::ExecutionContext *, Capture_1, ());
    IL2CPP_REGISTER_METHOD(0x027DD780, app::ExecutionContext *, FastCapture, ());
    IL2CPP_REGISTER_METHOD(0x027DD820, app::ExecutionContext *, Capture_2, (app::StackCrawlMark__Enum * stack_mark, app::ExecutionContext_CaptureOptions__Enum options));
    IL2CPP_REGISTER_METHOD(0x027DDAD0, void, GetObjectData, (app::ExecutionContext * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x0478B5A0, ExecutionContext_GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x027DDBF0, void, __ctor_3, (app::ExecutionContext * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x027DDD20, bool, IsDefaultFTContext, (app::ExecutionContext * this_ptr, bool ignore_sync_ctx));
    IL2CPP_REGISTER_METHOD(0x027DDDC0, void, __cctor, ());
}
