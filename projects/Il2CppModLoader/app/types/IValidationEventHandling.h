#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IValidationEventHandling {
        inline app::IValidationEventHandling__Class** type_info = (app::IValidationEventHandling__Class**)(modloader::win::memory::resolve_rva(0x04750518));
        inline app::IValidationEventHandling__Class* get_class() {
            return il2cpp::get_class<app::IValidationEventHandling__Class>(type_info, "System.Xml", "IValidationEventHandling");
        }
    } // namespace IValidationEventHandling
} // namespace app::classes::types
