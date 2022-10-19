#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectMaskDissolveColorModifierWisps {
        namespace {
            inline app::MoonEffectMaskDissolveColorModifierWisps__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectMaskDissolveColorModifierWisps__Class** type_info = &type_info_ref;
        inline app::MoonEffectMaskDissolveColorModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectMaskDissolveColorModifierWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectMaskDissolveColorModifierWisps");
        }
        inline app::MoonEffectMaskDissolveColorModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectMaskDissolveColorModifierWisps>(get_class());
        }
    } // namespace MoonEffectMaskDissolveColorModifierWisps
} // namespace app::classes::types
