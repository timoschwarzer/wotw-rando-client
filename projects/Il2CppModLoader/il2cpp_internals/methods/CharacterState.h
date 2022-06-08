#include <interception_macros.h>

namespace app::methods::CharacterState {
IL2CPP_REGISTER_METHOD(0x01314750, MoonAnimator *, get_SeinAnimator, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, SeinCharacter *, get_Sein, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x00608710, int32_t, get_Id, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_Id, (CharacterState * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x013148E0, SoundHost *, get_SoundHost, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x013149B0, void, set_IsActive, (CharacterState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsActive, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetReferenceToSein, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsAllowedNonZeroZPosition, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x013149E0, void, SetReferenceToSein, (CharacterState * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAwake, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x00A7E680, void, Awake, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x01314B10, void, OnDestroy, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x01314BF0, void, CreatePuppet, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x01314E70, void, OnEnter, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x006EF310, void, OnDisable, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateCharacterState, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x01314EF0, void, Serialize, (CharacterState * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01314FB0, void, InitializeTimeline, (CharacterState * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01315420, void, OnMoveWindowOpen, (CharacterState * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x01315520, void, OnMoveWindowClosed, (CharacterState * __this, MoveEventType__Enum eventType));
IL2CPP_REGISTER_METHOD(0x01315620, bool, CanBeInterruptedBy, (CharacterState * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, CanInputBeQueued, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x013157D0, void, __ctor, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType, (CharacterState * __this));
}
