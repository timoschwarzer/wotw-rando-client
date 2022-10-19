#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPickupOnCondition {
        namespace {
            inline app::GetPickupOnCondition__Class* type_info_ref = nullptr;
        }
        inline app::GetPickupOnCondition__Class** type_info = &type_info_ref;
        inline app::GetPickupOnCondition__Class* get_class() {
            return il2cpp::get_class<app::GetPickupOnCondition__Class>(type_info, "", "GetPickupOnCondition");
        }
        inline app::GetPickupOnCondition* create() {
            return il2cpp::create_object<app::GetPickupOnCondition>(get_class());
        }
    } // namespace GetPickupOnCondition
} // namespace app::classes::types
