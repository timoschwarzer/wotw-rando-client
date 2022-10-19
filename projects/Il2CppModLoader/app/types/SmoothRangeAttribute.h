#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmoothRangeAttribute {
        namespace {
            inline app::SmoothRangeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SmoothRangeAttribute__Class** type_info = &type_info_ref;
        inline app::SmoothRangeAttribute__Class* get_class() {
            return il2cpp::get_class<app::SmoothRangeAttribute__Class>(type_info, "", "SmoothRangeAttribute");
        }
        inline app::SmoothRangeAttribute* create() {
            return il2cpp::create_object<app::SmoothRangeAttribute>(get_class());
        }
    } // namespace SmoothRangeAttribute
} // namespace app::classes::types
