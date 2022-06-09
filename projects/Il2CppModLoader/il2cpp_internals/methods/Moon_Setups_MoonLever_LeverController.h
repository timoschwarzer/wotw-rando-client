#include <interception_macros.h>

namespace app::methods::Moon_Setups_MoonLever::LeverController {
    IL2CPP_REGISTER_METHOD(0x00E257A0, app::IDesiredUberState *, get_LeftState, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E257C0, app::IDesiredUberState *, get_RightState, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverEnter, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473FF60, LeverController_OnLeverEnter__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverExit, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04742B60, LeverController_OnLeverExit__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGrabLever, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04756F50, LeverController_OnGrabLever__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReleaseLever, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04723C10, LeverController_OnReleaseLever__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00E257E0, void, OnLeverLeft, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0478CD58, LeverController_OnLeverLeft__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00E258D0, void, OnLeverRight, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04738908, LeverController_OnLeverRight__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverLeftFailed, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04702308, LeverController_OnLeverLeftFailed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverRightFailed, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04770920, LeverController_OnLeverRightFailed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftMiddle, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04776098, LeverController_OnLeftMiddle__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00E259C0, bool, CanLeverLeftCallback, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04748D20, LeverController_CanLeverLeftCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00E25AA0, bool, CanLeverRightCallback, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04785518, LeverController_CanLeverRightCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00E25B80, void, StopMutuallyExclusivite, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E25CC0, void, Start, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E26730, app::IDesiredUberState *, GetRequirementsForTimeline, (app::LeverController * this_ptr, app::MoonTimeline * timeline));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_1, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_2, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_3, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_4, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_5, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_6, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_7, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_8, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_9, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_10, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_11, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_12, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_13, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_14, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_15, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_16, (app::LeverController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_17, (app::LeverController * this_ptr));
}
