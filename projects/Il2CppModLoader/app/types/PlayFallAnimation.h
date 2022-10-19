#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFallAnimation {
        namespace {
            inline app::PlayFallAnimation__Class* type_info_ref = nullptr;
        }
        inline app::PlayFallAnimation__Class** type_info = &type_info_ref;
        inline app::PlayFallAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayFallAnimation__Class>(type_info, "", "PlayFallAnimation");
        }
        inline app::PlayFallAnimation* create() {
            return il2cpp::create_object<app::PlayFallAnimation>(get_class());
        }
    } // namespace PlayFallAnimation
} // namespace app::classes::types
