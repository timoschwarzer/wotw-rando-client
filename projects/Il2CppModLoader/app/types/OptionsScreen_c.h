#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OptionsScreen_c {
        inline app::OptionsScreen_c__Class** type_info = (app::OptionsScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04719140));
        inline app::OptionsScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::OptionsScreen_c__Class>(type_info, "", "OptionsScreen", "<>c");
        }
        inline app::OptionsScreen_c* create() {
            return il2cpp::create_object<app::OptionsScreen_c>(get_class());
        }
    } // namespace OptionsScreen_c
} // namespace app::classes::types
