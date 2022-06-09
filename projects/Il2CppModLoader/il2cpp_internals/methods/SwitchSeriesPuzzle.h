#include <interception_macros.h>

namespace app::methods::SwitchSeriesPuzzle {
    IL2CPP_REGISTER_METHOD(0x01834490, void, Awake, (app::SwitchSeriesPuzzle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01834740, void, CacheValues, (app::SwitchSeriesPuzzle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01834910, void, OnEnable, (app::SwitchSeriesPuzzle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x018349C0, void, OnDisable, (app::SwitchSeriesPuzzle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01834A60, app::IGenericUberState *, GetChangedState, (app::SwitchSeriesPuzzle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01834C50, void, Apply, (app::SwitchSeriesPuzzle * this_ptr, app::UberStateApplyContext__Enum context));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::SwitchSeriesPuzzle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IUberState__Array *, get_AffectingUberStates, (app::SwitchSeriesPuzzle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01835080, app::List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::SwitchSeriesPuzzle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::SwitchSeriesPuzzle * this_ptr));
}
