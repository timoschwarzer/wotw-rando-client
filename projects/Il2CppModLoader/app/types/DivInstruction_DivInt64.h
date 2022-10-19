#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DivInstruction_DivInt64 {
        inline app::DivInstruction_DivInt64__Class** type_info = (app::DivInstruction_DivInt64__Class**)(modloader::win::memory::resolve_rva(0x04752DD0));
        inline app::DivInstruction_DivInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivInt64");
        }
        inline app::DivInstruction_DivInt64* create() {
            return il2cpp::create_object<app::DivInstruction_DivInt64>(get_class());
        }
    } // namespace DivInstruction_DivInt64
} // namespace app::classes::types
