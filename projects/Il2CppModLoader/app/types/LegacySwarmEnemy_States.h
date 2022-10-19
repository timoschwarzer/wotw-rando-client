#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemy_States {
        inline app::LegacySwarmEnemy_States__Class** type_info = (app::LegacySwarmEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0471C7C8));
        inline app::LegacySwarmEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacySwarmEnemy_States__Class>(type_info, "", "LegacySwarmEnemy", "States");
        }
        inline app::LegacySwarmEnemy_States* create() {
            return il2cpp::create_object<app::LegacySwarmEnemy_States>(get_class());
        }
    } // namespace LegacySwarmEnemy_States
} // namespace app::classes::types
