#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftUInt16 {
        inline app::RightShiftInstruction_RightShiftUInt16__Class** type_info = (app::RightShiftInstruction_RightShiftUInt16__Class**)(modloader::win::memory::resolve_rva(0x0474EAF0));
        inline app::RightShiftInstruction_RightShiftUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftUInt16");
        }
        inline app::RightShiftInstruction_RightShiftUInt16* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftUInt16>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftUInt16
} // namespace app::classes::types
