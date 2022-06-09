#include <interception_macros.h>

namespace app::methods::GhostGenericEventsPlugin {
IL2CPP_REGISTER_METHOD(0x00E1B3E0, void, PlayCycle, (app::GhostGenericEventsPlugin * this_ptr, float frame_time));
IL2CPP_REGISTER_METHOD(0x00E1C5B0, GenericPuppet *, GetPuppet, (app::GhostGenericEventsPlugin * this_ptr, int32_t puppet_id, int32_t recording_id));
IL2CPP_REGISTER_METHOD(0x00E1C7F0, void, RecordEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t event_id, app::Object__Array * parameters));
IL2CPP_REGISTER_METHODINFO(0x047500B8, GhostGenericEventsPlugin_RecordEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E1CF00, void, RecordSetAnimationParamEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id, float value));
IL2CPP_REGISTER_METHOD(0x00E1D090, void, RecordAnimationMontageEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id));
IL2CPP_REGISTER_METHOD(0x00E1D1C0, void, RecordTimelineStartEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id));
IL2CPP_REGISTER_METHOD(0x00E1D2F0, void, RecordTimelineEndEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id));
IL2CPP_REGISTER_METHOD(0x00E1D420, void, RecordAnimationStartEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id, int32_t array_index, int32_t priority, float speed));
IL2CPP_REGISTER_METHOD(0x00E1D610, void, RecordAnimationEndEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id, int32_t array_index));
IL2CPP_REGISTER_METHOD(0x00E1D7A0, void, RecordSoundEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id, int32_t array_index, int32_t player_id, bool attach, float volume));
IL2CPP_REGISTER_METHOD(0x00E1D9C0, void, RecordInstantiate, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id, app::Vector3 position, app::Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x00E1DC80, void, RecordFadeOutSoundEvent, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t player_id, float time));
IL2CPP_REGISTER_METHOD(0x00E1DE40, void, RecordLocalTransform, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id, app::Transform * transform));
IL2CPP_REGISTER_METHOD(0x00E1E4B0, void, RecordTransform, (app::GhostGenericEventsPlugin * this_ptr, app::GenericPuppet * generic_puppet, int32_t resource_id, app::Transform * transform));
IL2CPP_REGISTER_METHOD(0x00E1EBB0, void, RecordScenarioAnimatingParticleSystem, (app::GhostGenericEventsPlugin * this_ptr, app::ScenariosParticleSystemPlugin_TrackingID * tracking_i_d, app::ParticleSystem * particle_system));
IL2CPP_REGISTER_METHOD(0x00E1ED60, void, RecordBeginInteraction, (app::GhostGenericEventsPlugin * this_ptr, app::RecordableObjectPuppet * recordable_object_puppet));
IL2CPP_REGISTER_METHOD(0x00E1EED0, void, RecordEndInteraction, (app::GhostGenericEventsPlugin * this_ptr, app::RecordableObjectPuppet * recordable_object_puppet));
IL2CPP_REGISTER_METHOD(0x00E1F100, void, RecordGenericInstantiate, (app::GhostGenericEventsPlugin * this_ptr, app::String * asset_guid, app::Vector3 position, app::Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x00E1F3D0, void, RegisterSetter, (app::GhostGenericEventsPlugin * this_ptr, app::CharacterStatePuppet * puppet, app::PropertyInfo_1 * prop));
IL2CPP_REGISTER_METHODINFO(0x0470BE50, GhostGenericEventsPlugin_RegisterSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (app::GhostGenericEventsPlugin * this_ptr, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00417920, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostGenericEventsPlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E1F740, void, ResetLocalState, (app::GhostGenericEventsPlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E1F830, void, __ctor, (app::GhostGenericEventsPlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x01548A80, void, RecordValue, (app::GhostGenericEventsPlugin * this_ptr, app::CharacterStatePuppet * character_state_puppet, int32_t property_id, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x047354D8, GhostGenericEventsPlugin_RecordValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015494A0, void, RegisterSetterEntry_1, (app::GhostGenericEventsPlugin * this_ptr, app::CharacterStatePuppet * puppet, int32_t property_id, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__3 * dictionary, app::MethodInfo_1 * set_method));
IL2CPP_REGISTER_METHOD(0x015488A0, void, ActivateSetterEntry_1, (app::GhostGenericEventsPlugin * this_ptr, int32_t puppet_id, int32_t property_id, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__3 * dictionary, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01548990, void, ActivateSetterEntry_2, (app::GhostGenericEventsPlugin * this_ptr, int32_t puppet_id, int32_t property_id, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * dictionary, float value));
IL2CPP_REGISTER_METHODINFO(0x04743B58, GhostGenericEventsPlugin_ActivateSetterEntry_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015487B0, void, ActivateSetterEntry_3, (app::GhostGenericEventsPlugin * this_ptr, int32_t puppet_id, int32_t property_id, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * dictionary, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047692F8, GhostGenericEventsPlugin_ActivateSetterEntry_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015486C0, void, ActivateSetterEntry_4, (app::GhostGenericEventsPlugin * this_ptr, int32_t puppet_id, int32_t property_id, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * dictionary, bool value));
IL2CPP_REGISTER_METHODINFO(0x04790BF8, GhostGenericEventsPlugin_ActivateSetterEntry_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01549800, void, RegisterSetterEntry_2, (app::GhostGenericEventsPlugin * this_ptr, app::CharacterStatePuppet * puppet, int32_t property_id, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * dictionary, app::MethodInfo_1 * set_method));
IL2CPP_REGISTER_METHODINFO(0x04712208, GhostGenericEventsPlugin_RegisterSetterEntry_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01549140, void, RegisterSetterEntry_3, (app::GhostGenericEventsPlugin * this_ptr, app::CharacterStatePuppet * puppet, int32_t property_id, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * dictionary, app::MethodInfo_1 * set_method));
IL2CPP_REGISTER_METHODINFO(0x0473BB00, GhostGenericEventsPlugin_RegisterSetterEntry_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01548DE0, void, RegisterSetterEntry_4, (app::GhostGenericEventsPlugin * this_ptr, app::CharacterStatePuppet * puppet, int32_t property_id, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * dictionary, app::MethodInfo_1 * set_method));
IL2CPP_REGISTER_METHODINFO(0x04788C08, GhostGenericEventsPlugin_RegisterSetterEntry_3__MethodInfo);
}
