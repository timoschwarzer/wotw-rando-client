#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventSourceCreatedEventArgs {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_EventSource, (app::EventSourceCreatedEventArgs * this_ptr, app::EventSource * value))
    IL2CPP_REGISTER_METHOD(0x019FD360, void, ctor, (app::EventSourceCreatedEventArgs * this_ptr))
}
