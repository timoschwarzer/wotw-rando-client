#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterFactory {
        inline app::CharacterFactory__Class** type_info = (app::CharacterFactory__Class**)(modloader::win::memory::resolve_rva(0x047180F0));
        inline app::CharacterFactory__Class* get_class() {
            return il2cpp::get_class<app::CharacterFactory__Class>(type_info, "", "CharacterFactory");
        }
        inline app::CharacterFactory* create() {
            return il2cpp::create_object<app::CharacterFactory>(get_class());
        }
    } // namespace CharacterFactory
} // namespace app::classes::types
