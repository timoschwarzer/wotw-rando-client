#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_FX_Glitch3 {
    IL2CPP_REGISTER_METHOD(0x0246EDA0, app::Material *, get_material, (app::CameraFilterPack_FX_Glitch3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246EF80, void, Start, (app::CameraFilterPack_FX_Glitch3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246F0F0, void, OnRenderImage, (app::CameraFilterPack_FX_Glitch3 * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246F410, void, OnValidate, (app::CameraFilterPack_FX_Glitch3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246F4A0, void, Update, (app::CameraFilterPack_FX_Glitch3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246F530, void, OnDisable, (app::CameraFilterPack_FX_Glitch3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246C2D0, void, ctor, (app::CameraFilterPack_FX_Glitch3 * this_ptr))
}
