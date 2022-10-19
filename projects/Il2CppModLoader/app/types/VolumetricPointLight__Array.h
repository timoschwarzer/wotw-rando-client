#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumetricPointLight__Array {
        namespace {
            inline app::VolumetricPointLight__Array__Class* type_info_ref = nullptr;
        }
        inline app::VolumetricPointLight__Array__Class** type_info = &type_info_ref;
        inline app::VolumetricPointLight__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumetricPointLight__Array__Class>(type_info, "Moon.Rendering", "VolumetricPointLight[]");
        }
        inline app::VolumetricPointLight__Array* create() {
            return il2cpp::create_object<app::VolumetricPointLight__Array>(get_class());
        }
    } // namespace VolumetricPointLight__Array
} // namespace app::classes::types
