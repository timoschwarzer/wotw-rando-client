#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZonesProperties {
        namespace {
            inline app::ZonesProperties__Class* type_info_ref = nullptr;
        }
        inline app::ZonesProperties__Class** type_info = &type_info_ref;
        inline app::ZonesProperties__Class* get_class() {
            return il2cpp::get_class<app::ZonesProperties__Class>(type_info, "", "ZonesProperties");
        }
        inline app::ZonesProperties* create() {
            return il2cpp::create_object<app::ZonesProperties>(get_class());
        }
    } // namespace ZonesProperties
} // namespace app::classes::types
