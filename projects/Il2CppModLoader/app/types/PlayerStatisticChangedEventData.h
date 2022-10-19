#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerStatisticChangedEventData {
        namespace {
            inline app::PlayerStatisticChangedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerStatisticChangedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerStatisticChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerStatisticChangedEventData");
        }
        inline app::PlayerStatisticChangedEventData* create() {
            return il2cpp::create_object<app::PlayerStatisticChangedEventData>(get_class());
        }
    } // namespace PlayerStatisticChangedEventData
} // namespace app::classes::types
