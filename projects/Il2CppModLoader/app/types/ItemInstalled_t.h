#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ItemInstalled_t {
        namespace {
            inline app::ItemInstalled_t__Class* type_info_ref = nullptr;
        }
        inline app::ItemInstalled_t__Class** type_info = &type_info_ref;
        inline app::ItemInstalled_t__Class* get_class() {
            return il2cpp::get_class<app::ItemInstalled_t__Class>(type_info, "Steamworks", "ItemInstalled_t");
        }
        inline app::ItemInstalled_t* create() {
            return il2cpp::create_object<app::ItemInstalled_t>(get_class());
        }
        inline app::ItemInstalled_t__Boxed* box(app::ItemInstalled_t value) {
            return il2cpp::box_value<app::ItemInstalled_t__Boxed>(get_class(), value);
        }
    } // namespace ItemInstalled_t
} // namespace app::classes::types
