#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddUsernamePasswordResult {
        inline app::AddUsernamePasswordResult__Class** type_info = (app::AddUsernamePasswordResult__Class**)(modloader::win::memory::resolve_rva(0x04746FE8));
        inline app::AddUsernamePasswordResult__Class* get_class() {
            return il2cpp::get_class<app::AddUsernamePasswordResult__Class>(type_info, "PlayFab.ClientModels", "AddUsernamePasswordResult");
        }
        inline app::AddUsernamePasswordResult* create() {
            return il2cpp::create_object<app::AddUsernamePasswordResult>(get_class());
        }
    } // namespace AddUsernamePasswordResult
} // namespace app::classes::types
