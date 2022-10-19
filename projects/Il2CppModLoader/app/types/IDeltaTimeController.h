#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDeltaTimeController {
        inline app::IDeltaTimeController__Class** type_info = (app::IDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x0477F3F0));
        inline app::IDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::IDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "IDeltaTimeController");
        }
    } // namespace IDeltaTimeController
} // namespace app::classes::types
