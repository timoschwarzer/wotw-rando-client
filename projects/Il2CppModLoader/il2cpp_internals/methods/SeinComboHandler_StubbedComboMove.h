#include <interception_macros.h>

namespace app::methods::SeinComboHandler_StubbedComboMove {
IL2CPP_REGISTER_METHOD(0x002FB980, void, __ctor, (SeinComboHandler_StubbedComboMove * __this, ComboMoveType__Enum moveType));
IL2CPP_REGISTER_METHOD(0x00420EE0, IComboMove *, GetComboMove, (SeinComboHandler_StubbedComboMove * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x00420EE0, ButtonInputType__Enum, get_ButtonInputType, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_Moon_ComboSystem_IComboMove_ *, get_ComboMoves, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ComboMoves, (SeinComboHandler_StubbedComboMove * __this, List_1_Moon_ComboSystem_IComboMove_ * value));
IL2CPP_REGISTER_METHOD(0x0052A280, AbilityType__Enum, get_ComboAbilityType, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_ComboAbilityType, (SeinComboHandler_StubbedComboMove * __this, AbilityType__Enum value));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_ProviderCooldown, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_ProviderCooldown, (SeinComboHandler_StubbedComboMove * __this, float value));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_ProviderCooldownTimer, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00A64050, void, set_ProviderCooldownTimer, (SeinComboHandler_StubbedComboMove * __this, float value));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_MoveHasFinished, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x007EC410, void, set_MoveHasFinished, (SeinComboHandler_StubbedComboMove * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB970, ComboMoveType__Enum, get_ComboMoveType, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_ComboMoveType, (SeinComboHandler_StubbedComboMove * __this, ComboMoveType__Enum value));
IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_IsAttackButtonDown, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x0052A120, void, set_IsAttackButtonDown, (SeinComboHandler_StubbedComboMove * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A64060, bool, get_OnAttackButtonPressed, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00A64070, void, set_OnAttackButtonPressed, (SeinComboHandler_StubbedComboMove * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A64080, bool, get_OnAttackButtonReleased, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00A64090, void, set_OnAttackButtonReleased, (SeinComboHandler_StubbedComboMove * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanExecute, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeInterruptedBy, (SeinComboHandler_StubbedComboMove * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanInputBeQueued, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterMove, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitMove, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InterruptMove, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (SeinComboHandler_StubbedComboMove * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyHorizontalPlatformMovementSettings, (SeinComboHandler_StubbedComboMove * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_MoveCooldown, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00724010, void, set_MoveCooldown, (SeinComboHandler_StubbedComboMove * __this, float value));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_MoveCooldownTimer, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_MoveCooldownTimer, (SeinComboHandler_StubbedComboMove * __this, float value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_WasGroundedSinceLastExecution, (SeinComboHandler_StubbedComboMove * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_WasGroundedSinceLastExecution, (SeinComboHandler_StubbedComboMove * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (SeinComboHandler_StubbedComboMove * __this, SeinController3D_EventId__Enum eventId));
}
