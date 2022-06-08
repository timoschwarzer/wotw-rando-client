#include <interception_macros.h>

namespace app::methods::System::Threading::ExecutionContext {
IL2CPP_REGISTER_METHOD(0x027DBB80, bool, get_isNewCapture, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x027DBB90, void, set_isNewCapture, (ExecutionContext * __this, bool value));
IL2CPP_REGISTER_METHOD(0x027DBBB0, bool, get_isFlowSuppressed, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x027DBBC0, void, set_isFlowSuppressed, (ExecutionContext * __this, bool value));
IL2CPP_REGISTER_METHOD(0x027DBBE0, ExecutionContext *, get_PreAllocatedDefault, ());
IL2CPP_REGISTER_METHOD(0x027DBC80, bool, get_IsPreAllocatedDefault, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x027DBC90, void, __ctor, (ExecutionContext * __this, bool isPreAllocatedDefault));
IL2CPP_REGISTER_METHOD(0x027DBCA0, Object *, GetLocalValue, (IAsyncLocal * local));
IL2CPP_REGISTER_METHOD(0x027DBCE0, void, SetLocalValue, (IAsyncLocal * local, Object * newValue, bool needChangeNotifications));
IL2CPP_REGISTER_METHOD(0x027DC250, void, OnAsyncLocalContextChanged, (ExecutionContext * previous, ExecutionContext * current));
IL2CPP_REGISTER_METHOD(0x027DC710, LogicalCallContext *, get_LogicalCallContext, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_LogicalCallContext, (ExecutionContext * __this, LogicalCallContext * value));
IL2CPP_REGISTER_METHOD(0x027DC860, IllogicalCallContext *, get_IllogicalCallContext, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_IllogicalCallContext, (ExecutionContext * __this, IllogicalCallContext * value));
IL2CPP_REGISTER_METHOD(0x002FA280, SynchronizationContext *, get_SynchronizationContext, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SynchronizationContext, (ExecutionContext * __this, SynchronizationContext * value));
IL2CPP_REGISTER_METHOD(0x002FB930, SynchronizationContext *, get_SynchronizationContextNoFlow, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SynchronizationContextNoFlow, (ExecutionContext * __this, SynchronizationContext * value));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, Dispose, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x027DC9B0, void, Run, (ExecutionContext * executionContext, ContextCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04719548, ExecutionContext_Run__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DCB00, void, Run, (ExecutionContext * executionContext, ContextCallback * callback, Object * state, bool preserveSyncCtx));
IL2CPP_REGISTER_METHOD(0x027DCBE0, void, RunInternal, (ExecutionContext * executionContext, ContextCallback * callback, Object * state, bool preserveSyncCtx));
IL2CPP_REGISTER_METHOD(0x027DCEE0, void, EstablishCopyOnWriteScope, (ExecutionContextSwitcher * ecsw));
IL2CPP_REGISTER_METHOD(0x027DCFB0, void, EstablishCopyOnWriteScope, (Thread * currentThread, bool knownNullWindowsIdentity, ExecutionContextSwitcher * ecsw));
IL2CPP_REGISTER_METHOD(0x027DCFE0, ExecutionContextSwitcher, SetExecutionContext, (ExecutionContext * executionContext, bool preserveSyncCtx));
IL2CPP_REGISTER_METHODINFO(0x047453C0, ExecutionContext_SetExecutionContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DD160, ExecutionContext *, CreateCopy, (ExecutionContext * __this));
IL2CPP_REGISTER_METHODINFO(0x04763EE8, ExecutionContext_CreateCopy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DD380, ExecutionContext *, CreateMutableCopy, (ExecutionContext * __this));
IL2CPP_REGISTER_METHOD(0x027DD6B0, bool, IsFlowSuppressed, ());
IL2CPP_REGISTER_METHOD(0x027DD6E0, ExecutionContext *, Capture, ());
IL2CPP_REGISTER_METHOD(0x027DD780, ExecutionContext *, FastCapture, ());
IL2CPP_REGISTER_METHOD(0x027DD820, ExecutionContext *, Capture, (StackCrawlMark__Enum * stackMark, ExecutionContext_CaptureOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x027DDAD0, void, GetObjectData, (ExecutionContext * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0478B5A0, ExecutionContext_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DDBF0, void, __ctor, (ExecutionContext * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x027DDD20, bool, IsDefaultFTContext, (ExecutionContext * __this, bool ignoreSyncCtx));
IL2CPP_REGISTER_METHOD(0x027DDDC0, void, __cctor, ());
}
