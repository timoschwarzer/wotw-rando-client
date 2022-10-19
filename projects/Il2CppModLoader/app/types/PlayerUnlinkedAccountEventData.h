#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUnlinkedAccountEventData {
        namespace {
            inline app::PlayerUnlinkedAccountEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerUnlinkedAccountEventData__Class** type_info = &type_info_ref;
        inline app::PlayerUnlinkedAccountEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerUnlinkedAccountEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerUnlinkedAccountEventData");
        }
        inline app::PlayerUnlinkedAccountEventData* create() {
            return il2cpp::create_object<app::PlayerUnlinkedAccountEventData>(get_class());
        }
    } // namespace PlayerUnlinkedAccountEventData
} // namespace app::classes::types
