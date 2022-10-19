#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubInstruction_SubSingle {
        inline app::SubInstruction_SubSingle__Class** type_info = (app::SubInstruction_SubSingle__Class**)(modloader::win::memory::resolve_rva(0x0475C600));
        inline app::SubInstruction_SubSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubSingle");
        }
        inline app::SubInstruction_SubSingle* create() {
            return il2cpp::create_object<app::SubInstruction_SubSingle>(get_class());
        }
    } // namespace SubInstruction_SubSingle
} // namespace app::classes::types
