#include <interception_macros.h>

namespace app::methods::Steamworks::ControllerAnalogActionHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (app::ControllerAnalogActionHandle_t__Boxed * this_ptr, uint64_t value));
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::ControllerAnalogActionHandle_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012F6C0, bool, Equals_1, (app::ControllerAnalogActionHandle_t__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::ControllerAnalogActionHandle_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::ControllerAnalogActionHandle_t x, app::ControllerAnalogActionHandle_t y));
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator____2, (app::ControllerAnalogActionHandle_t x, app::ControllerAnalogActionHandle_t y));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ControllerAnalogActionHandle_t, operator__1, (uint64_t value));
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator__2, (app::ControllerAnalogActionHandle_t that));
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::ControllerAnalogActionHandle_t__Boxed * this_ptr, app::ControllerAnalogActionHandle_t other));
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::ControllerAnalogActionHandle_t__Boxed * this_ptr, app::ControllerAnalogActionHandle_t other));
}
