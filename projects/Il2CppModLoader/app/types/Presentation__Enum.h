#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Presentation__Enum {
        inline app::Presentation__Enum__Class** type_info = (app::Presentation__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471CD48));
        inline app::Presentation__Enum__Class* get_class() {
            return il2cpp::get_class<app::Presentation__Enum__Class>(type_info, "Moon.Profile", "Presentation");
        }
        inline app::Presentation__Enum* create() {
            return il2cpp::create_object<app::Presentation__Enum>(get_class());
        }
    } // namespace Presentation__Enum
} // namespace app::classes::types
