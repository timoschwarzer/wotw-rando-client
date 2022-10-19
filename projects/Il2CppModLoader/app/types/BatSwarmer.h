#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BatSwarmer {
        inline app::BatSwarmer__Class** type_info = (app::BatSwarmer__Class**)(modloader::win::memory::resolve_rva(0x0475ED28));
        inline app::BatSwarmer__Class* get_class() {
            return il2cpp::get_class<app::BatSwarmer__Class>(type_info, "", "BatSwarmer");
        }
        inline app::BatSwarmer* create() {
            return il2cpp::create_object<app::BatSwarmer>(get_class());
        }
    } // namespace BatSwarmer
} // namespace app::classes::types
