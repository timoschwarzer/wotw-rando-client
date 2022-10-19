#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WispMessageProvider {
        namespace {
            inline app::WispMessageProvider__Class* type_info_ref = nullptr;
        }
        inline app::WispMessageProvider__Class** type_info = &type_info_ref;
        inline app::WispMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::WispMessageProvider__Class>(type_info, "", "WispMessageProvider");
        }
        inline app::WispMessageProvider* create() {
            return il2cpp::create_object<app::WispMessageProvider>(get_class());
        }
    } // namespace WispMessageProvider
} // namespace app::classes::types
