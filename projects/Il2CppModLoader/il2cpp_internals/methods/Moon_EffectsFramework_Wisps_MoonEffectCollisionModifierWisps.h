#include <interception_macros.h>

namespace app::methods::Moon_EffectsFramework_Wisps::MoonEffectCollisionModifierWisps {
    IL2CPP_REGISTER_METHOD(0x01209790, void, Apply, (app::MoonEffectCollisionModifierWisps * this_ptr, app::IMoonEffectComponentCache * input, app::MoonEffectRevertHandle * revert_handle));
    IL2CPP_REGISTER_METHOD(0x01209A30, void, Revert, (app::MoonEffectCollisionModifierWisps * this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MoonEffectCollisionModifierWisps * this_ptr));
}
