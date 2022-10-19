#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageBox_c_1 {
        inline app::MessageBox_c_1__Class** type_info = (app::MessageBox_c_1__Class**)(modloader::win::memory::resolve_rva(0x0473D3F0));
        inline app::MessageBox_c_1__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageBox_c_1__Class>(type_info, "Moon.UI", "MessageBox", "<>c");
        }
        inline app::MessageBox_c_1* create() {
            return il2cpp::create_object<app::MessageBox_c_1>(get_class());
        }
    } // namespace MessageBox_c_1
} // namespace app::classes::types
