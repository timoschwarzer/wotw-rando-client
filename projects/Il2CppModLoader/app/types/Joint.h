#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Joint {
        namespace {
            inline app::Joint__Class* type_info_ref = nullptr;
        }
        inline app::Joint__Class** type_info = &type_info_ref;
        inline app::Joint__Class* get_class() {
            return il2cpp::get_class<app::Joint__Class>(type_info, "UnityEngine", "Joint");
        }
        inline app::Joint* create() {
            return il2cpp::create_object<app::Joint>(get_class());
        }
    } // namespace Joint
} // namespace app::classes::types
