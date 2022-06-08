#include <interception_macros.h>

namespace app::methods::SnapTrapEntity {
IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_IsSuspended, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D6480, void, set_IsSuspended, (SnapTrapEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006D64E0, SoundHost *, get_SoundHost, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D64F0, SuspendableMask__Enum, get_Mask, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D6500, void, set_Mask, (SnapTrapEntity * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x006D6510, SnapTrapEntity_State__Enum, GetState, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D6520, void, Setup, (SnapTrapEntity * __this, SnapTrapEntity_SnapTrapParameters param, bool canFreeze, bool usesDetectionZone, Rect detectionRect, SerializedBooleanUberState * thawState, Vector2 placeholderScale));
IL2CPP_REGISTER_METHOD(0x006D6770, void, Awake, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, Start, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D6970, void, OnDestroy, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRestoreCheckpoint, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D6C30, void, OnEnable, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D6D00, void, FixedUpdate, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D7540, void, ForceCrushDetectorsOn, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04794A68, SnapTrapEntity_ForceCrushDetectorsOn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006D7700, void, HandleCrushDetectors, (SnapTrapEntity * __this, bool forceOpened));
IL2CPP_REGISTER_METHOD(0x006D7940, void, Suspend, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D7AA0, void, Resume, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D7BA0, void, Freeze, (SnapTrapEntity * __this, bool frozen, bool spawnEffect));
IL2CPP_REGISTER_METHOD(0x006D7FD0, void, ActivateTrap, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D81A0, void, InstantCatch, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D81B0, void, StartClose, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04701670, SnapTrapEntity_StartClose__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006D85F0, void, CheckTrap, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x047297F0, SnapTrapEntity_CheckTrap__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006D9400, void, Closed, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006D9850, void, DoDamage, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ABE8, SnapTrapEntity_DoDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006D9E90, void, ReactivateOri, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006DA310, void, DoneChewing, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006DA740, void, OpenedAfterCatch, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006DA920, void, OpenedAfterMiss, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006DAB00, void, PreapareAttachmentToPhysicsSystem, (SnapTrapEntity * __this, PhysicalSystemManager * manager, Rigidbody * attachToRigidbody, AttachJointSettings * jointSettings));
IL2CPP_REGISTER_METHOD(0x00417920, RecordableParsingGroup__Enum, get_ParsingGroup, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TrackTranformChangesForRecording, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006DADA0, TrackingExclusions, get_TrackingExclusions, (SnapTrapEntity * __this));
IL2CPP_REGISTER_METHOD(0x006DADB0, void, set_TrackingExclusions, (SnapTrapEntity * __this, TrackingExclusions value));
IL2CPP_REGISTER_METHOD(0x006DADC0, void, __ctor, (SnapTrapEntity * __this));
}
