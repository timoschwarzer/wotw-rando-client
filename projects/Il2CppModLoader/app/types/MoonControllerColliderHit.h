#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonControllerColliderHit {
        inline app::MoonControllerColliderHit__Class** type_info = (app::MoonControllerColliderHit__Class**)(modloader::win::memory::resolve_rva(0x04797E48));
        inline app::MoonControllerColliderHit__Class* get_class() {
            return il2cpp::get_class<app::MoonControllerColliderHit__Class>(type_info, "", "MoonControllerColliderHit");
        }
        inline app::MoonControllerColliderHit* create() {
            return il2cpp::create_object<app::MoonControllerColliderHit>(get_class());
        }
        inline app::MoonControllerColliderHit__Boxed* box(app::MoonControllerColliderHit value) {
            return il2cpp::box_value<app::MoonControllerColliderHit__Boxed>(get_class(), value);
        }
    } // namespace MoonControllerColliderHit
} // namespace app::classes::types
