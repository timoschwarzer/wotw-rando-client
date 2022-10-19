#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CubemapReflection {
        namespace {
            inline app::CubemapReflection__Class* type_info_ref = nullptr;
        }
        inline app::CubemapReflection__Class** type_info = &type_info_ref;
        inline app::CubemapReflection__Class* get_class() {
            return il2cpp::get_class<app::CubemapReflection__Class>(type_info, "", "CubemapReflection");
        }
        inline app::CubemapReflection* create() {
            return il2cpp::create_object<app::CubemapReflection>(get_class());
        }
    } // namespace CubemapReflection
} // namespace app::classes::types
