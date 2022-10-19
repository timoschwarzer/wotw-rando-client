#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGlide {
        namespace {
            inline app::SeinGlide__Class* type_info_ref = nullptr;
        }
        inline app::SeinGlide__Class** type_info = &type_info_ref;
        inline app::SeinGlide__Class* get_class() {
            return il2cpp::get_class<app::SeinGlide__Class>(type_info, "", "SeinGlide");
        }
        inline app::SeinGlide* create() {
            return il2cpp::create_object<app::SeinGlide>(get_class());
        }
    } // namespace SeinGlide
} // namespace app::classes::types
