#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerStatisticVersion_1__Array {
        namespace {
            inline app::PlayerStatisticVersion_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerStatisticVersion_1__Array__Class** type_info = &type_info_ref;
        inline app::PlayerStatisticVersion_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticVersion_1__Array__Class>(type_info, "PlayFab.ServerModels", "PlayerStatisticVersion[]");
        }
        inline app::PlayerStatisticVersion_1__Array* create() {
            return il2cpp::create_object<app::PlayerStatisticVersion_1__Array>(get_class());
        }
    } // namespace PlayerStatisticVersion_1__Array
} // namespace app::classes::types
