#include <interception_macros.h>

namespace app::methods::Moon_Gui::GizmosChangeColor {
IL2CPP_REGISTER_METHOD(0x01349560, Color, get_PreviousColor, (app::GizmosChangeColor * this_ptr));
IL2CPP_REGISTER_METHOD(0x011927A0, void, set_PreviousColor, (app::GizmosChangeColor * this_ptr, app::Color value));
IL2CPP_REGISTER_METHOD(0x01988840, void, __ctor, (app::GizmosChangeColor * this_ptr, app::Color new_color));
IL2CPP_REGISTER_METHOD(0x01988940, void, Dispose, (app::GizmosChangeColor * this_ptr));
}
