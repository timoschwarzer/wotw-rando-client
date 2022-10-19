#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Task_ContingentProperties {
        inline app::Task_ContingentProperties__Class** type_info = (app::Task_ContingentProperties__Class**)(modloader::win::memory::resolve_rva(0x04751888));
        inline app::Task_ContingentProperties__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_ContingentProperties__Class>(type_info, "System.Threading.Tasks", "Task", "ContingentProperties");
        }
        inline app::Task_ContingentProperties* create() {
            return il2cpp::create_object<app::Task_ContingentProperties>(get_class());
        }
    } // namespace Task_ContingentProperties
} // namespace app::classes::types
