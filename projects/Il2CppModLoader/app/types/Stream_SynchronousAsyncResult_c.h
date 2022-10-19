#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Stream_SynchronousAsyncResult_c {
        inline app::Stream_SynchronousAsyncResult_c__Class** type_info = (app::Stream_SynchronousAsyncResult_c__Class**)(modloader::win::memory::resolve_rva(0x04796920));
        inline app::Stream_SynchronousAsyncResult_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_SynchronousAsyncResult_c__Class>(type_info, "System.IO", "Stream+SynchronousAsyncResult", "<>c");
        }
        inline app::Stream_SynchronousAsyncResult_c* create() {
            return il2cpp::create_object<app::Stream_SynchronousAsyncResult_c>(get_class());
        }
    } // namespace Stream_SynchronousAsyncResult_c
} // namespace app::classes::types
