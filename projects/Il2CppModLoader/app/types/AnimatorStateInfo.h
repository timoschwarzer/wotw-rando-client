#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatorStateInfo {
        namespace {
            inline app::AnimatorStateInfo__Class* type_info_ref = nullptr;
        }
        inline app::AnimatorStateInfo__Class** type_info = &type_info_ref;
        inline app::AnimatorStateInfo__Class* get_class() {
            return il2cpp::get_class<app::AnimatorStateInfo__Class>(type_info, "UnityEngine", "AnimatorStateInfo");
        }
        inline app::AnimatorStateInfo* create() {
            return il2cpp::create_object<app::AnimatorStateInfo>(get_class());
        }
        inline app::AnimatorStateInfo__Boxed* box(app::AnimatorStateInfo value) {
            return il2cpp::box_value<app::AnimatorStateInfo__Boxed>(get_class(), value);
        }
    } // namespace AnimatorStateInfo
} // namespace app::classes::types
