#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace _FieldInfo {
        namespace {
            inline app::_FieldInfo__Class* type_info_ref = nullptr;
        }
        inline app::_FieldInfo__Class** type_info = &type_info_ref;
        inline app::_FieldInfo__Class* get_class() {
            return il2cpp::get_class<app::_FieldInfo__Class>(type_info, "System.Runtime.InteropServices", "_FieldInfo");
        }
    } // namespace _FieldInfo
} // namespace app::classes::types
