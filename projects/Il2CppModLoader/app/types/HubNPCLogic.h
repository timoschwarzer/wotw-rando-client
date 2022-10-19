#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HubNPCLogic {
        namespace {
            inline app::HubNPCLogic__Class* type_info_ref = nullptr;
        }
        inline app::HubNPCLogic__Class** type_info = &type_info_ref;
        inline app::HubNPCLogic__Class* get_class() {
            return il2cpp::get_class<app::HubNPCLogic__Class>(type_info, "", "HubNPCLogic");
        }
        inline app::HubNPCLogic* create() {
            return il2cpp::create_object<app::HubNPCLogic>(get_class());
        }
    } // namespace HubNPCLogic
} // namespace app::classes::types
