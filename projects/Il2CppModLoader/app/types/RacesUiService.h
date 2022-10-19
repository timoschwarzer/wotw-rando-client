#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RacesUiService {
        inline app::RacesUiService__Class** type_info = (app::RacesUiService__Class**)(modloader::win::memory::resolve_rva(0x0472C1B8));
        inline app::RacesUiService__Class* get_class() {
            return il2cpp::get_class<app::RacesUiService__Class>(type_info, "", "RacesUiService");
        }
        inline app::RacesUiService* create() {
            return il2cpp::create_object<app::RacesUiService>(get_class());
        }
    } // namespace RacesUiService
} // namespace app::classes::types
