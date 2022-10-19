#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValueTuple {
        inline app::ValueTuple__Class** type_info = (app::ValueTuple__Class**)(modloader::win::memory::resolve_rva(0x04730288));
        inline app::ValueTuple__Class* get_class() {
            return il2cpp::get_class<app::ValueTuple__Class>(type_info, "System", "ValueTuple");
        }
        inline app::ValueTuple* create() {
            return il2cpp::create_object<app::ValueTuple>(get_class());
        }
        inline app::ValueTuple__Boxed* box(app::ValueTuple value) {
            return il2cpp::box_value<app::ValueTuple__Boxed>(get_class(), value);
        }
    } // namespace ValueTuple
} // namespace app::classes::types
