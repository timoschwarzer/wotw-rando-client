#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReportPlayerServerResult {
        inline app::ReportPlayerServerResult__Class** type_info = (app::ReportPlayerServerResult__Class**)(modloader::win::memory::resolve_rva(0x04797CF0));
        inline app::ReportPlayerServerResult__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerServerResult__Class>(type_info, "PlayFab.ServerModels", "ReportPlayerServerResult");
        }
        inline app::ReportPlayerServerResult* create() {
            return il2cpp::create_object<app::ReportPlayerServerResult>(get_class());
        }
    } // namespace ReportPlayerServerResult
} // namespace app::classes::types
