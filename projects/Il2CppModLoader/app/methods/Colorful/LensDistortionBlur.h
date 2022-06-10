#include <interception_macros.h>

namespace app::methods::Colorful::LensDistortionBlur {
    IL2CPP_REGISTER_METHOD(0x03048300, void, OnRenderImage, (app::LensDistortionBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x030484C0, app::String *, GetShaderName, (app::LensDistortionBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03048540, void, ctor, (app::LensDistortionBlur * this_ptr))
}
