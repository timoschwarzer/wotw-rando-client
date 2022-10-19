#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterMaxSpeedAnimator {
        namespace {
            inline app::CharacterMaxSpeedAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CharacterMaxSpeedAnimator__Class** type_info = &type_info_ref;
        inline app::CharacterMaxSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::CharacterMaxSpeedAnimator__Class>(type_info, "", "CharacterMaxSpeedAnimator");
        }
        inline app::CharacterMaxSpeedAnimator* create() {
            return il2cpp::create_object<app::CharacterMaxSpeedAnimator>(get_class());
        }
    } // namespace CharacterMaxSpeedAnimator
} // namespace app::classes::types
