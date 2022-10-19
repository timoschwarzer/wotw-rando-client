#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_monthDay {
        inline app::Datatype_monthDay__Class** type_info = (app::Datatype_monthDay__Class**)(modloader::win::memory::resolve_rva(0x04729240));
        inline app::Datatype_monthDay__Class* get_class() {
            return il2cpp::get_class<app::Datatype_monthDay__Class>(type_info, "System.Xml.Schema", "Datatype_monthDay");
        }
        inline app::Datatype_monthDay* create() {
            return il2cpp::create_object<app::Datatype_monthDay>(get_class());
        }
    } // namespace Datatype_monthDay
} // namespace app::classes::types
