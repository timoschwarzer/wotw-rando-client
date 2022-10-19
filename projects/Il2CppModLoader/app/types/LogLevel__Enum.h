#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LogLevel__Enum {
        namespace {
            inline app::LogLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LogLevel__Enum__Class** type_info = &type_info_ref;
        inline app::LogLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::LogLevel__Enum__Class>(type_info, "TriangleNet.Logging", "LogLevel");
        }
        inline app::LogLevel__Enum* create() {
            return il2cpp::create_object<app::LogLevel__Enum>(get_class());
        }
    } // namespace LogLevel__Enum
} // namespace app::classes::types
