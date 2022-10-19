#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrBoolean {
        inline app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class**)(modloader::win::memory::resolve_rva(0x04781AB8));
        inline app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrBoolean");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrBoolean* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrBoolean>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrBoolean
} // namespace app::classes::types
