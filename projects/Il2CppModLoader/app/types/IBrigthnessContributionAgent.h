#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBrigthnessContributionAgent {
        inline app::IBrigthnessContributionAgent__Class** type_info = (app::IBrigthnessContributionAgent__Class**)(modloader::win::memory::resolve_rva(0x04707FD8));
        inline app::IBrigthnessContributionAgent__Class* get_class() {
            return il2cpp::get_class<app::IBrigthnessContributionAgent__Class>(type_info, "", "IBrigthnessContributionAgent");
        }
        inline app::IBrigthnessContributionAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::IBrigthnessContributionAgent__Array>(get_class(), size);
        }
        inline app::IBrigthnessContributionAgent__Array* create_array(const std::vector<app::IBrigthnessContributionAgent*>& items) {
            return il2cpp::array_new<app::IBrigthnessContributionAgent__Array>(get_class(), items);
        }
    } // namespace IBrigthnessContributionAgent
} // namespace app::classes::types
