#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulInstruction_MulUInt32 {
        inline app::MulInstruction_MulUInt32__Class** type_info = (app::MulInstruction_MulUInt32__Class**)(modloader::win::memory::resolve_rva(0x04791308));
        inline app::MulInstruction_MulUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulUInt32");
        }
        inline app::MulInstruction_MulUInt32* create() {
            return il2cpp::create_object<app::MulInstruction_MulUInt32>(get_class());
        }
    } // namespace MulInstruction_MulUInt32
} // namespace app::classes::types
