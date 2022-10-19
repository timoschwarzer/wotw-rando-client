#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdDateTime {
        inline app::XsdDateTime__Class** type_info = (app::XsdDateTime__Class**)(modloader::win::memory::resolve_rva(0x04746FD8));
        inline app::XsdDateTime__Class* get_class() {
            return il2cpp::get_class<app::XsdDateTime__Class>(type_info, "System.Xml.Schema", "XsdDateTime");
        }
        inline app::XsdDateTime* create() {
            return il2cpp::create_object<app::XsdDateTime>(get_class());
        }
        inline app::XsdDateTime__Boxed* box(app::XsdDateTime value) {
            return il2cpp::box_value<app::XsdDateTime__Boxed>(get_class(), value);
        }
    } // namespace XsdDateTime
} // namespace app::classes::types
