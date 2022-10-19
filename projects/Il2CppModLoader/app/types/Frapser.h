#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Frapser {
        inline app::Frapser__Class** type_info = (app::Frapser__Class**)(modloader::win::memory::resolve_rva(0x04759968));
        inline app::Frapser__Class* get_class() {
            return il2cpp::get_class<app::Frapser__Class>(type_info, "", "Frapser");
        }
        inline app::Frapser* create() {
            return il2cpp::create_object<app::Frapser>(get_class());
        }
    } // namespace Frapser
} // namespace app::classes::types
