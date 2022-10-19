#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBehaviourSettings {
        namespace {
            inline app::PetrifiedOwlBehaviourSettings__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBehaviourSettings__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBehaviourSettings__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBehaviourSettings__Class>(type_info, "", "PetrifiedOwlBehaviourSettings");
        }
        inline app::PetrifiedOwlBehaviourSettings* create() {
            return il2cpp::create_object<app::PetrifiedOwlBehaviourSettings>(get_class());
        }
    } // namespace PetrifiedOwlBehaviourSettings
} // namespace app::classes::types
