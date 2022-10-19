#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FormatterServices {
        inline app::FormatterServices__Class** type_info = (app::FormatterServices__Class**)(modloader::win::memory::resolve_rva(0x04738670));
        inline app::FormatterServices__Class* get_class() {
            return il2cpp::get_class<app::FormatterServices__Class>(type_info, "System.Runtime.Serialization", "FormatterServices");
        }
        inline app::FormatterServices* create() {
            return il2cpp::create_object<app::FormatterServices>(get_class());
        }
    } // namespace FormatterServices
} // namespace app::classes::types
