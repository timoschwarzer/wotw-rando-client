#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanSingle {
        inline app::GreaterThanInstruction_GreaterThanSingle__Class** type_info = (app::GreaterThanInstruction_GreaterThanSingle__Class**)(modloader::win::memory::resolve_rva(0x04734600));
        inline app::GreaterThanInstruction_GreaterThanSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanSingle");
        }
        inline app::GreaterThanInstruction_GreaterThanSingle* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanSingle>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanSingle
} // namespace app::classes::types
