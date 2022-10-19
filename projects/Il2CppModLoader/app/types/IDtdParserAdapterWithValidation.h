#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDtdParserAdapterWithValidation {
        inline app::IDtdParserAdapterWithValidation__Class** type_info = (app::IDtdParserAdapterWithValidation__Class**)(modloader::win::memory::resolve_rva(0x0474C858));
        inline app::IDtdParserAdapterWithValidation__Class* get_class() {
            return il2cpp::get_class<app::IDtdParserAdapterWithValidation__Class>(type_info, "System.Xml", "IDtdParserAdapterWithValidation");
        }
    } // namespace IDtdParserAdapterWithValidation
} // namespace app::classes::types
