#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinStandardSpiritFlameAbility {
        namespace {
            inline app::SeinStandardSpiritFlameAbility__Class* type_info_ref = nullptr;
        }
        inline app::SeinStandardSpiritFlameAbility__Class** type_info = &type_info_ref;
        inline app::SeinStandardSpiritFlameAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinStandardSpiritFlameAbility__Class>(type_info, "", "SeinStandardSpiritFlameAbility");
        }
        inline app::SeinStandardSpiritFlameAbility* create() {
            return il2cpp::create_object<app::SeinStandardSpiritFlameAbility>(get_class());
        }
    } // namespace SeinStandardSpiritFlameAbility
} // namespace app::classes::types
