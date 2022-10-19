#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeakReference {
        inline app::WeakReference__Class** type_info = (app::WeakReference__Class**)(modloader::win::memory::resolve_rva(0x04711228));
        inline app::WeakReference__Class* get_class() {
            return il2cpp::get_class<app::WeakReference__Class>(type_info, "System", "WeakReference");
        }
        inline app::WeakReference* create() {
            return il2cpp::create_object<app::WeakReference>(get_class());
        }
        inline app::WeakReference__Array* create_array(int size) {
            return il2cpp::array_new<app::WeakReference__Array>(get_class(), size);
        }
        inline app::WeakReference__Array* create_array(const std::vector<app::WeakReference*>& items) {
            return il2cpp::array_new<app::WeakReference__Array>(get_class(), items);
        }
    } // namespace WeakReference
} // namespace app::classes::types
