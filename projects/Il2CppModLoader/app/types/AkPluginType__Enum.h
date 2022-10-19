#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkPluginType__Enum {
        namespace {
            inline app::AkPluginType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkPluginType__Enum__Class** type_info = &type_info_ref;
        inline app::AkPluginType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkPluginType__Enum__Class>(type_info, "", "AkPluginType");
        }
        inline app::AkPluginType__Enum* create() {
            return il2cpp::create_object<app::AkPluginType__Enum>(get_class());
        }
    } // namespace AkPluginType__Enum
} // namespace app::classes::types
