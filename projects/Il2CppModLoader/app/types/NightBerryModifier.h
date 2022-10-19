#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightBerryModifier {
        namespace {
            inline app::NightBerryModifier__Class* type_info_ref = nullptr;
        }
        inline app::NightBerryModifier__Class** type_info = &type_info_ref;
        inline app::NightBerryModifier__Class* get_class() {
            return il2cpp::get_class<app::NightBerryModifier__Class>(type_info, "", "NightBerryModifier");
        }
        inline app::NightBerryModifier* create() {
            return il2cpp::create_object<app::NightBerryModifier>(get_class());
        }
    } // namespace NightBerryModifier
} // namespace app::classes::types
