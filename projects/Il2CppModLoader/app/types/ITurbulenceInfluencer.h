#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITurbulenceInfluencer {
        inline app::ITurbulenceInfluencer__Class** type_info = (app::ITurbulenceInfluencer__Class**)(modloader::win::memory::resolve_rva(0x0472A0A8));
        inline app::ITurbulenceInfluencer__Class* get_class() {
            return il2cpp::get_class<app::ITurbulenceInfluencer__Class>(type_info, "", "ITurbulenceInfluencer");
        }
        inline app::ITurbulenceInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::ITurbulenceInfluencer__Array>(get_class(), size);
        }
        inline app::ITurbulenceInfluencer__Array* create_array(const std::vector<app::ITurbulenceInfluencer*>& items) {
            return il2cpp::array_new<app::ITurbulenceInfluencer__Array>(get_class(), items);
        }
    } // namespace ITurbulenceInfluencer
} // namespace app::classes::types
