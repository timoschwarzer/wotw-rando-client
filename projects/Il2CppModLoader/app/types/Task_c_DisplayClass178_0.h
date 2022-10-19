#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Task_c_DisplayClass178_0 {
        inline app::Task_c_DisplayClass178_0__Class** type_info = (app::Task_c_DisplayClass178_0__Class**)(modloader::win::memory::resolve_rva(0x0470D0C0));
        inline app::Task_c_DisplayClass178_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_c_DisplayClass178_0__Class>(type_info, "System.Threading.Tasks", "Task", "<>c__DisplayClass178_0");
        }
        inline app::Task_c_DisplayClass178_0* create() {
            return il2cpp::create_object<app::Task_c_DisplayClass178_0>(get_class());
        }
    } // namespace Task_c_DisplayClass178_0
} // namespace app::classes::types
