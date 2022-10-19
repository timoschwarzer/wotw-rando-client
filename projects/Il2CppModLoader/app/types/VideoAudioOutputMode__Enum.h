#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VideoAudioOutputMode__Enum {
        namespace {
            inline app::VideoAudioOutputMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VideoAudioOutputMode__Enum__Class** type_info = &type_info_ref;
        inline app::VideoAudioOutputMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoAudioOutputMode__Enum__Class>(type_info, "UnityEngine.Video", "VideoAudioOutputMode");
        }
        inline app::VideoAudioOutputMode__Enum* create() {
            return il2cpp::create_object<app::VideoAudioOutputMode__Enum>(get_class());
        }
    } // namespace VideoAudioOutputMode__Enum
} // namespace app::classes::types
