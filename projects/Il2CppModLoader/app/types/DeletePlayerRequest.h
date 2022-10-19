#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeletePlayerRequest {
        inline app::DeletePlayerRequest__Class** type_info = (app::DeletePlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x04711AA8));
        inline app::DeletePlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::DeletePlayerRequest__Class>(type_info, "PlayFab.ServerModels", "DeletePlayerRequest");
        }
        inline app::DeletePlayerRequest* create() {
            return il2cpp::create_object<app::DeletePlayerRequest>(get_class());
        }
    } // namespace DeletePlayerRequest
} // namespace app::classes::types
