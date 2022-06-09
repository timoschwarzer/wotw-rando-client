#include <interception_macros.h>

namespace app::methods::Moon_BehaviourSystem::EntityLocomotionTask {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawGizmos, ());
IL2CPP_REGISTER_METHOD(0x00CB6490, void, InitFSMState, (app::EntityLocomotionTask * this_ptr, int32_t id, app::StateMachine_2 * state_machine, app::Locomotion * locomotion));
IL2CPP_REGISTER_METHOD(0x00CB64A0, void, UpdateState, (app::EntityLocomotionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB6510, void, OnEnter, (app::EntityLocomotionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Locomotion *, get_Parent, (app::EntityLocomotionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::EntityLocomotionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, GetStateId, (app::EntityLocomotionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (app::EntityLocomotionTask * this_ptr));
}
