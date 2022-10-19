#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NumberCounter {
        namespace {
            inline app::NumberCounter__Class* type_info_ref = nullptr;
        }
        inline app::NumberCounter__Class** type_info = &type_info_ref;
        inline app::NumberCounter__Class* get_class() {
            return il2cpp::get_class<app::NumberCounter__Class>(type_info, "", "NumberCounter");
        }
        inline app::NumberCounter* create() {
            return il2cpp::create_object<app::NumberCounter>(get_class());
        }
    } // namespace NumberCounter
} // namespace app::classes::types
