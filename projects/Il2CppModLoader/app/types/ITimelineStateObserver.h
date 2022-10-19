#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineStateObserver {
        inline app::ITimelineStateObserver__Class** type_info = (app::ITimelineStateObserver__Class**)(modloader::win::memory::resolve_rva(0x04732070));
        inline app::ITimelineStateObserver__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateObserver__Class>(type_info, "Moon.Timeline", "ITimelineStateObserver");
        }
        inline app::ITimelineStateObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineStateObserver__Array>(get_class(), size);
        }
        inline app::ITimelineStateObserver__Array* create_array(const std::vector<app::ITimelineStateObserver*>& items) {
            return il2cpp::array_new<app::ITimelineStateObserver__Array>(get_class(), items);
        }
    } // namespace ITimelineStateObserver
} // namespace app::classes::types
