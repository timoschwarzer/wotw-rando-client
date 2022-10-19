#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterJumpSustain {
        namespace {
            inline app::CharacterJumpSustain__Class* type_info_ref = nullptr;
        }
        inline app::CharacterJumpSustain__Class** type_info = &type_info_ref;
        inline app::CharacterJumpSustain__Class* get_class() {
            return il2cpp::get_class<app::CharacterJumpSustain__Class>(type_info, "", "CharacterJumpSustain");
        }
        inline app::CharacterJumpSustain* create() {
            return il2cpp::create_object<app::CharacterJumpSustain>(get_class());
        }
    } // namespace CharacterJumpSustain
} // namespace app::classes::types
