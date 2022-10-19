#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeashHookLogic_c {
        inline app::LeashHookLogic_c__Class** type_info = (app::LeashHookLogic_c__Class**)(modloader::win::memory::resolve_rva(0x0475F688));
        inline app::LeashHookLogic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeashHookLogic_c__Class>(type_info, "", "LeashHookLogic", "<>c");
        }
        inline app::LeashHookLogic_c* create() {
            return il2cpp::create_object<app::LeashHookLogic_c>(get_class());
        }
    } // namespace LeashHookLogic_c
} // namespace app::classes::types
