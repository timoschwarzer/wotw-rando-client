#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritCrescent {
        namespace {
            inline app::SpiritCrescent__Class* type_info_ref = nullptr;
        }
        inline app::SpiritCrescent__Class** type_info = &type_info_ref;
        inline app::SpiritCrescent__Class* get_class() {
            return il2cpp::get_class<app::SpiritCrescent__Class>(type_info, "", "SpiritCrescent");
        }
        inline app::SpiritCrescent* create() {
            return il2cpp::create_object<app::SpiritCrescent>(get_class());
        }
    } // namespace SpiritCrescent
} // namespace app::classes::types
