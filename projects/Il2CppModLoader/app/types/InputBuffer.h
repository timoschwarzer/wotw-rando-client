#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputBuffer {
        inline app::InputBuffer__Class** type_info = (app::InputBuffer__Class**)(modloader::win::memory::resolve_rva(0x0475FDC0));
        inline app::InputBuffer__Class* get_class() {
            return il2cpp::get_class<app::InputBuffer__Class>(type_info, "Unity.IO.Compression", "InputBuffer");
        }
        inline app::InputBuffer* create() {
            return il2cpp::create_object<app::InputBuffer>(get_class());
        }
    } // namespace InputBuffer
} // namespace app::classes::types
