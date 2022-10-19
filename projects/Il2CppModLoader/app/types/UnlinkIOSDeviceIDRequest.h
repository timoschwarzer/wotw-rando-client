#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkIOSDeviceIDRequest {
        inline app::UnlinkIOSDeviceIDRequest__Class** type_info = (app::UnlinkIOSDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04705708));
        inline app::UnlinkIOSDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkIOSDeviceIDRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkIOSDeviceIDRequest");
        }
        inline app::UnlinkIOSDeviceIDRequest* create() {
            return il2cpp::create_object<app::UnlinkIOSDeviceIDRequest>(get_class());
        }
    } // namespace UnlinkIOSDeviceIDRequest
} // namespace app::classes::types
