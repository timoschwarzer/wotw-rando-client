#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageRecieverType__Enum__Array {
        namespace {
            inline app::DamageRecieverType__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::DamageRecieverType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::DamageRecieverType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageRecieverType__Enum__Array__Class>(type_info, "", "DamageRecieverType[]");
        }
        inline app::DamageRecieverType__Enum__Array* create() {
            return il2cpp::create_object<app::DamageRecieverType__Enum__Array>(get_class());
        }
    } // namespace DamageRecieverType__Enum__Array
} // namespace app::classes::types
