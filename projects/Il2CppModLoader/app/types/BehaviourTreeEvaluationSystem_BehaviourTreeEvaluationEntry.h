#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry {
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class** type_info = (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class**)(modloader::win::memory::resolve_rva(0x0470B0D8));
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class>(type_info, "", "BehaviourTreeEvaluationSystem", "BehaviourTreeEvaluationEntry");
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry>(get_class());
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array>(get_class(), size);
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array* create_array(const std::vector<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry*>& items) {
            return il2cpp::array_new<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array>(get_class(), items);
        }
    } // namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry
} // namespace app::classes::types
