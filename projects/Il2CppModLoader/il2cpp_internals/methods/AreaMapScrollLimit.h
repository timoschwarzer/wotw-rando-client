#include <interception_macros.h>

namespace app::methods::AreaMapScrollLimit {
    IL2CPP_REGISTER_METHOD(0x00417920, app::SelectableCategory__Enum, get_Category, (app::AreaMapScrollLimit * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0083AB50, bool, get_Active, (app::AreaMapScrollLimit * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0083AC30, app::Rect, get_Area, (app::AreaMapScrollLimit * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::AreaMapScrollLimit * this_ptr));
}
