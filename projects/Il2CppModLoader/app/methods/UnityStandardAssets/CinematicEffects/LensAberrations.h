#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::LensAberrations {
    IL2CPP_REGISTER_METHOD(0x025070F0, app::Shader *, get_shader, (app::LensAberrations * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02507200, app::Material *, get_material, (app::LensAberrations * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025072E0, void, OnEnable, (app::LensAberrations * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025074A0, void, OnDisable, (app::LensAberrations * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025075B0, void, OnRenderImage, (app::LensAberrations * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x02508720, void, ctor, (app::LensAberrations * this_ptr))
}
