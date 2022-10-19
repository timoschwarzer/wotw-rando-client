#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComboInput__Array {
        namespace {
            inline app::ComboInput__Array__Class* type_info_ref = nullptr;
        }
        inline app::ComboInput__Array__Class** type_info = &type_info_ref;
        inline app::ComboInput__Array__Class* get_class() {
            return il2cpp::get_class<app::ComboInput__Array__Class>(type_info, "Moon.ComboSystem", "ComboInput[]");
        }
        inline app::ComboInput__Array* create() {
            return il2cpp::create_object<app::ComboInput__Array>(get_class());
        }
    } // namespace ComboInput__Array
} // namespace app::classes::types
