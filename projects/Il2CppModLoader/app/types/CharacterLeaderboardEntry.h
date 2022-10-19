#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterLeaderboardEntry {
        namespace {
            inline app::CharacterLeaderboardEntry__Class* type_info_ref = nullptr;
        }
        inline app::CharacterLeaderboardEntry__Class** type_info = &type_info_ref;
        inline app::CharacterLeaderboardEntry__Class* get_class() {
            return il2cpp::get_class<app::CharacterLeaderboardEntry__Class>(type_info, "PlayFab.ClientModels", "CharacterLeaderboardEntry");
        }
        inline app::CharacterLeaderboardEntry* create() {
            return il2cpp::create_object<app::CharacterLeaderboardEntry>(get_class());
        }
        inline app::CharacterLeaderboardEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterLeaderboardEntry__Array>(get_class(), size);
        }
        inline app::CharacterLeaderboardEntry__Array* create_array(const std::vector<app::CharacterLeaderboardEntry*>& items) {
            return il2cpp::array_new<app::CharacterLeaderboardEntry__Array>(get_class(), items);
        }
    } // namespace CharacterLeaderboardEntry
} // namespace app::classes::types
