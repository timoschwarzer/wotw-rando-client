#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CriticalFinalizerObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A93850, void, Finalize, (app::CriticalFinalizerObject * this_ptr))
}
