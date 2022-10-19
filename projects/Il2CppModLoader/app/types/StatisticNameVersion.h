#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticNameVersion {
        inline app::StatisticNameVersion__Class** type_info = (app::StatisticNameVersion__Class**)(modloader::win::memory::resolve_rva(0x04703B00));
        inline app::StatisticNameVersion__Class* get_class() {
            return il2cpp::get_class<app::StatisticNameVersion__Class>(type_info, "PlayFab.ClientModels", "StatisticNameVersion");
        }
        inline app::StatisticNameVersion* create() {
            return il2cpp::create_object<app::StatisticNameVersion>(get_class());
        }
        inline app::StatisticNameVersion__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticNameVersion__Array>(get_class(), size);
        }
        inline app::StatisticNameVersion__Array* create_array(const std::vector<app::StatisticNameVersion*>& items) {
            return il2cpp::array_new<app::StatisticNameVersion__Array>(get_class(), items);
        }
    } // namespace StatisticNameVersion
} // namespace app::classes::types
