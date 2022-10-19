#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Window__Array {
        namespace {
            inline app::Window__Array__Class* type_info_ref = nullptr;
        }
        inline app::Window__Array__Class** type_info = &type_info_ref;
        inline app::Window__Array__Class* get_class() {
            return il2cpp::get_class<app::Window__Array__Class>(type_info, "Moon.UI", "Window[]");
        }
        inline app::Window__Array* create() {
            return il2cpp::create_object<app::Window__Array>(get_class());
        }
    } // namespace Window__Array
} // namespace app::classes::types
