#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerGameAssetDeletedEventDataDoc {
        namespace {
            inline app::MultiplayerServerGameAssetDeletedEventDataDoc__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerGameAssetDeletedEventDataDoc__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerGameAssetDeletedEventDataDoc__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerGameAssetDeletedEventDataDoc__Class>(type_info, "PlayFab.PlayStreamModels", "MultiplayerServerGameAssetDeletedEventDataDoc");
        }
        inline app::MultiplayerServerGameAssetDeletedEventDataDoc* create() {
            return il2cpp::create_object<app::MultiplayerServerGameAssetDeletedEventDataDoc>(get_class());
        }
    } // namespace MultiplayerServerGameAssetDeletedEventDataDoc
} // namespace app::classes::types
