#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourTreeStatus__Enum {
        namespace {
            inline app::BehaviourTreeStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BehaviourTreeStatus__Enum__Class** type_info = &type_info_ref;
        inline app::BehaviourTreeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeStatus__Enum__Class>(type_info, "UberBehaviourTree", "BehaviourTreeStatus");
        }
        inline app::BehaviourTreeStatus__Enum* create() {
            return il2cpp::create_object<app::BehaviourTreeStatus__Enum>(get_class());
        }
    } // namespace BehaviourTreeStatus__Enum
} // namespace app::classes::types
