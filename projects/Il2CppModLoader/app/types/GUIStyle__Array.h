#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIStyle__Array {
        inline app::GUIStyle__Array__Class** type_info = (app::GUIStyle__Array__Class**)(modloader::win::memory::resolve_rva(0x0473A560));
        inline app::GUIStyle__Array__Class* get_class() {
            return il2cpp::get_class<app::GUIStyle__Array__Class>(type_info, "UnityEngine", "GUIStyle[]");
        }
        inline app::GUIStyle__Array* create() {
            return il2cpp::create_object<app::GUIStyle__Array>(get_class());
        }
    } // namespace GUIStyle__Array
} // namespace app::classes::types
