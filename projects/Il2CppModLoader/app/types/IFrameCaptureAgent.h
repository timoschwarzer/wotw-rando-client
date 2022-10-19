#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFrameCaptureAgent {
        inline app::IFrameCaptureAgent__Class** type_info = (app::IFrameCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04739828));
        inline app::IFrameCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::IFrameCaptureAgent__Class>(type_info, "", "IFrameCaptureAgent");
        }
        inline app::IFrameCaptureAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::IFrameCaptureAgent__Array>(get_class(), size);
        }
        inline app::IFrameCaptureAgent__Array* create_array(const std::vector<app::IFrameCaptureAgent*>& items) {
            return il2cpp::array_new<app::IFrameCaptureAgent__Array>(get_class(), items);
        }
    } // namespace IFrameCaptureAgent
} // namespace app::classes::types
