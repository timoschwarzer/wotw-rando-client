#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonBool {
        inline app::MoonBool__Class** type_info = (app::MoonBool__Class**)(modloader::win::memory::resolve_rva(0x0476DC70));
        inline app::MoonBool__Class* get_class() {
            return il2cpp::get_class<app::MoonBool__Class>(type_info, "Moon", "MoonBool");
        }
        inline app::MoonBool* create() {
            return il2cpp::create_object<app::MoonBool>(get_class());
        }
    } // namespace MoonBool
} // namespace app::classes::types
