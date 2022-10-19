#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HTML_StatusText_t {
        namespace {
            inline app::HTML_StatusText_t__Class* type_info_ref = nullptr;
        }
        inline app::HTML_StatusText_t__Class** type_info = &type_info_ref;
        inline app::HTML_StatusText_t__Class* get_class() {
            return il2cpp::get_class<app::HTML_StatusText_t__Class>(type_info, "Steamworks", "HTML_StatusText_t");
        }
        inline app::HTML_StatusText_t* create() {
            return il2cpp::create_object<app::HTML_StatusText_t>(get_class());
        }
        inline app::HTML_StatusText_t__Boxed* box(app::HTML_StatusText_t value) {
            return il2cpp::box_value<app::HTML_StatusText_t__Boxed>(get_class(), value);
        }
    } // namespace HTML_StatusText_t
} // namespace app::classes::types
