#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExecuteCloudScriptResult_1 {
        inline app::ExecuteCloudScriptResult_1__Class** type_info = (app::ExecuteCloudScriptResult_1__Class**)(modloader::win::memory::resolve_rva(0x0473FD68));
        inline app::ExecuteCloudScriptResult_1__Class* get_class() {
            return il2cpp::get_class<app::ExecuteCloudScriptResult_1__Class>(type_info, "PlayFab.CloudScriptModels", "ExecuteCloudScriptResult");
        }
        inline app::ExecuteCloudScriptResult_1* create() {
            return il2cpp::create_object<app::ExecuteCloudScriptResult_1>(get_class());
        }
    } // namespace ExecuteCloudScriptResult_1
} // namespace app::classes::types
