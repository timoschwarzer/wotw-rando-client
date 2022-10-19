#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceCountdownState {
        inline app::RaceCountdownState__Class** type_info = (app::RaceCountdownState__Class**)(modloader::win::memory::resolve_rva(0x04710050));
        inline app::RaceCountdownState__Class* get_class() {
            return il2cpp::get_class<app::RaceCountdownState__Class>(type_info, "", "RaceCountdownState");
        }
        inline app::RaceCountdownState* create() {
            return il2cpp::create_object<app::RaceCountdownState>(get_class());
        }
    } // namespace RaceCountdownState
} // namespace app::classes::types
