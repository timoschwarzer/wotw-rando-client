#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsForwardConverter {
        inline app::fsForwardConverter__Class** type_info = (app::fsForwardConverter__Class**)(modloader::win::memory::resolve_rva(0x04747608));
        inline app::fsForwardConverter__Class* get_class() {
            return il2cpp::get_class<app::fsForwardConverter__Class>(type_info, "FullSerializer.Internal", "fsForwardConverter");
        }
        inline app::fsForwardConverter* create() {
            return il2cpp::create_object<app::fsForwardConverter>(get_class());
        }
    } // namespace fsForwardConverter
} // namespace app::classes::types
