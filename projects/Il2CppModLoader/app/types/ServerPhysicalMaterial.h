#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerPhysicalMaterial {
        namespace {
            inline app::ServerPhysicalMaterial__Class* type_info_ref = nullptr;
        }
        inline app::ServerPhysicalMaterial__Class** type_info = &type_info_ref;
        inline app::ServerPhysicalMaterial__Class* get_class() {
            return il2cpp::get_class<app::ServerPhysicalMaterial__Class>(type_info, "", "ServerPhysicalMaterial");
        }
        inline app::ServerPhysicalMaterial* create() {
            return il2cpp::create_object<app::ServerPhysicalMaterial>(get_class());
        }
    } // namespace ServerPhysicalMaterial
} // namespace app::classes::types
