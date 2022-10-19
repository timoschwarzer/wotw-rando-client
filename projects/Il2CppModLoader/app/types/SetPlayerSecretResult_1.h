#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetPlayerSecretResult_1 {
        inline app::SetPlayerSecretResult_1__Class** type_info = (app::SetPlayerSecretResult_1__Class**)(modloader::win::memory::resolve_rva(0x04704220));
        inline app::SetPlayerSecretResult_1__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretResult_1__Class>(type_info, "PlayFab.ServerModels", "SetPlayerSecretResult");
        }
        inline app::SetPlayerSecretResult_1* create() {
            return il2cpp::create_object<app::SetPlayerSecretResult_1>(get_class());
        }
    } // namespace SetPlayerSecretResult_1
} // namespace app::classes::types
