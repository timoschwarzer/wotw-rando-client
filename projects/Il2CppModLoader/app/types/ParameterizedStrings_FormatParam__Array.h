#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParameterizedStrings_FormatParam__Array {
        inline app::ParameterizedStrings_FormatParam__Array__Class** type_info = (app::ParameterizedStrings_FormatParam__Array__Class**)(modloader::win::memory::resolve_rva(0x04713B10));
        inline app::ParameterizedStrings_FormatParam__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterizedStrings_FormatParam__Array__Class>(type_info, "System", "ParameterizedStrings+FormatParam[]");
        }
        inline app::ParameterizedStrings_FormatParam__Array* create() {
            return il2cpp::create_object<app::ParameterizedStrings_FormatParam__Array>(get_class());
        }
    } // namespace ParameterizedStrings_FormatParam__Array
} // namespace app::classes::types
