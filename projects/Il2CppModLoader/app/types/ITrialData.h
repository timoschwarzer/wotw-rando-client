#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITrialData {
        inline app::ITrialData__Class** type_info = (app::ITrialData__Class**)(modloader::win::memory::resolve_rva(0x04727680));
        inline app::ITrialData__Class* get_class() {
            return il2cpp::get_class<app::ITrialData__Class>(type_info, "Moon.Race", "ITrialData");
        }
    } // namespace ITrialData
} // namespace app::classes::types
