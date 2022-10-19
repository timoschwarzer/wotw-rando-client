#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UploadFileCompletedEventHandler {
        inline app::UploadFileCompletedEventHandler__Class** type_info = (app::UploadFileCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04766CE0));
        inline app::UploadFileCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadFileCompletedEventHandler__Class>(type_info, "System.Net", "UploadFileCompletedEventHandler");
        }
        inline app::UploadFileCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadFileCompletedEventHandler>(get_class());
        }
    } // namespace UploadFileCompletedEventHandler
} // namespace app::classes::types
