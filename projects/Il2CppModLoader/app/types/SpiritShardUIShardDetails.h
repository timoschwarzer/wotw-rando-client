#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardUIShardDetails {
        namespace {
            inline app::SpiritShardUIShardDetails__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardUIShardDetails__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIShardDetails__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardDetails__Class>(type_info, "", "SpiritShardUIShardDetails");
        }
        inline app::SpiritShardUIShardDetails* create() {
            return il2cpp::create_object<app::SpiritShardUIShardDetails>(get_class());
        }
    } // namespace SpiritShardUIShardDetails
} // namespace app::classes::types
