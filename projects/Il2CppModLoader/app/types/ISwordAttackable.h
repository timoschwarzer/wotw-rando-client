#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISwordAttackable {
        inline app::ISwordAttackable__Class** type_info = (app::ISwordAttackable__Class**)(modloader::win::memory::resolve_rva(0x04797838));
        inline app::ISwordAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISwordAttackable__Class>(type_info, "", "ISwordAttackable");
        }
    } // namespace ISwordAttackable
} // namespace app::classes::types
