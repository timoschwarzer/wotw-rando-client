#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EGamepadTextInputMode__Enum {
        namespace {
            inline app::EGamepadTextInputMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EGamepadTextInputMode__Enum__Class** type_info = &type_info_ref;
        inline app::EGamepadTextInputMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EGamepadTextInputMode__Enum__Class>(type_info, "Steamworks", "EGamepadTextInputMode");
        }
        inline app::EGamepadTextInputMode__Enum* create() {
            return il2cpp::create_object<app::EGamepadTextInputMode__Enum>(get_class());
        }
    } // namespace EGamepadTextInputMode__Enum
} // namespace app::classes::types
