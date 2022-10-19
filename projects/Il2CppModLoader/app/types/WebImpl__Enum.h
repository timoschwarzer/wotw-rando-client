#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebImpl__Enum {
        namespace {
            inline app::WebImpl__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WebImpl__Enum__Class** type_info = &type_info_ref;
        inline app::WebImpl__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebImpl__Enum__Class>(type_info, "Moon.Telemetry.Web", "WebImpl");
        }
        inline app::WebImpl__Enum* create() {
            return il2cpp::create_object<app::WebImpl__Enum>(get_class());
        }
    } // namespace WebImpl__Enum
} // namespace app::classes::types
