#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::Int64ArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FED50, void, WriteMetadata, (app::Int64ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x019FEE20, void, WriteData, (app::Int64ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Int64__Array * * value));
    IL2CPP_REGISTER_METHOD(0x019FEF40, void, __ctor, (app::Int64ArrayTypeInfo * this_ptr));
}
