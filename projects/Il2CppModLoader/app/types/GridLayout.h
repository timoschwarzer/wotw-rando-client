#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GridLayout {
        namespace {
            inline app::GridLayout__Class* type_info_ref = nullptr;
        }
        inline app::GridLayout__Class** type_info = &type_info_ref;
        inline app::GridLayout__Class* get_class() {
            return il2cpp::get_class<app::GridLayout__Class>(type_info, "UnityEngine", "GridLayout");
        }
        inline app::GridLayout* create() {
            return il2cpp::create_object<app::GridLayout>(get_class());
        }
    } // namespace GridLayout
} // namespace app::classes::types
