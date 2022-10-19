#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CombinedMessageProvider_GetMessages_d_3 {
        inline app::CombinedMessageProvider_GetMessages_d_3__Class** type_info = (app::CombinedMessageProvider_GetMessages_d_3__Class**)(modloader::win::memory::resolve_rva(0x0475D108));
        inline app::CombinedMessageProvider_GetMessages_d_3__Class* get_class() {
            return il2cpp::get_nested_class<app::CombinedMessageProvider_GetMessages_d_3__Class>(type_info, "", "CombinedMessageProvider", "<GetMessages>d__3");
        }
        inline app::CombinedMessageProvider_GetMessages_d_3* create() {
            return il2cpp::create_object<app::CombinedMessageProvider_GetMessages_d_3>(get_class());
        }
    } // namespace CombinedMessageProvider_GetMessages_d_3
} // namespace app::classes::types
