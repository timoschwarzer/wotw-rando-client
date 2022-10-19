#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeMovementTimelineBehaviourNew {
        namespace {
            inline app::VolumeMovementTimelineBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::VolumeMovementTimelineBehaviourNew__Class** type_info = &type_info_ref;
        inline app::VolumeMovementTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::VolumeMovementTimelineBehaviourNew__Class>(type_info, "", "VolumeMovementTimelineBehaviourNew");
        }
        inline app::VolumeMovementTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::VolumeMovementTimelineBehaviourNew>(get_class());
        }
    } // namespace VolumeMovementTimelineBehaviourNew
} // namespace app::classes::types
