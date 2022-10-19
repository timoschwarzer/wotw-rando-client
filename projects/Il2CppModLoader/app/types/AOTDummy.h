#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AOTDummy {
        inline app::AOTDummy__Class** type_info = (app::AOTDummy__Class**)(modloader::win::memory::resolve_rva(0x0475BF30));
        inline app::AOTDummy__Class* get_class() {
            return il2cpp::get_class<app::AOTDummy__Class>(type_info, "ParadoxNotion.Internal", "AOTDummy");
        }
        inline app::AOTDummy* create() {
            return il2cpp::create_object<app::AOTDummy>(get_class());
        }
    } // namespace AOTDummy
} // namespace app::classes::types
