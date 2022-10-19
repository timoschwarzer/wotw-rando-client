#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CachingEventHandler {
        inline app::CachingEventHandler__Class** type_info = (app::CachingEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047118D8));
        inline app::CachingEventHandler__Class* get_class() {
            return il2cpp::get_class<app::CachingEventHandler__Class>(type_info, "System.Xml", "CachingEventHandler");
        }
        inline app::CachingEventHandler* create() {
            return il2cpp::create_object<app::CachingEventHandler>(get_class());
        }
    } // namespace CachingEventHandler
} // namespace app::classes::types
