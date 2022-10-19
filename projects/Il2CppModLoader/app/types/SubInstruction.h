#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubInstruction {
        inline app::SubInstruction__Class** type_info = (app::SubInstruction__Class**)(modloader::win::memory::resolve_rva(0x047090A0));
        inline app::SubInstruction__Class* get_class() {
            return il2cpp::get_class<app::SubInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction");
        }
        inline app::SubInstruction* create() {
            return il2cpp::create_object<app::SubInstruction>(get_class());
        }
    } // namespace SubInstruction
} // namespace app::classes::types
