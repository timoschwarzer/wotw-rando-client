#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewArrayInitInstruction {
        inline app::NewArrayInitInstruction__Class** type_info = (app::NewArrayInitInstruction__Class**)(modloader::win::memory::resolve_rva(0x04754C68));
        inline app::NewArrayInitInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayInitInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NewArrayInitInstruction");
        }
        inline app::NewArrayInitInstruction* create() {
            return il2cpp::create_object<app::NewArrayInitInstruction>(get_class());
        }
    } // namespace NewArrayInitInstruction
} // namespace app::classes::types
