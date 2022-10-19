#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeInitializeLoadType__Enum {
        namespace {
            inline app::RuntimeInitializeLoadType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeInitializeLoadType__Enum__Class** type_info = &type_info_ref;
        inline app::RuntimeInitializeLoadType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RuntimeInitializeLoadType__Enum__Class>(type_info, "UnityEngine", "RuntimeInitializeLoadType");
        }
        inline app::RuntimeInitializeLoadType__Enum* create() {
            return il2cpp::create_object<app::RuntimeInitializeLoadType__Enum>(get_class());
        }
    } // namespace RuntimeInitializeLoadType__Enum
} // namespace app::classes::types
