#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberSwarmPOI_POIShape__Enum {
        namespace {
            inline app::UberSwarmPOI_POIShape__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberSwarmPOI_POIShape__Enum__Class** type_info = &type_info_ref;
        inline app::UberSwarmPOI_POIShape__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberSwarmPOI_POIShape__Enum__Class>(type_info, "", "UberSwarmPOI", "POIShape");
        }
        inline app::UberSwarmPOI_POIShape__Enum* create() {
            return il2cpp::create_object<app::UberSwarmPOI_POIShape__Enum>(get_class());
        }
    } // namespace UberSwarmPOI_POIShape__Enum
} // namespace app::classes::types
