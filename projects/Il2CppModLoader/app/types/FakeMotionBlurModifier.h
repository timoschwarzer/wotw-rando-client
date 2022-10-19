#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FakeMotionBlurModifier {
        namespace {
            inline app::FakeMotionBlurModifier__Class* type_info_ref = nullptr;
        }
        inline app::FakeMotionBlurModifier__Class** type_info = &type_info_ref;
        inline app::FakeMotionBlurModifier__Class* get_class() {
            return il2cpp::get_class<app::FakeMotionBlurModifier__Class>(type_info, "", "FakeMotionBlurModifier");
        }
        inline app::FakeMotionBlurModifier* create() {
            return il2cpp::create_object<app::FakeMotionBlurModifier>(get_class());
        }
    } // namespace FakeMotionBlurModifier
} // namespace app::classes::types
