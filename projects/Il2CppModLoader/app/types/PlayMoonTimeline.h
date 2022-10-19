#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayMoonTimeline {
        namespace {
            inline app::PlayMoonTimeline__Class* type_info_ref = nullptr;
        }
        inline app::PlayMoonTimeline__Class** type_info = &type_info_ref;
        inline app::PlayMoonTimeline__Class* get_class() {
            return il2cpp::get_class<app::PlayMoonTimeline__Class>(type_info, "Moon.Timeline", "PlayMoonTimeline");
        }
        inline app::PlayMoonTimeline* create() {
            return il2cpp::create_object<app::PlayMoonTimeline>(get_class());
        }
    } // namespace PlayMoonTimeline
} // namespace app::classes::types
