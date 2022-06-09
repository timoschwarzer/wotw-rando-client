#include <interception_macros.h>

namespace app::methods::CameraFilterPack_FX_Mirror {
    IL2CPP_REGISTER_METHOD(0x02471D90, app::Material *, get_material, (app::CameraFilterPack_FX_Mirror * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02471F70, void, Start, (app::CameraFilterPack_FX_Mirror * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024720C0, void, OnRenderImage, (app::CameraFilterPack_FX_Mirror * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_FX_Mirror * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024723B0, void, OnDisable, (app::CameraFilterPack_FX_Mirror * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0136E200, void, __ctor, (app::CameraFilterPack_FX_Mirror * this_ptr));
}
