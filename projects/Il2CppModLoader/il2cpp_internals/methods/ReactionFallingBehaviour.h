#include <interception_macros.h>

namespace app::methods::ReactionFallingBehaviour {
IL2CPP_REGISTER_METHOD(0x00730A90, void, OnResetEntity, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, LegacyTimelineSequence *, get_EffectiveLandSequence, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00730AB0, MoonTimeline *, get_EffectiveLandSequenceNew, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00730B90, void, UseShortAnimForNextLand, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00730BA0, void, OnInitializeTask, (ReactionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00730CB0, bool, get_ShouldLand, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00730D40, void, OnEnterTask, (ReactionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00731140, void, OnCollision, (ReactionFallingBehaviour * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x0471B590, ReactionFallingBehaviour_OnCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007312B0, BehaviourStatus__Enum, OnExecuteTask, (ReactionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00731660, void, OnExitTask, (ReactionFallingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00731980, void, HandleCollision, (ReactionFallingBehaviour * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x047617E0, ReactionFallingBehaviour_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00731A90, void, HandleCollision, (ReactionFallingBehaviour * __this, Vector3 point, Vector3 normal, bool force));
IL2CPP_REGISTER_METHOD(0x00731DC0, void, UpdateState, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00731E10, void, ChangeState, (ReactionFallingBehaviour * __this, ReactionFallingBehaviour_FallState__Enum newState));
IL2CPP_REGISTER_METHOD(0x00731F70, void, OnEnterFalling, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007323E0, void, OnExitFalling, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007324C0, void, OnExitLanding, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007325E0, void, FallingUpdate, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00732DA0, void, OnEnterLand, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LandUpdate, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00733230, void, OnEndLand, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007335C0, void, OnEnterCollision, (ReactionFallingBehaviour * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x00733990, void, CollisionUpdate, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00733C00, void, PlayShake, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00733FC0, void, ForceFalling, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00733FD0, void, __ctor, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00734030, bool, _OnEnterFalling_b__60_0, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04730BE8, ReactionFallingBehaviour__OnEnterFalling_b__60_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00734030, bool, _FallingUpdate_b__63_0, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04724A50, ReactionFallingBehaviour__FallingUpdate_b__63_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00734050, void, _PlayShake_b__69_0, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04765C30, ReactionFallingBehaviour__PlayShake_b__69_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007340A0, bool, _PlayShake_b__69_1, (ReactionFallingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04702BE0, ReactionFallingBehaviour__PlayShake_b__69_1__MethodInfo);
}
