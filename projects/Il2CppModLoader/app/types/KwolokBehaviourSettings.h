#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBehaviourSettings {
        namespace {
            inline app::KwolokBehaviourSettings__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBehaviourSettings__Class** type_info = &type_info_ref;
        inline app::KwolokBehaviourSettings__Class* get_class() {
            return il2cpp::get_class<app::KwolokBehaviourSettings__Class>(type_info, "", "KwolokBehaviourSettings");
        }
        inline app::KwolokBehaviourSettings* create() {
            return il2cpp::create_object<app::KwolokBehaviourSettings>(get_class());
        }
    } // namespace KwolokBehaviourSettings
} // namespace app::classes::types
