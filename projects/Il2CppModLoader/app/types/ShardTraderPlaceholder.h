#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShardTraderPlaceholder {
        namespace {
            inline app::ShardTraderPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::ShardTraderPlaceholder__Class** type_info = &type_info_ref;
        inline app::ShardTraderPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderPlaceholder__Class>(type_info, "", "ShardTraderPlaceholder");
        }
        inline app::ShardTraderPlaceholder* create() {
            return il2cpp::create_object<app::ShardTraderPlaceholder>(get_class());
        }
    } // namespace ShardTraderPlaceholder
} // namespace app::classes::types
