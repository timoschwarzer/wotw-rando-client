#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlackboardVariableFloat {
        namespace {
            inline app::BlackboardVariableFloat__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableFloat__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableFloat__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableFloat__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableFloat");
        }
        inline app::BlackboardVariableFloat* create() {
            return il2cpp::create_object<app::BlackboardVariableFloat>(get_class());
        }
        inline app::BlackboardVariableFloat__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableFloat__Array>(get_class(), size);
        }
        inline app::BlackboardVariableFloat__Array* create_array(const std::vector<app::BlackboardVariableFloat*>& items) {
            return il2cpp::array_new<app::BlackboardVariableFloat__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableFloat
} // namespace app::classes::types
