#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FastResourceComparer {
        inline app::FastResourceComparer__Class** type_info = (app::FastResourceComparer__Class**)(modloader::win::memory::resolve_rva(0x04724C50));
        inline app::FastResourceComparer__Class* get_class() {
            return il2cpp::get_class<app::FastResourceComparer__Class>(type_info, "System.Resources", "FastResourceComparer");
        }
        inline app::FastResourceComparer* create() {
            return il2cpp::create_object<app::FastResourceComparer>(get_class());
        }
    } // namespace FastResourceComparer
} // namespace app::classes::types
