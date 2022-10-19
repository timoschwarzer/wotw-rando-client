#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DtdValidator_NamespaceManager {
        inline app::DtdValidator_NamespaceManager__Class** type_info = (app::DtdValidator_NamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x04736240));
        inline app::DtdValidator_NamespaceManager__Class* get_class() {
            return il2cpp::get_nested_class<app::DtdValidator_NamespaceManager__Class>(type_info, "System.Xml.Schema", "DtdValidator", "NamespaceManager");
        }
        inline app::DtdValidator_NamespaceManager* create() {
            return il2cpp::create_object<app::DtdValidator_NamespaceManager>(get_class());
        }
    } // namespace DtdValidator_NamespaceManager
} // namespace app::classes::types
