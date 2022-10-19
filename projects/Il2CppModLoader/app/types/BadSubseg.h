#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BadSubseg {
        inline app::BadSubseg__Class** type_info = (app::BadSubseg__Class**)(modloader::win::memory::resolve_rva(0x04717700));
        inline app::BadSubseg__Class* get_class() {
            return il2cpp::get_class<app::BadSubseg__Class>(type_info, "TriangleNet.Meshing.Data", "BadSubseg");
        }
        inline app::BadSubseg* create() {
            return il2cpp::create_object<app::BadSubseg>(get_class());
        }
        inline app::BadSubseg__Array* create_array(int size) {
            return il2cpp::array_new<app::BadSubseg__Array>(get_class(), size);
        }
        inline app::BadSubseg__Array* create_array(const std::vector<app::BadSubseg*>& items) {
            return il2cpp::array_new<app::BadSubseg__Array>(get_class(), items);
        }
    } // namespace BadSubseg
} // namespace app::classes::types
