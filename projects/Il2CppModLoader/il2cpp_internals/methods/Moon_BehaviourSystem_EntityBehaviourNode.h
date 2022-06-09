#include <interception_macros.h>

namespace app::methods::Moon_BehaviourSystem::EntityBehaviourNode {
IL2CPP_REGISTER_METHOD(0x002FBC40, Entity *, get_Entity, (app::EntityBehaviourNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB6450, void, OnEntityInitialization, (app::EntityBehaviourNode * this_ptr, app::Entity * entity));
IL2CPP_REGISTER_METHOD(0x00417920, EntityOwnedInitOrder__Enum, get_InitOrder, (app::EntityBehaviourNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldPauseLocomotionIsConstant, (app::EntityBehaviourNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::EntityBehaviourNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheSerializedComponents, (app::EntityBehaviourNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB6470, BehaviourStatus__Enum, Execute, (app::EntityBehaviourNode * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (app::EntityBehaviourNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB6480, void, EndBehaviour, (app::EntityBehaviourNode * this_ptr, app::BehaviourStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (app::EntityBehaviourNode * this_ptr));
}
