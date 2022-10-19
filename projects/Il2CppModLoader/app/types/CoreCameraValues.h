#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CoreCameraValues {
        namespace {
            inline app::CoreCameraValues__Class* type_info_ref = nullptr;
        }
        inline app::CoreCameraValues__Class** type_info = &type_info_ref;
        inline app::CoreCameraValues__Class* get_class() {
            return il2cpp::get_class<app::CoreCameraValues__Class>(type_info, "UnityEngine.Experimental.Rendering", "CoreCameraValues");
        }
        inline app::CoreCameraValues* create() {
            return il2cpp::create_object<app::CoreCameraValues>(get_class());
        }
        inline app::CoreCameraValues__Boxed* box(app::CoreCameraValues value) {
            return il2cpp::box_value<app::CoreCameraValues__Boxed>(get_class(), value);
        }
    } // namespace CoreCameraValues
} // namespace app::classes::types
