#include <interception_macros.h>

namespace app::methods::System_Threading::SpinLock_SystemThreading_SpinLockDebugView {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::SpinLock_SystemThreading_SpinLockDebugView * this_ptr, app::SpinLock spin_lock));
IL2CPP_REGISTER_METHOD(0x0232DFA0, Nullable_1_Boolean_, get_IsHeldByCurrentThread, (app::SpinLock_SystemThreading_SpinLockDebugView * this_ptr));
IL2CPP_REGISTER_METHOD(0x0232E050, Nullable_1_Int32_, get_OwnerThreadID, (app::SpinLock_SystemThreading_SpinLockDebugView * this_ptr));
IL2CPP_REGISTER_METHOD(0x0232E100, bool, get_IsHeld, (app::SpinLock_SystemThreading_SpinLockDebugView * this_ptr));
}
