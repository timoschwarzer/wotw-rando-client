#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CultureAwareComparer {
        inline app::CultureAwareComparer__Class** type_info = (app::CultureAwareComparer__Class**)(modloader::win::memory::resolve_rva(0x047193D0));
        inline app::CultureAwareComparer__Class* get_class() {
            return il2cpp::get_class<app::CultureAwareComparer__Class>(type_info, "System", "CultureAwareComparer");
        }
        inline app::CultureAwareComparer* create() {
            return il2cpp::create_object<app::CultureAwareComparer>(get_class());
        }
    } // namespace CultureAwareComparer
} // namespace app::classes::types
