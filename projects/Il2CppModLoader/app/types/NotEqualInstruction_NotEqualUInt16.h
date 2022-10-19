#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualUInt16 {
        inline app::NotEqualInstruction_NotEqualUInt16__Class** type_info = (app::NotEqualInstruction_NotEqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x04715F88));
        inline app::NotEqualInstruction_NotEqualUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualUInt16");
        }
        inline app::NotEqualInstruction_NotEqualUInt16* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualUInt16>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualUInt16
} // namespace app::classes::types
