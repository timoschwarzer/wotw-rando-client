#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NclConstants {
        inline app::NclConstants__Class** type_info = (app::NclConstants__Class**)(modloader::win::memory::resolve_rva(0x04710020));
        inline app::NclConstants__Class* get_class() {
            return il2cpp::get_class<app::NclConstants__Class>(type_info, "System.Net", "NclConstants");
        }
        inline app::NclConstants* create() {
            return il2cpp::create_object<app::NclConstants>(get_class());
        }
    } // namespace NclConstants
} // namespace app::classes::types
