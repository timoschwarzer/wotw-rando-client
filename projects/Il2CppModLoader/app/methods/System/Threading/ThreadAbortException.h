#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::ThreadAbortException {
    IL2CPP_REGISTER_METHOD(0x02344330, void, ctor_1, (app::ThreadAbortException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_2, (app::ThreadAbortException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
