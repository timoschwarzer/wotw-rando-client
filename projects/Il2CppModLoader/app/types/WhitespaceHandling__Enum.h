#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WhitespaceHandling__Enum {
        namespace {
            inline app::WhitespaceHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WhitespaceHandling__Enum__Class** type_info = &type_info_ref;
        inline app::WhitespaceHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::WhitespaceHandling__Enum__Class>(type_info, "System.Xml", "WhitespaceHandling");
        }
        inline app::WhitespaceHandling__Enum* create() {
            return il2cpp::create_object<app::WhitespaceHandling__Enum>(get_class());
        }
    } // namespace WhitespaceHandling__Enum
} // namespace app::classes::types
