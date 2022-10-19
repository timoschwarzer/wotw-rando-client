#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContextProperty__Array {
        inline app::IContextProperty__Array__Class** type_info = (app::IContextProperty__Array__Class**)(modloader::win::memory::resolve_rva(0x04728E98));
        inline app::IContextProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::IContextProperty__Array__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContextProperty[]");
        }
        inline app::IContextProperty__Array* create() {
            return il2cpp::create_object<app::IContextProperty__Array>(get_class());
        }
    } // namespace IContextProperty__Array
} // namespace app::classes::types
