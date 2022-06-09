#include <interception_macros.h>

namespace app::methods::MessageZoneB {
    IL2CPP_REGISTER_METHOD(0x0159DAA0, void, Awake, (app::MessageZoneB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0159DB90, void, OnDestroy, (app::MessageZoneB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0159DC30, Rect, get_Bounds, (app::MessageZoneB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0159DDB0, void, FixedUpdate, (app::MessageZoneB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (app::MessageZoneB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (app::MessageZoneB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, (app::MessageZoneB * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x003FF2B0, SuspendableMask__Enum, get_Mask, (app::MessageZoneB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0159E1D0, void, set_Mask, (app::MessageZoneB * this_ptr, app::SuspendableMask__Enum value));
    IL2CPP_REGISTER_METHOD(0x0159E280, void, __ctor, (app::MessageZoneB * this_ptr));
} // namespace app::methods::MessageZoneB
