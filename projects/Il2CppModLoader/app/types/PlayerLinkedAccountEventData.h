#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLinkedAccountEventData {
        namespace {
            inline app::PlayerLinkedAccountEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLinkedAccountEventData__Class** type_info = &type_info_ref;
        inline app::PlayerLinkedAccountEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerLinkedAccountEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerLinkedAccountEventData");
        }
        inline app::PlayerLinkedAccountEventData* create() {
            return il2cpp::create_object<app::PlayerLinkedAccountEventData>(get_class());
        }
    } // namespace PlayerLinkedAccountEventData
} // namespace app::classes::types
