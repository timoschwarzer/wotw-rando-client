#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DupInstruction {
        inline app::DupInstruction__Class** type_info = (app::DupInstruction__Class**)(modloader::win::memory::resolve_rva(0x047652D0));
        inline app::DupInstruction__Class* get_class() {
            return il2cpp::get_class<app::DupInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "DupInstruction");
        }
        inline app::DupInstruction* create() {
            return il2cpp::create_object<app::DupInstruction>(get_class());
        }
    } // namespace DupInstruction
} // namespace app::classes::types
