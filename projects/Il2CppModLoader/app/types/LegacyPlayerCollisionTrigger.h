#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyPlayerCollisionTrigger {
        namespace {
            inline app::LegacyPlayerCollisionTrigger__Class* type_info_ref = nullptr;
        }
        inline app::LegacyPlayerCollisionTrigger__Class** type_info = &type_info_ref;
        inline app::LegacyPlayerCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyPlayerCollisionTrigger__Class>(type_info, "", "LegacyPlayerCollisionTrigger");
        }
        inline app::LegacyPlayerCollisionTrigger* create() {
            return il2cpp::create_object<app::LegacyPlayerCollisionTrigger>(get_class());
        }
    } // namespace LegacyPlayerCollisionTrigger
} // namespace app::classes::types
