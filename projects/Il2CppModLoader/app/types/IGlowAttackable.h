#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGlowAttackable {
        inline app::IGlowAttackable__Class** type_info = (app::IGlowAttackable__Class**)(modloader::win::memory::resolve_rva(0x047021D0));
        inline app::IGlowAttackable__Class* get_class() {
            return il2cpp::get_class<app::IGlowAttackable__Class>(type_info, "", "IGlowAttackable");
        }
    } // namespace IGlowAttackable
} // namespace app::classes::types
