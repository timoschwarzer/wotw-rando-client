#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILegacyTimelineStateObserver {
        inline app::ILegacyTimelineStateObserver__Class** type_info = (app::ILegacyTimelineStateObserver__Class**)(modloader::win::memory::resolve_rva(0x04735DE8));
        inline app::ILegacyTimelineStateObserver__Class* get_class() {
            return il2cpp::get_class<app::ILegacyTimelineStateObserver__Class>(type_info, "Moon.Timeline", "ILegacyTimelineStateObserver");
        }
        inline app::ILegacyTimelineStateObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ILegacyTimelineStateObserver__Array>(get_class(), size);
        }
        inline app::ILegacyTimelineStateObserver__Array* create_array(const std::vector<app::ILegacyTimelineStateObserver*>& items) {
            return il2cpp::array_new<app::ILegacyTimelineStateObserver__Array>(get_class(), items);
        }
    } // namespace ILegacyTimelineStateObserver
} // namespace app::classes::types
