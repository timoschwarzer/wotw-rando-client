#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPublisherDataRequest_1 {
        inline app::GetPublisherDataRequest_1__Class** type_info = (app::GetPublisherDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04751778));
        inline app::GetPublisherDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPublisherDataRequest");
        }
        inline app::GetPublisherDataRequest_1* create() {
            return il2cpp::create_object<app::GetPublisherDataRequest_1>(get_class());
        }
    } // namespace GetPublisherDataRequest_1
} // namespace app::classes::types
