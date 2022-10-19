#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryAssemblyInfo {
        inline app::BinaryAssemblyInfo__Class** type_info = (app::BinaryAssemblyInfo__Class**)(modloader::win::memory::resolve_rva(0x04759960));
        inline app::BinaryAssemblyInfo__Class* get_class() {
            return il2cpp::get_class<app::BinaryAssemblyInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo");
        }
        inline app::BinaryAssemblyInfo* create() {
            return il2cpp::create_object<app::BinaryAssemblyInfo>(get_class());
        }
    } // namespace BinaryAssemblyInfo
} // namespace app::classes::types
