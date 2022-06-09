#include <interception_macros.h>

namespace app::methods::AchievementsStateValidator {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::AchievementsStateValidator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004BBF40, app::IUberState__Array *, get_AffectingUberStates, (app::AchievementsStateValidator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004BC560, app::List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::AchievementsStateValidator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004BC720, void, OnEnable, (app::AchievementsStateValidator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004BC8F0, void, OnDisable, (app::AchievementsStateValidator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004BCAC0, void, Apply, (app::AchievementsStateValidator * this_ptr, app::UberStateApplyContext__Enum context));
    IL2CPP_REGISTER_METHOD(0x004BCAC0, void, OnCreateCheckpoint, (app::AchievementsStateValidator * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04716BB0, AchievementsStateValidator_OnCreateCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x004BCAD0, void, ValidateStates, (app::AchievementsStateValidator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004BCF90, void, ValidateStatesOnGameLoad, (app::AchievementsStateValidator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004BD210, void, __ctor, (app::AchievementsStateValidator * this_ptr));
}
