#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WispMessageProvider_GetMessages_d_1 {
        inline app::WispMessageProvider_GetMessages_d_1__Class** type_info = (app::WispMessageProvider_GetMessages_d_1__Class**)(modloader::win::memory::resolve_rva(0x04798F90));
        inline app::WispMessageProvider_GetMessages_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::WispMessageProvider_GetMessages_d_1__Class>(type_info, "", "WispMessageProvider", "<GetMessages>d__1");
        }
        inline app::WispMessageProvider_GetMessages_d_1* create() {
            return il2cpp::create_object<app::WispMessageProvider_GetMessages_d_1>(get_class());
        }
    } // namespace WispMessageProvider_GetMessages_d_1
} // namespace app::classes::types
