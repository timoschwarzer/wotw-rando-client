#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlockContainerItemResult_1 {
        inline app::UnlockContainerItemResult_1__Class** type_info = (app::UnlockContainerItemResult_1__Class**)(modloader::win::memory::resolve_rva(0x0476D510));
        inline app::UnlockContainerItemResult_1__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerItemResult_1__Class>(type_info, "PlayFab.ServerModels", "UnlockContainerItemResult");
        }
        inline app::UnlockContainerItemResult_1* create() {
            return il2cpp::create_object<app::UnlockContainerItemResult_1>(get_class());
        }
    } // namespace UnlockContainerItemResult_1
} // namespace app::classes::types
