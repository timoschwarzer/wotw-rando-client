#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetFilesRequest {
        inline app::GetFilesRequest__Class** type_info = (app::GetFilesRequest__Class**)(modloader::win::memory::resolve_rva(0x047603D0));
        inline app::GetFilesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFilesRequest__Class>(type_info, "PlayFab.DataModels", "GetFilesRequest");
        }
        inline app::GetFilesRequest* create() {
            return il2cpp::create_object<app::GetFilesRequest>(get_class());
        }
    } // namespace GetFilesRequest
} // namespace app::classes::types
