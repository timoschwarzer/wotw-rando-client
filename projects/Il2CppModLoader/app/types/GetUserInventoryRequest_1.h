#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetUserInventoryRequest_1 {
        inline app::GetUserInventoryRequest_1__Class** type_info = (app::GetUserInventoryRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0473FBE8));
        inline app::GetUserInventoryRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserInventoryRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetUserInventoryRequest");
        }
        inline app::GetUserInventoryRequest_1* create() {
            return il2cpp::create_object<app::GetUserInventoryRequest_1>(get_class());
        }
    } // namespace GetUserInventoryRequest_1
} // namespace app::classes::types
