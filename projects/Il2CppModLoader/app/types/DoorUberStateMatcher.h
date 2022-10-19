#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoorUberStateMatcher {
        namespace {
            inline app::DoorUberStateMatcher__Class* type_info_ref = nullptr;
        }
        inline app::DoorUberStateMatcher__Class** type_info = &type_info_ref;
        inline app::DoorUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::DoorUberStateMatcher__Class>(type_info, "", "DoorUberStateMatcher");
        }
        inline app::DoorUberStateMatcher* create() {
            return il2cpp::create_object<app::DoorUberStateMatcher>(get_class());
        }
    } // namespace DoorUberStateMatcher
} // namespace app::classes::types
