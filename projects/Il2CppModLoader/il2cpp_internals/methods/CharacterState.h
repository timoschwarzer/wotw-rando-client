#include <interception_macros.h>

namespace app::methods::CharacterState {
IL2CPP_REGISTER_METHOD(0x01314750, MoonAnimator *, get_SeinAnimator, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBC0, SeinCharacter *, get_Sein, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00608710, int32_t, get_Id, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_Id, (app::CharacterState * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x013148E0, SoundHost *, get_SoundHost, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x013149B0, void, set_IsActive, (app::CharacterState * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsActive, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetReferenceToSein, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsAllowedNonZeroZPosition, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x013149E0, void, SetReferenceToSein, (app::CharacterState * this_ptr, app::SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAwake, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A7E680, void, Awake, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01314B10, void, OnDestroy, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01314BF0, void, CreatePuppet, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01314E70, void, OnEnter, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x006EF310, void, OnDisable, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateCharacterState, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01314EF0, void, Serialize, (app::CharacterState * this_ptr, app::Archive * ar));
IL2CPP_REGISTER_METHOD(0x01314FB0, void, InitializeTimeline, (app::CharacterState * this_ptr, app::MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01315420, void, OnMoveWindowOpen, (app::CharacterState * this_ptr, app::MoveEventType__Enum event_type));
IL2CPP_REGISTER_METHOD(0x01315520, void, OnMoveWindowClosed, (app::CharacterState * this_ptr, app::MoveEventType__Enum event_type));
IL2CPP_REGISTER_METHOD(0x01315620, bool, CanBeInterruptedBy, (app::CharacterState * this_ptr, app::IComboMove * move));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, CanInputBeQueued, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x013157D0, void, __ctor, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_1, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_2, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_3, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_4, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_5, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_6, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_7, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_8, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_9, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_10, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_11, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_12, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_13, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_14, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_15, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_16, (app::CharacterState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonTypeResolver *, GetResolverForType_17, (app::CharacterState * this_ptr));
}
