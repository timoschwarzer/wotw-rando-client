#include <interception_macros.h>

namespace app::methods::System::Func_2_MicroProfilerInspector_MetricData_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Func_2_MicroProfilerInspector_MetricData_Object_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x028850C0, app::Object *, Invoke, (app::Func_2_MicroProfilerInspector_MetricData_Object_ * this_ptr, app::MicroProfilerInspector_MetricData arg));
    IL2CPP_REGISTER_METHOD(0x028856B0, app::IAsyncResult *, BeginInvoke, (app::Func_2_MicroProfilerInspector_MetricData_Object_ * this_ptr, app::MicroProfilerInspector_MetricData arg, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::Func_2_MicroProfilerInspector_MetricData_Object_ * this_ptr, app::IAsyncResult * result));
}
