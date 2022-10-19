#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISafeSerializationData {
        inline app::ISafeSerializationData__Class** type_info = (app::ISafeSerializationData__Class**)(modloader::win::memory::resolve_rva(0x0474E3A8));
        inline app::ISafeSerializationData__Class* get_class() {
            return il2cpp::get_class<app::ISafeSerializationData__Class>(type_info, "System.Runtime.Serialization", "ISafeSerializationData");
        }
    } // namespace ISafeSerializationData
} // namespace app::classes::types
