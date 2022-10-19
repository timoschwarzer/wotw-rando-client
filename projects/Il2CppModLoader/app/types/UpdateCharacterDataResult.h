#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateCharacterDataResult {
        inline app::UpdateCharacterDataResult__Class** type_info = (app::UpdateCharacterDataResult__Class**)(modloader::win::memory::resolve_rva(0x047356B0));
        inline app::UpdateCharacterDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterDataResult__Class>(type_info, "PlayFab.ClientModels", "UpdateCharacterDataResult");
        }
        inline app::UpdateCharacterDataResult* create() {
            return il2cpp::create_object<app::UpdateCharacterDataResult>(get_class());
        }
    } // namespace UpdateCharacterDataResult
} // namespace app::classes::types
