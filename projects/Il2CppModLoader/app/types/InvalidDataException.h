#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvalidDataException {
        inline app::InvalidDataException__Class** type_info = (app::InvalidDataException__Class**)(modloader::win::memory::resolve_rva(0x0470F018));
        inline app::InvalidDataException__Class* get_class() {
            return il2cpp::get_class<app::InvalidDataException__Class>(type_info, "System.IO", "InvalidDataException");
        }
        inline app::InvalidDataException* create() {
            return il2cpp::create_object<app::InvalidDataException>(get_class());
        }
    } // namespace InvalidDataException
} // namespace app::classes::types
