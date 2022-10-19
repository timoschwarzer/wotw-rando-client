#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostManager {
        inline app::GhostManager__Class** type_info = (app::GhostManager__Class**)(modloader::win::memory::resolve_rva(0x0477D0C8));
        inline app::GhostManager__Class* get_class() {
            return il2cpp::get_class<app::GhostManager__Class>(type_info, "", "GhostManager");
        }
        inline app::GhostManager* create() {
            return il2cpp::create_object<app::GhostManager>(get_class());
        }
    } // namespace GhostManager
} // namespace app::classes::types
