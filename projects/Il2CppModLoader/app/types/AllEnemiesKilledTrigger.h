#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AllEnemiesKilledTrigger {
        inline app::AllEnemiesKilledTrigger__Class** type_info = (app::AllEnemiesKilledTrigger__Class**)(modloader::win::memory::resolve_rva(0x047560E8));
        inline app::AllEnemiesKilledTrigger__Class* get_class() {
            return il2cpp::get_class<app::AllEnemiesKilledTrigger__Class>(type_info, "", "AllEnemiesKilledTrigger");
        }
        inline app::AllEnemiesKilledTrigger* create() {
            return il2cpp::create_object<app::AllEnemiesKilledTrigger>(get_class());
        }
    } // namespace AllEnemiesKilledTrigger
} // namespace app::classes::types
