#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_char {
        inline app::Datatype_char__Class** type_info = (app::Datatype_char__Class**)(modloader::win::memory::resolve_rva(0x0471E148));
        inline app::Datatype_char__Class* get_class() {
            return il2cpp::get_class<app::Datatype_char__Class>(type_info, "System.Xml.Schema", "Datatype_char");
        }
        inline app::Datatype_char* create() {
            return il2cpp::create_object<app::Datatype_char>(get_class());
        }
    } // namespace Datatype_char
} // namespace app::classes::types
