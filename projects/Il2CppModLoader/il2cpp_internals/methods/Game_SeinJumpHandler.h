#include <interception_macros.h>

namespace app::methods::Game::SeinJumpHandler {
IL2CPP_REGISTER_METHOD(0x01529030, SeinCharacter *, get_Sein, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, ButtonInputType__Enum, get_ButtonInputType, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x015290C0, IComboMove *, GetComboMove, (app::SeinJumpHandler * this_ptr, app::ComboInput * input));
IL2CPP_REGISTER_METHOD(0x002FB950, List_1_Moon_ComboSystem_IComboMove_ *, get_ComboMoves, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ComboMoves, (app::SeinJumpHandler * this_ptr, app::List_1_Moon_ComboSystem_IComboMove_ * value));
IL2CPP_REGISTER_METHOD(0x00E15C70, AbilityType__Enum, get_ComboAbilityType, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_ProviderCooldown, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_ProviderCooldown, (app::SeinJumpHandler * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00504E70, float, get_ProviderCooldownTimer, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00504E80, void, set_ProviderCooldownTimer, (app::SeinJumpHandler * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01529100, bool, get_MoveHasFinished, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x015291E0, bool, CanExecute, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x01529B60, void, PerformJump, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, CharacterState *, get_LastJumpExecuted, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0152ACF0, void, EnterMove, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitMove, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InterruptMove, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0152AD00, bool, get_IsAttackButtonDown, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0152ADB0, bool, get_OnAttackButtonPressed, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0152AE80, bool, get_OnAttackButtonReleased, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_MoveCooldown, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00724010, void, set_MoveCooldown, (app::SeinJumpHandler * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_MoveCooldownTimer, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_MoveCooldownTimer, (app::SeinJumpHandler * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00417920, ComboMoveType__Enum, get_ComboMoveType, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_WasGroundedSinceLastExecution, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_WasGroundedSinceLastExecution, (app::SeinJumpHandler * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeInterruptedBy, (app::SeinJumpHandler * this_ptr, app::IComboMove * move));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanInputBeQueued, (app::SeinJumpHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (app::SeinJumpHandler * this_ptr, app::GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyHorizontalPlatformMovementSettings, (app::SeinJumpHandler * this_ptr, app::HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (app::SeinJumpHandler * this_ptr, app::SeinController3D_EventId__Enum event_id));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::SeinJumpHandler * this_ptr));
}
