#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICharacter {
        inline app::ICharacter__Class** type_info = (app::ICharacter__Class**)(modloader::win::memory::resolve_rva(0x047147F0));
        inline app::ICharacter__Class* get_class() {
            return il2cpp::get_class<app::ICharacter__Class>(type_info, "", "ICharacter");
        }
    } // namespace ICharacter
} // namespace app::classes::types
