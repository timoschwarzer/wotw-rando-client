#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::GuidArrayTypeInfo {
IL2CPP_REGISTER_METHOD(0x019FDEC0, void, WriteMetadata, (app::GuidArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x019FDF90, void, WriteData, (app::GuidArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Guid__Array * * value));
IL2CPP_REGISTER_METHOD(0x019FE0B0, void, __ctor, (app::GuidArrayTypeInfo * this_ptr));
}
