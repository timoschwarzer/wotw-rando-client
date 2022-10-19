#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityKey_3 {
        inline app::EntityKey_3__Class** type_info = (app::EntityKey_3__Class**)(modloader::win::memory::resolve_rva(0x04756658));
        inline app::EntityKey_3__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_3__Class>(type_info, "PlayFab.DataModels", "EntityKey");
        }
        inline app::EntityKey_3* create() {
            return il2cpp::create_object<app::EntityKey_3>(get_class());
        }
    } // namespace EntityKey_3
} // namespace app::classes::types
