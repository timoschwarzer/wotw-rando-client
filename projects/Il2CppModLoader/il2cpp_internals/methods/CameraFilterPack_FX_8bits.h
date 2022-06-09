#include <interception_macros.h>

namespace app::methods::CameraFilterPack_FX_8bits {
IL2CPP_REGISTER_METHOD(0x02467CF0, Material *, get_material, (app::CameraFilterPack_FX_8bits * this_ptr));
IL2CPP_REGISTER_METHOD(0x02467ED0, void, Start, (app::CameraFilterPack_FX_8bits * this_ptr));
IL2CPP_REGISTER_METHOD(0x02468050, void, OnRenderImage, (app::CameraFilterPack_FX_8bits * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture));
IL2CPP_REGISTER_METHOD(0x024683F0, void, OnValidate, (app::CameraFilterPack_FX_8bits * this_ptr));
IL2CPP_REGISTER_METHOD(0x02468490, void, Update, (app::CameraFilterPack_FX_8bits * this_ptr));
IL2CPP_REGISTER_METHOD(0x02468540, void, OnDisable, (app::CameraFilterPack_FX_8bits * this_ptr));
IL2CPP_REGISTER_METHOD(0x02468620, void, __ctor, (app::CameraFilterPack_FX_8bits * this_ptr));
}
