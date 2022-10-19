#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetPublisherDataResult {
        inline app::SetPublisherDataResult__Class** type_info = (app::SetPublisherDataResult__Class**)(modloader::win::memory::resolve_rva(0x0478FEA8));
        inline app::SetPublisherDataResult__Class* get_class() {
            return il2cpp::get_class<app::SetPublisherDataResult__Class>(type_info, "PlayFab.ServerModels", "SetPublisherDataResult");
        }
        inline app::SetPublisherDataResult* create() {
            return il2cpp::create_object<app::SetPublisherDataResult>(get_class());
        }
    } // namespace SetPublisherDataResult
} // namespace app::classes::types
