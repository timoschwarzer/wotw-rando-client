#include <interception_macros.h>

namespace app::methods::MaterialVFXSizePair {
IL2CPP_REGISTER_METHOD(0x01384E20, void, __ctor, (app::MaterialVFXSizePair * this_ptr, app::MaterialTypeVFXSettings_EffectSize__Enum size, app::GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x01385080, void, Initialize, (app::MaterialVFXSizePair * this_ptr));
IL2CPP_REGISTER_METHOD(0x01385300, GameObject *, FindBloodVfx, (app::MaterialVFXSizePair * this_ptr, app::DamageRecieverType__Enum type));
}
