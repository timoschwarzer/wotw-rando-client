#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::InvokeTypeInfo_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02B98CC0, void, __ctor, (InvokeTypeInfo_1_System_Object_ * __this, TypeAnalysis * typeAnalysis));
IL2CPP_REGISTER_METHOD(0x02B98E80, void, WriteMetadata, (InvokeTypeInfo_1_System_Object_ * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02B98F50, void, WriteData, (InvokeTypeInfo_1_System_Object_ * __this, TraceLoggingDataCollector * collector, Object * * value));
IL2CPP_REGISTER_METHOD(0x02B9DCE0, Object *, GetData, (InvokeTypeInfo_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02B9E210, void, WriteObjectData, (InvokeTypeInfo_1_System_Object_ * __this, TraceLoggingDataCollector * collector, Object * valueObj));
}
