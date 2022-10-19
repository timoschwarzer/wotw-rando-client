#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyConstraints2D__Enum {
        namespace {
            inline app::RigidbodyConstraints2D__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyConstraints2D__Enum__Class** type_info = &type_info_ref;
        inline app::RigidbodyConstraints2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyConstraints2D__Enum__Class>(type_info, "UnityEngine", "RigidbodyConstraints2D");
        }
        inline app::RigidbodyConstraints2D__Enum* create() {
            return il2cpp::create_object<app::RigidbodyConstraints2D__Enum>(get_class());
        }
    } // namespace RigidbodyConstraints2D__Enum
} // namespace app::classes::types
