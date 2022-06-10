#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Bloom {
    IL2CPP_REGISTER_METHOD(0x02763B70, app::Material *, get_material, (app::CameraFilterPack_Blur_Bloom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02763D50, void, Start, (app::CameraFilterPack_Blur_Bloom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02763EC0, void, OnRenderImage, (app::CameraFilterPack_Blur_Bloom * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02764290, void, OnValidate, (app::CameraFilterPack_Blur_Bloom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02764320, void, Update, (app::CameraFilterPack_Blur_Bloom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027643B0, void, OnDisable, (app::CameraFilterPack_Blur_Bloom * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02764490, void, ctor, (app::CameraFilterPack_Blur_Bloom * this_ptr))
}
