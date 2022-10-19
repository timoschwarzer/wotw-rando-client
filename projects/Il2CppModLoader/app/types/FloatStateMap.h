#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatStateMap {
        namespace {
            inline app::FloatStateMap__Class* type_info_ref = nullptr;
        }
        inline app::FloatStateMap__Class** type_info = &type_info_ref;
        inline app::FloatStateMap__Class* get_class() {
            return il2cpp::get_class<app::FloatStateMap__Class>(type_info, "", "FloatStateMap");
        }
        inline app::FloatStateMap* create() {
            return il2cpp::create_object<app::FloatStateMap>(get_class());
        }
    } // namespace FloatStateMap
} // namespace app::classes::types
