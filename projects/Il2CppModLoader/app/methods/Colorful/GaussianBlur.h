#include <interception_macros.h>

namespace app::methods::Colorful::GaussianBlur {
    IL2CPP_REGISTER_METHOD(0x03043B80, void, OnRenderImage, (app::GaussianBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03043E30, void, OnePassBlur, (app::GaussianBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03044280, void, MultiPassBlur, (app::GaussianBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x030449B0, app::String *, GetShaderName, (app::GaussianBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03044A30, void, ctor, (app::GaussianBlur * this_ptr))
}
