#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterGlow {
        namespace {
            inline app::CharacterGlow__Class* type_info_ref = nullptr;
        }
        inline app::CharacterGlow__Class** type_info = &type_info_ref;
        inline app::CharacterGlow__Class* get_class() {
            return il2cpp::get_class<app::CharacterGlow__Class>(type_info, "", "CharacterGlow");
        }
        inline app::CharacterGlow* create() {
            return il2cpp::create_object<app::CharacterGlow>(get_class());
        }
    } // namespace CharacterGlow
} // namespace app::classes::types
