#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerPhysicalSystemManager_PhysicalManagerData {
        inline app::ServerPhysicalSystemManager_PhysicalManagerData__Class** type_info = (app::ServerPhysicalSystemManager_PhysicalManagerData__Class**)(modloader::win::memory::resolve_rva(0x04701018));
        inline app::ServerPhysicalSystemManager_PhysicalManagerData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerPhysicalSystemManager_PhysicalManagerData__Class>(type_info, "", "ServerPhysicalSystemManager", "PhysicalManagerData");
        }
        inline app::ServerPhysicalSystemManager_PhysicalManagerData* create() {
            return il2cpp::create_object<app::ServerPhysicalSystemManager_PhysicalManagerData>(get_class());
        }
        inline app::ServerPhysicalSystemManager_PhysicalManagerData__Boxed* box(app::ServerPhysicalSystemManager_PhysicalManagerData value) {
            return il2cpp::box_value<app::ServerPhysicalSystemManager_PhysicalManagerData__Boxed>(get_class(), value);
        }
    } // namespace ServerPhysicalSystemManager_PhysicalManagerData
} // namespace app::classes::types
