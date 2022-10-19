#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_untypedAtomicType {
        inline app::Datatype_untypedAtomicType__Class** type_info = (app::Datatype_untypedAtomicType__Class**)(modloader::win::memory::resolve_rva(0x04745878));
        inline app::Datatype_untypedAtomicType__Class* get_class() {
            return il2cpp::get_class<app::Datatype_untypedAtomicType__Class>(type_info, "System.Xml.Schema", "Datatype_untypedAtomicType");
        }
        inline app::Datatype_untypedAtomicType* create() {
            return il2cpp::create_object<app::Datatype_untypedAtomicType>(get_class());
        }
    } // namespace Datatype_untypedAtomicType
} // namespace app::classes::types
