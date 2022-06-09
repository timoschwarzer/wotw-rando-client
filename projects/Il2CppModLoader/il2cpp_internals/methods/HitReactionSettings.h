#include <interception_macros.h>

namespace app::methods::HitReactionSettings {
    IL2CPP_REGISTER_METHOD(0x00B58030, app::HitReactionSettings *, get_Instance, ());
    IL2CPP_REGISTER_METHOD(0x00B581D0, float, GetAdditiveAnimWeight, (app::HitReactionSettings * this_ptr, float damage_amount));
    IL2CPP_REGISTER_METHOD(0x00B582D0, void, ResetToInitialValues, (app::HitReactionSettings * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B58330, void, __ctor, (app::HitReactionSettings * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
