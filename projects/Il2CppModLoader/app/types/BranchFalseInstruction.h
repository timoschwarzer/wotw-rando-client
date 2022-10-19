#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BranchFalseInstruction {
        inline app::BranchFalseInstruction__Class** type_info = (app::BranchFalseInstruction__Class**)(modloader::win::memory::resolve_rva(0x04799450));
        inline app::BranchFalseInstruction__Class* get_class() {
            return il2cpp::get_class<app::BranchFalseInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "BranchFalseInstruction");
        }
        inline app::BranchFalseInstruction* create() {
            return il2cpp::create_object<app::BranchFalseInstruction>(get_class());
        }
    } // namespace BranchFalseInstruction
} // namespace app::classes::types
