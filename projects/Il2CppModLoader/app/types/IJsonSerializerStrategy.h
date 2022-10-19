#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IJsonSerializerStrategy {
        inline app::IJsonSerializerStrategy__Class** type_info = (app::IJsonSerializerStrategy__Class**)(modloader::win::memory::resolve_rva(0x0474BBA8));
        inline app::IJsonSerializerStrategy__Class* get_class() {
            return il2cpp::get_class<app::IJsonSerializerStrategy__Class>(type_info, "PlayFab.Json", "IJsonSerializerStrategy");
        }
    } // namespace IJsonSerializerStrategy
} // namespace app::classes::types
