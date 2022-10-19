#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EndOfStreamException {
        inline app::EndOfStreamException__Class** type_info = (app::EndOfStreamException__Class**)(modloader::win::memory::resolve_rva(0x04731350));
        inline app::EndOfStreamException__Class* get_class() {
            return il2cpp::get_class<app::EndOfStreamException__Class>(type_info, "System.IO", "EndOfStreamException");
        }
        inline app::EndOfStreamException* create() {
            return il2cpp::create_object<app::EndOfStreamException>(get_class());
        }
    } // namespace EndOfStreamException
} // namespace app::classes::types
