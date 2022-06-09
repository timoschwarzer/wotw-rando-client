#include <interception_macros.h>

namespace app::methods::frameworks_entity::SimpleNPCEntity {
IL2CPP_REGISTER_METHOD(0x00F5BA90, Vector2, get_EffectivePlayerAnchor, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047605F0, SimpleNPCEntity_get_EffectivePlayerAnchor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_IsInteracting, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CA2560, void, set_IsInteracting, (app::SimpleNPCEntity * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00F5BED0, bool, get_IsInInteractionRange, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5C0E0, Sensor *, get_Sensor, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, CharacterInteractableType__Enum, get_InteractableType, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5C1B0, void, OnEnable, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5C250, void, OnDisable, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5C2F0, void, OnAwake, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5C300, bool, CanInteractWithCharacter, (app::SimpleNPCEntity * this_ptr, app::ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F5C450, void, OnInteractionStart, (app::SimpleNPCEntity * this_ptr, app::ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F5C730, void, MoveOriToAnchor, (app::SimpleNPCEntity * this_ptr, app::Action_1_Boolean_ * on_finished));
IL2CPP_REGISTER_METHOD(0x00F5CAB0, void, EnableCameraZone, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5CC10, void, DisableCameraZone, (app::SimpleNPCEntity * this_ptr, bool imediate));
IL2CPP_REGISTER_METHOD(0x00F5CDD0, void, OnInteractionEffectivelyStart, (app::SimpleNPCEntity * this_ptr, bool arrived_to_destination));
IL2CPP_REGISTER_METHODINFO(0x047928F8, SimpleNPCEntity_OnInteractionEffectivelyStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F5CEB0, void, FinishInteraction, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5CFC0, void, InteractionUpdate, (app::SimpleNPCEntity * this_ptr, app::ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F5D190, void, OnInteractionEnd, (app::SimpleNPCEntity * this_ptr, app::ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F5D270, bool, ShouldFinishInteraction, (app::SimpleNPCEntity * this_ptr, app::ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00420EE0, CharacterInteractableActivationMode__Enum, get_ActivationMode, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5D440, Input_InputButtonProcessor *, get_ActivationButton, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, MessageProvider *, get_InteractionMessageHint, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_DialogActorName, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, MoonAnimator *, get_DialogActorAnimator, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5D4E0, Vector2, get_DialogActorPosition, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_InteractionActorName, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, MoonAnimator *, get_InteractionActorAnimator, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_InteractionActorPosition, (app::SimpleNPCEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F5D640, void, __ctor, (app::SimpleNPCEntity * this_ptr));
}
