#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITypeResolutionService {
        inline app::ITypeResolutionService__Class** type_info = (app::ITypeResolutionService__Class**)(modloader::win::memory::resolve_rva(0x04789CC8));
        inline app::ITypeResolutionService__Class* get_class() {
            return il2cpp::get_class<app::ITypeResolutionService__Class>(type_info, "System.ComponentModel.Design", "ITypeResolutionService");
        }
    } // namespace ITypeResolutionService
} // namespace app::classes::types
