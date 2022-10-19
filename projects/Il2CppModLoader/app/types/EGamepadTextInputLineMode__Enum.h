#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EGamepadTextInputLineMode__Enum {
        namespace {
            inline app::EGamepadTextInputLineMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EGamepadTextInputLineMode__Enum__Class** type_info = &type_info_ref;
        inline app::EGamepadTextInputLineMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EGamepadTextInputLineMode__Enum__Class>(type_info, "Steamworks", "EGamepadTextInputLineMode");
        }
        inline app::EGamepadTextInputLineMode__Enum* create() {
            return il2cpp::create_object<app::EGamepadTextInputLineMode__Enum>(get_class());
        }
    } // namespace EGamepadTextInputLineMode__Enum
} // namespace app::classes::types
