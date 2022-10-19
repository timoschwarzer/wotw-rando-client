#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationClip__Array {
        namespace {
            inline app::AnimationClip__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationClip__Array__Class** type_info = &type_info_ref;
        inline app::AnimationClip__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationClip__Array__Class>(type_info, "UnityEngine", "AnimationClip[]");
        }
        inline app::AnimationClip__Array* create() {
            return il2cpp::create_object<app::AnimationClip__Array>(get_class());
        }
    } // namespace AnimationClip__Array
} // namespace app::classes::types
