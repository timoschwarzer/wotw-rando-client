#include <interception_macros.h>

namespace app::methods::Moon_ArtOptimization::ToggleModifierTask {
IL2CPP_REGISTER_METHOD(0x00CB3630, void, __ctor, (app::ToggleModifierTask * this_ptr, app::UberShaderComponent * uber_shader, app::UberShaderModifier * modifier, bool modifier_state));
IL2CPP_REGISTER_METHOD(0x00CB3640, void, Update, (app::ToggleModifierTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB1B60, void, OnEnterContext, (app::ToggleModifierTask * this_ptr, app::IOptimizationTask * antecedent, app::Object * context_data));
}
