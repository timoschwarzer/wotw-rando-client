#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_UInt32_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02BA1310, void, Write, (app::NonGenericProperytWriter_1_System_UInt32_ * this_ptr, app::TraceLoggingDataCollector * collector, uint32_t * container))
    IL2CPP_REGISTER_METHOD(0x02BA13E0, app::Object *, GetData, (app::NonGenericProperytWriter_1_System_UInt32_ * this_ptr, uint32_t container))
}
