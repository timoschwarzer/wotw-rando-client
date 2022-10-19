#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LogStatement {
        inline app::LogStatement__Class** type_info = (app::LogStatement__Class**)(modloader::win::memory::resolve_rva(0x0473DF10));
        inline app::LogStatement__Class* get_class() {
            return il2cpp::get_class<app::LogStatement__Class>(type_info, "PlayFab.ClientModels", "LogStatement");
        }
        inline app::LogStatement* create() {
            return il2cpp::create_object<app::LogStatement>(get_class());
        }
        inline app::LogStatement__Array* create_array(int size) {
            return il2cpp::array_new<app::LogStatement__Array>(get_class(), size);
        }
        inline app::LogStatement__Array* create_array(const std::vector<app::LogStatement*>& items) {
            return il2cpp::array_new<app::LogStatement__Array>(get_class(), items);
        }
    } // namespace LogStatement
} // namespace app::classes::types
