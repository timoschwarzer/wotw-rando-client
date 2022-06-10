#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::SemaphoreSlim {
    IL2CPP_REGISTER_METHOD(0x0232AD00, int32_t, get_CurrentCount, (app::SemaphoreSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232AD10, void, ctor_1, (app::SemaphoreSlim * this_ptr, int32_t initial_count))
    IL2CPP_REGISTER_METHOD(0x0232AD20, void, ctor_2, (app::SemaphoreSlim * this_ptr, int32_t initial_count, int32_t max_count))
    IL2CPP_REGISTER_METHODINFO(0x04789EF8, SemaphoreSlim__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232AFA0, void, Wait_1, (app::SemaphoreSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232AFB0, bool, Wait_2, (app::SemaphoreSlim * this_ptr, int32_t milliseconds_timeout))
    IL2CPP_REGISTER_METHOD(0x0232AFC0, bool, Wait_3, (app::SemaphoreSlim * this_ptr, int32_t milliseconds_timeout, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHODINFO(0x04780980, SemaphoreSlim_Wait_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232B5C0, bool, WaitUntilCountOrTimeout, (app::SemaphoreSlim * this_ptr, int32_t milliseconds_timeout, uint32_t start_time, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0232B670, app::Task *, WaitAsync_1, (app::SemaphoreSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232B680, app::Task_1_System_Boolean_ *, WaitAsync_2, (app::SemaphoreSlim * this_ptr, int32_t milliseconds_timeout, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHODINFO(0x04781368, SemaphoreSlim_WaitAsync_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232BAB0, app::SemaphoreSlim_TaskNode *, CreateAndAddAsyncWaiter, (app::SemaphoreSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232BD20, bool, RemoveAsyncWaiter, (app::SemaphoreSlim * this_ptr, app::SemaphoreSlim_TaskNode * task))
    IL2CPP_REGISTER_METHOD(0x0232BDB0, app::Task_1_System_Boolean_ *, WaitUntilCountOrTimeoutAsync, (app::SemaphoreSlim * this_ptr, app::SemaphoreSlim_TaskNode * async_waiter, int32_t milliseconds_timeout, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0232BEF0, int32_t, Release_1, (app::SemaphoreSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232BF00, int32_t, Release_2, (app::SemaphoreSlim * this_ptr, int32_t release_count))
    IL2CPP_REGISTER_METHODINFO(0x04776B48, SemaphoreSlim_Release_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232C210, void, QueueWaiterTask, (app::SemaphoreSlim_TaskNode * waiter_task))
    IL2CPP_REGISTER_METHOD(0x0232C220, void, Dispose_1, (app::SemaphoreSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232C2D0, void, Dispose_2, (app::SemaphoreSlim * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x0232C340, void, CancellationTokenCanceledEventHandler, (app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x047105A0, SemaphoreSlim_CancellationTokenCanceledEventHandler__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232C4D0, void, CheckDispose, (app::SemaphoreSlim * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470AA70, SemaphoreSlim_CheckDispose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String *, GetResourceString, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x0232C5B0, void, cctor, ())
}
