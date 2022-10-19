#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostUberStatePlugin {
        inline app::GhostUberStatePlugin__Class** type_info = (app::GhostUberStatePlugin__Class**)(modloader::win::memory::resolve_rva(0x0470EE38));
        inline app::GhostUberStatePlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostUberStatePlugin__Class>(type_info, "", "GhostUberStatePlugin");
        }
        inline app::GhostUberStatePlugin* create() {
            return il2cpp::create_object<app::GhostUberStatePlugin>(get_class());
        }
    } // namespace GhostUberStatePlugin
} // namespace app::classes::types
