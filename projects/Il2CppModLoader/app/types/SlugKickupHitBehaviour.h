#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlugKickupHitBehaviour {
        namespace {
            inline app::SlugKickupHitBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SlugKickupHitBehaviour__Class** type_info = &type_info_ref;
        inline app::SlugKickupHitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SlugKickupHitBehaviour__Class>(type_info, "", "SlugKickupHitBehaviour");
        }
        inline app::SlugKickupHitBehaviour* create() {
            return il2cpp::create_object<app::SlugKickupHitBehaviour>(get_class());
        }
    } // namespace SlugKickupHitBehaviour
} // namespace app::classes::types
