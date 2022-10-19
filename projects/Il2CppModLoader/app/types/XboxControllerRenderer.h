#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxControllerRenderer {
        namespace {
            inline app::XboxControllerRenderer__Class* type_info_ref = nullptr;
        }
        inline app::XboxControllerRenderer__Class** type_info = &type_info_ref;
        inline app::XboxControllerRenderer__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerRenderer__Class>(type_info, "", "XboxControllerRenderer");
        }
        inline app::XboxControllerRenderer* create() {
            return il2cpp::create_object<app::XboxControllerRenderer>(get_class());
        }
    } // namespace XboxControllerRenderer
} // namespace app::classes::types
