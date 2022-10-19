#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteraction {
        namespace {
            inline app::QuestNodeSetup_QuestInteraction__Class* type_info_ref = nullptr;
        }
        inline app::QuestNodeSetup_QuestInteraction__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_QuestInteraction__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_QuestInteraction__Class>(type_info, "", "QuestNodeSetup", "QuestInteraction");
        }
        inline app::QuestNodeSetup_QuestInteraction* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteraction>(get_class());
        }
        inline app::QuestNodeSetup_QuestInteraction__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteraction__Array>(get_class(), size);
        }
        inline app::QuestNodeSetup_QuestInteraction__Array* create_array(const std::vector<app::QuestNodeSetup_QuestInteraction*>& items) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteraction__Array>(get_class(), items);
        }
    } // namespace QuestNodeSetup_QuestInteraction
} // namespace app::classes::types
