#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HelpAttribute_MessageType__Enum {
        namespace {
            inline app::HelpAttribute_MessageType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HelpAttribute_MessageType__Enum__Class** type_info = &type_info_ref;
        inline app::HelpAttribute_MessageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HelpAttribute_MessageType__Enum__Class>(type_info, "Moon.Attributes", "HelpAttribute", "MessageType");
        }
        inline app::HelpAttribute_MessageType__Enum* create() {
            return il2cpp::create_object<app::HelpAttribute_MessageType__Enum>(get_class());
        }
    } // namespace HelpAttribute_MessageType__Enum
} // namespace app::classes::types
