#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::SingleTypeInfo {
IL2CPP_REGISTER_METHOD(0x01A07960, void, WriteMetadata, (SingleTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01A07A30, void, WriteData, (SingleTypeInfo * __this, TraceLoggingDataCollector * collector, float * value));
IL2CPP_REGISTER_METHOD(0x01A07B10, void, __ctor, (SingleTypeInfo * __this));
}
