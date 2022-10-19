#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadGameWithoutCheckpointRestoreAction {
        namespace {
            inline app::LoadGameWithoutCheckpointRestoreAction__Class* type_info_ref = nullptr;
        }
        inline app::LoadGameWithoutCheckpointRestoreAction__Class** type_info = &type_info_ref;
        inline app::LoadGameWithoutCheckpointRestoreAction__Class* get_class() {
            return il2cpp::get_class<app::LoadGameWithoutCheckpointRestoreAction__Class>(type_info, "", "LoadGameWithoutCheckpointRestoreAction");
        }
        inline app::LoadGameWithoutCheckpointRestoreAction* create() {
            return il2cpp::create_object<app::LoadGameWithoutCheckpointRestoreAction>(get_class());
        }
    } // namespace LoadGameWithoutCheckpointRestoreAction
} // namespace app::classes::types
