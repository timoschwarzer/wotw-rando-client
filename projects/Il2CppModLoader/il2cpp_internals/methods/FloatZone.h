#include <interception_macros.h>

namespace app::methods::FloatZone {
    IL2CPP_REGISTER_METHOD(0x01271F20, void, Awake, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012721C0, void, OnDestroy, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01272260, void, OnEnable, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01272320, void, OnDisable, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012723E0, void, FixedUpdate, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (app::FloatZone * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x006DC050, SuspendableMask__Enum, get_Mask, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01272700, void, set_Mask, (app::FloatZone * this_ptr, app::SuspendableMask__Enum value));
    IL2CPP_REGISTER_METHOD(0x012727B0, void, UpdateBoundingRectangle, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01272AD0, void, __ctor, (app::FloatZone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01272B00, void, __cctor, ());
} // namespace app::methods::FloatZone
