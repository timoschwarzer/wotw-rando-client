#include <interception_macros.h>

namespace app::methods::CartLogicCycle {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowGravity, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowGravityToGround, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowInstantStop, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowLeftRightMovement, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowJumpSustain, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowUpwardsDeceleration, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowAirNoDeceleration, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyFrictionToSpeed, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowJump, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3A420, bool, get_AllowBoost, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3A480, void, RegisterCharacterState, (CartLogicCycle * __this, CharacterState * state));
IL2CPP_REGISTER_METHOD(0x00B3A6C0, void, UnregisterCharacterState, (CartLogicCycle * __this, CharacterState * state));
IL2CPP_REGISTER_METHOD(0x00B3A800, void, RegisterExecutionOrder, (CartLogicCycle * __this, Type * type, int32_t order));
IL2CPP_REGISTER_METHOD(0x00B3A920, void, RegisterDefaultExecutionOrder, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3AB00, void, RegisterIsAllowedDelegate, (CartLogicCycle * __this, Type * type, CartLogicCycle_IsAllowedDelegate * isAllowed));
IL2CPP_REGISTER_METHOD(0x00B3AC20, void, RegisterIsAllowedDelegates, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3B550, bool, ValidateExclusiveActiveStateType, (CartLogicCycle * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00B3B6D0, void, RegisterExclusiveActiveStateType, (CartLogicCycle * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterExclusiveActiveStateTypes, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3B910, void, Awake, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3B920, void, Start, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3B9B0, void, FixedUpdate, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x00B3C1F0, void, SetStateActive, (CartLogicCycle * __this, CharacterState * state, bool active));
IL2CPP_REGISTER_METHOD(0x00B3C340, void, UpdateCharacterState, (CartLogicCycle * __this, CharacterState * state));
IL2CPP_REGISTER_METHOD(0x00B3C450, void, __ctor, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__31_0, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x047218C8, CartLogicCycle__RegisterIsAllowedDelegates_b__31_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__31_1, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x04710BB8, CartLogicCycle__RegisterIsAllowedDelegates_b__31_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, _RegisterIsAllowedDelegates_b__31_2, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x047023E8, CartLogicCycle__RegisterIsAllowedDelegates_b__31_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, _RegisterIsAllowedDelegates_b__31_3, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x04722B20, CartLogicCycle__RegisterIsAllowedDelegates_b__31_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__31_4, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x047264B0, CartLogicCycle__RegisterIsAllowedDelegates_b__31_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__31_5, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x04715E30, CartLogicCycle__RegisterIsAllowedDelegates_b__31_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, _RegisterIsAllowedDelegates_b__31_6, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x0475A178, CartLogicCycle__RegisterIsAllowedDelegates_b__31_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, _RegisterIsAllowedDelegates_b__31_7, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x04719E78, CartLogicCycle__RegisterIsAllowedDelegates_b__31_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B3A420, bool, _RegisterIsAllowedDelegates_b__31_8, (CartLogicCycle * __this));
IL2CPP_REGISTER_METHODINFO(0x0473DCB0, CartLogicCycle__RegisterIsAllowedDelegates_b__31_8__MethodInfo);
}
