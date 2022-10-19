#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubInstruction_SubInt64 {
        inline app::SubInstruction_SubInt64__Class** type_info = (app::SubInstruction_SubInt64__Class**)(modloader::win::memory::resolve_rva(0x04744FF0));
        inline app::SubInstruction_SubInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubInt64");
        }
        inline app::SubInstruction_SubInt64* create() {
            return il2cpp::create_object<app::SubInstruction_SubInt64>(get_class());
        }
    } // namespace SubInstruction_SubInt64
} // namespace app::classes::types
