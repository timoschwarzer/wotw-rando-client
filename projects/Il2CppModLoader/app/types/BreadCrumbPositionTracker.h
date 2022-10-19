#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BreadCrumbPositionTracker {
        namespace {
            inline app::BreadCrumbPositionTracker__Class* type_info_ref = nullptr;
        }
        inline app::BreadCrumbPositionTracker__Class** type_info = &type_info_ref;
        inline app::BreadCrumbPositionTracker__Class* get_class() {
            return il2cpp::get_class<app::BreadCrumbPositionTracker__Class>(type_info, "", "BreadCrumbPositionTracker");
        }
        inline app::BreadCrumbPositionTracker* create() {
            return il2cpp::create_object<app::BreadCrumbPositionTracker>(get_class());
        }
    } // namespace BreadCrumbPositionTracker
} // namespace app::classes::types
