#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VideoRenderMode__Enum {
        namespace {
            inline app::VideoRenderMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VideoRenderMode__Enum__Class** type_info = &type_info_ref;
        inline app::VideoRenderMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::VideoRenderMode__Enum__Class>(type_info, "UnityEngine.Video", "VideoRenderMode");
        }
        inline app::VideoRenderMode__Enum* create() {
            return il2cpp::create_object<app::VideoRenderMode__Enum>(get_class());
        }
    } // namespace VideoRenderMode__Enum
} // namespace app::classes::types
