#include <interception_macros.h>

namespace app::methods::NewSetupStateController {
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_GuidStr, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_TargetObject, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Component_1 *, get_TargetComponent, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B75AE0, bool, get_IsActive, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B75B00, void, OnBeforeSerialize, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B75BC0, void, OnAfterDeserialize, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B75C80, SetupState *, get_ActiveState, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B75F60, void, OnEnable, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76000, void, OnDisable, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B760A0, void, OnValidate, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76110, void, OnDestroy, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76180, void, Awake, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B761A0, void, Apply, (NewSetupStateController * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76200, void, EditorApply, (NewSetupStateController * __this, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x01B76210, void, ApplyKnownState, (NewSetupStateController * __this, int32_t stateGUID, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B764A0, String *, GetStateName, (NewSetupStateController * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x01B76620, SetupState *, GetStateAt, (NewSetupStateController * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01B766F0, Int32__Array *, GetAllStateGUIDs, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B768D0, bool, HasStateGUID, (NewSetupStateController * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x01B769D0, bool, get_IsPassiveStateDescriptorValid, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B769F0, int32_t, get_CurrentPassiveStateApplied, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76BA0, void, set_CurrentPassiveStateApplied, (NewSetupStateController * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B76C40, int32_t, get_FallbackPassiveState, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76CC0, IUberState__Array *, get_AffectingUberStates, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76E70, List_1_UnityEngine_GameObject_ *, get_AllTargets, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76E90, void, ApplyData, (NewSetupStateController * __this, SetupStateModifierData * modifierData, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B76F20, GameObject__Array *, GetDynamicGraphicTargets, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B76FE0, void, GetManagedEarlyZDynamicGraphicTargets, (NewSetupStateController * __this, List_1_UnityEngine_GameObject_ * targets));
IL2CPP_REGISTER_METHOD(0x01B77120, void, CollectDynamicGraphics, (NewSetupStateController * __this, List_1_UnityEngine_GameObject_ * * dynamicTargets, List_1_UnityEngine_GameObject_ * * managedEarlyZTargets));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_InvalidateParentTimelineCache, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_InvalidateParentTimelineCache, (NewSetupStateController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0050B250, void, InvalidateTimelineCache, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x01B777A0, void, OnPostTimeSlicedEnable, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ED550, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ECBB0, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ECD10, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ECE70, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ECFD0, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ED130, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ED290, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ED3F0, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ED6B0, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ED810, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018ED970, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018EDAD0, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018EDC30, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018EDD90, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018EDEF0, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018EE050, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
IL2CPP_REGISTER_METHOD(0x018EE1B0, IMoonTypeResolver *, GetResolverForType, (NewSetupStateController * __this));
}
