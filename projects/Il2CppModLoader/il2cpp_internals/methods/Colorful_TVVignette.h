#include <interception_macros.h>

namespace app::methods::Colorful::TVVignette {
IL2CPP_REGISTER_METHOD(0x030541D0, void, OnRenderImage, (app::TVVignette * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030543F0, String *, GetShaderName, (app::TVVignette * this_ptr));
IL2CPP_REGISTER_METHOD(0x03054470, void, __ctor, (app::TVVignette * this_ptr));
}
