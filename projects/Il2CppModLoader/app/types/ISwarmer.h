#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISwarmer {
        inline app::ISwarmer__Class** type_info = (app::ISwarmer__Class**)(modloader::win::memory::resolve_rva(0x0471DAE0));
        inline app::ISwarmer__Class* get_class() {
            return il2cpp::get_class<app::ISwarmer__Class>(type_info, "", "ISwarmer");
        }
    } // namespace ISwarmer
} // namespace app::classes::types
