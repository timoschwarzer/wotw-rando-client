#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::SpinLock_SystemThreading_SpinLockDebugView {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::SpinLock_SystemThreading_SpinLockDebugView * this_ptr, app::SpinLock spin_lock))
    IL2CPP_REGISTER_METHOD(0x0232DFA0, app::Nullable_1_Boolean_, get_IsHeldByCurrentThread, (app::SpinLock_SystemThreading_SpinLockDebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232E050, app::Nullable_1_Int32_, get_OwnerThreadID, (app::SpinLock_SystemThreading_SpinLockDebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232E100, bool, get_IsHeld, (app::SpinLock_SystemThreading_SpinLockDebugView * this_ptr))
}
