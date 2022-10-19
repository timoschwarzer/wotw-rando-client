#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AdvancedPushPlatformMsg__Array {
        namespace {
            inline app::AdvancedPushPlatformMsg__Array__Class* type_info_ref = nullptr;
        }
        inline app::AdvancedPushPlatformMsg__Array__Class** type_info = &type_info_ref;
        inline app::AdvancedPushPlatformMsg__Array__Class* get_class() {
            return il2cpp::get_class<app::AdvancedPushPlatformMsg__Array__Class>(type_info, "PlayFab.ServerModels", "AdvancedPushPlatformMsg[]");
        }
        inline app::AdvancedPushPlatformMsg__Array* create() {
            return il2cpp::create_object<app::AdvancedPushPlatformMsg__Array>(get_class());
        }
    } // namespace AdvancedPushPlatformMsg__Array
} // namespace app::classes::types
