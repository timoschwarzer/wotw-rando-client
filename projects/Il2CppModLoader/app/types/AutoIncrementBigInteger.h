#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoIncrementBigInteger {
        inline app::AutoIncrementBigInteger__Class** type_info = (app::AutoIncrementBigInteger__Class**)(modloader::win::memory::resolve_rva(0x0472B178));
        inline app::AutoIncrementBigInteger__Class* get_class() {
            return il2cpp::get_class<app::AutoIncrementBigInteger__Class>(type_info, "System.Data", "AutoIncrementBigInteger");
        }
        inline app::AutoIncrementBigInteger* create() {
            return il2cpp::create_object<app::AutoIncrementBigInteger>(get_class());
        }
    } // namespace AutoIncrementBigInteger
} // namespace app::classes::types
