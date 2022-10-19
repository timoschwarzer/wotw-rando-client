#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpShootSharkZone {
        namespace {
            inline app::JumpShootSharkZone__Class* type_info_ref = nullptr;
        }
        inline app::JumpShootSharkZone__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkZone__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkZone__Class>(type_info, "", "JumpShootSharkZone");
        }
        inline app::JumpShootSharkZone* create() {
            return il2cpp::create_object<app::JumpShootSharkZone>(get_class());
        }
    } // namespace JumpShootSharkZone
} // namespace app::classes::types
