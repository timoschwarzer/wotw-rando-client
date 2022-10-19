#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindowsVideoPlayer {
        namespace {
            inline app::WindowsVideoPlayer__Class* type_info_ref = nullptr;
        }
        inline app::WindowsVideoPlayer__Class** type_info = &type_info_ref;
        inline app::WindowsVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::WindowsVideoPlayer__Class>(type_info, "", "WindowsVideoPlayer");
        }
        inline app::WindowsVideoPlayer* create() {
            return il2cpp::create_object<app::WindowsVideoPlayer>(get_class());
        }
    } // namespace WindowsVideoPlayer
} // namespace app::classes::types
