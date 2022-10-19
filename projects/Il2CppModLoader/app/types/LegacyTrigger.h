#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTrigger {
        namespace {
            inline app::LegacyTrigger__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTrigger__Class** type_info = &type_info_ref;
        inline app::LegacyTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyTrigger__Class>(type_info, "", "LegacyTrigger");
        }
        inline app::LegacyTrigger* create() {
            return il2cpp::create_object<app::LegacyTrigger>(get_class());
        }
    } // namespace LegacyTrigger
} // namespace app::classes::types
