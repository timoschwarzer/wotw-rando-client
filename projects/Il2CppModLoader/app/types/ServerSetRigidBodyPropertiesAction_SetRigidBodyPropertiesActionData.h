#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData {
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class** type_info = (app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class**)(modloader::win::memory::resolve_rva(0x0474D7C8));
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class>(type_info, "", "ServerSetRigidBodyPropertiesAction", "SetRigidBodyPropertiesActionData");
        }
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData* create() {
            return il2cpp::create_object<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData>(get_class());
        }
        inline app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed* box(app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData value) {
            return il2cpp::box_value<app::ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed>(get_class(), value);
        }
    } // namespace ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData
} // namespace app::classes::types
