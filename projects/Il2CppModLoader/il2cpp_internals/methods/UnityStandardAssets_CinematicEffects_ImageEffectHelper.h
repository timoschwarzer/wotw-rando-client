#include <interception_macros.h>

namespace app::methods::UnityStandardAssets_CinematicEffects::ImageEffectHelper {
IL2CPP_REGISTER_METHOD(0x02506A60, bool, IsSupported, (app::Shader * s, bool need_depth, bool need_hdr, app::MonoBehaviour * effect));
IL2CPP_REGISTER_METHOD(0x02506E40, Material *, CheckShaderAndCreateMaterial, (app::Shader * s));
IL2CPP_REGISTER_METHOD(0x02507050, bool, get_supportsDX11, ());
}
