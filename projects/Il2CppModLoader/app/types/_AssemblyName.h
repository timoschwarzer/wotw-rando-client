#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace _AssemblyName {
        namespace {
            inline app::_AssemblyName__Class* type_info_ref = nullptr;
        }
        inline app::_AssemblyName__Class** type_info = &type_info_ref;
        inline app::_AssemblyName__Class* get_class() {
            return il2cpp::get_class<app::_AssemblyName__Class>(type_info, "System.Runtime.InteropServices", "_AssemblyName");
        }
    } // namespace _AssemblyName
} // namespace app::classes::types
