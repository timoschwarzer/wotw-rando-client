#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneDSEventsAPI_c_DisplayClass11_0 {
        inline app::OneDSEventsAPI_c_DisplayClass11_0__Class** type_info = (app::OneDSEventsAPI_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x0473D090));
        inline app::OneDSEventsAPI_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventsAPI_c_DisplayClass11_0__Class>(type_info, "PlayFab", "OneDSEventsAPI", "<>c__DisplayClass11_0");
        }
        inline app::OneDSEventsAPI_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::OneDSEventsAPI_c_DisplayClass11_0>(get_class());
        }
    } // namespace OneDSEventsAPI_c_DisplayClass11_0
} // namespace app::classes::types
