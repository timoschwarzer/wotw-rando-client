#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteRoleRequest {
        inline app::DeleteRoleRequest__Class** type_info = (app::DeleteRoleRequest__Class**)(modloader::win::memory::resolve_rva(0x0471B228));
        inline app::DeleteRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteRoleRequest__Class>(type_info, "PlayFab.GroupsModels", "DeleteRoleRequest");
        }
        inline app::DeleteRoleRequest* create() {
            return il2cpp::create_object<app::DeleteRoleRequest>(get_class());
        }
    } // namespace DeleteRoleRequest
} // namespace app::classes::types
