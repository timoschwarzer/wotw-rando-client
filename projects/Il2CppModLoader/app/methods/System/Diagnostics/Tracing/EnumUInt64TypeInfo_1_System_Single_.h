#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumUInt64TypeInfo_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02B97BC0, void, WriteMetadata, (app::EnumUInt64TypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B97C90, void, WriteData, (app::EnumUInt64TypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingDataCollector * collector, float * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumUInt64TypeInfo_1_System_Single_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt64TypeInfo_1_System_Single_ * this_ptr))
}
