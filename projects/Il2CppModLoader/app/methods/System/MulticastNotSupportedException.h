#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::MulticastNotSupportedException {
    IL2CPP_REGISTER_METHOD(0x0226F1C0, void, ctor_1, (app::MulticastNotSupportedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226F250, void, ctor_2, (app::MulticastNotSupportedException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::MulticastNotSupportedException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
