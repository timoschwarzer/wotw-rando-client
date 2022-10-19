#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneRichPresence_RichPresence__Enum {
        namespace {
            inline app::XboxOneRichPresence_RichPresence__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XboxOneRichPresence_RichPresence__Enum__Class** type_info = &type_info_ref;
        inline app::XboxOneRichPresence_RichPresence__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneRichPresence_RichPresence__Enum__Class>(type_info, "", "XboxOneRichPresence", "RichPresence");
        }
        inline app::XboxOneRichPresence_RichPresence__Enum* create() {
            return il2cpp::create_object<app::XboxOneRichPresence_RichPresence__Enum>(get_class());
        }
        inline app::XboxOneRichPresence_RichPresence__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxOneRichPresence_RichPresence__Enum__Array>(get_class(), size);
        }
        inline app::XboxOneRichPresence_RichPresence__Enum__Array* create_array(const std::vector<app::XboxOneRichPresence_RichPresence__Enum*>& items) {
            return il2cpp::array_new<app::XboxOneRichPresence_RichPresence__Enum__Array>(get_class(), items);
        }
    } // namespace XboxOneRichPresence_RichPresence__Enum
} // namespace app::classes::types
