#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTitleDataResult_1 {
        inline app::GetTitleDataResult_1__Class** type_info = (app::GetTitleDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x0473C260));
        inline app::GetTitleDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataResult_1__Class>(type_info, "PlayFab.ServerModels", "GetTitleDataResult");
        }
        inline app::GetTitleDataResult_1* create() {
            return il2cpp::create_object<app::GetTitleDataResult_1>(get_class());
        }
    } // namespace GetTitleDataResult_1
} // namespace app::classes::types
