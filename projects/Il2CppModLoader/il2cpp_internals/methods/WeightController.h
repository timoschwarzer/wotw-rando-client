#include <interception_macros.h>

namespace app::methods::WeightController {
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_Weight, (app::WeightController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_Timer, (app::WeightController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00573180, void, set_Timer, (app::WeightController * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00573260, void, __ctor_1, (app::WeightController * this_ptr, float speed_forward, float speed_backward, float initial_timer_value, app::Ease_Easing__Enum easing));
    IL2CPP_REGISTER_METHOD(0x00573280, void, __ctor_2, (app::WeightController * this_ptr, float speed, float initial_timer_value, app::Ease_Easing__Enum easing));
    IL2CPP_REGISTER_METHOD(0x005732A0, void, MoveWeightUp, (app::WeightController * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x005732D0, void, MoveWeightDown, (app::WeightController * this_ptr, float delta_time));
}
