#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendAnimation_Input {
        namespace {
            inline app::BlendAnimation_Input__Class* type_info_ref = nullptr;
        }
        inline app::BlendAnimation_Input__Class** type_info = &type_info_ref;
        inline app::BlendAnimation_Input__Class* get_class() {
            return il2cpp::get_nested_class<app::BlendAnimation_Input__Class>(type_info, "Moon", "BlendAnimation", "Input");
        }
        inline app::BlendAnimation_Input* create() {
            return il2cpp::create_object<app::BlendAnimation_Input>(get_class());
        }
        inline app::BlendAnimation_Input__Array* create_array(int size) {
            return il2cpp::array_new<app::BlendAnimation_Input__Array>(get_class(), size);
        }
        inline app::BlendAnimation_Input__Array* create_array(const std::vector<app::BlendAnimation_Input*>& items) {
            return il2cpp::array_new<app::BlendAnimation_Input__Array>(get_class(), items);
        }
    } // namespace BlendAnimation_Input
} // namespace app::classes::types
