#include <interception_macros.h>

namespace app::methods::UnityEngine::UnitySynchronizationContext {
    IL2CPP_REGISTER_METHOD(0x02C71310, void, __ctor_1, (app::UnitySynchronizationContext * this_ptr, int32_t main_thread_i_d));
    IL2CPP_REGISTER_METHOD(0x02C715B0, void, __ctor_2, (app::UnitySynchronizationContext * this_ptr, app::List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * queue, int32_t main_thread_i_d));
    IL2CPP_REGISTER_METHOD(0x02C71760, void, Send, (app::UnitySynchronizationContext * this_ptr, app::SendOrPostCallback * callback, app::Object * state));
    IL2CPP_REGISTER_METHOD(0x02C71AC0, void, OperationStarted, (app::UnitySynchronizationContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C71AD0, void, OperationCompleted, (app::UnitySynchronizationContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C71AE0, void, Post, (app::UnitySynchronizationContext * this_ptr, app::SendOrPostCallback * callback, app::Object * state));
    IL2CPP_REGISTER_METHOD(0x02C71C60, app::SynchronizationContext *, CreateCopy, (app::UnitySynchronizationContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C71DC0, void, Exec, (app::UnitySynchronizationContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C72110, bool, HasPendingTasks, (app::UnitySynchronizationContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C721C0, void, InitializeSynchronizationContext, ());
    IL2CPP_REGISTER_METHOD(0x02C723A0, void, ExecuteTasks, ());
    IL2CPP_REGISTER_METHOD(0x02C72460, bool, ExecutePendingTasks, (int64_t milliseconds_timeout));
}
