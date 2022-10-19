#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeArrayOptions__Enum {
        namespace {
            inline app::NativeArrayOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NativeArrayOptions__Enum__Class** type_info = &type_info_ref;
        inline app::NativeArrayOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::NativeArrayOptions__Enum__Class>(type_info, "Unity.Collections", "NativeArrayOptions");
        }
        inline app::NativeArrayOptions__Enum* create() {
            return il2cpp::create_object<app::NativeArrayOptions__Enum>(get_class());
        }
    } // namespace NativeArrayOptions__Enum
} // namespace app::classes::types
