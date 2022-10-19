#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetAssetUploadUrlRequest {
        inline app::GetAssetUploadUrlRequest__Class** type_info = (app::GetAssetUploadUrlRequest__Class**)(modloader::win::memory::resolve_rva(0x04703040));
        inline app::GetAssetUploadUrlRequest__Class* get_class() {
            return il2cpp::get_class<app::GetAssetUploadUrlRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetAssetUploadUrlRequest");
        }
        inline app::GetAssetUploadUrlRequest* create() {
            return il2cpp::create_object<app::GetAssetUploadUrlRequest>(get_class());
        }
    } // namespace GetAssetUploadUrlRequest
} // namespace app::classes::types
