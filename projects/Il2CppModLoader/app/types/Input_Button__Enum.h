#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Input_Button__Enum {
        namespace {
            inline app::Input_Button__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Input_Button__Enum__Class** type_info = &type_info_ref;
        inline app::Input_Button__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Button__Enum__Class>(type_info, "Core", "Input", "Button");
        }
        inline app::Input_Button__Enum* create() {
            return il2cpp::create_object<app::Input_Button__Enum>(get_class());
        }
        inline app::Input_Button__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Input_Button__Enum__Array>(get_class(), size);
        }
        inline app::Input_Button__Enum__Array* create_array(const std::vector<app::Input_Button__Enum*>& items) {
            return il2cpp::array_new<app::Input_Button__Enum__Array>(get_class(), items);
        }
    } // namespace Input_Button__Enum
} // namespace app::classes::types
