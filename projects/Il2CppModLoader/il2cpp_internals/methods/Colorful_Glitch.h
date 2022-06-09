#include <interception_macros.h>

namespace app::methods::Colorful::Glitch {
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsActive, (app::Glitch * this_ptr));
IL2CPP_REGISTER_METHOD(0x03044A50, void, Start, (app::Glitch * this_ptr));
IL2CPP_REGISTER_METHOD(0x03044BE0, void, Update, (app::Glitch * this_ptr));
IL2CPP_REGISTER_METHOD(0x03044EA0, void, OnRenderImage, (app::Glitch * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030450F0, void, DoInterferences, (app::Glitch * this_ptr, app::RenderTexture * source, app::RenderTexture * destination, app::Glitch_InterferenceSettings * settings));
IL2CPP_REGISTER_METHOD(0x03045300, void, DoTearing, (app::Glitch * this_ptr, app::RenderTexture * source, app::RenderTexture * destination, app::Glitch_TearingSettings * settings));
IL2CPP_REGISTER_METHOD(0x03045500, String *, GetShaderName, (app::Glitch * this_ptr));
IL2CPP_REGISTER_METHOD(0x03045580, void, __ctor, (app::Glitch * this_ptr));
}
