#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageReceiverCondition {
        namespace {
            inline app::DamageReceiverCondition__Class* type_info_ref = nullptr;
        }
        inline app::DamageReceiverCondition__Class** type_info = &type_info_ref;
        inline app::DamageReceiverCondition__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiverCondition__Class>(type_info, "", "DamageReceiverCondition");
        }
        inline app::DamageReceiverCondition* create() {
            return il2cpp::create_object<app::DamageReceiverCondition>(get_class());
        }
    } // namespace DamageReceiverCondition
} // namespace app::classes::types
