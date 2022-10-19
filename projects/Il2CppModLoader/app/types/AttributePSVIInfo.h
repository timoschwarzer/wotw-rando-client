#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributePSVIInfo {
        inline app::AttributePSVIInfo__Class** type_info = (app::AttributePSVIInfo__Class**)(modloader::win::memory::resolve_rva(0x047766C0));
        inline app::AttributePSVIInfo__Class* get_class() {
            return il2cpp::get_class<app::AttributePSVIInfo__Class>(type_info, "System.Xml", "AttributePSVIInfo");
        }
        inline app::AttributePSVIInfo* create() {
            return il2cpp::create_object<app::AttributePSVIInfo>(get_class());
        }
        inline app::AttributePSVIInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::AttributePSVIInfo__Array>(get_class(), size);
        }
        inline app::AttributePSVIInfo__Array* create_array(const std::vector<app::AttributePSVIInfo*>& items) {
            return il2cpp::array_new<app::AttributePSVIInfo__Array>(get_class(), items);
        }
    } // namespace AttributePSVIInfo
} // namespace app::classes::types
