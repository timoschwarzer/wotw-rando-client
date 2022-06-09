#include <interception_macros.h>

namespace app::methods::UnityEngine::GUITexture {
    IL2CPP_REGISTER_METHOD(0x02526F10, app::Color, get_color, (app::GUITexture * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02526F90, void, set_color, (app::GUITexture * this_ptr, app::Color value));
    IL2CPP_REGISTER_METHOD(0x02526FF0, void, set_texture, (app::GUITexture * this_ptr, app::Texture * value));
    IL2CPP_REGISTER_METHOD(0x02527050, void, get_color_Injected, (app::GUITexture * this_ptr, app::Color * ret));
    IL2CPP_REGISTER_METHOD(0x025270B0, void, set_color_Injected, (app::GUITexture * this_ptr, app::Color * value));
}
