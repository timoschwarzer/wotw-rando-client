#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EZData {
        namespace {
            inline app::EZData__Class* type_info_ref = nullptr;
        }
        inline app::EZData__Class** type_info = &type_info_ref;
        inline app::EZData__Class* get_class() {
            return il2cpp::get_class<app::EZData__Class>(type_info, "Moon.Wwise", "EZData");
        }
        inline app::EZData* create() {
            return il2cpp::create_object<app::EZData>(get_class());
        }
        inline app::EZData__Boxed* box(app::EZData value) {
            return il2cpp::box_value<app::EZData__Boxed>(get_class(), value);
        }
    } // namespace EZData
} // namespace app::classes::types
