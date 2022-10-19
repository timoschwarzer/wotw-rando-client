#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpShootSharkSettings {
        namespace {
            inline app::JumpShootSharkSettings__Class* type_info_ref = nullptr;
        }
        inline app::JumpShootSharkSettings__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkSettings__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkSettings__Class>(type_info, "", "JumpShootSharkSettings");
        }
        inline app::JumpShootSharkSettings* create() {
            return il2cpp::create_object<app::JumpShootSharkSettings>(get_class());
        }
    } // namespace JumpShootSharkSettings
} // namespace app::classes::types
