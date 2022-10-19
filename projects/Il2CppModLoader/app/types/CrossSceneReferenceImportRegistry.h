#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossSceneReferenceImportRegistry {
        namespace {
            inline app::CrossSceneReferenceImportRegistry__Class* type_info_ref = nullptr;
        }
        inline app::CrossSceneReferenceImportRegistry__Class** type_info = &type_info_ref;
        inline app::CrossSceneReferenceImportRegistry__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceImportRegistry__Class>(type_info, "Moon", "CrossSceneReferenceImportRegistry");
        }
        inline app::CrossSceneReferenceImportRegistry* create() {
            return il2cpp::create_object<app::CrossSceneReferenceImportRegistry>(get_class());
        }
    } // namespace CrossSceneReferenceImportRegistry
} // namespace app::classes::types
