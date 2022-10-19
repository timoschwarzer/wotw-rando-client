#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XAsyncCompletionRoutine {
        inline app::XAsyncCompletionRoutine__Class** type_info = (app::XAsyncCompletionRoutine__Class**)(modloader::win::memory::resolve_rva(0x04755730));
        inline app::XAsyncCompletionRoutine__Class* get_class() {
            return il2cpp::get_class<app::XAsyncCompletionRoutine__Class>(type_info, "XGamingRuntime.Interop", "XAsyncCompletionRoutine");
        }
        inline app::XAsyncCompletionRoutine* create() {
            return il2cpp::create_object<app::XAsyncCompletionRoutine>(get_class());
        }
    } // namespace XAsyncCompletionRoutine
} // namespace app::classes::types
