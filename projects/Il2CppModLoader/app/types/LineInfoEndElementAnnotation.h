#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LineInfoEndElementAnnotation {
        inline app::LineInfoEndElementAnnotation__Class** type_info = (app::LineInfoEndElementAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04744C48));
        inline app::LineInfoEndElementAnnotation__Class* get_class() {
            return il2cpp::get_class<app::LineInfoEndElementAnnotation__Class>(type_info, "System.Xml.Linq", "LineInfoEndElementAnnotation");
        }
        inline app::LineInfoEndElementAnnotation* create() {
            return il2cpp::create_object<app::LineInfoEndElementAnnotation>(get_class());
        }
    } // namespace LineInfoEndElementAnnotation
} // namespace app::classes::types
