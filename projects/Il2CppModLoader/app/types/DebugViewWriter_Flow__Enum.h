#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugViewWriter_Flow__Enum {
        namespace {
            inline app::DebugViewWriter_Flow__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DebugViewWriter_Flow__Enum__Class** type_info = &type_info_ref;
        inline app::DebugViewWriter_Flow__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugViewWriter_Flow__Enum__Class>(type_info, "System.Linq.Expressions", "DebugViewWriter", "Flow");
        }
        inline app::DebugViewWriter_Flow__Enum* create() {
            return il2cpp::create_object<app::DebugViewWriter_Flow__Enum>(get_class());
        }
    } // namespace DebugViewWriter_Flow__Enum
} // namespace app::classes::types
