#include <interception_macros.h>

namespace app::methods::TargetFPSSlider {
    IL2CPP_REGISTER_METHOD(0x00CE21F0, void, Awake, (app::TargetFPSSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CE2240, float, get_Value, (app::TargetFPSSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CE22F0, void, set_Value, (app::TargetFPSSlider * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00CE23B0, app::String *, GetValueToDisplay, (app::TargetFPSSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00867970, void, __ctor, (app::TargetFPSSlider * this_ptr));
}
