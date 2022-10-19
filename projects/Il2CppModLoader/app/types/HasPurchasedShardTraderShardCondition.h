#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasPurchasedShardTraderShardCondition {
        namespace {
            inline app::HasPurchasedShardTraderShardCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasPurchasedShardTraderShardCondition__Class** type_info = &type_info_ref;
        inline app::HasPurchasedShardTraderShardCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedShardTraderShardCondition__Class>(type_info, "", "HasPurchasedShardTraderShardCondition");
        }
        inline app::HasPurchasedShardTraderShardCondition* create() {
            return il2cpp::create_object<app::HasPurchasedShardTraderShardCondition>(get_class());
        }
    } // namespace HasPurchasedShardTraderShardCondition
} // namespace app::classes::types
