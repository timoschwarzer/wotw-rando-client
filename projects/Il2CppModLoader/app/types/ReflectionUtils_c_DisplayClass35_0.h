#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionUtils_c_DisplayClass35_0 {
        inline app::ReflectionUtils_c_DisplayClass35_0__Class** type_info = (app::ReflectionUtils_c_DisplayClass35_0__Class**)(modloader::win::memory::resolve_rva(0x04789998));
        inline app::ReflectionUtils_c_DisplayClass35_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_c_DisplayClass35_0__Class>(type_info, "PlayFab.Json", "ReflectionUtils", "<>c__DisplayClass35_0");
        }
        inline app::ReflectionUtils_c_DisplayClass35_0* create() {
            return il2cpp::create_object<app::ReflectionUtils_c_DisplayClass35_0>(get_class());
        }
    } // namespace ReflectionUtils_c_DisplayClass35_0
} // namespace app::classes::types
