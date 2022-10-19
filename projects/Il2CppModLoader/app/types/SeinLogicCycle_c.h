#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLogicCycle_c {
        inline app::SeinLogicCycle_c__Class** type_info = (app::SeinLogicCycle_c__Class**)(modloader::win::memory::resolve_rva(0x04727C88));
        inline app::SeinLogicCycle_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinLogicCycle_c__Class>(type_info, "", "SeinLogicCycle", "<>c");
        }
        inline app::SeinLogicCycle_c* create() {
            return il2cpp::create_object<app::SeinLogicCycle_c>(get_class());
        }
    } // namespace SeinLogicCycle_c
} // namespace app::classes::types
