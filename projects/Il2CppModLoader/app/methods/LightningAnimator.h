#include <interception_macros.h>

namespace app::methods::LightningAnimator {
    IL2CPP_REGISTER_METHOD(0x00FA2ED0, void, Awake, (app::LightningAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA3050, void, Start, (app::LightningAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA3080, void, FixedUpdate, (app::LightningAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA31E0, void, InitiateLightningEvent, (app::LightningAnimator * this_ptr, app::LightningAnimator_LightningEvent lightning_event))
    IL2CPP_REGISTER_METHOD(0x00FA32F0, app::LightningAnimator_LightningEvent, GetNextLightningEvent, (app::LightningAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA3580, void, ctor, (app::LightningAnimator * this_ptr))
}
