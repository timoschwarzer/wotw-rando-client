#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrantCharacterToUserResult {
        inline app::GrantCharacterToUserResult__Class** type_info = (app::GrantCharacterToUserResult__Class**)(modloader::win::memory::resolve_rva(0x04724630));
        inline app::GrantCharacterToUserResult__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserResult__Class>(type_info, "PlayFab.ClientModels", "GrantCharacterToUserResult");
        }
        inline app::GrantCharacterToUserResult* create() {
            return il2cpp::create_object<app::GrantCharacterToUserResult>(get_class());
        }
    } // namespace GrantCharacterToUserResult
} // namespace app::classes::types
