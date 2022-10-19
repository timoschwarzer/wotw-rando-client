#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiationRecycleHelper_c_DisplayClass5_0 {
        inline app::InstantiationRecycleHelper_c_DisplayClass5_0__Class** type_info = (app::InstantiationRecycleHelper_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0471F710));
        inline app::InstantiationRecycleHelper_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiationRecycleHelper_c_DisplayClass5_0__Class>(type_info, "", "InstantiationRecycleHelper", "<>c__DisplayClass5_0");
        }
        inline app::InstantiationRecycleHelper_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::InstantiationRecycleHelper_c_DisplayClass5_0>(get_class());
        }
    } // namespace InstantiationRecycleHelper_c_DisplayClass5_0
} // namespace app::classes::types
