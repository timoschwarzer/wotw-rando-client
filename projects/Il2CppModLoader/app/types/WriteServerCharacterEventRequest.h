#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteServerCharacterEventRequest {
        inline app::WriteServerCharacterEventRequest__Class** type_info = (app::WriteServerCharacterEventRequest__Class**)(modloader::win::memory::resolve_rva(0x047601B0));
        inline app::WriteServerCharacterEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteServerCharacterEventRequest__Class>(type_info, "PlayFab.ServerModels", "WriteServerCharacterEventRequest");
        }
        inline app::WriteServerCharacterEventRequest* create() {
            return il2cpp::create_object<app::WriteServerCharacterEventRequest>(get_class());
        }
    } // namespace WriteServerCharacterEventRequest
} // namespace app::classes::types
