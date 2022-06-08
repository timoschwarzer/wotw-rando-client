#include <interception_macros.h>

namespace app::methods::SeinWallSlide {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror *, get_SpriteMirror, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00A7EB40, SeinDoubleJump *, get_DoubleJump, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB1790, SeinJump *, get_Jump, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity *, get_Gravity, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB17D0, bool, get_IsOnWall, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB1810, bool, get_CanWallSlide, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB1980, bool, get_IsWallSliding, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB19A0, bool, get_ShouldWallSlideUpAnimationPlay, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB1A10, bool, get_ShouldWallSlideDownAnimationPlay, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB1A20, void, OnSetReferenceToSein, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB1E00, SeinWallSlidePuppet *, get_Puppet, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB1EC0, void, Start, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB2190, void, OnDestroy, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB25B0, void, ModifyGravityPlatformMovementSettings, (SeinWallSlide * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04786CA0, SeinWallSlide_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AB2720, void, ModifyHorizontalPlatformMovementSettings, (SeinWallSlide * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0478DCF8, SeinWallSlide_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AB2760, bool, get_IsWallSlideUpPlaying, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB2900, void, UpdateCharacterState, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB2E60, void, HandleCollision, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHODINFO(0x04793910, SeinWallSlide_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AB2F00, void, RefreshState, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB2F80, void, OnExit, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB3010, SurfaceMaterialType__Enum, get_WallSurfaceMaterialType, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB3040, void, HandleEffects, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB3810, void, ExecuteEnterWallEffects, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB3B10, void, ExecuteExitWallEffects, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB3E10, void, ChangeState, (SeinWallSlide * __this, SeinWallSlide_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00AB40A0, void, ResetMovingOffWallLockTimer, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB41F0, void, UpdateState, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB4640, bool, ShouldWallSlideUpAnimationKeepPlaying, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHODINFO(0x04796A38, SeinWallSlide_ShouldWallSlideUpAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AB4940, bool, ShouldWallSlideDownAnimationKeepPlaying, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHODINFO(0x0475AD68, SeinWallSlide_ShouldWallSlideDownAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AB4AA0, bool, CanDash, (SeinWallSlide * __this));
IL2CPP_REGISTER_METHOD(0x00AB4CA0, void, Serialize, (SeinWallSlide * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00AB4CF0, void, __ctor, (SeinWallSlide * __this));
}
