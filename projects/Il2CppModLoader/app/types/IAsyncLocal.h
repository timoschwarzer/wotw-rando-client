#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAsyncLocal {
        inline app::IAsyncLocal__Class** type_info = (app::IAsyncLocal__Class**)(modloader::win::memory::resolve_rva(0x04789948));
        inline app::IAsyncLocal__Class* get_class() {
            return il2cpp::get_class<app::IAsyncLocal__Class>(type_info, "System.Threading", "IAsyncLocal");
        }
        inline app::IAsyncLocal__Array* create_array(int size) {
            return il2cpp::array_new<app::IAsyncLocal__Array>(get_class(), size);
        }
        inline app::IAsyncLocal__Array* create_array(const std::vector<app::IAsyncLocal*>& items) {
            return il2cpp::array_new<app::IAsyncLocal__Array>(get_class(), items);
        }
    } // namespace IAsyncLocal
} // namespace app::classes::types
