#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmoothLinesPlugin_NodeMetaData {
        inline app::SmoothLinesPlugin_NodeMetaData__Class** type_info = (app::SmoothLinesPlugin_NodeMetaData__Class**)(modloader::win::memory::resolve_rva(0x0472E290));
        inline app::SmoothLinesPlugin_NodeMetaData__Class* get_class() {
            return il2cpp::get_nested_class<app::SmoothLinesPlugin_NodeMetaData__Class>(type_info, "", "SmoothLinesPlugin", "NodeMetaData");
        }
        inline app::SmoothLinesPlugin_NodeMetaData* create() {
            return il2cpp::create_object<app::SmoothLinesPlugin_NodeMetaData>(get_class());
        }
        inline app::SmoothLinesPlugin_NodeMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::SmoothLinesPlugin_NodeMetaData__Array>(get_class(), size);
        }
        inline app::SmoothLinesPlugin_NodeMetaData__Array* create_array(const std::vector<app::SmoothLinesPlugin_NodeMetaData*>& items) {
            return il2cpp::array_new<app::SmoothLinesPlugin_NodeMetaData__Array>(get_class(), items);
        }
    } // namespace SmoothLinesPlugin_NodeMetaData
} // namespace app::classes::types
