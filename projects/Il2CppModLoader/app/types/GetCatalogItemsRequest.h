#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCatalogItemsRequest {
        inline app::GetCatalogItemsRequest__Class** type_info = (app::GetCatalogItemsRequest__Class**)(modloader::win::memory::resolve_rva(0x04719018));
        inline app::GetCatalogItemsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCatalogItemsRequest__Class>(type_info, "PlayFab.ClientModels", "GetCatalogItemsRequest");
        }
        inline app::GetCatalogItemsRequest* create() {
            return il2cpp::create_object<app::GetCatalogItemsRequest>(get_class());
        }
    } // namespace GetCatalogItemsRequest
} // namespace app::classes::types
