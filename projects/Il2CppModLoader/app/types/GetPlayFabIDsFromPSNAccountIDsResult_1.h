#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromPSNAccountIDsResult_1 {
        inline app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class** type_info = (app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471A588));
        inline app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromPSNAccountIDsResult");
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromPSNAccountIDsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromPSNAccountIDsResult_1
} // namespace app::classes::types
