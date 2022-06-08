#include <interception_macros.h>

namespace app::methods::SeinFall {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD4DF0, SeinFallPuppet *, get_Puppet, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD4EB0, bool, IsTurnAnimBlocking, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD4ED0, bool, get_ShouldFallMovingAnimationPlay, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD4F20, bool, get_ShouldFallIdleAnimationPlay, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD4F70, bool, get_IsPlayingHeavyLand, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD5050, void, OnSetReferenceToSein, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD5130, Vector3, get_LongFallParticleSpawnPoint, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD5280, void, Start, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD5600, void, OnDestroy, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD57A0, void, OnExit, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD5810, bool, ShouldFallMovingAnimationKeepPlaying, (SeinFall * __this));
IL2CPP_REGISTER_METHODINFO(0x0477EA78, SeinFall_ShouldFallMovingAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD5BE0, bool, ShouldFallIdleAnimationKeepPlaying, (SeinFall * __this));
IL2CPP_REGISTER_METHODINFO(0x047442F8, SeinFall_ShouldFallIdleAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldTurnAnimationKeepPlaying, (SeinFall * __this));
IL2CPP_REGISTER_METHODINFO(0x0472ECB8, SeinFall_ShouldTurnAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPlayTurnAnimation, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD5FB0, void, OnTurnAnimStop, (SeinFall * __this));
IL2CPP_REGISTER_METHODINFO(0x0476EDF8, SeinFall_OnTurnAnimStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD5FE0, void, UpdateCharacterState, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD6B00, void, HandleFalling, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD6EE0, void, HandleLandOnGround, (SeinFall * __this, Vector3 normal, Collider * target));
IL2CPP_REGISTER_METHODINFO(0x04702700, SeinFall_HandleLandOnGround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD7860, void, ExecuteLandingEffects, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD7B60, void, ExecuteLongLandingEffects, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD7E40, void, LongLand, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD81E0, void, HeavyLand, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD83E0, void, PlayLongFallLandAnimation, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD8570, void, InterruptLongFallLandAnimation, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD85A0, void, IgnoreLand, (SeinFall * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00AD85B0, void, IgnoreLandAndFall, (SeinFall * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00AD85D0, bool, ShouldFallTurnAnimationKeepPlaying, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD8870, bool, get_HasStartedTurning, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD88A0, bool, get_HasFinishedTurning, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD88C0, bool, get_WantsToFaceLeft, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD88D0, void, set_WantsToFaceLeft, (SeinFall * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00AD88E0, bool, get_ShouldInterruptTurning, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD8900, bool, get_IsCancellable, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD8920, void, InterruptTurning, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD8940, void, Turn, (SeinFall * __this, bool faceLeft));
IL2CPP_REGISTER_METHOD(0x00AD89C0, void, __ctor, (SeinFall * __this));
IL2CPP_REGISTER_METHOD(0x00AD8A20, void, _Start_b__46_0, (SeinFall * __this, RaycastHit hit));
IL2CPP_REGISTER_METHODINFO(0x047987F8, SeinFall__Start_b__46_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD8A50, bool, _PlayLongFallLandAnimation_b__64_0, (SeinFall * __this));
IL2CPP_REGISTER_METHODINFO(0x04767108, SeinFall__PlayLongFallLandAnimation_b__64_0__MethodInfo);
}
