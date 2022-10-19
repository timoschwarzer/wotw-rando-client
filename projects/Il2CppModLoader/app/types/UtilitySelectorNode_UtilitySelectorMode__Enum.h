#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UtilitySelectorNode_UtilitySelectorMode__Enum {
        namespace {
            inline app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class** type_info = &type_info_ref;
        inline app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class>(type_info, "Moon.BehaviourSystem", "UtilitySelectorNode", "UtilitySelectorMode");
        }
        inline app::UtilitySelectorNode_UtilitySelectorMode__Enum* create() {
            return il2cpp::create_object<app::UtilitySelectorNode_UtilitySelectorMode__Enum>(get_class());
        }
    } // namespace UtilitySelectorNode_UtilitySelectorMode__Enum
} // namespace app::classes::types
