#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UILineInfo__Array {
        namespace {
            inline app::UILineInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::UILineInfo__Array__Class** type_info = &type_info_ref;
        inline app::UILineInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UILineInfo__Array__Class>(type_info, "UnityEngine", "UILineInfo[]");
        }
        inline app::UILineInfo__Array* create() {
            return il2cpp::create_object<app::UILineInfo__Array>(get_class());
        }
    } // namespace UILineInfo__Array
} // namespace app::classes::types
