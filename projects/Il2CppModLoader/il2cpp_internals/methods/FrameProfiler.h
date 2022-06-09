#include <interception_macros.h>

namespace app::methods::FrameProfiler {
    IL2CPP_REGISTER_METHOD(0x03150900, bool, get_Enabled, ());
    IL2CPP_REGISTER_METHOD(0x031509B0, void, set_Enabled, (bool value));
    IL2CPP_REGISTER_METHOD(0x03150BD0, int64_t, GetFrameTimeInNanoSeconds, (app::FrameProfiler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03150CA0, void, __ctor, (app::FrameProfiler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03151410, void, DoBeginFrame, (app::FrameProfiler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DoEndFrame, (app::FrameProfiler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03151640, void, DoBeginMetric, (app::FrameProfiler * this_ptr, app::Metric__Enum metric));
    IL2CPP_REGISTER_METHOD(0x03151770, void, DoEndMetric, (app::FrameProfiler * this_ptr, app::Metric__Enum metric));
    IL2CPP_REGISTER_METHOD(0x031518B0, void, BeginMetric, (app::Metric__Enum metric));
    IL2CPP_REGISTER_METHOD(0x03151A70, void, EndMetric, (app::Metric__Enum metric));
    IL2CPP_REGISTER_METHOD(0x03151C40, void, BeginFrame, ());
    IL2CPP_REGISTER_METHOD(0x03151CF0, void, EndFrame, ());
    IL2CPP_REGISTER_METHOD(0x03151D80, FrameProfiler_FrameData*, GetLastCompletedFrame, (app::FrameProfiler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03151DC0, void, __cctor, ());
} // namespace app::methods::FrameProfiler
