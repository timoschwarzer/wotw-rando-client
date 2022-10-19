#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrantItemsToUsersResult {
        inline app::GrantItemsToUsersResult__Class** type_info = (app::GrantItemsToUsersResult__Class**)(modloader::win::memory::resolve_rva(0x0476F408));
        inline app::GrantItemsToUsersResult__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUsersResult__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToUsersResult");
        }
        inline app::GrantItemsToUsersResult* create() {
            return il2cpp::create_object<app::GrantItemsToUsersResult>(get_class());
        }
    } // namespace GrantItemsToUsersResult
} // namespace app::classes::types
