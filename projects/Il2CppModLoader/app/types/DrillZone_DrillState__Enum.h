#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrillZone_DrillState__Enum {
        namespace {
            inline app::DrillZone_DrillState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DrillZone_DrillState__Enum__Class** type_info = &type_info_ref;
        inline app::DrillZone_DrillState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DrillZone_DrillState__Enum__Class>(type_info, "", "DrillZone", "DrillState");
        }
        inline app::DrillZone_DrillState__Enum* create() {
            return il2cpp::create_object<app::DrillZone_DrillState__Enum>(get_class());
        }
    } // namespace DrillZone_DrillState__Enum
} // namespace app::classes::types
