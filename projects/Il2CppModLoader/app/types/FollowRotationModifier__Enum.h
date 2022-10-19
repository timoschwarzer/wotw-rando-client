#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FollowRotationModifier__Enum {
        namespace {
            inline app::FollowRotationModifier__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FollowRotationModifier__Enum__Class** type_info = &type_info_ref;
        inline app::FollowRotationModifier__Enum__Class* get_class() {
            return il2cpp::get_class<app::FollowRotationModifier__Enum__Class>(type_info, "Moon", "FollowRotationModifier");
        }
        inline app::FollowRotationModifier__Enum* create() {
            return il2cpp::create_object<app::FollowRotationModifier__Enum>(get_class());
        }
    } // namespace FollowRotationModifier__Enum
} // namespace app::classes::types
