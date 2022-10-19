#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_XalLogCallback {
        inline app::XalService_XalLogCallback__Class** type_info = (app::XalService_XalLogCallback__Class**)(modloader::win::memory::resolve_rva(0x0473F870));
        inline app::XalService_XalLogCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalLogCallback__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalLogCallback");
        }
        inline app::XalService_XalLogCallback* create() {
            return il2cpp::create_object<app::XalService_XalLogCallback>(get_class());
        }
    } // namespace XalService_XalLogCallback
} // namespace app::classes::types
