#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativePropertyAttribute {
        namespace {
            inline app::NativePropertyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativePropertyAttribute__Class** type_info = &type_info_ref;
        inline app::NativePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativePropertyAttribute__Class>(type_info, "UnityEngine.Bindings", "NativePropertyAttribute");
        }
        inline app::NativePropertyAttribute* create() {
            return il2cpp::create_object<app::NativePropertyAttribute>(get_class());
        }
    } // namespace NativePropertyAttribute
} // namespace app::classes::types
