#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CatalogItemConsumableInfo_1 {
        namespace {
            inline app::CatalogItemConsumableInfo_1__Class* type_info_ref = nullptr;
        }
        inline app::CatalogItemConsumableInfo_1__Class** type_info = &type_info_ref;
        inline app::CatalogItemConsumableInfo_1__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemConsumableInfo_1__Class>(type_info, "PlayFab.ServerModels", "CatalogItemConsumableInfo");
        }
        inline app::CatalogItemConsumableInfo_1* create() {
            return il2cpp::create_object<app::CatalogItemConsumableInfo_1>(get_class());
        }
    } // namespace CatalogItemConsumableInfo_1
} // namespace app::classes::types
