#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EndGameTrigger {
        namespace {
            inline app::EndGameTrigger__Class* type_info_ref = nullptr;
        }
        inline app::EndGameTrigger__Class** type_info = &type_info_ref;
        inline app::EndGameTrigger__Class* get_class() {
            return il2cpp::get_class<app::EndGameTrigger__Class>(type_info, "", "EndGameTrigger");
        }
        inline app::EndGameTrigger* create() {
            return il2cpp::create_object<app::EndGameTrigger>(get_class());
        }
    } // namespace EndGameTrigger
} // namespace app::classes::types
