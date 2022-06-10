#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_Drawing_Manga_FlashWhite {
    IL2CPP_REGISTER_METHOD(0x024F6E30, app::Material *, get_material, (app::CameraFilterPack_Drawing_Manga_FlashWhite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F7010, void, Start, (app::CameraFilterPack_Drawing_Manga_FlashWhite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F71A0, void, OnRenderImage, (app::CameraFilterPack_Drawing_Manga_FlashWhite * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F7570, void, OnValidate, (app::CameraFilterPack_Drawing_Manga_FlashWhite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F7620, void, Update, (app::CameraFilterPack_Drawing_Manga_FlashWhite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F76E0, void, OnDisable, (app::CameraFilterPack_Drawing_Manga_FlashWhite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F6E00, void, ctor, (app::CameraFilterPack_Drawing_Manga_FlashWhite * this_ptr))
}
