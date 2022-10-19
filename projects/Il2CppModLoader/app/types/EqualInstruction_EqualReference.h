#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualReference {
        inline app::EqualInstruction_EqualReference__Class** type_info = (app::EqualInstruction_EqualReference__Class**)(modloader::win::memory::resolve_rva(0x04770758));
        inline app::EqualInstruction_EqualReference__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualReference__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualReference");
        }
        inline app::EqualInstruction_EqualReference* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualReference>(get_class());
        }
    } // namespace EqualInstruction_EqualReference
} // namespace app::classes::types
