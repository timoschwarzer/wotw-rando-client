#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReportPlayerClientResult {
        inline app::ReportPlayerClientResult__Class** type_info = (app::ReportPlayerClientResult__Class**)(modloader::win::memory::resolve_rva(0x04716D50));
        inline app::ReportPlayerClientResult__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerClientResult__Class>(type_info, "PlayFab.ClientModels", "ReportPlayerClientResult");
        }
        inline app::ReportPlayerClientResult* create() {
            return il2cpp::create_object<app::ReportPlayerClientResult>(get_class());
        }
    } // namespace ReportPlayerClientResult
} // namespace app::classes::types
