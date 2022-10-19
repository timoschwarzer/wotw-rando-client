#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeFormatFlags__Enum {
        namespace {
            inline app::DateTimeFormatFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DateTimeFormatFlags__Enum__Class** type_info = &type_info_ref;
        inline app::DateTimeFormatFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormatFlags__Enum__Class>(type_info, "System.Globalization", "DateTimeFormatFlags");
        }
        inline app::DateTimeFormatFlags__Enum* create() {
            return il2cpp::create_object<app::DateTimeFormatFlags__Enum>(get_class());
        }
    } // namespace DateTimeFormatFlags__Enum
} // namespace app::classes::types
