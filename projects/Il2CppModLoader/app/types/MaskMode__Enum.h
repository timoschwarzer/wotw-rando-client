#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskMode__Enum {
        namespace {
            inline app::MaskMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MaskMode__Enum__Class** type_info = &type_info_ref;
        inline app::MaskMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::MaskMode__Enum__Class>(type_info, "", "MaskMode");
        }
        inline app::MaskMode__Enum* create() {
            return il2cpp::create_object<app::MaskMode__Enum>(get_class());
        }
    } // namespace MaskMode__Enum
} // namespace app::classes::types
