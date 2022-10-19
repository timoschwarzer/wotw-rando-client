#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MotionAbsorbCharacter {
        namespace {
            inline app::MotionAbsorbCharacter__Class* type_info_ref = nullptr;
        }
        inline app::MotionAbsorbCharacter__Class** type_info = &type_info_ref;
        inline app::MotionAbsorbCharacter__Class* get_class() {
            return il2cpp::get_class<app::MotionAbsorbCharacter__Class>(type_info, "RootMotion.Demos", "MotionAbsorbCharacter");
        }
        inline app::MotionAbsorbCharacter* create() {
            return il2cpp::create_object<app::MotionAbsorbCharacter>(get_class());
        }
    } // namespace MotionAbsorbCharacter
} // namespace app::classes::types
