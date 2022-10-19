#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostIndicator {
        namespace {
            inline app::GhostIndicator__Class* type_info_ref = nullptr;
        }
        inline app::GhostIndicator__Class** type_info = &type_info_ref;
        inline app::GhostIndicator__Class* get_class() {
            return il2cpp::get_class<app::GhostIndicator__Class>(type_info, "", "GhostIndicator");
        }
        inline app::GhostIndicator* create() {
            return il2cpp::create_object<app::GhostIndicator>(get_class());
        }
    } // namespace GhostIndicator
} // namespace app::classes::types
