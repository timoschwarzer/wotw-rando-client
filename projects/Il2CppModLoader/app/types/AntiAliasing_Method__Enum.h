#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AntiAliasing_Method__Enum {
        namespace {
            inline app::AntiAliasing_Method__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AntiAliasing_Method__Enum__Class** type_info = &type_info_ref;
        inline app::AntiAliasing_Method__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AntiAliasing_Method__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "AntiAliasing", "Method");
        }
        inline app::AntiAliasing_Method__Enum* create() {
            return il2cpp::create_object<app::AntiAliasing_Method__Enum>(get_class());
        }
    } // namespace AntiAliasing_Method__Enum
} // namespace app::classes::types
