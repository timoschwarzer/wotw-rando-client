#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::TimerThread_InfiniteTimer {
    IL2CPP_REGISTER_METHOD(0x020A8DD0, void, ctor, (app::TimerThread_InfiniteTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasExpired, (app::TimerThread_InfiniteTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A8E20, bool, Cancel, (app::TimerThread_InfiniteTimer * this_ptr))
}
