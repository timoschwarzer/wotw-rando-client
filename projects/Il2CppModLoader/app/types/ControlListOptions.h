#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlListOptions {
        inline app::ControlListOptions__Class** type_info = (app::ControlListOptions__Class**)(modloader::win::memory::resolve_rva(0x0471B1D8));
        inline app::ControlListOptions__Class* get_class() {
            return il2cpp::get_class<app::ControlListOptions__Class>(type_info, "", "ControlListOptions");
        }
        inline app::ControlListOptions* create() {
            return il2cpp::create_object<app::ControlListOptions>(get_class());
        }
    } // namespace ControlListOptions
} // namespace app::classes::types
