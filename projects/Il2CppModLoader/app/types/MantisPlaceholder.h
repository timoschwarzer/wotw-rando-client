#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisPlaceholder {
        namespace {
            inline app::MantisPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::MantisPlaceholder__Class** type_info = &type_info_ref;
        inline app::MantisPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MantisPlaceholder__Class>(type_info, "", "MantisPlaceholder");
        }
        inline app::MantisPlaceholder* create() {
            return il2cpp::create_object<app::MantisPlaceholder>(get_class());
        }
    } // namespace MantisPlaceholder
} // namespace app::classes::types
