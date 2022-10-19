#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterAnimationStateBase__Array {
        namespace {
            inline app::CharacterAnimationStateBase__Array__Class* type_info_ref = nullptr;
        }
        inline app::CharacterAnimationStateBase__Array__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationStateBase__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationStateBase__Array__Class>(type_info, "", "CharacterAnimationStateBase[]");
        }
        inline app::CharacterAnimationStateBase__Array* create() {
            return il2cpp::create_object<app::CharacterAnimationStateBase__Array>(get_class());
        }
    } // namespace CharacterAnimationStateBase__Array
} // namespace app::classes::types
