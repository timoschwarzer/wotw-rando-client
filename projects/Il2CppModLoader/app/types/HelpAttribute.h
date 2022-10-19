#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HelpAttribute {
        namespace {
            inline app::HelpAttribute__Class* type_info_ref = nullptr;
        }
        inline app::HelpAttribute__Class** type_info = &type_info_ref;
        inline app::HelpAttribute__Class* get_class() {
            return il2cpp::get_class<app::HelpAttribute__Class>(type_info, "Moon.Attributes", "HelpAttribute");
        }
        inline app::HelpAttribute* create() {
            return il2cpp::create_object<app::HelpAttribute>(get_class());
        }
    } // namespace HelpAttribute
} // namespace app::classes::types
