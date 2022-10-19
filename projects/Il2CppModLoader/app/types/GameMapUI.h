#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapUI {
        inline app::GameMapUI__Class** type_info = (app::GameMapUI__Class**)(modloader::win::memory::resolve_rva(0x0477F820));
        inline app::GameMapUI__Class* get_class() {
            return il2cpp::get_class<app::GameMapUI__Class>(type_info, "", "GameMapUI");
        }
        inline app::GameMapUI* create() {
            return il2cpp::create_object<app::GameMapUI>(get_class());
        }
    } // namespace GameMapUI
} // namespace app::classes::types
