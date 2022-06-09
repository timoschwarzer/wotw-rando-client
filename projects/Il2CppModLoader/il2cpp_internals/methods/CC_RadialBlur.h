#include <interception_macros.h>

namespace app::methods::CC_RadialBlur {
    IL2CPP_REGISTER_METHOD(0x03194F40, void, Start, (app::CC_RadialBlur * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03194FE0, bool, CheckShader, (app::CC_RadialBlur * this_ptr));
    IL2CPP_REGISTER_METHOD(0x031950F0, void, OnRenderImage, (app::CC_RadialBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
    IL2CPP_REGISTER_METHOD(0x03195450, app::Material *, get_material, (app::CC_RadialBlur * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03195680, void, OnDisable, (app::CC_RadialBlur * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03195760, void, __ctor, (app::CC_RadialBlur * this_ptr));
}
