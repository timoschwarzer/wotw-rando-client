#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Double_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B39740, void, ctor, (app::ClassPropertyWriter_2_System_Double_System_Object_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B39650, void, Write, (app::ClassPropertyWriter_2_System_Double_System_Object_ * this_ptr, app::TraceLoggingDataCollector * collector, double * container))
    IL2CPP_REGISTER_METHOD(0x02B39930, app::Object *, GetData, (app::ClassPropertyWriter_2_System_Double_System_Object_ * this_ptr, double container))
}
