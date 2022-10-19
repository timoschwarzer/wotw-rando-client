#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapUI_c_DisplayClass187_0 {
        inline app::GameMapUI_c_DisplayClass187_0__Class** type_info = (app::GameMapUI_c_DisplayClass187_0__Class**)(modloader::win::memory::resolve_rva(0x047267A0));
        inline app::GameMapUI_c_DisplayClass187_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapUI_c_DisplayClass187_0__Class>(type_info, "", "GameMapUI", "<>c__DisplayClass187_0");
        }
        inline app::GameMapUI_c_DisplayClass187_0* create() {
            return il2cpp::create_object<app::GameMapUI_c_DisplayClass187_0>(get_class());
        }
    } // namespace GameMapUI_c_DisplayClass187_0
} // namespace app::classes::types
