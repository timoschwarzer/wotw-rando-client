#include <interception_macros.h>

namespace app::methods::GhostWorldObjectsLifetimePlugin {
IL2CPP_REGISTER_METHOD(0x002FBB60, GlobalRecordingTable *, get_GlobalRecordingTable, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_GlobalRecordingTable, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::GlobalRecordingTable * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x007EC6D0, void, OnStartRecording, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::PreRecordingData * pre_recording_data));
IL2CPP_REGISTER_METHOD(0x007EC920, void, OnStopRecording, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostWorldObjectsLifetimePlugin * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x007ECC60, void, RecordCycle, (app::GhostWorldObjectsLifetimePlugin * this_ptr, int32_t frame));
IL2CPP_REGISTER_METHOD(0x007ECE50, void, RefreshObjects, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x007ECFD0, void, RegisterInstantiate, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::GameObject * instance, app::GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x007ED130, void, RecordInstantiate, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::GameObject * instance, app::GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x007EDA80, void, RegisterSceneRecordable, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::IRecordable * recordable));
IL2CPP_REGISTER_METHOD(0x007EDFA0, void, RecordDestruction, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x007EE510, void, RecordDestroy, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::RecordableIdData obj_i_d));
IL2CPP_REGISTER_METHOD(0x007EE6C0, void, RecordPosition, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x007EE9C0, void, RecordFinalPosition, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::Int64__Array * keys));
IL2CPP_REGISTER_METHOD(0x007EEC90, void, RecordPositionInternal, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * recordable_entry));
IL2CPP_REGISTER_METHOD(0x007EEDE0, void, RecordRotation, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x007EF0E0, void, RecordFinalRotation, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::Int64__Array * keys));
IL2CPP_REGISTER_METHOD(0x007EF3B0, void, RecordRotationInternal, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * recordable_entry));
IL2CPP_REGISTER_METHOD(0x007EF4F0, void, RecordScale, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x007EF7F0, void, RecordFinalScale, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::Int64__Array * keys));
IL2CPP_REGISTER_METHOD(0x007EFAC0, void, RecordScaleInternal, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * recordable_entry));
IL2CPP_REGISTER_METHOD(0x007EFC10, void, RecordActivation, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x007F01E0, void, RecordFinalActivation, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::Int64__Array * keys));
IL2CPP_REGISTER_METHOD(0x007F04B0, void, RecordActivationInternal, (app::GhostWorldObjectsLifetimePlugin * this_ptr, app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * data, app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * recordable_entry));
IL2CPP_REGISTER_METHOD(0x007F0630, void, __ctor, (app::GhostWorldObjectsLifetimePlugin * this_ptr));
}
