#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitProtectionState__Enum__Array {
        namespace {
            inline app::HitProtectionState__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitProtectionState__Enum__Array__Class** type_info = &type_info_ref;
        inline app::HitProtectionState__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::HitProtectionState__Enum__Array__Class>(type_info, "", "HitProtectionState[]");
        }
        inline app::HitProtectionState__Enum__Array* create() {
            return il2cpp::create_object<app::HitProtectionState__Enum__Array>(get_class());
        }
    } // namespace HitProtectionState__Enum__Array
} // namespace app::classes::types
