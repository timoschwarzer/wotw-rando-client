#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchVideoPlayer {
        namespace {
            inline app::SwitchVideoPlayer__Class* type_info_ref = nullptr;
        }
        inline app::SwitchVideoPlayer__Class** type_info = &type_info_ref;
        inline app::SwitchVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::SwitchVideoPlayer__Class>(type_info, "", "SwitchVideoPlayer");
        }
        inline app::SwitchVideoPlayer* create() {
            return il2cpp::create_object<app::SwitchVideoPlayer>(get_class());
        }
    } // namespace SwitchVideoPlayer
} // namespace app::classes::types
