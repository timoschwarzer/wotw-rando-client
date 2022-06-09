#include <interception_macros.h>

namespace app::methods::UberWaterForceAnimator {
    IL2CPP_REGISTER_METHOD(0x0129F370, app::UberWaterForceActor *, get_Actor, (app::UberWaterForceAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0129F440, void, OnEnable, (app::UberWaterForceAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0129F4D0, void, CacheOriginals, (app::UberWaterForceAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0129F5B0, void, SampleValue, (app::UberWaterForceAnimator * this_ptr, float value, bool force_sample));
    IL2CPP_REGISTER_METHOD(0x0129F6E0, void, RestoreToOriginalState, (app::UberWaterForceAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::UberWaterForceAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::UberWaterForceAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00990E80, void, __ctor, (app::UberWaterForceAnimator * this_ptr));
}
