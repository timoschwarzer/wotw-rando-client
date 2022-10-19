#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPickupProcessor {
        inline app::SeinPickupProcessor__Class** type_info = (app::SeinPickupProcessor__Class**)(modloader::win::memory::resolve_rva(0x0474D4B0));
        inline app::SeinPickupProcessor__Class* get_class() {
            return il2cpp::get_class<app::SeinPickupProcessor__Class>(type_info, "", "SeinPickupProcessor");
        }
        inline app::SeinPickupProcessor* create() {
            return il2cpp::create_object<app::SeinPickupProcessor>(get_class());
        }
    } // namespace SeinPickupProcessor
} // namespace app::classes::types
