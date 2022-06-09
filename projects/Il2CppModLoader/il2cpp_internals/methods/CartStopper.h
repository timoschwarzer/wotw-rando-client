#include <interception_macros.h>

namespace app::methods::CartStopper {
    IL2CPP_REGISTER_METHOD(0x00B3F810, void, ResetStatics, ());
    IL2CPP_REGISTER_METHOD(0x00B3F8E0, bool, InsideCartStopper_1, (app::Vector3 position, app::Vector3 direction, bool * does_contain));
    IL2CPP_REGISTER_METHOD(0x00B3FBE0, bool, InsideCartStopper_2, (app::Rect cart_bounds, app::CartStopper * * stopper));
    IL2CPP_REGISTER_METHOD(0x00B3FE30, void, Awake, (app::CartStopper * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B40050, void, OnDestroy, (app::CartStopper * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B40130, void, ForceCartActivation, (app::CartStopper * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::CartStopper * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B40400, void, __ctor, (app::CartStopper * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B40490, void, __cctor, ());
}
