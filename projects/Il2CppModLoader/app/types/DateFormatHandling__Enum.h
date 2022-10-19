#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateFormatHandling__Enum {
        namespace {
            inline app::DateFormatHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DateFormatHandling__Enum__Class** type_info = &type_info_ref;
        inline app::DateFormatHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateFormatHandling__Enum__Class>(type_info, "Newtonsoft.Json", "DateFormatHandling");
        }
        inline app::DateFormatHandling__Enum* create() {
            return il2cpp::create_object<app::DateFormatHandling__Enum>(get_class());
        }
    } // namespace DateFormatHandling__Enum
} // namespace app::classes::types
