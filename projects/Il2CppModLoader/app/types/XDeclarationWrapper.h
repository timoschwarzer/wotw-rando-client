#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XDeclarationWrapper {
        inline app::XDeclarationWrapper__Class** type_info = (app::XDeclarationWrapper__Class**)(modloader::win::memory::resolve_rva(0x04743CB8));
        inline app::XDeclarationWrapper__Class* get_class() {
            return il2cpp::get_class<app::XDeclarationWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XDeclarationWrapper");
        }
        inline app::XDeclarationWrapper* create() {
            return il2cpp::create_object<app::XDeclarationWrapper>(get_class());
        }
    } // namespace XDeclarationWrapper
} // namespace app::classes::types
