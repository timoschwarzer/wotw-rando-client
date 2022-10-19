#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Shader {
        namespace {
            inline app::Shader__Class* type_info_ref = nullptr;
        }
        inline app::Shader__Class** type_info = &type_info_ref;
        inline app::Shader__Class* get_class() {
            return il2cpp::get_class<app::Shader__Class>(type_info, "UnityEngine", "Shader");
        }
        inline app::Shader* create() {
            return il2cpp::create_object<app::Shader>(get_class());
        }
        inline app::Shader__Array* create_array(int size) {
            return il2cpp::array_new<app::Shader__Array>(get_class(), size);
        }
        inline app::Shader__Array* create_array(const std::vector<app::Shader*>& items) {
            return il2cpp::array_new<app::Shader__Array>(get_class(), items);
        }
    } // namespace Shader
} // namespace app::classes::types
