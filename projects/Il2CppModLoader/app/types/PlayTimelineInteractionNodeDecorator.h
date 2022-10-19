#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayTimelineInteractionNodeDecorator {
        namespace {
            inline app::PlayTimelineInteractionNodeDecorator__Class* type_info_ref = nullptr;
        }
        inline app::PlayTimelineInteractionNodeDecorator__Class** type_info = &type_info_ref;
        inline app::PlayTimelineInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::PlayTimelineInteractionNodeDecorator__Class>(type_info, "Moon.InteractionGraph", "PlayTimelineInteractionNodeDecorator");
        }
        inline app::PlayTimelineInteractionNodeDecorator* create() {
            return il2cpp::create_object<app::PlayTimelineInteractionNodeDecorator>(get_class());
        }
    } // namespace PlayTimelineInteractionNodeDecorator
} // namespace app::classes::types
