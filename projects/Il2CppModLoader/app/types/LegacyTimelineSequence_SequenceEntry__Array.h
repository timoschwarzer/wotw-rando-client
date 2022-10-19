#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_SequenceEntry__Array {
        namespace {
            inline app::LegacyTimelineSequence_SequenceEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTimelineSequence_SequenceEntry__Array__Class** type_info = &type_info_ref;
        inline app::LegacyTimelineSequence_SequenceEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimelineSequence_SequenceEntry__Array__Class>(type_info, "", "LegacyTimelineSequence+SequenceEntry[]");
        }
        inline app::LegacyTimelineSequence_SequenceEntry__Array* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_SequenceEntry__Array>(get_class());
        }
    } // namespace LegacyTimelineSequence_SequenceEntry__Array
} // namespace app::classes::types
