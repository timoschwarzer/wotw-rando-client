#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Gui::GuiBeginArea {
    IL2CPP_REGISTER_METHOD(0x019889A0, void, ctor_1, (app::GuiBeginArea * this_ptr, app::Rect area))
    IL2CPP_REGISTER_METHOD(0x019889C0, void, ctor_2, (app::GuiBeginArea * this_ptr, app::Rect area, app::String * content))
    IL2CPP_REGISTER_METHOD(0x01988AB0, void, ctor_3, (app::GuiBeginArea * this_ptr, app::Rect area, app::String * content, app::String * style))
    IL2CPP_REGISTER_METHOD(0x01988C10, void, Dispose, (app::GuiBeginArea * this_ptr))
}
