#include <interception_macros.h>

namespace app::methods::FramePerformanceMonitor_PerformanceFrameData {
    IL2CPP_REGISTER_METHOD(0x00139B80, void, __ctor, (app::FramePerformanceMonitor_PerformanceFrameData__Boxed * this_ptr, app::FramePerformanceMonitor_PerformanceEntry * root, bool garbage_collection, float last_garbage_collection_time));
    IL2CPP_REGISTER_METHOD(0x00139B90, void, Write, (app::FramePerformanceMonitor_PerformanceFrameData__Boxed * this_ptr, app::StreamWriter * writer));
}
