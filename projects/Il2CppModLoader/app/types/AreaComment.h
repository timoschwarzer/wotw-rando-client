#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaComment {
        namespace {
            inline app::AreaComment__Class* type_info_ref = nullptr;
        }
        inline app::AreaComment__Class** type_info = &type_info_ref;
        inline app::AreaComment__Class* get_class() {
            return il2cpp::get_class<app::AreaComment__Class>(type_info, "Moon.Telemetry.Performance", "AreaComment");
        }
        inline app::AreaComment* create() {
            return il2cpp::create_object<app::AreaComment>(get_class());
        }
        inline app::AreaComment__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaComment__Array>(get_class(), size);
        }
        inline app::AreaComment__Array* create_array(const std::vector<app::AreaComment*>& items) {
            return il2cpp::array_new<app::AreaComment__Array>(get_class(), items);
        }
    } // namespace AreaComment
} // namespace app::classes::types
