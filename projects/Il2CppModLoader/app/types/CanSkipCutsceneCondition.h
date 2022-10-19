#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanSkipCutsceneCondition {
        namespace {
            inline app::CanSkipCutsceneCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanSkipCutsceneCondition__Class** type_info = &type_info_ref;
        inline app::CanSkipCutsceneCondition__Class* get_class() {
            return il2cpp::get_class<app::CanSkipCutsceneCondition__Class>(type_info, "", "CanSkipCutsceneCondition");
        }
        inline app::CanSkipCutsceneCondition* create() {
            return il2cpp::create_object<app::CanSkipCutsceneCondition>(get_class());
        }
    } // namespace CanSkipCutsceneCondition
} // namespace app::classes::types
