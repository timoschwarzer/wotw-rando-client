#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace _Assembly {
        namespace {
            inline app::_Assembly__Class* type_info_ref = nullptr;
        }
        inline app::_Assembly__Class** type_info = &type_info_ref;
        inline app::_Assembly__Class* get_class() {
            return il2cpp::get_class<app::_Assembly__Class>(type_info, "System.Runtime.InteropServices", "_Assembly");
        }
    } // namespace _Assembly
} // namespace app::classes::types
