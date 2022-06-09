#include <interception_macros.h>

namespace app::methods::UberStateValueCondition {
IL2CPP_REGISTER_METHOD(0x0128B500, bool, Validate, (app::UberStateValueCondition * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::UberStateValueCondition * this_ptr));
IL2CPP_REGISTER_METHOD(0x0128B610, IUberState__Array *, get_AffectingUberStates, (app::UberStateValueCondition * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::UberStateValueCondition * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_AllTargets, (app::UberStateValueCondition * this_ptr, app::List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x0128B790, void, OnEnable, (app::UberStateValueCondition * this_ptr));
IL2CPP_REGISTER_METHOD(0x0128B830, void, OnDisable, (app::UberStateValueCondition * this_ptr));
IL2CPP_REGISTER_METHOD(0x0128B8D0, void, Apply, (app::UberStateValueCondition * this_ptr, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x0128BA90, void, __ctor, (app::UberStateValueCondition * this_ptr));
IL2CPP_REGISTER_METHOD(0x0128BBF0, void, __cctor, ());
}
