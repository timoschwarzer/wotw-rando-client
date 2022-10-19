#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISegment {
        inline app::ISegment__Class** type_info = (app::ISegment__Class**)(modloader::win::memory::resolve_rva(0x04783BD0));
        inline app::ISegment__Class* get_class() {
            return il2cpp::get_class<app::ISegment__Class>(type_info, "TriangleNet.Geometry", "ISegment");
        }
        inline app::ISegment__Array* create_array(int size) {
            return il2cpp::array_new<app::ISegment__Array>(get_class(), size);
        }
        inline app::ISegment__Array* create_array(const std::vector<app::ISegment*>& items) {
            return il2cpp::array_new<app::ISegment__Array>(get_class(), items);
        }
    } // namespace ISegment
} // namespace app::classes::types
