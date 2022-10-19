#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerDigitalActionHandle_t {
        inline app::ControllerDigitalActionHandle_t__Class** type_info = (app::ControllerDigitalActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0478A050));
        inline app::ControllerDigitalActionHandle_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerDigitalActionHandle_t__Class>(type_info, "Steamworks", "ControllerDigitalActionHandle_t");
        }
        inline app::ControllerDigitalActionHandle_t* create() {
            return il2cpp::create_object<app::ControllerDigitalActionHandle_t>(get_class());
        }
        inline app::ControllerDigitalActionHandle_t__Boxed* box(app::ControllerDigitalActionHandle_t value) {
            return il2cpp::box_value<app::ControllerDigitalActionHandle_t__Boxed>(get_class(), value);
        }
    } // namespace ControllerDigitalActionHandle_t
} // namespace app::classes::types
