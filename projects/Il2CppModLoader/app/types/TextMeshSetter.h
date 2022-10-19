#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextMeshSetter {
        namespace {
            inline app::TextMeshSetter__Class* type_info_ref = nullptr;
        }
        inline app::TextMeshSetter__Class** type_info = &type_info_ref;
        inline app::TextMeshSetter__Class* get_class() {
            return il2cpp::get_class<app::TextMeshSetter__Class>(type_info, "", "TextMeshSetter");
        }
        inline app::TextMeshSetter* create() {
            return il2cpp::create_object<app::TextMeshSetter>(get_class());
        }
    } // namespace TextMeshSetter
} // namespace app::classes::types
