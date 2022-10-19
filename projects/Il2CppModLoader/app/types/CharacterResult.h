#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterResult {
        inline app::CharacterResult__Class** type_info = (app::CharacterResult__Class**)(modloader::win::memory::resolve_rva(0x047162B0));
        inline app::CharacterResult__Class* get_class() {
            return il2cpp::get_class<app::CharacterResult__Class>(type_info, "PlayFab.ClientModels", "CharacterResult");
        }
        inline app::CharacterResult* create() {
            return il2cpp::create_object<app::CharacterResult>(get_class());
        }
        inline app::CharacterResult__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterResult__Array>(get_class(), size);
        }
        inline app::CharacterResult__Array* create_array(const std::vector<app::CharacterResult*>& items) {
            return il2cpp::array_new<app::CharacterResult__Array>(get_class(), items);
        }
    } // namespace CharacterResult
} // namespace app::classes::types
