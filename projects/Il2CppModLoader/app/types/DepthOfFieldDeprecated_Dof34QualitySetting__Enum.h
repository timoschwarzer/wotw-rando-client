#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DepthOfFieldDeprecated_Dof34QualitySetting__Enum {
        namespace {
            inline app::DepthOfFieldDeprecated_Dof34QualitySetting__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DepthOfFieldDeprecated_Dof34QualitySetting__Enum__Class** type_info = &type_info_ref;
        inline app::DepthOfFieldDeprecated_Dof34QualitySetting__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfFieldDeprecated_Dof34QualitySetting__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated", "Dof34QualitySetting");
        }
        inline app::DepthOfFieldDeprecated_Dof34QualitySetting__Enum* create() {
            return il2cpp::create_object<app::DepthOfFieldDeprecated_Dof34QualitySetting__Enum>(get_class());
        }
    } // namespace DepthOfFieldDeprecated_Dof34QualitySetting__Enum
} // namespace app::classes::types
