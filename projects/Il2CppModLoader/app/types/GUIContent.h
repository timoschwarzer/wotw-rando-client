#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIContent {
        inline app::GUIContent__Class** type_info = (app::GUIContent__Class**)(modloader::win::memory::resolve_rva(0x0478C400));
        inline app::GUIContent__Class* get_class() {
            return il2cpp::get_class<app::GUIContent__Class>(type_info, "UnityEngine", "GUIContent");
        }
        inline app::GUIContent* create() {
            return il2cpp::create_object<app::GUIContent>(get_class());
        }
        inline app::GUIContent__Array* create_array(int size) {
            return il2cpp::array_new<app::GUIContent__Array>(get_class(), size);
        }
        inline app::GUIContent__Array* create_array(const std::vector<app::GUIContent*>& items) {
            return il2cpp::array_new<app::GUIContent__Array>(get_class(), items);
        }
    } // namespace GUIContent
} // namespace app::classes::types
