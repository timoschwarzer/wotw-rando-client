#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForConditionAction_WaitAndPerform_d_4 {
        inline app::WaitForConditionAction_WaitAndPerform_d_4__Class** type_info = (app::WaitForConditionAction_WaitAndPerform_d_4__Class**)(modloader::win::memory::resolve_rva(0x0472A828));
        inline app::WaitForConditionAction_WaitAndPerform_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::WaitForConditionAction_WaitAndPerform_d_4__Class>(type_info, "", "WaitForConditionAction", "<WaitAndPerform>d__4");
        }
        inline app::WaitForConditionAction_WaitAndPerform_d_4* create() {
            return il2cpp::create_object<app::WaitForConditionAction_WaitAndPerform_d_4>(get_class());
        }
    } // namespace WaitForConditionAction_WaitAndPerform_d_4
} // namespace app::classes::types
