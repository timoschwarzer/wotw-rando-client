#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScriptableObject__Array {
        namespace {
            inline app::ScriptableObject__Array__Class* type_info_ref = nullptr;
        }
        inline app::ScriptableObject__Array__Class** type_info = &type_info_ref;
        inline app::ScriptableObject__Array__Class* get_class() {
            return il2cpp::get_class<app::ScriptableObject__Array__Class>(type_info, "UnityEngine", "ScriptableObject[]");
        }
        inline app::ScriptableObject__Array* create() {
            return il2cpp::create_object<app::ScriptableObject__Array>(get_class());
        }
    } // namespace ScriptableObject__Array
} // namespace app::classes::types
