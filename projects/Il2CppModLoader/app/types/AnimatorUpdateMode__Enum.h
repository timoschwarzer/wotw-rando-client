#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatorUpdateMode__Enum {
        namespace {
            inline app::AnimatorUpdateMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AnimatorUpdateMode__Enum__Class** type_info = &type_info_ref;
        inline app::AnimatorUpdateMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorUpdateMode__Enum__Class>(type_info, "UnityEngine", "AnimatorUpdateMode");
        }
        inline app::AnimatorUpdateMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorUpdateMode__Enum>(get_class());
        }
    } // namespace AnimatorUpdateMode__Enum
} // namespace app::classes::types
