#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRevertMoonEffectLogic {
        inline app::IRevertMoonEffectLogic__Class** type_info = (app::IRevertMoonEffectLogic__Class**)(modloader::win::memory::resolve_rva(0x04753390));
        inline app::IRevertMoonEffectLogic__Class* get_class() {
            return il2cpp::get_class<app::IRevertMoonEffectLogic__Class>(type_info, "Moon.EffectsFramework", "IRevertMoonEffectLogic");
        }
        inline app::IRevertMoonEffectLogic__Array* create_array(int size) {
            return il2cpp::array_new<app::IRevertMoonEffectLogic__Array>(get_class(), size);
        }
        inline app::IRevertMoonEffectLogic__Array* create_array(const std::vector<app::IRevertMoonEffectLogic*>& items) {
            return il2cpp::array_new<app::IRevertMoonEffectLogic__Array>(get_class(), items);
        }
    } // namespace IRevertMoonEffectLogic
} // namespace app::classes::types
