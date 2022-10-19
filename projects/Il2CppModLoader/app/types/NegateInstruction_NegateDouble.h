#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateDouble {
        inline app::NegateInstruction_NegateDouble__Class** type_info = (app::NegateInstruction_NegateDouble__Class**)(modloader::win::memory::resolve_rva(0x0476C0C8));
        inline app::NegateInstruction_NegateDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateDouble");
        }
        inline app::NegateInstruction_NegateDouble* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateDouble>(get_class());
        }
    } // namespace NegateInstruction_NegateDouble
} // namespace app::classes::types
