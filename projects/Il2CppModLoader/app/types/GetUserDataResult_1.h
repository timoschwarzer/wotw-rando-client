#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetUserDataResult_1 {
        inline app::GetUserDataResult_1__Class** type_info = (app::GetUserDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x04751C18));
        inline app::GetUserDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataResult_1__Class>(type_info, "PlayFab.ServerModels", "GetUserDataResult");
        }
        inline app::GetUserDataResult_1* create() {
            return il2cpp::create_object<app::GetUserDataResult_1>(get_class());
        }
    } // namespace GetUserDataResult_1
} // namespace app::classes::types
