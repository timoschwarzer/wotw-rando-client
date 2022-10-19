#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCallbackType__Enum {
        inline app::AkCallbackType__Enum__Class** type_info = (app::AkCallbackType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04762450));
        inline app::AkCallbackType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackType__Enum__Class>(type_info, "", "AkCallbackType");
        }
        inline app::AkCallbackType__Enum* create() {
            return il2cpp::create_object<app::AkCallbackType__Enum>(get_class());
        }
    } // namespace AkCallbackType__Enum
} // namespace app::classes::types
