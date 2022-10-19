#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum {
        namespace {
            inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__Class** type_info = &type_info_ref;
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum__Class>(type_info, "Moon", "GroundPatrolWithDirectionBehaviourNew", "GroundPatrolMode");
        }
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum>(get_class());
        }
    } // namespace GroundPatrolWithDirectionBehaviourNew_GroundPatrolMode__Enum
} // namespace app::classes::types
