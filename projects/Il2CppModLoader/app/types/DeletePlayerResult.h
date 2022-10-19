#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeletePlayerResult {
        inline app::DeletePlayerResult__Class** type_info = (app::DeletePlayerResult__Class**)(modloader::win::memory::resolve_rva(0x0471C5C8));
        inline app::DeletePlayerResult__Class* get_class() {
            return il2cpp::get_class<app::DeletePlayerResult__Class>(type_info, "PlayFab.ServerModels", "DeletePlayerResult");
        }
        inline app::DeletePlayerResult* create() {
            return il2cpp::create_object<app::DeletePlayerResult>(get_class());
        }
    } // namespace DeletePlayerResult
} // namespace app::classes::types
