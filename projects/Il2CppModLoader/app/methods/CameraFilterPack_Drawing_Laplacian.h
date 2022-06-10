#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_Drawing_Laplacian {
    IL2CPP_REGISTER_METHOD(0x024F2680, app::Material *, get_material, (app::CameraFilterPack_Drawing_Laplacian * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F2860, void, Start, (app::CameraFilterPack_Drawing_Laplacian * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F29B0, void, OnRenderImage, (app::CameraFilterPack_Drawing_Laplacian * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Update, (app::CameraFilterPack_Drawing_Laplacian * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F2CA0, void, OnDisable, (app::CameraFilterPack_Drawing_Laplacian * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_Drawing_Laplacian * this_ptr))
}
