#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkXboxAccountRequest {
        inline app::LinkXboxAccountRequest__Class** type_info = (app::LinkXboxAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047020B0));
        inline app::LinkXboxAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkXboxAccountRequest");
        }
        inline app::LinkXboxAccountRequest* create() {
            return il2cpp::create_object<app::LinkXboxAccountRequest>(get_class());
        }
    } // namespace LinkXboxAccountRequest
} // namespace app::classes::types
