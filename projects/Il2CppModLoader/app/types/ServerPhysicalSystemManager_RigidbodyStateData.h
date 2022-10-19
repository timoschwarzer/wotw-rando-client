#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerPhysicalSystemManager_RigidbodyStateData {
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Class** type_info = (app::ServerPhysicalSystemManager_RigidbodyStateData__Class**)(modloader::win::memory::resolve_rva(0x0477B9C0));
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerPhysicalSystemManager_RigidbodyStateData__Class>(type_info, "", "ServerPhysicalSystemManager", "RigidbodyStateData");
        }
        inline app::ServerPhysicalSystemManager_RigidbodyStateData* create() {
            return il2cpp::create_object<app::ServerPhysicalSystemManager_RigidbodyStateData>(get_class());
        }
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Boxed* box(app::ServerPhysicalSystemManager_RigidbodyStateData value) {
            return il2cpp::box_value<app::ServerPhysicalSystemManager_RigidbodyStateData__Boxed>(get_class(), value);
        }
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerPhysicalSystemManager_RigidbodyStateData__Array>(get_class(), size);
        }
        inline app::ServerPhysicalSystemManager_RigidbodyStateData__Array* create_array(const std::vector<app::ServerPhysicalSystemManager_RigidbodyStateData>& items) {
            return il2cpp::array_new<app::ServerPhysicalSystemManager_RigidbodyStateData__Array>(get_class(), items);
        }
    } // namespace ServerPhysicalSystemManager_RigidbodyStateData
} // namespace app::classes::types
