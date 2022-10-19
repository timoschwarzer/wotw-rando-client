#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabStatistics_c_DisplayClass14_1 {
        inline app::PlayFabStatistics_c_DisplayClass14_1__Class** type_info = (app::PlayFabStatistics_c_DisplayClass14_1__Class**)(modloader::win::memory::resolve_rva(0x0473E378));
        inline app::PlayFabStatistics_c_DisplayClass14_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabStatistics_c_DisplayClass14_1__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "PlayFabStatistics", "<>c__DisplayClass14_1");
        }
        inline app::PlayFabStatistics_c_DisplayClass14_1* create() {
            return il2cpp::create_object<app::PlayFabStatistics_c_DisplayClass14_1>(get_class());
        }
    } // namespace PlayFabStatistics_c_DisplayClass14_1
} // namespace app::classes::types
