#include <interception_macros.h>

namespace app::methods::Colorful::ContrastGain {
    IL2CPP_REGISTER_METHOD(0x03041760, void, OnRenderImage, (app::ContrastGain * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
    IL2CPP_REGISTER_METHOD(0x030418E0, app::String *, GetShaderName, (app::ContrastGain * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B5D320, void, __ctor, (app::ContrastGain * this_ptr));
}
