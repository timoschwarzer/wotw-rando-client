#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AvailableTrackingData__Enum {
        namespace {
            inline app::AvailableTrackingData__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AvailableTrackingData__Enum__Class** type_info = &type_info_ref;
        inline app::AvailableTrackingData__Enum__Class* get_class() {
            return il2cpp::get_class<app::AvailableTrackingData__Enum__Class>(type_info, "UnityEngine.XR", "AvailableTrackingData");
        }
        inline app::AvailableTrackingData__Enum* create() {
            return il2cpp::create_object<app::AvailableTrackingData__Enum>(get_class());
        }
    } // namespace AvailableTrackingData__Enum
} // namespace app::classes::types
