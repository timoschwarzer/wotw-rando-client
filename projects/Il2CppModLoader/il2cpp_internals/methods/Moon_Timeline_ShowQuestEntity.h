#include <interception_macros.h>

namespace app::methods::Moon_Timeline::ShowQuestEntity {
IL2CPP_REGISTER_METHOD(0x00D02D50, void, OnEnable, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D02D60, void, Awake, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D02F10, void, OnDestroy, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D02D50, void, OnPostRetoreCheckpoint, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474D1F8, ShowQuestEntity_OnPostRetoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D030C0, void, ClearQuestShownFlag, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D03190, void, ChangeState, (app::ShowQuestEntity * this_ptr, app::ShowQuestEntity_State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04749698, ShowQuestEntity_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D03980, void, SetQuestIcons, (app::ShowQuestEntity * this_ptr, app::QuestIconMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x00D03DD0, bool, CanUpdate, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D03DF0, void, FixedUpdate, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D03E90, void, OnUpdateEntity, (app::ShowQuestEntity * this_ptr, float delta_time));
IL2CPP_REGISTER_METHODINFO(0x0472E570, ShowQuestEntity_OnUpdateEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D04340, void, OnVisibilityChangedCallback, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047701F8, ShowQuestEntity_OnVisibilityChangedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D04420, void, OnStartPlayback, (app::ShowQuestEntity * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00D046E0, void, OnStopPlayback, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D048D0, void, OnMenuClose, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04753BD8, ShowQuestEntity_OnMenuClose__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D048F0, bool, HasFinished, (app::ShowQuestEntity * this_ptr, int32_t event_id));
IL2CPP_REGISTER_METHOD(0x00D04910, void, __ctor, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D049E0, void, _ChangeState_b__15_0, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047431A8, ShowQuestEntity__ChangeState_b__15_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D04C80, void, _OnStartPlayback_b__23_0, (app::ShowQuestEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04732540, ShowQuestEntity__OnStartPlayback_b__23_0__MethodInfo);
}
