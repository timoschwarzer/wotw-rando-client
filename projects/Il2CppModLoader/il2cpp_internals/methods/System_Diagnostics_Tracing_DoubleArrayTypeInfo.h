#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::DoubleArrayTypeInfo {
IL2CPP_REGISTER_METHOD(0x01749480, void, WriteMetadata, (app::DoubleArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01749550, void, WriteData, (app::DoubleArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Double__Array * * value));
IL2CPP_REGISTER_METHOD(0x01749670, void, __ctor, (app::DoubleArrayTypeInfo * this_ptr));
}
