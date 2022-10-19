#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JSException {
        inline app::JSException__Class** type_info = (app::JSException__Class**)(modloader::win::memory::resolve_rva(0x047678D0));
        inline app::JSException__Class* get_class() {
            return il2cpp::get_class<app::JSException__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "JSException");
        }
        inline app::JSException* create() {
            return il2cpp::create_object<app::JSException>(get_class());
        }
    } // namespace JSException
} // namespace app::classes::types
