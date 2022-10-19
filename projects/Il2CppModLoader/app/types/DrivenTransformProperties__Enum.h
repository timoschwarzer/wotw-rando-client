#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrivenTransformProperties__Enum {
        namespace {
            inline app::DrivenTransformProperties__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DrivenTransformProperties__Enum__Class** type_info = &type_info_ref;
        inline app::DrivenTransformProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::DrivenTransformProperties__Enum__Class>(type_info, "UnityEngine", "DrivenTransformProperties");
        }
        inline app::DrivenTransformProperties__Enum* create() {
            return il2cpp::create_object<app::DrivenTransformProperties__Enum>(get_class());
        }
    } // namespace DrivenTransformProperties__Enum
} // namespace app::classes::types
