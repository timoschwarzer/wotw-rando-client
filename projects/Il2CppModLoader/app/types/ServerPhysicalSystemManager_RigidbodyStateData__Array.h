#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerPhysicalSystemManager_RigidbodyStateData__Array {
        namespace {
            inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class* type_info_ref = nullptr;
        }
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class** type_info = &type_info_ref;
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::ServerPhysicalSystemManager_RigidbodyStateData__Array__Class>(type_info, "", "ServerPhysicalSystemManager+RigidbodyStateData[]");
        }
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array* create() {
            return il2cpp::create_object<app::ServerPhysicalSystemManager_RigidbodyStateData__Array>(get_class());
        }
    } // namespace ServerPhysicalSystemManager_RigidbodyStateData__Array
} // namespace app::classes::types
