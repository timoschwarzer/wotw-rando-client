#include <interception_macros.h>

namespace app::methods::Moon_UberStateVisualization::SerializedIntUberStateWrapper {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::SerializedIntUberStateWrapper * this_ptr, app::ISerializedUberState * state));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsActive, (app::SerializedIntUberStateWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsActive, (app::SerializedIntUberStateWrapper * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x030BE9C0, int32_t, GetValue, (app::SerializedIntUberStateWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x030BE9F0, void, HandleInput, (app::SerializedIntUberStateWrapper * this_ptr, app::ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x030BEA70, void, OnGui, (app::SerializedIntUberStateWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x030BECB0, void, SetValue, (app::SerializedIntUberStateWrapper * this_ptr, int32_t value));
}
