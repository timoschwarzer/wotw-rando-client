#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceIdleState {
        inline app::RaceIdleState__Class** type_info = (app::RaceIdleState__Class**)(modloader::win::memory::resolve_rva(0x047748C8));
        inline app::RaceIdleState__Class* get_class() {
            return il2cpp::get_class<app::RaceIdleState__Class>(type_info, "", "RaceIdleState");
        }
        inline app::RaceIdleState* create() {
            return il2cpp::create_object<app::RaceIdleState>(get_class());
        }
    } // namespace RaceIdleState
} // namespace app::classes::types
