#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugDeathBehaviour {
        namespace {
            inline app::SpikeSlugDeathBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::SpikeSlugDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugDeathBehaviour__Class>(type_info, "", "SpikeSlugDeathBehaviour");
        }
        inline app::SpikeSlugDeathBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugDeathBehaviour>(get_class());
        }
    } // namespace SpikeSlugDeathBehaviour
} // namespace app::classes::types
