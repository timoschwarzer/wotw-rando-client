#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanInt64 {
        inline app::GreaterThanInstruction_GreaterThanInt64__Class** type_info = (app::GreaterThanInstruction_GreaterThanInt64__Class**)(modloader::win::memory::resolve_rva(0x04747D80));
        inline app::GreaterThanInstruction_GreaterThanInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanInt64");
        }
        inline app::GreaterThanInstruction_GreaterThanInt64* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanInt64>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanInt64
} // namespace app::classes::types
