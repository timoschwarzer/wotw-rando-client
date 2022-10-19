#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Navigation {
        namespace {
            inline app::Navigation__Class* type_info_ref = nullptr;
        }
        inline app::Navigation__Class** type_info = &type_info_ref;
        inline app::Navigation__Class* get_class() {
            return il2cpp::get_class<app::Navigation__Class>(type_info, "UnityEngine.UI", "Navigation");
        }
        inline app::Navigation* create() {
            return il2cpp::create_object<app::Navigation>(get_class());
        }
        inline app::Navigation__Boxed* box(app::Navigation value) {
            return il2cpp::box_value<app::Navigation__Boxed>(get_class(), value);
        }
        inline app::Navigation__Array* create_array(int size) {
            return il2cpp::array_new<app::Navigation__Array>(get_class(), size);
        }
        inline app::Navigation__Array* create_array(const std::vector<app::Navigation>& items) {
            return il2cpp::array_new<app::Navigation__Array>(get_class(), items);
        }
    } // namespace Navigation
} // namespace app::classes::types
