#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::CharArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01747C20, void, WriteMetadata, (app::CharArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x01747CF0, void, WriteData, (app::CharArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Char__Array * * value));
    IL2CPP_REGISTER_METHOD(0x01747E10, void, __ctor, (app::CharArrayTypeInfo * this_ptr));
}
