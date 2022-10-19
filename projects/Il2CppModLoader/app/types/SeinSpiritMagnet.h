#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritMagnet {
        namespace {
            inline app::SeinSpiritMagnet__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritMagnet__Class** type_info = &type_info_ref;
        inline app::SeinSpiritMagnet__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritMagnet__Class>(type_info, "", "SeinSpiritMagnet");
        }
        inline app::SeinSpiritMagnet* create() {
            return il2cpp::create_object<app::SeinSpiritMagnet>(get_class());
        }
    } // namespace SeinSpiritMagnet
} // namespace app::classes::types
