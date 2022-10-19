#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16 {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x04780320));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualUInt16");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16
} // namespace app::classes::types
