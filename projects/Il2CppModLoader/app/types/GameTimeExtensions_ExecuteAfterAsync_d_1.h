#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameTimeExtensions_ExecuteAfterAsync_d_1 {
        inline app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class** type_info = (app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class**)(modloader::win::memory::resolve_rva(0x047135C0));
        inline app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class>(type_info, "", "GameTimeExtensions", "<ExecuteAfterAsync>d__1");
        }
        inline app::GameTimeExtensions_ExecuteAfterAsync_d_1* create() {
            return il2cpp::create_object<app::GameTimeExtensions_ExecuteAfterAsync_d_1>(get_class());
        }
    } // namespace GameTimeExtensions_ExecuteAfterAsync_d_1
} // namespace app::classes::types
