#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_Color_Noise {
    IL2CPP_REGISTER_METHOD(0x024DA880, app::Material *, get_material, (app::CameraFilterPack_Color_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DAA60, void, Start, (app::CameraFilterPack_Color_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DABD0, void, OnRenderImage, (app::CameraFilterPack_Color_Noise * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024DAEF0, void, OnValidate, (app::CameraFilterPack_Color_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DAF80, void, Update, (app::CameraFilterPack_Color_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DB010, void, OnDisable, (app::CameraFilterPack_Color_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DB0F0, void, ctor, (app::CameraFilterPack_Color_Noise * this_ptr))
}
