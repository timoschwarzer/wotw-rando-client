#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateGroupRoleRequest {
        inline app::CreateGroupRoleRequest__Class** type_info = (app::CreateGroupRoleRequest__Class**)(modloader::win::memory::resolve_rva(0x04706EE0));
        inline app::CreateGroupRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupRoleRequest__Class>(type_info, "PlayFab.GroupsModels", "CreateGroupRoleRequest");
        }
        inline app::CreateGroupRoleRequest* create() {
            return il2cpp::create_object<app::CreateGroupRoleRequest>(get_class());
        }
    } // namespace CreateGroupRoleRequest
} // namespace app::classes::types
