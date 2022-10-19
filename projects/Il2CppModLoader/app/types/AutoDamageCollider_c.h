#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoDamageCollider_c {
        inline app::AutoDamageCollider_c__Class** type_info = (app::AutoDamageCollider_c__Class**)(modloader::win::memory::resolve_rva(0x04791D90));
        inline app::AutoDamageCollider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AutoDamageCollider_c__Class>(type_info, "", "AutoDamageCollider", "<>c");
        }
        inline app::AutoDamageCollider_c* create() {
            return il2cpp::create_object<app::AutoDamageCollider_c>(get_class());
        }
    } // namespace AutoDamageCollider_c
} // namespace app::classes::types
