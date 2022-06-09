#include <interception_macros.h>

namespace app::methods::Moon_EffectsFramework_Wisps::MoonEffectWisps {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::GameObject *, get_Prefab, (app::MoonEffectWisps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDirty, (app::MoonEffectWisps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0120C4B0, app::List_1_Moon_EffectsFramework_MoonEffectVariationModifier_ *, get_Modifiers, (app::MoonEffectWisps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0120C6D0, app::GameObject *, Resolve_1, (app::MoonEffectWisps * this_ptr, app::Vector3 position, app::Quaternion rotation, bool record));
    IL2CPP_REGISTER_METHOD(0x0120C7E0, app::GameObject *, Resolve_2, (app::MoonEffectWisps * this_ptr, app::IInstantiationHandler * instantiation_handler, app::Vector3 position, app::Quaternion rotation, bool record));
    IL2CPP_REGISTER_METHOD(0x0052C650, void, SetDirty, (app::MoonEffectWisps * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MoonEffectWisps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0120C9E0, void, __cctor, ());
}
