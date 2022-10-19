#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XGameSaveReadBlobDataCompleted {
        inline app::XGameSaveReadBlobDataCompleted__Class** type_info = (app::XGameSaveReadBlobDataCompleted__Class**)(modloader::win::memory::resolve_rva(0x04795088));
        inline app::XGameSaveReadBlobDataCompleted__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveReadBlobDataCompleted__Class>(type_info, "XGamingRuntime", "XGameSaveReadBlobDataCompleted");
        }
        inline app::XGameSaveReadBlobDataCompleted* create() {
            return il2cpp::create_object<app::XGameSaveReadBlobDataCompleted>(get_class());
        }
    } // namespace XGameSaveReadBlobDataCompleted
} // namespace app::classes::types
