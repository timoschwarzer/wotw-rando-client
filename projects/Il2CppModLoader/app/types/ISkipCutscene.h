#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISkipCutscene {
        inline app::ISkipCutscene__Class** type_info = (app::ISkipCutscene__Class**)(modloader::win::memory::resolve_rva(0x0474C120));
        inline app::ISkipCutscene__Class* get_class() {
            return il2cpp::get_class<app::ISkipCutscene__Class>(type_info, "", "ISkipCutscene");
        }
        inline app::ISkipCutscene__Array* create_array(int size) {
            return il2cpp::array_new<app::ISkipCutscene__Array>(get_class(), size);
        }
        inline app::ISkipCutscene__Array* create_array(const std::vector<app::ISkipCutscene*>& items) {
            return il2cpp::array_new<app::ISkipCutscene__Array>(get_class(), items);
        }
    } // namespace ISkipCutscene
} // namespace app::classes::types
