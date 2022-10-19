#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterAnimationController {
        namespace {
            inline app::CharacterAnimationController__Class* type_info_ref = nullptr;
        }
        inline app::CharacterAnimationController__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationController__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationController__Class>(type_info, "", "CharacterAnimationController");
        }
        inline app::CharacterAnimationController* create() {
            return il2cpp::create_object<app::CharacterAnimationController>(get_class());
        }
    } // namespace CharacterAnimationController
} // namespace app::classes::types
