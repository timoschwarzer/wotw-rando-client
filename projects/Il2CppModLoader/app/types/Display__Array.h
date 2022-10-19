#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Display__Array {
        inline app::Display__Array__Class** type_info = (app::Display__Array__Class**)(modloader::win::memory::resolve_rva(0x047896D8));
        inline app::Display__Array__Class* get_class() {
            return il2cpp::get_class<app::Display__Array__Class>(type_info, "UnityEngine", "Display[]");
        }
        inline app::Display__Array* create() {
            return il2cpp::create_object<app::Display__Array>(get_class());
        }
    } // namespace Display__Array
} // namespace app::classes::types
