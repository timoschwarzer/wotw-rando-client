#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormBlockedDetector {
        namespace {
            inline app::MortarWormBlockedDetector__Class* type_info_ref = nullptr;
        }
        inline app::MortarWormBlockedDetector__Class** type_info = &type_info_ref;
        inline app::MortarWormBlockedDetector__Class* get_class() {
            return il2cpp::get_class<app::MortarWormBlockedDetector__Class>(type_info, "", "MortarWormBlockedDetector");
        }
        inline app::MortarWormBlockedDetector* create() {
            return il2cpp::create_object<app::MortarWormBlockedDetector>(get_class());
        }
    } // namespace MortarWormBlockedDetector
} // namespace app::classes::types
