#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostServerEventsPlugin_ServerEventData_ServerObjectsData {
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Class** type_info = (app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Class**)(modloader::win::memory::resolve_rva(0x04792F00));
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Class>(type_info, "", "GhostServerEventsPlugin+ServerEventData", "ServerObjectsData");
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData* create() {
            return il2cpp::create_object<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData>(get_class());
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array>(get_class(), size);
        }
        inline app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array* create_array(const std::vector<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData*>& items) {
            return il2cpp::array_new<app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Array>(get_class(), items);
        }
    } // namespace GhostServerEventsPlugin_ServerEventData_ServerObjectsData
} // namespace app::classes::types
