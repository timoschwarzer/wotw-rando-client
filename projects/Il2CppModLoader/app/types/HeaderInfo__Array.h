#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HeaderInfo__Array {
        inline app::HeaderInfo__Array__Class** type_info = (app::HeaderInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0470FE80));
        inline app::HeaderInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfo__Array__Class>(type_info, "System.Net", "HeaderInfo[]");
        }
        inline app::HeaderInfo__Array* create() {
            return il2cpp::create_object<app::HeaderInfo__Array>(get_class());
        }
    } // namespace HeaderInfo__Array
} // namespace app::classes::types
