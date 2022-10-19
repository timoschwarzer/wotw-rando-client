#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssignLocalToClosureInstruction {
        inline app::AssignLocalToClosureInstruction__Class** type_info = (app::AssignLocalToClosureInstruction__Class**)(modloader::win::memory::resolve_rva(0x04731E40));
        inline app::AssignLocalToClosureInstruction__Class* get_class() {
            return il2cpp::get_class<app::AssignLocalToClosureInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AssignLocalToClosureInstruction");
        }
        inline app::AssignLocalToClosureInstruction* create() {
            return il2cpp::create_object<app::AssignLocalToClosureInstruction>(get_class());
        }
    } // namespace AssignLocalToClosureInstruction
} // namespace app::classes::types
