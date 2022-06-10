#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blend2Camera_HardLight {
    IL2CPP_REGISTER_METHOD(0x0274D4E0, app::Material *, get_material, (app::CameraFilterPack_Blend2Camera_HardLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274D6C0, void, Start, (app::CameraFilterPack_Blend2Camera_HardLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274DA80, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_HardLight * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0274DE70, void, OnValidate, (app::CameraFilterPack_Blend2Camera_HardLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274E160, void, Update, (app::CameraFilterPack_Blend2Camera_HardLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274E1F0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_HardLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274E4C0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_HardLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274E6B0, void, ctor, (app::CameraFilterPack_Blend2Camera_HardLight * this_ptr))
}
