#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateSharedGroupResult {
        inline app::CreateSharedGroupResult__Class** type_info = (app::CreateSharedGroupResult__Class**)(modloader::win::memory::resolve_rva(0x04785940));
        inline app::CreateSharedGroupResult__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupResult__Class>(type_info, "PlayFab.ClientModels", "CreateSharedGroupResult");
        }
        inline app::CreateSharedGroupResult* create() {
            return il2cpp::create_object<app::CreateSharedGroupResult>(get_class());
        }
    } // namespace CreateSharedGroupResult
} // namespace app::classes::types
