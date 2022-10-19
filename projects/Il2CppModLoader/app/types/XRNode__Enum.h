#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRNode__Enum {
        namespace {
            inline app::XRNode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XRNode__Enum__Class** type_info = &type_info_ref;
        inline app::XRNode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XRNode__Enum__Class>(type_info, "UnityEngine.XR", "XRNode");
        }
        inline app::XRNode__Enum* create() {
            return il2cpp::create_object<app::XRNode__Enum>(get_class());
        }
    } // namespace XRNode__Enum
} // namespace app::classes::types
