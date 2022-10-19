#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintCollection {
        inline app::ConstraintCollection__Class** type_info = (app::ConstraintCollection__Class**)(modloader::win::memory::resolve_rva(0x0474B958));
        inline app::ConstraintCollection__Class* get_class() {
            return il2cpp::get_class<app::ConstraintCollection__Class>(type_info, "System.Data", "ConstraintCollection");
        }
        inline app::ConstraintCollection* create() {
            return il2cpp::create_object<app::ConstraintCollection>(get_class());
        }
    } // namespace ConstraintCollection
} // namespace app::classes::types
