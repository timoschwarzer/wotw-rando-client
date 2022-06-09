#include <interception_macros.h>

namespace app::methods::Moon_BehaviourSystem::GroundPatrolWithDirectionTask {
IL2CPP_REGISTER_METHOD(0x00CB7600, Vector3, get_PatrolOrigin, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB7650, Vector2, get_MovingDirection, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB77D0, void, OnInitializeTask, (app::GroundPatrolWithDirectionTask * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB78A0, BehaviourStatus__Enum, OnExecuteTask, (app::GroundPatrolWithDirectionTask * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB7B00, void, OnEnterTask, (app::GroundPatrolWithDirectionTask * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB7DC0, void, OnExitTask, (app::GroundPatrolWithDirectionTask * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::GroundPatrolWithDirectionTask * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00CB7E80, void, UpdateDirection, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB7EB0, void, StartIdle, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB8050, BehaviourStatus__Enum, UpdateIdle, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB8110, void, StartMoving, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB82B0, void, UpdateMoving, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB84C0, bool, KeepMoving, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB8D90, BehaviourStatus__Enum, ChangePatrolDirection, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB8DE0, bool, PointInsideSphere, (app::GroundPatrolWithDirectionTask * this_ptr, app::Vector3 point, app::Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::GroundPatrolWithDirectionTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB8ED0, void, __ctor, (app::GroundPatrolWithDirectionTask * this_ptr));
}
