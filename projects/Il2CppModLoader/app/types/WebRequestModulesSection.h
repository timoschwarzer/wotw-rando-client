#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebRequestModulesSection {
        namespace {
            inline app::WebRequestModulesSection__Class* type_info_ref = nullptr;
        }
        inline app::WebRequestModulesSection__Class** type_info = &type_info_ref;
        inline app::WebRequestModulesSection__Class* get_class() {
            return il2cpp::get_class<app::WebRequestModulesSection__Class>(type_info, "System.Net.Configuration", "WebRequestModulesSection");
        }
        inline app::WebRequestModulesSection* create() {
            return il2cpp::create_object<app::WebRequestModulesSection>(get_class());
        }
    } // namespace WebRequestModulesSection
} // namespace app::classes::types
