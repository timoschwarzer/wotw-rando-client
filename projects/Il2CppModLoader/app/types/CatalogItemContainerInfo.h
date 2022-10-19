#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CatalogItemContainerInfo {
        namespace {
            inline app::CatalogItemContainerInfo__Class* type_info_ref = nullptr;
        }
        inline app::CatalogItemContainerInfo__Class** type_info = &type_info_ref;
        inline app::CatalogItemContainerInfo__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemContainerInfo__Class>(type_info, "PlayFab.ClientModels", "CatalogItemContainerInfo");
        }
        inline app::CatalogItemContainerInfo* create() {
            return il2cpp::create_object<app::CatalogItemContainerInfo>(get_class());
        }
    } // namespace CatalogItemContainerInfo
} // namespace app::classes::types
