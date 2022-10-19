#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyEntityDamageReciever__Array {
        namespace {
            inline app::LegacyEntityDamageReciever__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyEntityDamageReciever__Array__Class** type_info = &type_info_ref;
        inline app::LegacyEntityDamageReciever__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntityDamageReciever__Array__Class>(type_info, "", "LegacyEntityDamageReciever[]");
        }
        inline app::LegacyEntityDamageReciever__Array* create() {
            return il2cpp::create_object<app::LegacyEntityDamageReciever__Array>(get_class());
        }
    } // namespace LegacyEntityDamageReciever__Array
} // namespace app::classes::types
