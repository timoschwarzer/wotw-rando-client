#include <interception_macros.h>

namespace app::methods::EnemyArenaVirtualAnimator {
IL2CPP_REGISTER_METHOD(0x002FBBE0, EnemyArenaController *, get_Controller, (app::EnemyArenaVirtualAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Controller, (app::EnemyArenaVirtualAnimator * this_ptr, app::EnemyArenaController * value));
IL2CPP_REGISTER_METHOD(0x00C036A0, void, __ctor, (app::EnemyArenaVirtualAnimator * this_ptr, app::EnemyArenaController * controller));
IL2CPP_REGISTER_METHOD(0x00C03740, void, Reset, (app::EnemyArenaVirtualAnimator * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00C03800, EntityOperationPermit__Enum, OnBeforeAddChild, (app::EnemyArenaVirtualAnimator * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00C03900, EntityId, CustomAddChild, (app::EnemyArenaVirtualAnimator * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00C039E0, EntityOperationPermit__Enum, OnBeforeRemoveChild, (app::EnemyArenaVirtualAnimator * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x00C03AB0, void, CustomRemoveChild, (app::EnemyArenaVirtualAnimator * this_ptr, app::EntityId id, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RebuildHierarchy, (app::EnemyArenaVirtualAnimator * this_ptr));
}
