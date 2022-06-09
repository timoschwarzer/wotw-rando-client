#include <interception_macros.h>

namespace app::methods::SneezeSlugBlastBehaviour {
    IL2CPP_REGISTER_METHOD(0x00ED4200, bool, IsBlockingInterruption, (app::SneezeSlugBlastBehaviour * this_ptr, app::EntityDamageEvent * damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
    IL2CPP_REGISTER_METHOD(0x00ED4240, void, CacheSerializedComponents, (app::SneezeSlugBlastBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00ED4270, void, OnEntityInitialized, (app::SneezeSlugBlastBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00ED4390, void, OnEnter, (app::SneezeSlugBlastBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00ED4470, app::BehaviourStatus__Enum, OnExecute, (app::SneezeSlugBlastBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00ED44F0, void, OnExit, (app::SneezeSlugBlastBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00ED4600, void, SetState, (app::SneezeSlugBlastBehaviour * this_ptr, app::SneezeSlugBlastBehaviour_State__Enum new_state));
    IL2CPP_REGISTER_METHOD(0x00ED4960, void, StartTimeline, (app::SneezeSlugBlastBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_stop_event));
    IL2CPP_REGISTER_METHOD(0x00ED49C0, void, StopCurrentTimeline, (app::SneezeSlugBlastBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00ED4AA0, void, BlastAttack, (app::SneezeSlugBlastBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047276E8, SneezeSlugBlastBehaviour_BlastAttack__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00ED4E20, void, __ctor, (app::SneezeSlugBlastBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00ED4F80, void, _SetState_b__19_0, (app::SneezeSlugBlastBehaviour * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04749118, SneezeSlugBlastBehaviour__SetState_b__19_0__MethodInfo);
}
