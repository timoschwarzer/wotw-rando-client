#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Moon_MoonTrail_SimulationFrameData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_Moon_MoonTrail_SimulationFrameData_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02B85BA0, int32_t, Invoke, (app::Comparison_1_Moon_MoonTrail_SimulationFrameData_ * this_ptr, app::MoonTrail_SimulationFrameData x, app::MoonTrail_SimulationFrameData y));
    IL2CPP_REGISTER_METHOD(0x02B8C180, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Moon_MoonTrail_SimulationFrameData_ * this_ptr, app::MoonTrail_SimulationFrameData x, app::MoonTrail_SimulationFrameData y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_MoonTrail_SimulationFrameData_ * this_ptr, app::IAsyncResult * result));
}
