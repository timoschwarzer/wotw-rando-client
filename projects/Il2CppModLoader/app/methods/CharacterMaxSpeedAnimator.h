#include <interception_macros.h>

namespace app::methods::CharacterMaxSpeedAnimator {
    IL2CPP_REGISTER_METHOD(0x01303090, void, OnStartPlay, (app::CharacterMaxSpeedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01303280, void, OnStopPlay, (app::CharacterMaxSpeedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::CharacterMaxSpeedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::CharacterMaxSpeedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01303490, void, SampleValue, (app::CharacterMaxSpeedAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::CharacterMaxSpeedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::CharacterMaxSpeedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013034E0, void, OnHorizontalInputCalculate, (app::CharacterMaxSpeedAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778E90, CharacterMaxSpeedAnimator_OnHorizontalInputCalculate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00990E80, void, ctor, (app::CharacterMaxSpeedAnimator * this_ptr))
}
