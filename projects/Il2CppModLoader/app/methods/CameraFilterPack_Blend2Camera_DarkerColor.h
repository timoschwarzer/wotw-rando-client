#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blend2Camera_DarkerColor {
    IL2CPP_REGISTER_METHOD(0x02747E80, app::Material *, get_material, (app::CameraFilterPack_Blend2Camera_DarkerColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02748060, void, Start, (app::CameraFilterPack_Blend2Camera_DarkerColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02748420, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_DarkerColor * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02748810, void, OnValidate, (app::CameraFilterPack_Blend2Camera_DarkerColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02748B00, void, Update, (app::CameraFilterPack_Blend2Camera_DarkerColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02748B90, void, OnEnable, (app::CameraFilterPack_Blend2Camera_DarkerColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02748E60, void, OnDisable, (app::CameraFilterPack_Blend2Camera_DarkerColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02749050, void, ctor, (app::CameraFilterPack_Blend2Camera_DarkerColor * this_ptr))
}
