#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileStreamAsyncResult {
        inline app::FileStreamAsyncResult__Class** type_info = (app::FileStreamAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0474B9B8));
        inline app::FileStreamAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::FileStreamAsyncResult__Class>(type_info, "System.IO", "FileStreamAsyncResult");
        }
        inline app::FileStreamAsyncResult* create() {
            return il2cpp::create_object<app::FileStreamAsyncResult>(get_class());
        }
    } // namespace FileStreamAsyncResult
} // namespace app::classes::types
