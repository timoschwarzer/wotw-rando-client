#include <interception_macros.h>

namespace app::methods::fsm::StateMachine {
IL2CPP_REGISTER_METHOD(0x00F6EA60, void, __ctor, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHOD(0x00F6F0A0, void, __ctor, (StateMachine_2 * __this, MoonGuid * guid));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_CurrentStateTime, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_CurrentStateTime, (StateMachine_2 * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FB950, IState_2 *, get_CurrentState, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_CurrentState, (StateMachine_2 * __this, IState_2 * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, IState_2 *, get_PreviousState, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_PreviousState, (StateMachine_2 * __this, IState_2 * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, List_1_fsm_IState_ *, get_States, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHOD(0x00F6F6C0, void, ChangeState, (StateMachine_2 * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x00F6F850, void, ChangeState, (StateMachine_2 * __this, IState_2 * state));
IL2CPP_REGISTER_METHODINFO(0x0475EFF8, StateMachine_2_ChangeState_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F6F9A0, void, UpdateState, (StateMachine_2 * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00F6FA40, StateConfigurator_1 *, Configure, (StateMachine_2 * __this, IState_2 * state));
IL2CPP_REGISTER_METHOD(0x00F6FB90, TransitionManager_1 *, FindTransitionManager, (StateMachine_2 * __this, Type * trigger));
IL2CPP_REGISTER_METHOD(0x00F6FED0, void, Trigger, (StateMachine_2 * __this, ITrigger_1 * trigger));
IL2CPP_REGISTER_METHOD(0x00F6FFF0, void, AddEvent, (StateMachine_2 * __this, IState_2 * state, int32_t eventId, Action * action));
IL2CPP_REGISTER_METHOD(0x00F70250, void, TriggerEvent, (StateMachine_2 * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00F703F0, void, RegisterStates, (StateMachine_2 * __this, IState_2__Array * states));
IL2CPP_REGISTER_METHOD(0x00F704D0, void, Serialize, (StateMachine_2 * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00F70660, int32_t, StateToIndex, (StateMachine_2 * __this, IState_2 * state));
IL2CPP_REGISTER_METHOD(0x00F708C0, IState_2 *, IndexToState, (StateMachine_2 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0157E090, Object *, GetCurrentState, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHOD(0x02FF92E0, TransitionManager_1 *, GetTransistionManager, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHOD(0x02FF92E0, TransitionManager_1 *, GetTransistionManager, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHODINFO(0x04733F60, StateMachine_2_GetTransistionManager_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHODINFO(0x04712C78, StateMachine_2_Trigger_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHODINFO(0x04743E00, StateMachine_2_Trigger_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHODINFO(0x0474CEF0, StateMachine_2_Trigger_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B410, StateMachine_2_Trigger_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157E090, EntityLocomotionTask *, GetCurrentState, (StateMachine_2 * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A3F8, StateMachine_2_GetCurrentState_1__MethodInfo);
}
