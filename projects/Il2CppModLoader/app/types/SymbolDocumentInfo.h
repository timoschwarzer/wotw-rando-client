#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SymbolDocumentInfo {
        inline app::SymbolDocumentInfo__Class** type_info = (app::SymbolDocumentInfo__Class**)(modloader::win::memory::resolve_rva(0x0471C5F8));
        inline app::SymbolDocumentInfo__Class* get_class() {
            return il2cpp::get_class<app::SymbolDocumentInfo__Class>(type_info, "System.Linq.Expressions", "SymbolDocumentInfo");
        }
        inline app::SymbolDocumentInfo* create() {
            return il2cpp::create_object<app::SymbolDocumentInfo>(get_class());
        }
    } // namespace SymbolDocumentInfo
} // namespace app::classes::types
