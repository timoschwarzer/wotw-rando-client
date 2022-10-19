#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjRefSurrogate {
        inline app::ObjRefSurrogate__Class** type_info = (app::ObjRefSurrogate__Class**)(modloader::win::memory::resolve_rva(0x04713E80));
        inline app::ObjRefSurrogate__Class* get_class() {
            return il2cpp::get_class<app::ObjRefSurrogate__Class>(type_info, "System.Runtime.Remoting.Messaging", "ObjRefSurrogate");
        }
        inline app::ObjRefSurrogate* create() {
            return il2cpp::create_object<app::ObjRefSurrogate>(get_class());
        }
    } // namespace ObjRefSurrogate
} // namespace app::classes::types
