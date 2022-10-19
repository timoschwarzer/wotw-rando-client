#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDeflater {
        inline app::IDeflater__Class** type_info = (app::IDeflater__Class**)(modloader::win::memory::resolve_rva(0x04775340));
        inline app::IDeflater__Class* get_class() {
            return il2cpp::get_class<app::IDeflater__Class>(type_info, "Unity.IO.Compression", "IDeflater");
        }
    } // namespace IDeflater
} // namespace app::classes::types
